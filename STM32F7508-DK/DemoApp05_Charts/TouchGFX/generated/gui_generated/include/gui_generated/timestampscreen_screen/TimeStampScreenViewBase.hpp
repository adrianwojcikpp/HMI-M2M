/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef TIMESTAMPSCREENVIEWBASE_HPP
#define TIMESTAMPSCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/timestampscreen_screen/TimeStampScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include "stm32f7xx_hal.h"
extern TIM_HandleTypeDef htim2;

class TimeStampScreenViewBase : public touchgfx::View<TimeStampScreenPresenter>
{
public:
    TimeStampScreenViewBase();
    virtual ~TimeStampScreenViewBase() {}
    virtual void setupScreen();
    virtual void handleTickEvent();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box background;
    touchgfx::TextArea label;
    touchgfx::TextAreaWithOneWildcard timestamp;
    touchgfx::TextArea unit;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TIMESTAMP_SIZE = 32;
    touchgfx::Unicode::UnicodeChar timestampBuffer[TIMESTAMP_SIZE];

private:

};

#endif // TIMESTAMPSCREENVIEWBASE_HPP