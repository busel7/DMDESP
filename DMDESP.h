/*
 * Copyright (C) 2012 Southern Storm Software, Pty Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.

--------------------------------------------------------------------------------------

CATATAN :

 * > Library DMDESP Updated 26 April 2020 - bonny@elektronmart.com
 * > HJS589(DMD porting for ESP8266 by dmk007) 
 * > DMD (https://github.com/rweather/arduino-projects/tree/master/libraries/DMD)

 * Penggunaan : Copy Folder DMDESP ke Arduino Library
  
 * JANGAN LUPA PESAN HEADER DI ATAS.

 * Silahkan untuk dipergunakan untuk kepentingan Ibadah, Edukasi dan Komersil. Jangan lupa
   jika menggunakan library ini jangan dihapus headernya dan jika ada perbaikan atau
   pengembangan lanjutan ANDA WAJIB untuk MEMBAGIKAN KEMBALI hasilnya ke PUBLIK (GNU 
   General Public License).

 * JANGAN PELIT ILMU.....!!!

--------------------------------------------------------------------------------------*/


#ifndef DMDESP_H
#define DMDESP_H

#include "Bitmap.h"
#include <SPI.h>

class DMDESP : public Bitmap
{
public:
    explicit DMDESP(int widthPanels = 1, int heightPanels = 1);
    ~DMDESP();

    bool doubleBuffer() const { return _doubleBuffer; }
    void setDoubleBuffer(bool doubleBuffer);
    void swapBuffers();
    void swapBuffersAndCopy();

    void loop();
    void refresh();

    void start();

    void setBrightness(uint16_t crh);
    static Color fromRGB(uint8_t r, uint8_t g, uint8_t b);

private:
    // Disable copy constructor and operator=().
    DMDESP(const DMDESP &other) : Bitmap(other) {}
    DMDESP &operator=(const DMDESP &) { return *this; }
    
    uint16_t cr;
    bool _doubleBuffer;
    uint8_t phase;
    uint8_t *fb0;
    uint8_t *fb1;
    uint8_t *displayfb;
    unsigned long lastRefresh;
};

#endif
