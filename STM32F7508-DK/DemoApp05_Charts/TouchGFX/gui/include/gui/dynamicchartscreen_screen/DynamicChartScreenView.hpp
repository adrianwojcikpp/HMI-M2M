#ifndef DYNAMICCHARTSCREENVIEW_HPP
#define DYNAMICCHARTSCREENVIEW_HPP

#include <gui_generated/dynamicchartscreen_screen/DynamicChartScreenViewBase.hpp>
#include <gui/dynamicchartscreen_screen/DynamicChartScreenPresenter.hpp>

class DynamicChartScreenView : public DynamicChartScreenViewBase
{
public:
    DynamicChartScreenView();
    virtual ~DynamicChartScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // DYNAMICCHARTSCREENVIEW_HPP
