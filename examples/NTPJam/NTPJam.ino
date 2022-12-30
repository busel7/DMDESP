/*
 * Contoh penggunaan library DMDESP
 * dengan NTP untuk Jam
 * 
 * email : bonny@grobak.net - www.grobak.net - www.elektronmart.com
*/

#include <NTPClient.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

#include <DMDESP.h>
#include <fonts/EMKotak5x7.h>
#include <fonts/EMSans8x16.h>

#define FontDefault EMKotak5x7
#define FontBesar EMSans8x16

// DMDESP Setup
#define DISPLAYS_WIDE 2 // Kolom Panel
#define DISPLAYS_HIGH 2 // Baris Panel
DMDESP Disp(DISPLAYS_WIDE, DISPLAYS_HIGH);  // Jumlah Panel P10 yang digunakan (KOLOM,BARIS)

// WIFI Setup
#define ssid      "elektronmartcom" // Ubah sesuaikan
#define password  "12345678"        // Ubah sesuaikan

// NTP Client Setup
const long utcOffset = 3600 * 7; // Waktu WIB
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", utcOffset);

// Variabel
byte Jam;
byte Men;
byte Det;



//----------------------------------------------------------------------
// SETUP

void setup() {

  // WIFI
  WiFi.begin(ssid, password);

  while ( WiFi.status() != WL_CONNECTED ) {
    delay ( 500 );
    //Serial.print ( "." );
  }

  // NTP
  timeClient.begin();  

  // DMDESP
  Disp.start(); // Jalankan library DMDESP
  Disp.setBrightness(1); // Tingkat kecerahan
  Disp.setFont(FontDefault); // Huruf default
  
}



//----------------------------------------------------------------------
// LOOP

void loop() {

  timeClient.update();
  
  Jam = timeClient.getHours();
  Men = timeClient.getMinutes();
  Det = timeClient.getSeconds();

  // JUDUL
  Disp.setFont(FontDefault);
  Disp.drawText(2,3,"DMDESP NTP");

  // JAM
  char jam[9];
  sprintf(jam,"%02d:%02d:%02d", Jam, Men, Det);
  Disp.setFont(FontBesar);
  Disp.drawText(0,13,jam);  
  
  Disp.loop();

}
