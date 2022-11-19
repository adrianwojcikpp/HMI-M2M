/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN3VIEWBASE_HPP
#define SCREEN3VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen3_screen/Screen3Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/graph/GraphScroll.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/graph/GraphLabels.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include "main.h"
#include <stdlib.h>
float LightReadout(void);

class Screen3ViewBase : public touchgfx::View<Screen3Presenter>
{
public:
    Screen3ViewBase();
    virtual ~Screen3ViewBase() {}
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
    touchgfx::Box box1;
    touchgfx::Button btn3;
    touchgfx::GraphScroll<100> dynamicGraph1;
    touchgfx::GraphElementLine dynamicGraph1Line1;
    touchgfx::PainterRGB565 dynamicGraph1Line1Painter;
    touchgfx::GraphElementGridX dynamicGraph1MajorXAxisGrid;
    touchgfx::GraphElementGridY dynamicGraph1MajorYAxisGrid;
    touchgfx::GraphLabelsX dynamicGraph1MajorXAxisLabel;
    touchgfx::GraphLabelsY dynamicGraph1MajorYAxisLabel;
    touchgfx::ToggleButton toggleButton1;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea2;

private:

    /*
     * Tick Counter Declarations
     */
    static const uint32_t TICK_UPDATEPLOT_INTERVAL = 10;
    uint32_t frameCountUpdatePlotInterval;

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen3ViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // SCREEN3VIEWBASE_HPP