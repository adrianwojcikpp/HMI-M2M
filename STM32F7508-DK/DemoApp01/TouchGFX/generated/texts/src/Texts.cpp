/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <stdarg.h>
#include <touchgfx/TextProvider.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/TypedText.hpp>
#include <touchgfx/Unicode.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <texts/TypedTextDatabase.hpp>

uint16_t touchgfx::Font::getStringWidth(const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(TEXT_DIRECTION_LTR, text, pArg);
    va_end(pArg);
    return width;
}

uint16_t touchgfx::Font::getStringWidth(touchgfx::TextDirection textDirection, const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(textDirection, text, pArg);
    va_end(pArg);
    return width;
}

touchgfx::Unicode::UnicodeChar touchgfx::TextProvider::getNextLigature(TextDirection direction)
{
    if (fontGsubTable && nextCharacters.peekChar())
    {
        substituteGlyphs();
        if (nextCharacters.peekChar(1) == 0x093F) // Hindi I-matra
        {
            nextCharacters.replaceAt1(nextCharacters.peekChar());
            nextCharacters.replaceAt0(0x093F);
        }
    }
    return getNextChar();
}

void touchgfx::TextProvider::initializeInternal()
{
    fillInputBuffer();
}

void touchgfx::LCD::drawString(touchgfx::Rect widgetArea, const touchgfx::Rect& invalidatedArea, const touchgfx::LCD::StringVisuals& stringVisuals, const touchgfx::Unicode::UnicodeChar* format, ...)
{
    va_list pArg;
    va_start(pArg, format);
    drawStringLTR(widgetArea, invalidatedArea, stringVisuals, format, pArg);
    va_end(pArg);
}

// Default TypedTextDatabase
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUTE = {
    0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x52, 0x53, 0x54, 0x55, 0x57, 0x58, 0x59, 0x5a, 0x0, // @0 "ABCDEFGHIJKLMNOPRSTUWXYZ"
    0x42, 0x48, 0x31, 0x37, 0x35, 0x30, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x20, 0x73, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x20, 0x5b, 0x6c, 0x78, 0x5d, 0x0, // @25 "BH1750 light sensor [lx]"
    0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x72, 0x73, 0x74, 0x75, 0x77, 0x78, 0x79, 0x7a, 0x0, // @50 "abcdefghijklmnoprstuwxyz"
    0x53, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x20, 0x50, 0x6f, 0x72, 0x74, 0x20, 0x6d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x0, // @75 "Serial Port message"
    0x42, 0x6c, 0x75, 0x65, 0x20, 0x4c, 0x45, 0x44, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x0, // @95 "Blue LED Toggle"
    0x45, 0x6e, 0x63, 0x6f, 0x64, 0x65, 0x72, 0x20, 0x63, 0x6f, 0x75, 0x6e, 0x74, 0x65, 0x72, 0x0, // @111 "Encoder counter"
    0x53, 0x65, 0x6e, 0x64, 0x20, 0x22, 0x48, 0x45, 0x4c, 0x4c, 0x4f, 0x22, 0x0, // @127 "Send "HELLO""
    0x4e, 0x4f, 0x54, 0x20, 0x50, 0x52, 0x45, 0x53, 0x53, 0x45, 0x44, 0x0, // @140 "NOT PRESSED"
    0x50, 0x75, 0x73, 0x68, 0x2d, 0x62, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x0, // @152 "Push-button"
    0x52, 0x61, 0x6e, 0x64, 0x6f, 0x6d, 0x20, 0x64, 0x61, 0x74, 0x61, 0x0, // @164 "Random data"
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x0, // @176 "0123456789"
    0x3f, 0x21, 0x3d, 0x2b, 0x2d, 0x5f, 0x2e, 0x2c, 0x3b, 0x3a, 0x0, // @187 "?!=+-_.,;:"
    0x2, 0x0, // @198 "<>"
    0x4f, 0x55, 0x54, 0x50, 0x55, 0x54, 0x53, 0x0, // @200 "OUTPUTS"
    0x49, 0x4e, 0x50, 0x55, 0x54, 0x53, 0x0, // @208 "INPUTS"
    0x30, 0x30, 0x30, 0x0, // @215 "000"
    0x3e, 0x3e, 0x20, 0x0 // @219 ">> "
};

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern uint32_t const indicesGb[] TEXT_LOCATION_FLASH_ATTRIBUTE;

// Array holding dynamically installed languages
struct TranslationHeader
{
    uint32_t offset_to_texts;
    uint32_t offset_to_indices;
    uint32_t offset_to_typedtext;
};
static const TranslationHeader* languagesArray[1] = { 0 };

// Compiled and linked in languages
static const uint32_t* const staticLanguageIndices[] = {
    indicesGb
};

touchgfx::LanguageId touchgfx::Texts::currentLanguage = static_cast<touchgfx::LanguageId>(0);
static const touchgfx::Unicode::UnicodeChar* currentLanguagePtr = 0;
static const uint32_t* currentLanguageIndices = 0;

void touchgfx::Texts::setLanguage(touchgfx::LanguageId id)
{
    const touchgfx::TypedText::TypedTextData* currentLanguageTypedText = 0;
    if (id < 1)
    {
        if (languagesArray[id] != 0)
        {
            // Dynamic translation is added
            const TranslationHeader* translation = languagesArray[id];
            currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translation) + translation->offset_to_texts);
            currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation->offset_to_indices);
            currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*)translation) + translation->offset_to_typedtext);
        }
        else
        {
            // Compiled and linked in languages
            currentLanguagePtr = texts_all_languages;
            currentLanguageIndices = staticLanguageIndices[id];
            currentLanguageTypedText = typedTextDatabaseArray[id];
        }
    }

    if (currentLanguageTypedText)
    {
        currentLanguage = id;
        touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
                                                       TypedTextDatabase::getFonts(), TypedTextDatabase::getInstanceSize());
    }
}

void touchgfx::Texts::setTranslation(touchgfx::LanguageId id, const void* translation)
{
    languagesArray[id] = (const TranslationHeader*)translation;
}

const touchgfx::Unicode::UnicodeChar* touchgfx::Texts::getText(TypedTextId id) const
{
    return &currentLanguagePtr[currentLanguageIndices[id]];
}
