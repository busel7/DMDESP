# DMDESP - LED P10 library

# Untuk Menjalankan P10 Satu Warna HUB12 dengan NodeMCU ESP8266

## Contoh Project

<a href="http://www.youtube.com/watch?feature=player_embedded&v=cDKsBYR1Nps" target="_blank"><img src="http://img.youtube.com/vi/cDKsBYR1Nps/0.jpg"
alt="JWSP10 NodeMCU ESP8266" width="240" height="180" border="10" /></a>

## Hardware

Controller JWS FullSet PCB ElektronMart JWSNodeMCUP10 Board v2.0
- https://tokopedia.com/elektronmartcom/controller-jws-murottal-quad-multi-panel-wifi-mp3-jam-jadwal-sholat
- https://www.bukalapak.com/p/elektronik/elektronik-lainnya/315l4pa-jual-controller-jws-murottal-quad-multi-panel-wifi-mp3-jam-jadwal-sholat-led-masjid

LED Panel P10
- https://www.tokopedia.com/elektronmartcom/led-display-panel-p10-smd-outdoor-green-hijau
- https://www.bukalapak.com/p/elektronik/komponen-elektronik/2qkxq35-jual-led-display-panel-p10-smd-outdoor-green-hijau


JWS KIT
- https://tokopedia.com/elektronmartcom/jws-kit-controller-led-p10-hub12-mp3-murottal-jadwal-sholat-digital
- https://www.bukalapak.com/p/elektronik/media-player-set-top-box/36buedq-jual-jws-kit-controller-led-p10-hub12-mp3-murottal-jadwal-sholat-digital


PCB Only
- https://tokopedia.com/elektronmartcom/pcb-jws-nodemcu-board-2-0-elektronmart-led-p10-arduino
- https://www.bukalapak.com/p/elektronik/komponen-elektronik/2aiovn2-jual-pcb-jws-nodemcu-board-2-0-elektronmart-led-p10-arduino


### Pin on DMD LED P10 Panel

| DMD P10 | NODEMCU | 
| ------- | ------- |
| A       | D0      |
| B       | D6      |
| CLK     | D5      |
| SCK     | D3      |
| R       | D7      |
| NOE     | D8      |
| GND     | GND     |


### Wiring

https://github.com/busel7/DMDESP/blob/master/wiring.jpg


## Software

- Arduino IDE
  Download & Install : https://www.arduino.cc/en/software
- ESP8266 Board
  Files > Preferences > Settings > Additional Boards Manager URLs : https://arduino.esp8266.com/stable/package_esp8266com_index.json

### Terimakasih Kepada
- dmk007 (HJS589 DMD porting for ESP8266)
- rweather (https://github.com/rweather/arduino-projects/blob/master/libraries/DMD)

### Catatan : 
- Perlu Power Eksternal 5V ke LED P10.

> email : bonny@grobak.net - www.grobak.net - www.elektronmart.com



