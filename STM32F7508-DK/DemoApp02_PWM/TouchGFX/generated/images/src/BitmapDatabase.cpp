// 4.20.0 0xda5fe6de
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_slider_horizontal_medium_indicators_slider_round_nob[]; // BITMAP_BLUE_SLIDER_HORIZONTAL_MEDIUM_INDICATORS_SLIDER_ROUND_NOB_ID = 0, Size: 48x48 pixels
extern const unsigned char image_blue_slider_horizontal_medium_slider_round_back[]; // BITMAP_BLUE_SLIDER_HORIZONTAL_MEDIUM_SLIDER_ROUND_BACK_ID = 1, Size: 352x15 pixels
extern const unsigned char image_blue_slider_horizontal_medium_slider_round_fill[]; // BITMAP_BLUE_SLIDER_HORIZONTAL_MEDIUM_SLIDER_ROUND_FILL_ID = 2, Size: 352x15 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_blue_slider_horizontal_medium_indicators_slider_round_nob, 0, 48, 48, 9, 7, 30, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 32, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_slider_horizontal_medium_slider_round_back, 0, 352, 15, 7, 1, 338, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 12, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_slider_horizontal_medium_slider_round_fill, 0, 352, 15, 7, 0, 338, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 14, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
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
