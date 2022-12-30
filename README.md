# DMDESP - LED P10 library

# Untuk Menjalankan P10 Satu Warna HUB12 dengan NodeMCU ESP8266

## Contoh
| Tutorial | Example |
|----------|---------|
| <a href="https://youtube.com/playlist?list=PLKuQ-UWqAt3OseL7NHUupuKpr04o4ReUD" target="_blank"><img src="https://i.ytimg.com/vi/W6BT-Ju3rFg/hqdefault.jpg" alt="Playlist Tutorial DMDESP" width="240" height="180" border="10" /></a> | <a href="http://www.youtube.com/watch?feature=player_embedded&v=cDKsBYR1Nps" target="_blank"><img src="http://img.youtube.com/vi/cDKsBYR1Nps/0.jpg" alt="JWSP10 NodeMCU ESP8266" width="240" height="180" border="10" /></a> |


## Hardware

PCB Only
- https://tokopedia.com/elektronmartcom/pcb-jws-nodemcu-board-2-0-elektronmart-led-p10-arduino
- https://shopee.co.id/PCB-Controller-Jam-Sholat-JWS-NodeMCU-Board-2.0-ElektronMart-LED-P10-Arduino-i.139057740.7134254234
- https://www.bukalapak.com/p/elektronik/komponen-elektronik/2aiovn2-jual-pcb-jws-nodemcu-board-2-0-elektronmart-led-p10-arduino

Controller JWS FullSet PCB ElektronMart JWSNodeMCUP10 Board v2.0
- https://tokopedia.com/elektronmartcom/controller-jws-murottal-quad-multi-panel-wifi-mp3-jam-jadwal-sholat
- https://shopee.co.id/Controller-JWS-Murottal-Quad-Multi-Panel-Wifi-MP3-Jam-Jadwal-Sholat-i.139057740.3147793428?sp_atk=ceee2c4d-226d-48a4-9cd3-2aa6102d8b6c&xptdk=ceee2c4d-226d-48a4-9cd3-2aa6102d8b6c
- https://www.bukalapak.com/p/elektronik/elektronik-lainnya/315l4pa-jual-controller-jws-murottal-quad-multi-panel-wifi-mp3-jam-jadwal-sholat-led-masjid

LED Panel P10
- https://www.tokopedia.com/elektronmartcom/led-display-panel-p10-smd-outdoor-green-hijau
- https://shopee.co.id/LED-Display-Panel-P10-SMD-Outdoor-Green-Hijau-Red-Merah-i.139057740.6437366313?sp_atk=e26a9550-5e6e-4066-aa06-cb2327f32c1d&xptdk=e26a9550-5e6e-4066-aa06-cb2327f32c1d
- https://www.bukalapak.com/p/elektronik/komponen-elektronik/2qkxq35-jual-led-display-panel-p10-smd-outdoor-green-hijau


JWS KIT
- https://tokopedia.com/elektronmartcom/jws-kit-controller-led-p10-hub12-mp3-murottal-jadwal-sholat-digital
- https://shopee.co.id/JWS-KIT-Controller-Jam-Masjid-LED-P10-HUB12-MP3-Murottal-Jadwal-Sholat-Digital-i.139057740.3232523760?sp_atk=2e4124b1-a643-4b06-9143-a671c06fb043&xptdk=2e4124b1-a643-4b06-9143-a671c06fb043
- https://www.bukalapak.com/p/elektronik/media-player-set-top-box/36buedq-jual-jws-kit-controller-led-p10-hub12-mp3-murottal-jadwal-sholat-digital



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



