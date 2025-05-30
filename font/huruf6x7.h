/*
 *
 * System5x7
 *
 *
 * File Name           : System5x7.h
 * Date                : 28 Oct 2008
 * Font size in bytes  : 470
 * Font width          : 5
 * Font height         : 7
 * Font first char     : 32
 * Font last char      : 127
 * Font used chars     : 94
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

#ifndef huruf6x7_H
#define huruf6x7_H

#define huruf6x7_WIDTH 5
#define huruf6x7_HEIGHT 6

/*
 * added to allow fontname to match header file name. 
 * as well as keep the old name for backward compability
 */

#define huruf6x7 huruf6x7

const static uint8_t huruf6x7[] PROGMEM = {
    0x0, 0x0, // size of zero indicates fixed width font, actual length is width * height
    0x06, // width
    0x07, // height
    0x20, // first char
    0x60, // char count
    
    // Fixed width; char width table not used !!!!
    
    // font data
		0x00, 0x00, 0x5F, 0x5F, 0x00, 0x00,      // Code for char  
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      // Code for char !
        0x00, 0x03, 0x00, 0x03, 0x00, 0x00,      // Code for char "
        0x14, 0x7F, 0x7F, 0x14, 0x7F, 0x14,      // Code for char #
        0x24, 0x2A, 0x7F, 0x7F, 0x2A, 0x12,      // Code for char $
        0x63, 0x33, 0x18, 0x0C, 0x66, 0x63,      // Code for char %
        0x3B, 0x45, 0x4B, 0x30, 0x28, 0x44,      // Code for char &
        0x00, 0x00, 0x03, 0x07, 0x00, 0x00,      // Code for char '
        0x1C, 0x3E, 0x63, 0x41, 0x00, 0x00,      // Code for char (
        0x00, 0x00, 0x41, 0x63, 0x3E, 0x1C,      // Code for char )
        0x00, 0x02, 0x07, 0x02, 0x00, 0x00,      // Code for char *
        0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08,      // Code for char +
        0x00, 0x00, 0x30, 0x70, 0x00, 0x00,      // Code for char ,
        0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C,      // Code for char -
        0x00, 0x00, 0x60, 0x60, 0x00, 0x00,      // Code for char .
        0x60, 0x30, 0x18, 0x0C, 0x06, 0x03,      // Code for char /
        0x3E, 0x7F, 0x51, 0x49, 0x7F, 0x3E,      // Code for char 0
        0x41, 0x41, 0x7F, 0x7F, 0x40, 0x40,      // Code for char 1
        0x71, 0x79, 0x49, 0x49, 0x4F, 0x46,      // Code for char 2
        0x41, 0x49, 0x49, 0x49, 0x7F, 0x36,      // Code for char 3
        0x38, 0x3C, 0x22, 0x7F, 0x7F, 0x20,      // Code for char 4
        0x4F, 0x4F, 0x45, 0x45, 0x7D, 0x39,      // Code for char 5
        0x3E, 0x7F, 0x49, 0x49, 0x79, 0x30,      // Code for char 6
        0x01, 0x01, 0x71, 0x79, 0x0D, 0x07,      // Code for char 7
        0x36, 0x7F, 0x49, 0x49, 0x7F, 0x36,      // Code for char 8
        0x06, 0x4F, 0x49, 0x49, 0x7F, 0x3E,      // Code for char 9
        0x00, 0x00, 0x36, 0x36, 0x00, 0x00,      // Code for char :
        0x00, 0x00, 0x56, 0x36, 0x00, 0x00,      // Code for char ;
        0x08, 0x1C, 0x36, 0x63, 0x41, 0x00,      // Code for char <
        0x36, 0x36, 0x36, 0x36, 0x36, 0x00,      // Code for char =
        0x00, 0x41, 0x63, 0x36, 0x1C, 0x08,      // Code for char >
        0x02, 0x01, 0x51, 0x59, 0x0F, 0x06,      // Code for char ?
        0x2E, 0x4F, 0x4D, 0x41, 0x7F, 0x3E,      // Code for char @
        0x7E, 0x7F, 0x09, 0x09, 0x7F, 0x7E,      // Code for char A
        0x7F, 0x7F, 0x49, 0x49, 0x7F, 0x36,      // Code for char B
        0x3E, 0x7F, 0x41, 0x41, 0x63, 0x22,      // Code for char C
        0x7F, 0x7F, 0x41, 0x41, 0x7F, 0x3E,      // Code for char D
        0x7F, 0x7F, 0x49, 0x49, 0x49, 0x41,      // Code for char E
        0x7F, 0x7F, 0x09, 0x09, 0x09, 0x01,      // Code for char F
        0x3E, 0x7F, 0x41, 0x49, 0x7B, 0x3A,      // Code for char G
        0x7F, 0x7F, 0x08, 0x08, 0x7F, 0x7F,      // Code for char H
        0x00, 0x41, 0x7F, 0x7F, 0x41, 0x00,      // Code for char I
        0x20, 0x60, 0x41, 0x7F, 0x3F, 0x01,      // Code for char J
        0x7F, 0x7F, 0x1C, 0x36, 0x63, 0x41,      // Code for char K
        0x7F, 0x7F, 0x40, 0x40, 0x40, 0x40,      // Code for char L
        0x7F, 0x7F, 0x02, 0x04, 0x02, 0x7F,      // Code for char M
        0x7F, 0x7F, 0x06, 0x18, 0x7F, 0x7F,      // Code for char N
        0x3E, 0x7F, 0x41, 0x41, 0x7F, 0x3E,      // Code for char O
        0x7F, 0x7F, 0x09, 0x09, 0x0F, 0x06,      // Code for char P
        0x3E, 0x7F, 0x41, 0x51, 0x2F, 0x5E,      // Code for char Q
        0x7F, 0x7F, 0x19, 0x39, 0x6F, 0x46,      // Code for char R
        0x46, 0x4F, 0x49, 0x49, 0x79, 0x31,      // Code for char S
        0x01, 0x01, 0x7F, 0x7F, 0x01, 0x01,      // Code for char T
        0x3F, 0x7F, 0x40, 0x40, 0x7F, 0x3F,      // Code for char U
        0x0F, 0x3F, 0x40, 0x40, 0x3F, 0x0F,      // Code for char V
        0x7F, 0x20, 0x10, 0x20, 0x7F, 0x7F,      // Code for char W
        0x43, 0x66, 0x18, 0x18, 0x66, 0x43,      // Code for char X
        0x07, 0x0F, 0x70, 0x70, 0x0F, 0x07,      // Code for char Y
        0x61, 0x71, 0x59, 0x4D, 0x47, 0x43,      // Code for char Z
        0x7F, 0x7F, 0x41, 0x41, 0x00, 0x00,      // Code for char [
        0x03, 0x06, 0x0C, 0x18, 0x30, 0x60,      // Code for char BackSlash
        0x00, 0x00, 0x41, 0x41, 0x7F, 0x7F,      // Code for char ]
        0x04, 0x02, 0x01, 0x01, 0x02, 0x04,      // Code for char ^
        0x40, 0x40, 0x40, 0x40, 0x40, 0x40,      // Code for char _
        0x00, 0x00, 0x01, 0x03, 0x02, 0x00,      // Code for char `
        0x30, 0x7A, 0x4A, 0x4A, 0x7E, 0x7C,      // Code for char a
        0x7F, 0x7F, 0x48, 0x48, 0x78, 0x30,      // Code for char b
        0x38, 0x7C, 0x44, 0x44, 0x44, 0x28,      // Code for char c
        0x30, 0x78, 0x48, 0x48, 0x7F, 0x7F,      // Code for char d
        0x38, 0x7C, 0x54, 0x54, 0x5C, 0x18,      // Code for char e
        0x08, 0x08, 0x7C, 0x7E, 0x0A, 0x02,      // Code for char f
        0x0C, 0x5E, 0x52, 0x52, 0x7E, 0x3E,      // Code for char g
        0x7F, 0x7F, 0x08, 0x08, 0x78, 0x70,      // Code for char h
        0x00, 0x48, 0x7A, 0x7A, 0x40, 0x00,      // Code for char i
        0x00, 0x40, 0x40, 0x48, 0x7A, 0x3A,      // Code for char j
        0x7F, 0x7F, 0x38, 0x6C, 0x44, 0x00,      // Code for char k
        0x3F, 0x7F, 0x40, 0x40, 0x40, 0x00,      // Code for char l
        0x7E, 0x7E, 0x02, 0x3E, 0x7E, 0x7C,      // Code for char m
        0x7E, 0x7E, 0x02, 0x02, 0x7C, 0x7C,      // Code for char n
        0x3C, 0x7E, 0x42, 0x42, 0x7E, 0x3C,      // Code for char o
        0x7E, 0x7E, 0x12, 0x12, 0x1E, 0x0C,      // Code for char p
        0x0C, 0x1E, 0x12, 0x7E, 0x7E, 0x40,      // Code for char q
        0x7E, 0x7E, 0x04, 0x04, 0x02, 0x02,      // Code for char r
        0x48, 0x5C, 0x54, 0x54, 0x74, 0x24,      // Code for char s
        0x08, 0x08, 0x3E, 0x7E, 0x48, 0x00,      // Code for char t
        0x3E, 0x7E, 0x40, 0x20, 0x7E, 0x7E,      // Code for char u
        0x1E, 0x3E, 0x40, 0x40, 0x3E, 0x1E,      // Code for char v
        0x3E, 0x7C, 0x7C, 0x40, 0x7E, 0x7E,      // Code for char w
        0x66, 0x66, 0x18, 0x18, 0x66, 0x66,      // Code for char x
        0x06, 0x4E, 0x48, 0x48, 0x7E, 0x3E,      // Code for char y
        0x62, 0x72, 0x52, 0x4A, 0x4E, 0x46,      // Code for char z
        0x08, 0x3E, 0x77, 0x41, 0x41, 0x00,      // Code for char {
        0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00,      // Code for char |
        0x00, 0x41, 0x41, 0x77, 0x3E, 0x08,      // Code for char }
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00       // Code for char ~

        };
#endif
