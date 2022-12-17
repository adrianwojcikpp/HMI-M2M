#ifndef TESTSCREENVIEW_HPP
#define TESTSCREENVIEW_HPP

#include <gui_generated/testscreen_screen/TestScreenViewBase.hpp>
#include <gui/testscreen_screen/TestScreenPresenter.hpp>

class TestScreenView : public TestScreenViewBase
{
public:
    TestScreenView();
    virtual ~TestScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TESTSCREENVIEW_HPP
