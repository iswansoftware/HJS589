

/*
 *
 * fontsm86
 *
 * created with FontCreator
 * written by BAYU WIJAYANTO
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : sm86.h
 * Date                : 17.02.2019
 * Font size in bytes  : 545
 * Font width          : 8
 * Font height         : -6
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

#ifndef FONTSM86_H
#define FONTSM86_H

#define FONTSM86_WIDTH 8
#define FONTSM86_HEIGHT -6

const static uint8_t fontsm86[] PROGMEM = {
    0x02, 0x21, // size
    0x08, // width
    0x06, // height
    0x30, // first char
    0x0B, // char count
    
    // char widths
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 
    
    // font data
    0x78, 0xFC, 0x84, 0x84, 0x84, 0x84, 0xFC, 0x78, // 48
    0x00, 0x80, 0x88, 0xFC, 0xFC, 0x80, 0x80, 0x00, // 49
    0x88, 0xCC, 0xC4, 0xA4, 0xA4, 0xA4, 0x9C, 0x98, // 50
    0x44, 0x84, 0x94, 0x94, 0x94, 0x94, 0xEC, 0x6C, // 51
    0x60, 0x60, 0x50, 0x48, 0x44, 0xFC, 0xFC, 0x40, // 52
    0x5C, 0xDC, 0x94, 0x94, 0x94, 0x94, 0xF4, 0x64, // 53
    0x78, 0x78, 0x94, 0x94, 0x94, 0x94, 0x64, 0x60, // 54
    0x04, 0x04, 0x04, 0xE4, 0xE4, 0x14, 0x1C, 0x0C, // 55
    0x78, 0xFC, 0xA4, 0xA4, 0xA4, 0xA4, 0xFC, 0x78, // 56
    0x18, 0x98, 0xA4, 0xA4, 0xA4, 0xA4, 0xF8, 0x78, // 57
    0x00, 0x00, 0x00, 0x48, 0x48, 0x00, 0x00, 0x00 // 58
    
};

#endif
