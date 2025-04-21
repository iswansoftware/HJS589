

/*
 *
 * 87
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : 87.h
 * Date                : 07.04.2019
 * Font size in bytes  : 633
 * Font width          : 8
 * Font height         : -7
 * Font first char     : 48
 * Font last char      : 59
 * Font used chars     : 11
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef font87_H
#define font87_H

#define font87_WIDTH 8
#define ront87_HEIGHT -7

const static uint8_t font87[] PROGMEM = {
    0x02, 0x79, // size
    0x08, // width
    0x08, // height
    0x30, // first char
    0x0B, // char count
    
    // char widths
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 
    
    // font data
    0x7C, 0xFE, 0x82, 0x82, 0x82, 0x82, 0xFE, 0x7C, // 48
    0x00, 0x80, 0x84, 0xFE, 0xFE, 0x80, 0x80, 0x00, // 49
    0xC4, 0xC2, 0xE2, 0xB2, 0xBA, 0x9A, 0x8E, 0x8C, // 50
    0x44, 0x82, 0x92, 0x92, 0x92, 0x92, 0xEE, 0x6C, // 51
    0x60, 0x50, 0x48, 0x44, 0x42, 0xFE, 0xFE, 0x40, // 52
    0x9E, 0x9E, 0x92, 0x92, 0x92, 0x92, 0xF2, 0xF2, // 53
    0x7C, 0xFE, 0x92, 0x92, 0x92, 0x92, 0xF2, 0x60, // 54
    0x02, 0x02, 0x02, 0xF2, 0xF2, 0x0A, 0x0E, 0x06, // 55
    0x7C, 0xFE, 0x92, 0x92, 0x92, 0x92, 0xFE, 0x7C, // 56
    0x1C, 0xBC, 0xA2, 0xA2, 0xA2, 0xA2, 0xFC, 0x7C, // 57
    0x00, 0x00, 0x00, 0x6C, 0x6C, 0x00, 0x00, 0x00 // 58
    
};

#endif
