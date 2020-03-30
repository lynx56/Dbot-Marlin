    #define CUSTOM_BOOTSCREEN_TIMEOUT      3000
	#define CUSTOM_BOOTSCREEN_BMPWIDTH      128
    #define CUSTOM_BOOTSCREEN_BMPHEIGHT      64
    
    const unsigned char custom_start_bmp[1024] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x60,
0x00, 0x00, 0x00, 0xC3, 0x00, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x30,
0x00, 0x00, 0x00, 0xC3, 0x00, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x10,
0x00, 0x00, 0x00, 0xC3, 0x1C, 0x36, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x18,
0x00, 0x00, 0x00, 0xC3, 0x3E, 0x36, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x08,
0x00, 0x00, 0x00, 0xFF, 0x33, 0x36, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x0E, 0x08,
0x00, 0x00, 0x00, 0xFF, 0x3F, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x0E, 0x18,
0x00, 0x00, 0x00, 0xC3, 0x3F, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x10, 0x1F,
0x00, 0x00, 0x00, 0xC3, 0x30, 0x36, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x60, 0x13,
0x00, 0x00, 0x00, 0xC3, 0x39, 0x36, 0x7F, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x80, 0x30,
0x00, 0x00, 0x00, 0xC3, 0x1F, 0x36, 0x3E, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x00, 0x60,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x00, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x06, 0x00, 0x40, 0x01, 0x80,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x40, 0x07, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x80, 0x60, 0x0C, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC9, 0xE0, 0x38, 0x78, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xC9, 0x30, 0x0F, 0xE0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x4B, 0x30, 0x08, 0x00, 0x00,
0x00, 0x01, 0x80, 0x00, 0x00, 0xC0, 0x06, 0x00, 0x00, 0x00, 0x06, 0x4B, 0x10, 0x08, 0x00, 0x00,
0xFC, 0x01, 0x80, 0x00, 0x00, 0xC0, 0x06, 0x00, 0x00, 0x00, 0x06, 0x41, 0x10, 0x10, 0x00, 0x00,
0xFE, 0x01, 0x80, 0x00, 0xC0, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x41, 0x10, 0x30, 0x00, 0x00,
0xC3, 0x01, 0xF0, 0x70, 0xC0, 0x07, 0x06, 0xC1, 0xC3, 0x9C, 0x06, 0x01, 0x18, 0x70, 0x00, 0x00,
0xC1, 0x01, 0xF8, 0xF9, 0xF0, 0xCF, 0x07, 0xE3, 0xC7, 0xBE, 0x06, 0x00, 0x0C, 0xF0, 0x00, 0x00,
0xC3, 0x01, 0x8D, 0x8C, 0xC0, 0xC8, 0x06, 0x36, 0x66, 0x33, 0x06, 0x00, 0x0C, 0xA0, 0x00, 0x00,
0xC3, 0x01, 0x8D, 0x8C, 0xC0, 0xCE, 0x06, 0x37, 0xE6, 0x3F, 0x06, 0x00, 0x07, 0xA0, 0x00, 0x00,
0xC3, 0x39, 0x8D, 0x8C, 0xC0, 0xC7, 0x06, 0x37, 0xE6, 0x3F, 0x06, 0x00, 0x07, 0x20, 0x00, 0x00,
0xC7, 0x01, 0x8D, 0x8C, 0xC0, 0xC1, 0x06, 0x36, 0x06, 0x30, 0x06, 0x00, 0x03, 0x00, 0x00, 0x00,
0xFE, 0x01, 0xF8, 0xF8, 0xF0, 0xC7, 0x86, 0x37, 0x26, 0x39, 0x06, 0x00, 0x03, 0x00, 0x00, 0x00,
0xF8, 0x01, 0x70, 0x70, 0x70, 0xCF, 0x06, 0x33, 0xE6, 0x1F, 0x06, 0x00, 0x01, 0x80, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0xA0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0xE0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0xE0, 0x00, 0x00,
0x00, 0x80, 0x40, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x60, 0x00, 0x00,
0x00, 0xC0, 0xE0, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x20, 0x00, 0x00,
0x00, 0xB0, 0xA0, 0x00, 0x00, 0x01, 0xE4, 0xC0, 0x00, 0x00, 0x06, 0x00, 0x00, 0x30, 0x00, 0x00,
0x00, 0x98, 0xA0, 0x00, 0x00, 0x01, 0x36, 0xC0, 0x00, 0x00, 0x06, 0x00, 0x00, 0x30, 0x00, 0x00,
0x00, 0x85, 0x10, 0x00, 0x00, 0x01, 0x17, 0xC0, 0x00, 0x00, 0x06, 0x00, 0x00, 0x10, 0x00, 0x00,
0x00, 0x43, 0x10, 0x00, 0x00, 0x01, 0x35, 0xC0, 0x00, 0x00, 0x06, 0x00, 0x00, 0x10, 0x00, 0x00,
0x00, 0x40, 0x1E, 0x00, 0x00, 0x01, 0xE1, 0x80, 0x00, 0x00, 0x02, 0x00, 0x00, 0x18, 0x00, 0x00,
0x3F, 0xC7, 0xD2, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x18, 0x00, 0x00,
0x30, 0x18, 0x32, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x20, 0x83, 0x00, 0x00, 0x18, 0x00, 0x00,
0x08, 0x20, 0x1A, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x71, 0x83, 0x00, 0x00, 0x18, 0x00, 0x00,
0x04, 0x40, 0x0C, 0x00, 0x0C, 0x00, 0xE0, 0x01, 0x1C, 0x9B, 0x83, 0x00, 0x00, 0x18, 0x00, 0x00,
0x06, 0x40, 0x3F, 0x80, 0x12, 0x79, 0xE4, 0x4F, 0x3C, 0x98, 0x81, 0x80, 0x00, 0x18, 0x00, 0x00,
0x06, 0x4F, 0x3D, 0x00, 0x18, 0x44, 0x64, 0x48, 0x84, 0x98, 0x81, 0x80, 0x00, 0x18, 0x00, 0x00,
0x18, 0x8F, 0x72, 0x00, 0x0E, 0x45, 0xE4, 0x48, 0x9C, 0x98, 0x81, 0x80, 0x00, 0x10, 0x00, 0x00,
0x60, 0x8F, 0xFF, 0x00, 0x02, 0x65, 0x26, 0xCF, 0xB4, 0x98, 0x80, 0xC0, 0x00, 0x30, 0x00, 0x00,
0xE0, 0x8C, 0x37, 0x00, 0x1E, 0x79, 0xF3, 0xCF, 0xBC, 0x60, 0x80, 0xC0, 0x00, 0x30, 0x00, 0x00,
0x1C, 0x8F, 0xD2, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x30, 0x00, 0x00,
0x02, 0x84, 0x15, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x60, 0x00, 0x00,
0x0C, 0x4F, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x60, 0x00, 0x00,
0x10, 0xC0, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0xC0, 0x00, 0x00,
0x0C, 0x80, 0x14, 0x00, 0x00, 0x00, 0x10, 0x1C, 0x01, 0x80, 0x00, 0x18, 0x01, 0xC0, 0x00, 0x00,
0x03, 0x80, 0x04, 0x00, 0x00, 0x00, 0x10, 0x3E, 0x01, 0x80, 0x00, 0x0E, 0x03, 0x80, 0x00, 0x00,
0x03, 0x40, 0x0C, 0x00, 0x0C, 0x70, 0x30, 0x42, 0x01, 0x9E, 0x30, 0x07, 0xFF, 0x80, 0x00, 0x00,
0x07, 0xE0, 0x5C, 0x00, 0x1E, 0x7C, 0xF0, 0x40, 0x4D, 0xBF, 0x79, 0xE1, 0xFD, 0x80, 0x00, 0x00,
0x00, 0xB0, 0x5C, 0x00, 0x1E, 0x4D, 0x90, 0x46, 0x4D, 0xA1, 0x08, 0x40, 0x00, 0x80, 0x00, 0x00,
0x00, 0xD8, 0x28, 0x00, 0x12, 0x4D, 0x10, 0x46, 0x4D, 0xA3, 0x78, 0x80, 0x00, 0x80, 0x00, 0x00,
0x00, 0x0E, 0x30, 0x00, 0x12, 0x4D, 0x90, 0x02, 0x2D, 0xB3, 0x69, 0x00, 0x00, 0x80, 0x00, 0x00,
0x00, 0x01, 0xC0, 0x00, 0x1F, 0x44, 0xF8, 0x3A, 0x7D, 0xB3, 0x3D, 0xF0, 0x00, 0xC0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00
};
