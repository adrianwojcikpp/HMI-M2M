#ifndef TESTSCREENPRESENTER_HPP
#define TESTSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class TestScreenView;

class TestScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    TestScreenPresenter(TestScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~TestScreenPresenter() {};

private:
    TestScreenPresenter();

    TestScreenView& view;
};

#endif // TESTSCREENPRESENTER_HPP
