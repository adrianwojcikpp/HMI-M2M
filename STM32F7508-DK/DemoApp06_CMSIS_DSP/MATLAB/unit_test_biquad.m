%% L06 CMSIS DSP 
%%% File info 
%
% *************************************************************************
%
%  @file     unit_test_biquad.m
%  @author   Adrian Wojcik
%  @version  1.0
%  @date     17-Dec-2019 10:33:27
%  @brief    Simple IIR filter unity test
%
% *************************************************************************
%
close all; clc;
clear all;

%% TEST SIGNAL
% sample time & freq
ts = 0.001; % [s]
fs = 1/ts;  % [Hz]

% test time
tmax = 1;   % [s]

% time vector
tvec = 0 : ts : tmax-ts;

% sample vector
nvec = 0 : length(tvec)-1;

% test signal - square wave
T = 0.1; % [s] signal period
xvec = single(zeros(size(tvec)));
for i = nvec+1
    if mod(i*ts,T) < T/2
       xvec(i) = 3.3;
    else
       xvec(i) = 0.0; 
    end%if
end%for

% test signal amplitude spectrum
% frequency vector
frange = (-1/2 : 1/length(nvec) : 1/2-1/length(nvec)); % [-]
fxvec = frange*fs;                               % [Hz]
% amplitude response
Axvec = abs(fftshift(fft(xvec,length(nvec)))); % [-]
Axvec = Axvec / length(nvec);

%% FILTER EXAMPLE 

% -- S-OPERATOR -----------------------------------------------------------
s = tf('s');

% -- FILTER PARAMS --------------------------------------------------------
f = 10.0;  % [Hz]
w = 2*pi*f; % [rad/s]
e = 0.7;    % [-]

% -- CONTINUOUS TRANSFER FUNCTION -----------------------------------------
G = 1 / ((1 + 2*e*s/w + s^2 / w^2));

% -- DISCRETIZATION -------------------------------------------------------
%[b,a] = cheby1(N,R,Wp,'low');
H = c2d(G,ts, 'zoh');

% -- FILTER RESPONSE COMPUTING --------------------------------------------
%xfvec_v1 = filter(b,a,xvec);
xfvec_v1 = lsim(H,xvec,tvec)';

% Filter frequency response
% no. of samples
n = 10^4; % [-]
% frequency vector
frange = (-1/2 : 1/n : 1/2-1/n); % [-]
fhvec = frange*fs;               % [Hz]
% amplitude response
%Ahvec_v1 = abs(freqz(b,a, 2*pi*frange)); % [-] frequency response
Ahvec_v1 = abs(freqz(H.num{1},H.den{1}, 2*pi*frange)); % [-] frequency response
Ahvec_v1 = 20*log10(Ahvec_v1); % [dB]

%% EXPORT FILTER TO .C/.H FILES
biquad_coeffs = tf2dsp_biquad_df1('myFilter', H.num{1}, H.den{1});

%% FOR-LOOP REFERENCE FILTER RESPONSE COMPUTING

% EXPLICIT FORM
b0 = biquad_coeffs{1}(1);
b1 = biquad_coeffs{1}(2);
b2 = biquad_coeffs{1}(3);
a1 = biquad_coeffs{1}(4);
a2 = biquad_coeffs{1}(5);

x = xvec;
y = single(zeros(size(xfvec_v1)));

y(1) = b0 * x(1);                                        % n = 1
y(2) = b0 * x(2) + b1 * x(1) + a1 * y(1);                % n = 2
for n = 3 : length(tvec)    
    y(n) = b0 * x(n) + b1 * x(n-1) + b2 * x(n-2) + ...   % n >= 3
                     + a1 * y(n-1) + a2 * y(n-2);
end

xfvec_v2 = y;

% method selection 
xfvec = xfvec_v1;  % lsim / filter
%xfvec = xfvec_v1; % explicit loop

% filtered signal amplitude spectrum
% amplitude response
Axfvec = abs(fftshift(fft(xfvec,length(nvec)))); % [-]
Axfvec = Axfvec / length(nvec);

%% Plot results
fminmax = [-10 fs/2];
tminmax = [0 tmax];
Aminmax = [-0.1 3.5];
AdBminmax = [-120 5];

subplot(2,2,1)
  plot(nvec/fs, xvec, 'b'); grid on;
  xlabel("Time [s]");
  ylabel("Amplitude [-]");
  axis([tminmax Aminmax]);
  title('Orginal test signal time series');
  hold off;
subplot(2,2,2)
  ax = plotyy(fxvec, Axvec, ...
              fhvec, Ahvec_v1, ...
              @plot, @plot); hold on; grid on;
  xlabel("Frequency [Hz]");
  ylabel(ax(1), "Amplitude spectrum [-]");
  ylabel(ax(2), "Amplitude response [dB]"); 
  %plot([f1 f1], AdBminmax, 'k--');
  %plot([f2 f2], AdBminmax, 'k--'); 
  set(ax(1),'YLim', [0 0.51*3.3], 'XLim', fminmax);
  set(ax(2),'YLim', AdBminmax, 'XLim', fminmax);
  set(ax(2),'XTick',[], 'xcolor',[1 1 1]);
  title('Original test signal ampltitude spectrum');
  hold off;
subplot(2,2,3)
  plot(nvec/fs, xfvec, 'b'); grid on; hold on;
  xlabel("Time [s]");
  ylabel("Amplitude [-]");
  axis([tminmax Aminmax]);
  title('Filtered test signal time series');
  hold off;
subplot(2,2,4)
  ax = plotyy(fxvec, Axfvec, ...
              fhvec, Ahvec_v1, ...
              @plot, @plot); hold on; grid on;
  xlabel("Frequency [Hz]");
  ylabel(ax(1), "Amplitude spectrum [-]");
  ylabel(ax(2), "Amplitude response [dB]"); 
  %plot([f1 f1], AdBminmax, 'k--');
  %plot([f2 f2], AdBminmax, 'k--'); 
  set(ax(1),'YLim', [0 0.51*3.3], 'XLim', fminmax);
  set(ax(2),'YLim', AdBminmax, 'XLim', fminmax);
  set(ax(2),'XTick',[], 'xcolor',[1 1 1]);
  title('Filtered test signal ampltitude spectrum');
  hold off;

%% SAVE TEST DATA TO .CSV
vec2csvfile('input_signal.csv', xvec);
vec2csvfile('reference_output_signal.csv', xfvec);