// 4.20.0 0xe3f73c35
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_buttons_round_edge_small[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID = 0, Size: 170x60 pixels
extern const unsigned char image_blue_buttons_round_edge_small_pressed[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID = 1, Size: 170x60 pixels
extern const unsigned char image_blue_buttons_round_icon_button[]; // BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID = 2, Size: 60x60 pixels
extern const unsigned char image_blue_buttons_round_icon_button_pressed[]; // BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID = 3, Size: 60x60 pixels
extern const unsigned char image_blue_togglebars_toggle_round_small_button_off[]; // BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_SMALL_BUTTON_OFF_ID = 4, Size: 96x38 pixels
extern const unsigned char image_blue_togglebars_toggle_round_small_button_on[]; // BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_SMALL_BUTTON_ON_ID = 5, Size: 96x38 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_blue_buttons_round_edge_small, 0, 170, 60, 11, 4, 148, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_edge_small_pressed, 0, 170, 60, 11, 4, 148, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_icon_button, 0, 60, 60, 13, 11, 34, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_icon_button_pressed, 0, 60, 60, 13, 11, 34, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_togglebars_toggle_round_small_button_off, 0, 96, 38, 13, 1, 70, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_togglebars_toggle_round_small_button_on, 0, 96, 38, 13, 1, 70, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
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
