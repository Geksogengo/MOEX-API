// подключение библиотек
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266HTTPClient.h>
#define USE_SERIAL Serial
ESP8266WiFiMulti WiFiMulti;
LiquidCrystal_I2C lcd(0x27, 20, 4);

byte r[8]= {B11110,B1001,B1001,B11110,B1000,B11100,B1000};

void setup() {
  // инициализация LCD
  lcd.init();
  // Включить подсветку и написать текст.
  lcd.backlight();
  lcd.print("      MOEX");
    USE_SERIAL.begin(115200);
   // USE_SERIAL.setDebugOutput(true);
    USE_SERIAL.println();
    USE_SERIAL.println();
    USE_SERIAL.println();
    for(uint8_t t = 4; t > 0; t--) {
        USE_SERIAL.printf("[SETUP] WAIT %d...\n", t);
        USE_SERIAL.flush();
        delay(1000);
    }
   WiFi.mode(WIFI_STA);
   WiFiMulti.addAP("ggggg", "zPASSu");
}

void loop() {
if ((WiFiMulti.run() == WL_CONNECTED)) {

    WiFiClient client;
    HTTPClient http;
    if (http.begin(client, "http://iss.moex.com/iss/engines/stock/markets/shares/boards/TQBR/securities/MTSS?iss.meta=off&iss.only=marketdata&marketdata.columns=LAST"))
    { 
      int httpCode = http.GET();
      if (httpCode > 0) {
        if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
          String payload = http.getString();
               lcd.createChar(0, r);
               lcd.clear();
               lcd.print("MTS:");
               lcd.setCursor(0, 1);
               lcd.write(byte(0));
               lcd.print(" = ");
               lcd.print(payload.substring(90,97));
           
            }
             http.end();
        } else {
            USE_SERIAL.print("[HTTP] GET... failed, no connection or no HTTP server\n");
        }
    }
    //void dsky();
    delay(10000);
}
 {
if ((WiFiMulti.run() == WL_CONNECTED)) {

    WiFiClient client;
    HTTPClient http;
    if (http.begin(client, "http://iss.moex.com/iss/engines/stock/markets/shares/boards/TQBR/securities/DSKY?iss.meta=off&iss.only=marketdata&marketdata.columns=LAST"))
    { 
      int httpCode = http.GET();
      if (httpCode > 0) {
        if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
          String payload = http.getString();
               lcd.createChar(0, r);
               lcd.clear();
               lcd.print("Detskij mir:");
               lcd.setCursor(0, 1);
               lcd.write(byte(0));
               lcd.print(" = ");
               lcd.print(payload.substring(90,99));
           
            }
             http.end();
        } else {
            USE_SERIAL.print("[HTTP] GET... failed, no connection or no HTTP server\n");
        }
    }
    delay(10000);
}
 {
if ((WiFiMulti.run() == WL_CONNECTED)) {

    WiFiClient client;
    HTTPClient http;
    if (http.begin(client, "http://iss.moex.com/iss/engines/stock/markets/shares/boards/TQBR/securities/SNGSP?iss.meta=off&iss.only=marketdata&marketdata.columns=LAST"))
    { 
      int httpCode = http.GET();
      if (httpCode > 0) {
        if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
          String payload = http.getString();
               lcd.createChar(0, r);
               lcd.clear();
               lcd.print("SNGSP:");
               lcd.setCursor(0, 1);
               lcd.write(byte(0));
               lcd.print(" = ");
               lcd.print(payload.substring(90,97));
           
            }
             http.end();
        } else {
            USE_SERIAL.print("[HTTP] GET... failed, no connection or no HTTP server\n");
        }
    }
    delay(10000);
}
{
if ((WiFiMulti.run() == WL_CONNECTED)) {

    WiFiClient client;
    HTTPClient http;
    if (http.begin(client, "http://iss.moex.com/iss/engines/stock/markets/shares/boards/TQBR/securities/RTKMP?iss.meta=off&iss.only=marketdata&marketdata.columns=LAST"))
    { 
      int httpCode = http.GET();
      if (httpCode > 0) {
        if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
          String payload = http.getString();
               lcd.createChar(0, r);
               lcd.clear();
               lcd.print("Rostelecom-P:");
               lcd.setCursor(0, 1);
               lcd.write(byte(0));
               lcd.print(" = ");
               lcd.print(payload.substring(90,97));
           
            }
             http.end();
        } else {
            USE_SERIAL.print("[HTTP] GET... failed, no connection or no HTTP server\n");
        }
    }
    delay(10000);
}

{
if ((WiFiMulti.run() == WL_CONNECTED)) {

    WiFiClient client;
    HTTPClient http;
    if (http.begin(client, "http://iss.moex.com/iss/engines/stock/markets/shares/boards/TQBR/securities/GAZP?iss.meta=off&iss.only=marketdata&marketdata.columns=LAST"))
    { 
      int httpCode = http.GET();
      if (httpCode > 0) {
        if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
          String payload = http.getString();
               lcd.createChar(0, r);
               lcd.clear();
               lcd.print("GAZPROM:");
               lcd.setCursor(0, 1);
               lcd.write(byte(0));
               lcd.print(" = ");
               lcd.print(payload.substring(90,97));
           
            }
             http.end();
        } else {
            USE_SERIAL.print("[HTTP] GET... failed, no connection or no HTTP server\n");
        }
    }
    delay(10000);
}}}}}}
