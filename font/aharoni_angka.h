

/*
 *
 * aharoni_16
 *
 *
 * File Name           : aharoni_16
 * Date                : 12.06.2017
 * Font size in bytes  : 10390
 * Font width          : 10
 * Font height         : 16
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * Modified by Cibool's OK
 *
 */

#ifndef AHARONI_16_H
#define AHARONI_16_H

#define AHARONI_16_WIDTH 10
#define AHARONI_16_HEIGHT 16

const static uint8_t aharoni_16[] PROGMEM  = {
    0x28, 0x96, // size
    0x0A, // width
    0x10, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x02, 0x05, 0x06, 0x06, 0x09, 0x08, 0x03, 
    0x03, 0x03, 0x04, 0x07, 0x03, 0x03, 0x02, 0x04, 
    0x06, 0x03, 0x05, 0x04, 0x06, 0x05, 0x06, 0x05, 
    0x05, 0x06, 0x02, 0x03, 0x07, 0x07, 0x07, 0x06, 
    0x0B, 0x0B, 0x08, 0x07, 0x09, 0x06, 0x06, 0x0A, 
    0x0A, 0x03, 0x07, 0x09, 0x06, 0x0D, 0x0B, 0x0B, 
    0x08, 0x0B, 0x09, 0x07, 0x07, 0x0A, 0x0B, 0x10, 
    0x0B, 0x0A, 0x08, 0x03, 0x04, 0x03, 0x06, 0x08, 
    0x04, 0x08, 0x08, 0x06, 0x08, 0x07, 0x06, 0x08, 
    0x08, 0x03, 0x03, 0x09, 0x03, 0x0D, 0x08, 0x08, 
    0x08, 0x08, 0x05, 0x06, 0x05, 0x08, 0x09, 0x0D, 
    0x09, 0x09, 0x07, 0x03, 0x01, 0x03, 0x08, 0x0A, 
    
    
    // font data
    0xF0, 0xF0, 0x0D, 0x0D, // 33
    0x60, 0x30, 0x10, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x40, 0xF8, 0x40, 0x40, 0xF8, 0x40, 0x01, 0x0F, 0x01, 0x01, 0x0F, 0x01, // 35
    0xC0, 0xE0, 0xA0, 0xF0, 0xA0, 0xE0, 0x04, 0x0D, 0x09, 0x1F, 0x09, 0x0F, // 36
    0xC0, 0x20, 0x20, 0xC0, 0x00, 0xC0, 0x20, 0x00, 0x00, 0x00, 0x01, 0x09, 0x06, 0x01, 0x06, 0x09, 0x09, 0x06, // 37
    0x00, 0xB8, 0xFC, 0xCC, 0xFC, 0x38, 0x00, 0x00, 0x07, 0x0F, 0x0C, 0x0C, 0x0D, 0x07, 0x0F, 0x05, // 38
    0x60, 0x30, 0x10, 0x00, 0x00, 0x00, // 39
    0xF0, 0xF8, 0x08, 0x1F, 0x3F, 0x20, // 40
    0x08, 0xF8, 0xF0, 0x20, 0x3F, 0x1F, // 41
    0x50, 0xF8, 0x20, 0x50, 0x00, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x0F, 0x01, 0x01, 0x01, // 43
    0x00, 0x00, 0x00, 0x18, 0x0C, 0x04, // 44
    0x80, 0x80, 0x80, 0x01, 0x01, 0x01, // 45
    0x00, 0x00, 0x0C, 0x0C, // 46
    0x00, 0x00, 0xC0, 0x20, 0x08, 0x07, 0x00, 0x00, // 47
    0xC0, 0xE0, 0x60, 0x60, 0xE0, 0xC0, 0x07, 0x0F, 0x0C, 0x0C, 0x0F, 0x07, // 48
    0xC0, 0xE0, 0xE0, 0x00, 0x0F, 0x0F, // 49
    0x60, 0x60, 0x60, 0xE0, 0xC0, 0x08, 0x0C, 0x0E, 0x0D, 0x0C, // 50
    0x60, 0x60, 0xE0, 0xC0, 0x0C, 0x0D, 0x0F, 0x06, // 51
    0x00, 0x80, 0x40, 0xE0, 0xE0, 0x00, 0x03, 0x02, 0x02, 0x0F, 0x0F, 0x02, // 52
    0x80, 0xE0, 0x60, 0x60, 0x60, 0x0D, 0x0D, 0x0D, 0x0F, 0x06, // 53
    0x00, 0x80, 0xC0, 0xE0, 0xA0, 0x00, 0x07, 0x0F, 0x0D, 0x0D, 0x0F, 0x07, // 54
    0x20, 0x20, 0xA0, 0xE0, 0x60, 0x00, 0x0C, 0x0F, 0x03, 0x00, // 55
    0xC0, 0xE0, 0x60, 0xE0, 0xC0, 0x06, 0x0F, 0x0D, 0x0F, 0x06, // 56
    0xC0, 0xE0, 0x60, 0x60, 0xE0, 0xC0, 0x01, 0x0B, 0x0F, 0x07, 0x03, 0x01, // 57
    0xC0, 0xC0, 0x0C, 0x0C, // 58
    0x00, 0xC0, 0xC0, 0x18, 0x0C, 0x04, // 59
    0x00, 0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x01, 0x02, 0x02, 0x06, 0x04, 0x0C, 0x08, // 60
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, // 61
    0x20, 0x20, 0x40, 0x40, 0x80, 0x80, 0x00, 0x08, 0x0C, 0x04, 0x06, 0x02, 0x02, 0x01, // 62
    0x18, 0x1C, 0x8C, 0x8C, 0xFC, 0x78, 0x00, 0x00, 0x0D, 0x0D, 0x00, 0x00, // 63
    0xF0, 0x08, 0x04, 0xE6, 0x32, 0x12, 0x12, 0xF2, 0x04, 0x0C, 0xF0, 0x01, 0x02, 0x04, 0x09, 0x0A, 0x0A, 0x0B, 0x0B, 0x0E, 0x05, 0x00, // 64
    0x00, 0x00, 0xE0, 0xFC, 0x7E, 0x0E, 0x7E, 0xFC, 0xE0, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x03, 0x03, 0x03, 0x03, 0x03, 0x0F, 0x0F, 0x08, // 65
    0xFE, 0xFE, 0xFE, 0x66, 0x66, 0xFE, 0xFE, 0xBC, 0x0F, 0x0F, 0x0F, 0x0C, 0x0C, 0x0F, 0x0F, 0x07, // 66
    0xF0, 0xF8, 0xFC, 0x1E, 0x0E, 0x0E, 0x0E, 0x01, 0x03, 0x07, 0x0F, 0x0E, 0x0E, 0x0E, // 67
    0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x0E, 0xFC, 0xF8, 0xF0, 0x0F, 0x0F, 0x0F, 0x0C, 0x0C, 0x0E, 0x07, 0x03, 0x01, // 68
    0xFE, 0xFE, 0xFE, 0x66, 0x66, 0x06, 0x0F, 0x0F, 0x0F, 0x0C, 0x0C, 0x0C, // 69
    0xFE, 0xFE, 0xFE, 0x66, 0x66, 0x06, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, // 70
    0xF0, 0xF8, 0xFC, 0x1E, 0x0E, 0xCE, 0xCE, 0xDE, 0xDC, 0xC8, 0x01, 0x03, 0x07, 0x0F, 0x0E, 0x0E, 0x0E, 0x07, 0x03, 0x01, // 71
    0xFE, 0xFE, 0xFE, 0x60, 0x60, 0x60, 0x60, 0xFE, 0xFE, 0xFE, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, // 72
    0xFE, 0xFE, 0xFE, 0x0F, 0x0F, 0x0F, // 73
    0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0x04, 0x0E, 0x0C, 0x0C, 0x0F, 0x07, 0x03, // 74
    0xFE, 0xFE, 0xFE, 0xE0, 0xF8, 0xBC, 0x0E, 0x06, 0x02, 0x0F, 0x0F, 0x0F, 0x00, 0x03, 0x07, 0x0F, 0x0C, 0x08, // 75
    0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x0C, 0x0C, 0x0C, // 76
    0xC0, 0xFE, 0xFE, 0xFE, 0xFC, 0xE0, 0x80, 0xE0, 0xFC, 0xFE, 0xFE, 0xFE, 0xC0, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x07, 0x0F, 0x07, 0x00, 0x00, 0x0F, 0x0F, 0x0F, // 77
    0xFE, 0xFE, 0xFE, 0x3C, 0x78, 0xF0, 0xC0, 0x80, 0xFE, 0xFE, 0xFE, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x0F, 0x0F, // 78
    0xF0, 0xF8, 0xFC, 0x1E, 0x0E, 0x0E, 0x0E, 0x1E, 0xFC, 0xF8, 0xF0, 0x01, 0x03, 0x07, 0x0F, 0x0E, 0x0E, 0x0E, 0x0F, 0x07, 0x03, 0x01, // 79
    0xFE, 0xFE, 0xFE, 0xC6, 0xC6, 0xFE, 0x7C, 0x38, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0xF0, 0xF8, 0xFC, 0x1E, 0x0E, 0x8E, 0x8E, 0x1E, 0xFC, 0xF8, 0xF0, 0x01, 0x03, 0x07, 0x0F, 0x0E, 0x0E, 0x0F, 0x07, 0x0F, 0x1F, 0x19, // 81
    0xFE, 0xFE, 0xFE, 0xC6, 0xC6, 0xFE, 0xFC, 0x78, 0x00, 0x0F, 0x0F, 0x0F, 0x01, 0x03, 0x07, 0x0E, 0x0C, 0x08, // 82
    0x38, 0xFC, 0xFE, 0xE6, 0xC6, 0xCE, 0x84, 0x04, 0x0E, 0x0C, 0x0C, 0x0F, 0x07, 0x07, // 83
    0x06, 0x06, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, // 84
    0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0x03, 0x07, 0x0F, 0x0F, 0x0E, 0x0E, 0x0F, 0x0F, 0x07, 0x03, // 85
    0x02, 0x1E, 0x7E, 0xFC, 0xE0, 0x00, 0xE0, 0xFC, 0x7E, 0x1E, 0x02, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x0F, 0x0F, 0x03, 0x00, 0x00, 0x00, // 86
    0x06, 0x3E, 0xFE, 0xF8, 0x80, 0xC0, 0xF8, 0x7E, 0x7E, 0xFC, 0xE0, 0x80, 0xF0, 0xFE, 0x7E, 0x06, 0x00, 0x00, 0x03, 0x0F, 0x0F, 0x0F, 0x03, 0x00, 0x00, 0x03, 0x0F, 0x0F, 0x0F, 0x03, 0x00, 0x00, // 87
    0x00, 0x02, 0x0E, 0x9E, 0xFE, 0xF0, 0xF0, 0xFE, 0x9E, 0x0E, 0x02, 0x08, 0x0C, 0x0F, 0x0F, 0x03, 0x01, 0x01, 0x03, 0x0F, 0x0F, 0x0C, // 88
    0x02, 0x06, 0x1E, 0x3E, 0xF8, 0xE0, 0xF8, 0x3E, 0x1E, 0x06, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, // 89
    0x06, 0x06, 0xC6, 0xF6, 0xFE, 0x7E, 0x0E, 0x02, 0x08, 0x0E, 0x0F, 0x0F, 0x0D, 0x0C, 0x0C, 0x0C, // 90
    0xF8, 0xF8, 0x18, 0x3F, 0x3F, 0x30, // 91
    0x18, 0xF0, 0x80, 0x00, 0x00, 0x00, 0x07, 0x0C, // 92
    0x18, 0xF8, 0xF8, 0x30, 0x3F, 0x3F, // 93
    0x80, 0x60, 0x18, 0x18, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // 95
    0x02, 0x06, 0x0C, 0x08, 0x00, 0x00, 0x00, 0x00, // 96
    0x80, 0xC0, 0xE0, 0x60, 0x40, 0xE0, 0xE0, 0xE0, 0x03, 0x07, 0x0F, 0x0C, 0x04, 0x0F, 0x0F, 0x0F, // 97
    0xFF, 0xFF, 0xFF, 0x40, 0x60, 0xE0, 0xC0, 0x80, 0x0F, 0x0F, 0x0F, 0x04, 0x0C, 0x0F, 0x07, 0x03, // 98
    0x80, 0xC0, 0xE0, 0x60, 0x60, 0x60, 0x03, 0x07, 0x0F, 0x0C, 0x0C, 0x0C, // 99
    0xC0, 0xE0, 0xE0, 0x60, 0x40, 0xFF, 0xFF, 0xFF, 0x07, 0x0F, 0x0F, 0x0C, 0x04, 0x0F, 0x0F, 0x0F, // 100
    0x80, 0xC0, 0xE0, 0x60, 0xE0, 0xC0, 0x80, 0x03, 0x07, 0x0F, 0x0D, 0x0D, 0x0D, 0x05, // 101
    0x60, 0xFC, 0xFE, 0xFF, 0x63, 0x63, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, // 102
    0x80, 0xC0, 0xE0, 0x60, 0x40, 0xE0, 0xE0, 0xE0, 0x23, 0x67, 0xEF, 0xCC, 0xC4, 0xFF, 0x7F, 0x3F, // 103
    0xFF, 0xFF, 0xFF, 0x40, 0x60, 0xE0, 0xE0, 0xC0, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x0F, 0x0F, 0x0F, // 104
    0xEE, 0xEE, 0xEE, 0x0F, 0x0F, 0x0F, // 105
    0xEE, 0xEE, 0xEE, 0xFF, 0xFF, 0xFF, // 106
    0xFF, 0xFF, 0xFF, 0x80, 0xC0, 0xE0, 0xE0, 0x60, 0x20, 0x0F, 0x0F, 0x0F, 0x03, 0x07, 0x0F, 0x0E, 0x0C, 0x08, // 107
    0xFF, 0xFF, 0xFF, 0x0F, 0x0F, 0x0F, // 108
    0xE0, 0xE0, 0xE0, 0x40, 0x60, 0xE0, 0xE0, 0xC0, 0x40, 0x60, 0xE0, 0xE0, 0xC0, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x0F, 0x0F, 0x0F, // 109
    0xE0, 0xE0, 0xE0, 0x40, 0x60, 0xE0, 0xE0, 0xC0, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x0F, 0x0F, 0x0F, // 110
    0x80, 0xC0, 0xE0, 0x60, 0x60, 0xE0, 0xC0, 0x80, 0x03, 0x07, 0x0F, 0x0C, 0x0C, 0x0F, 0x07, 0x03, // 111
    0xE0, 0xE0, 0xE0, 0x40, 0x60, 0xE0, 0xC0, 0x80, 0xFF, 0xFF, 0xFF, 0x04, 0x0C, 0x0F, 0x07, 0x03, // 112
    0xC0, 0xE0, 0xE0, 0x60, 0x40, 0xE0, 0xE0, 0xE0, 0x07, 0x0F, 0x0F, 0x0C, 0x04, 0xFF, 0xFF, 0xFF, // 113
    0xE0, 0xE0, 0xE0, 0xC0, 0x60, 0x0F, 0x0F, 0x0F, 0x00, 0x00, // 114
    0xC0, 0xE0, 0xE0, 0x60, 0x60, 0x20, 0x08, 0x0D, 0x0D, 0x0F, 0x0F, 0x06, // 115
    0x60, 0xF8, 0xF8, 0xF8, 0x60, 0x00, 0x0F, 0x0F, 0x0F, 0x00, // 116
    0xE0, 0xE0, 0xE0, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x07, 0x0F, 0x0F, 0x0C, 0x0C, 0x0F, 0x0F, 0x07, // 117
    0x20, 0xE0, 0xE0, 0x80, 0x00, 0x80, 0xE0, 0xE0, 0x20, 0x00, 0x00, 0x03, 0x0F, 0x0E, 0x0F, 0x03, 0x00, 0x00, // 118
    0x60, 0xE0, 0xC0, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0xC0, 0xE0, 0x60, 0x00, 0x01, 0x07, 0x0E, 0x0F, 0x03, 0x00, 0x03, 0x0F, 0x0E, 0x07, 0x01, 0x00, // 119
    0x20, 0x60, 0xE0, 0xC0, 0x80, 0xC0, 0xE0, 0x60, 0x20, 0x08, 0x0C, 0x0E, 0x07, 0x03, 0x07, 0x0E, 0x0C, 0x08, // 120
    0x60, 0xE0, 0xE0, 0x80, 0x00, 0x80, 0xE0, 0xE0, 0x20, 0x00, 0xC1, 0xF3, 0xFF, 0x3E, 0x0F, 0x03, 0x00, 0x00, // 121
    0x60, 0x60, 0x60, 0xE0, 0xE0, 0xE0, 0x20, 0x08, 0x0E, 0x0F, 0x0F, 0x0D, 0x0C, 0x0C, // 122
    0x80, 0x7C, 0x02, 0x00, 0x1F, 0x20, // 123
    0xF8, 0x0F, // 124
    0x02, 0x7C, 0x80, 0x20, 0x1F, 0x00, // 125
    0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, // 126
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x09, 0x09, 0x06, 0x0F, 0x0B, 0x0B, 0x0F, 0x08, 0x08 // 127
    
};

#endif
