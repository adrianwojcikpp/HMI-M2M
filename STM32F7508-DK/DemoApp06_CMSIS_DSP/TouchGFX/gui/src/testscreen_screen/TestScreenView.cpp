#include <gui/testscreen_screen/TestScreenView.hpp>
#include <complex>
#include "arm_math.h"

TestScreenView::TestScreenView()
{

}

void TestScreenView::setupScreen()
{
    TestScreenViewBase::setupScreen();
}

void TestScreenView::tearDownScreen()
{
    TestScreenViewBase::tearDownScreen();
}

void TestScreenView::updateHeight(int value)
{
	int a_max = slidery.getMaxValue();

	triangle.setCorner(0, CWRUtil::toQ5<int>(0), CWRUtil::toQ5<int>(a_max - value));
	triangle.updateAbstractShapeCache();
	triangle.invalidate();

	backgroundtriangle.setCorner(1, CWRUtil::toQ5<int>(0), CWRUtil::toQ5<int>(a_max - value));
	backgroundtriangle.updateAbstractShapeCache();
	backgroundtriangle.invalidate();

	float a = static_cast<float>(value);
	float b = triangle.getCornerX(2).to<float>();

		/* CMSIS DSP complex arithmetic */
		float ab[] = {a,b};
		float c;
		arm_cmplx_mag_f32(ab, &c, 1);

	Unicode::snprintf(labelyBuffer, LABELY_SIZE, "%d", (int)a);
	Unicode::snprintfFloat(hypotneuselengthBuffer, HYPOTNEUSELENGTH_SIZE, "%6.3f", c);
	labely.invalidate();

	int16_t hyplen_y = (a_max/2 - 20) * (2 - a/a_max);
	int16_t hyplen_x = hypotneuselength.getX();

	hypotneuselengthlabel.moveTo(hyplen_x, hyplen_y);
	hypotneuselengthlabel.invalidate();

	hypotneuselength.moveTo(hyplen_x, hyplen_y + 25);
	hypotneuselength.invalidate();
}

void TestScreenView::updateWidth(int value)
{
	int a_max = slidery.getMaxValue();
	int b_max = sliderx.getMaxValue();

	triangle.setCorner(2, CWRUtil::toQ5<int>(value), CWRUtil::toQ5<int>(a_max));
	triangle.updateAbstractShapeCache();
	triangle.invalidate();

	backgroundtriangle.setCorner(2, CWRUtil::toQ5<int>(value), CWRUtil::toQ5<int>(a_max));
	backgroundtriangle.updateAbstractShapeCache();
	backgroundtriangle.invalidate();

	float a = a_max - triangle.getCornerY(0).to<float>();
	float b = triangle.getCornerX(2).to<float>();

		/* C++ standard complex arithmetic */
		std::complex<float> ab(a, b);
		float c = abs(ab);

	Unicode::snprintf(labelxBuffer, LABELX_SIZE, "%d", (int)b);
	Unicode::snprintfFloat(hypotneuselengthBuffer, HYPOTNEUSELENGTH_SIZE, "%6.3f", c);
	labelx.invalidate();

	int16_t hyplen_x = (this->getScreenWidth()/2) * (b/b_max);
	int16_t hyplen_y = hypotneuselength.getY();

	hypotneuselengthlabel.moveTo(hyplen_x, hyplen_y - 25);
	hypotneuselengthlabel.invalidate();

	hypotneuselength.moveTo(hyplen_x, hyplen_y);
	hypotneuselength.invalidate();
}
