#ifndef STATICCHARTSCREENVIEW_HPP
#define STATICCHARTSCREENVIEW_HPP

#include <gui_generated/staticchartscreen_screen/StaticChartScreenViewBase.hpp>
#include <gui/staticchartscreen_screen/StaticChartScreenPresenter.hpp>

class StaticChartScreenView : public StaticChartScreenViewBase
{
public:
    StaticChartScreenView();
    virtual ~StaticChartScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // STATICCHARTSCREENVIEW_HPP
