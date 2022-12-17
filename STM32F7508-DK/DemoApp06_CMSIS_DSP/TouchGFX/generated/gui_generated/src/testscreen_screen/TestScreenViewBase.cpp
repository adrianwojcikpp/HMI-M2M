/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/testscreen_screen/TestScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>


TestScreenViewBase::TestScreenViewBase() :
    sliderValueChangedCallback(this, &TestScreenViewBase::sliderValueChangedCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    background.setPosition(0, 0, 480, 272);
    background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    sliderx.setXY(5, 226);
    sliderx.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_SLIDER_HORIZONTAL_SMALL_SLIDER_HORIZONTAL_SMALL_ROUND_FILL_ID), touchgfx::Bitmap(BITMAP_BLUE_SLIDER_HORIZONTAL_SMALL_SLIDER_HORIZONTAL_SMALL_ROUND_BACK_ID), touchgfx::Bitmap(BITMAP_BLUE_SLIDER_HORIZONTAL_SMALL_INDICATORS_SLIDER_HORIZONTAL_SMALL_ROUND_KNOB_ID));
    sliderx.setupHorizontalSlider(3, 7, 0, 0, 125);
    sliderx.setValueRange(0, 100);
    sliderx.setValue(100);
    sliderx.setNewValueCallback(sliderValueChangedCallback);

    labelx.setXY(16, 210);
    labelx.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    labelx.setLinespacing(0);
    Unicode::snprintf(labelxBuffer, LABELX_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_U61R).getText());
    labelx.setWildcard(labelxBuffer);
    labelx.resizeToCurrentText();
    labelx.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DHE6));

    slidery.setXY(294, 226);
    slidery.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_SLIDER_HORIZONTAL_SMALL_SLIDER_HORIZONTAL_SMALL_ROUND_FILL_ID), touchgfx::Bitmap(BITMAP_BLUE_SLIDER_HORIZONTAL_SMALL_SLIDER_HORIZONTAL_SMALL_ROUND_BACK_ID), touchgfx::Bitmap(BITMAP_BLUE_SLIDER_HORIZONTAL_SMALL_INDICATORS_SLIDER_HORIZONTAL_SMALL_ROUND_KNOB_ID));
    slidery.setupHorizontalSlider(3, 7, 0, 0, 125);
    slidery.setValueRange(0, 100);
    slidery.setValue(100);
    slidery.setNewValueCallback(sliderValueChangedCallback);

    labely.setXY(305, 211);
    labely.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    labely.setLinespacing(0);
    Unicode::snprintf(labelyBuffer, LABELY_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_LA4K).getText());
    labely.setWildcard(labelyBuffer);
    labely.resizeToCurrentText();
    labely.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0Z5V));

    backgroundtriangle.setPosition(0, 0, 480, 210);
    backgroundtriangle.setOrigin(5.0f, 5.0f);
    backgroundtriangle.setScale(470.0f, 200.0f);
    backgroundtriangle.setAngle(0.0f);
    backgroundtrianglePainter.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    backgroundtriangle.setPainter(backgroundtrianglePainter);
    const touchgfx::AbstractShape::ShapePoint<float> backgroundtrianglePoints[3] = { { 1.0f, 0.0f }, { 0.0f, 0.0f }, { 1.0f, 1.0f } };
    backgroundtriangle.setShape(backgroundtrianglePoints);

    triangle.setPosition(0, 0, 480, 210);
    triangle.setOrigin(5.0f, 5.0f);
    triangle.setScale(470.0f, 200.0f);
    triangle.setAngle(0.0f);
    trianglePainter.setColor(touchgfx::Color::getColorFromRGB(0, 105, 142));
    triangle.setPainter(trianglePainter);
    const touchgfx::AbstractShape::ShapePoint<float> trianglePoints[3] = { { 0.0f, 0.0f }, { 0.0f, 1.0f }, { 1.0f, 1.0f } };
    triangle.setShape(trianglePoints);

    hypotneuselengthlabel.setXY(240, 80);
    hypotneuselengthlabel.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    hypotneuselengthlabel.setLinespacing(0);
    hypotneuselengthlabel.setTypedText(touchgfx::TypedText(T___SINGLEUSE_O2BO));

    hypotneuselength.setXY(240, 105);
    hypotneuselength.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    hypotneuselength.setLinespacing(0);
    Unicode::snprintf(hypotneuselengthBuffer, HYPOTNEUSELENGTH_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_Z1P3).getText());
    hypotneuselength.setWildcard(hypotneuselengthBuffer);
    hypotneuselength.resizeToCurrentText();
    hypotneuselength.setTypedText(touchgfx::TypedText(T___SINGLEUSE_H8YC));

    mainlabel.setXY(27, 8);
    mainlabel.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    mainlabel.setLinespacing(0);
    mainlabel.setTypedText(touchgfx::TypedText(T___SINGLEUSE_B6CM));

    add(__background);
    add(background);
    add(sliderx);
    add(labelx);
    add(slidery);
    add(labely);
    add(backgroundtriangle);
    add(triangle);
    add(hypotneuselengthlabel);
    add(hypotneuselength);
    add(mainlabel);
}

void TestScreenViewBase::setupScreen()
{

}

void TestScreenViewBase::sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &sliderx)
    {
        //changex
        //When sliderx value changed execute C++ code
        //Execute C++ code
        triangle.setCorner(2, CWRUtil::toQ5<float>(value/100.f), CWRUtil::toQ5<int>(1));
        triangle.updateAbstractShapeCache();
        triangle.invalidate();
        
        backgroundtriangle.setCorner(2, CWRUtil::toQ5<float>(value/100.f), CWRUtil::toQ5<int>(1));
        backgroundtriangle.updateAbstractShapeCache();
        backgroundtriangle.invalidate();
        
        float a = 200.0f * (1.0 - triangle.getCornerY(0).to<float>());
        float b = 470.0f * triangle.getCornerX(2).to<float>(); 
        
          /* C++ standard complex arithmetic */
          std::complex<float> ab(a, b);
          float c = abs(ab);
        
        Unicode::snprintf(labelxBuffer, LABELX_SIZE, "%d", (int)b);
        labelx.invalidate();
        
        int c_disp = c * 100;
        Unicode::snprintf(hypotneuselengthBuffer, HYPOTNEUSELENGTH_SIZE, "%d.%02d", c_disp/100, c_disp%100);
        
        int16_t hyplen_x = 240 * (value/100.f);
        int16_t hyplen_y = hypotneuselength.getY();
        
        hypotneuselength.moveTo(hyplen_x, hyplen_y);
        hypotneuselength.invalidate();
        
        hypotneuselengthlabel.moveTo(hyplen_x, hyplen_y - 25);
        hypotneuselengthlabel.invalidate();
    }
    else if (&src == &slidery)
    {
        //changey
        //When slidery value changed execute C++ code
        //Execute C++ code
        triangle.setCorner(0, CWRUtil::toQ5<int>(0), CWRUtil::toQ5<float>(1.0f - value/100.f));
        triangle.updateAbstractShapeCache();
        triangle.invalidate();
        
        backgroundtriangle.setCorner(1, CWRUtil::toQ5<int>(0), CWRUtil::toQ5<float>(1.0f - value/100.f));
        backgroundtriangle.updateAbstractShapeCache();
        backgroundtriangle.invalidate();
        
        float a = 200.0f * (1.0 - triangle.getCornerY(0).to<float>());
        float b = 470.0f * triangle.getCornerX(2).to<float>();
        
          /* CMSIS DSP complex arithmetic */
          float ab[] = {a,b};
          float c;
          arm_cmplx_mag_f32(ab, &c, 1);
        
        Unicode::snprintf(labelyBuffer, LABELY_SIZE, "%d", (int)a);
        labely.invalidate();
        
        int c_disp = c * 100;
        Unicode::snprintf(hypotneuselengthBuffer, HYPOTNEUSELENGTH_SIZE, "%d.%02d", c_disp/100, c_disp%100);
        
        int16_t hyplen_y = 80 * (2.0f - value/100.f) + 25;
        int16_t hyplen_x = hypotneuselength.getX();
        
        hypotneuselength.moveTo(hyplen_x, hyplen_y);
        hypotneuselength.invalidate();
        
        hypotneuselengthlabel.moveTo(hyplen_x, hyplen_y - 25);
        hypotneuselengthlabel.invalidate();
    }
}