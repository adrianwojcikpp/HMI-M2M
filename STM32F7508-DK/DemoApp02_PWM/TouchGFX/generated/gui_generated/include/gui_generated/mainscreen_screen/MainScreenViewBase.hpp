/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINSCREENVIEWBASE_HPP
#define MAINSCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/Slider.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include "stm32f7xx_hal.h"
extern TIM_HandleTypeDef htim12;

class MainScreenViewBase : public touchgfx::View<MainScreenPresenter>
{
public:
    MainScreenViewBase();
    virtual ~MainScreenViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box background;
    touchgfx::Slider pwmSlider;
    touchgfx::TextAreaWithOneWildcard pwmValue;
    touchgfx::TextArea pwmUnit;
    touchgfx::TextArea pwmLabel;

    /*
     * Wildcard Buffers
     */
    static const uint16_t PWMVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar pwmValueBuffer[PWMVALUE_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<MainScreenViewBase, const touchgfx::Slider&, int> sliderValueChangedCallback;

    /*
     * Callback Handler Declarations
     */
    void sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value);

};

#endif // MAINSCREENVIEWBASE_HPP
