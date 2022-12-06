#ifndef TIMESTAMPSCREENVIEW_HPP
#define TIMESTAMPSCREENVIEW_HPP

#include <gui_generated/timestampscreen_screen/TimeStampScreenViewBase.hpp>
#include <gui/timestampscreen_screen/TimeStampScreenPresenter.hpp>

class TimeStampScreenView : public TimeStampScreenViewBase
{
public:
    TimeStampScreenView();
    virtual ~TimeStampScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TIMESTAMPSCREENVIEW_HPP
