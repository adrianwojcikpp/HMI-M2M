#ifndef TIMESTAMPSCREENPRESENTER_HPP
#define TIMESTAMPSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class TimeStampScreenView;

class TimeStampScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    TimeStampScreenPresenter(TimeStampScreenView& v);

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

    virtual ~TimeStampScreenPresenter() {};

private:
    TimeStampScreenPresenter();

    TimeStampScreenView& view;
};

#endif // TIMESTAMPSCREENPRESENTER_HPP
