// 4.20.0 0x6fed685d
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_slider_horizontal_small_indicators_slider_horizontal_small_round_knob[]; // BITMAP_BLUE_SLIDER_HORIZONTAL_SMALL_INDICATORS_SLIDER_HORIZONTAL_SMALL_ROUND_KNOB_ID = 0, Size: 54x34 pixels
extern const unsigned char image_blue_slider_horizontal_small_slider_horizontal_small_round_back[]; // BITMAP_BLUE_SLIDER_HORIZONTAL_SMALL_SLIDER_HORIZONTAL_SMALL_ROUND_BACK_ID = 1, Size: 172x20 pixels
extern const unsigned char image_blue_slider_horizontal_small_slider_horizontal_small_round_fill[]; // BITMAP_BLUE_SLIDER_HORIZONTAL_SMALL_SLIDER_HORIZONTAL_SMALL_ROUND_FILL_ID = 2, Size: 172x20 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_blue_slider_horizontal_small_indicators_slider_horizontal_small_round_knob, 0, 54, 34, 8, 4, 38, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 24, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_slider_horizontal_small_slider_horizontal_small_round_back, 0, 172, 20, 10, 0, 152, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 20, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_slider_horizontal_small_slider_horizontal_small_round_fill, 0, 172, 20, 10, 0, 152, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 20, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
