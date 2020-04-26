/*
 * Contoh penggunaan library DMDESP
 * 
 * email : bonny@grobak.net - www.grobak.net - www.elektronmart.com
*/

#include <DMDESP.h>
#include <fonts/ElektronMart6x8.h>

//SETUP DMD
#define DISPLAYS_WIDE 2 // Kolom Panel
#define DISPLAYS_HIGH 1 // Baris Panel
DMDESP Disp(DISPLAYS_WIDE, DISPLAYS_HIGH);  // Jumlah Panel P10 yang digunakan (KOLOM,BARIS)



//----------------------------------------------------------------------
// SETUP

void setup() {

  // DMDESP Setup
  Disp.start(); // Jalankan library DMDESP
  Disp.setBrightness(20); // Tingkat kecerahan
  Disp.setFont(ElektronMart6x8); // Tentukan huruf
  
}



//----------------------------------------------------------------------
// LOOP

void loop() {

  Disp.loop(); // Jalankan Disp loop untuk refresh LED

  Disp.drawText(0,0,"DMDESP"); // Tampilkan teks
  TeksJalan(8, 50); // Tampilkan teks berjalan TeksJalan(posisi y, kecepatan);

}


//--------------------------
// TAMPILKAN SCROLLING TEKS

static char *teks[] = {"Teks berjalan dengan DMDESP"};

void TeksJalan(int y, uint8_t kecepatan) {

  static uint32_t pM;
  static uint32_t x;
  int width = Disp.width();
  Disp.setFont(ElektronMart6x8);
  int fullScroll = Disp.textWidth(teks[0]) + width;
  if((millis() - pM) > kecepatan) { 
    pM = millis();
    if (x < fullScroll) {
      ++x;
    } else {
      x = 0;
      return;
    }
    Disp.drawText(width - x, y, teks[0]);
  }  

}
