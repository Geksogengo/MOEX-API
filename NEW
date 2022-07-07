#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <ESP8266WiFi.h>       
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
ESP8266WiFiMulti wifiMulti;
#include <ESP8266HTTPClient.h>
#define ssid "login"                                        
#define password "pass"
#define USE_SERIAL Serial

LiquidCrystal_I2C lcd(0x27, 20, 4);

byte r[8]= {B11110,B1001,B1001,B11110,B1000,B11100,B1000};

void setup() {
  // инициализация LCD
  lcd.init();
  lcd.backlight();
  lcd.print("      MOEX");
  Serial.begin(9600);         // начать последовательное общение
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();// Отключайте соединение WiFi, к подключению к соединению.
  WiFi.begin(ssid, password);  // Запустите сетевое соединение
  Serial.print("Connecting to "); // Серийный порт монитор вывода сетевой связи
  Serial.print(ssid); Serial.println(" ...");  // Расскажите пользователю nodemcu, чтобы попробовать соединение WiFi
  // Этот сегмент используется для проверки, если WiFi успешно.
  while (WiFi.status() != WL_CONNECTED) {     // Возвращаемое значение функции // wifi.status () определяется статусом соединения WiFi WiFi NODEMCU. 
    delay(500);                               // Если подключение Wi-Fi успешно, возвращаемое значение WL_CONNUCT                       
    Serial.print(".");    
  }                                            // odemcu будет прочитан до тех пор, пока не будет выводиться время подключения на выходе последовательного монитора.
                                                               
  Serial.println("");                          // После успешного соединения Wi-Fi
  Serial.println("Connect sucess!");   // Nodemcu выводят информацию «Успех подключения» через монитор последовательного порта.
  Serial.print("IP address:    ");             // / Также выводят IP-адрес NodeMCU. Эта функция называется
  Serial.println(WiFi.localIP());              // Функция wifi.localip () реализована. Возвращаемое значение функции является IP-адрес NodeMCU.
}

void loop() {
if (wifiMulti.run()) {
    WiFiClient client;
    HTTPClient http;
    if (http.begin(client, "http://iss.moex.com/iss/engines/stock/markets/shares/boards/TQBR/securities/MTSS?iss.meta=off&iss.only=marketdata&marketdata.columns=LAST"))
    { 
      int httpCode = http.GET();
      if (httpCode > 0) {
        if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
          String payload = http.getString();
               Serial.println(String()); 
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
    delay(5000);
}
 {
if (wifiMulti.run()) {
//((WiFi.status() = WL_CONNECTED)) {
    WiFiClient client;
    HTTPClient http;
    if (http.begin(client, "http://iss.moex.com/iss/engines/stock/markets/shares/boards/TQBR/securities/NKNCP?iss.meta=off&iss.only=marketdata&marketdata.columns=LAST"))
    { 
      int httpCode = http.GET();
      if (httpCode > 0) {
        if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
          String payload = http.getString();
               lcd.createChar(0, r);
               lcd.clear();
               lcd.print("HKHX P:");
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
    delay(5000);
}
{
if (wifiMulti.run()) {
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
    delay(5000);
}

{
if (wifiMulti.run()) {
    WiFiClient client;
    HTTPClient http;
    if (http.begin(client, "http://iss.moex.com/iss/engines/stock/markets/shares/boards/TQBR/securities/MGNT?iss.meta=off&iss.only=marketdata&marketdata.columns=LAST"))
    { 
      int httpCode = http.GET();
      if (httpCode > 0) {
        if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
          String payload = http.getString();
               lcd.createChar(0, r);
               lcd.clear();
               lcd.print("MAGNIT:");
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
    delay(5000);
}
{
if (wifiMulti.run()) {
    WiFiClient client;
    HTTPClient http;
    if (http.begin(client, "http://iss.moex.com/iss/engines/stock/markets/shares/boards/TQBR/securities/HYDR?iss.meta=off&iss.only=marketdata&marketdata.columns=LAST"))
    { 
      int httpCode = http.GET();
      if (httpCode > 0) {
        if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
          String payload = http.getString();
               lcd.createChar(0, r);
               lcd.clear();
               lcd.print("RusGidro:");
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
    delay(5000);
}
{
if (wifiMulti.run()) {
    WiFiClient client;
    HTTPClient http;
    if (http.begin(client, "http://iss.moex.com/iss/engines/stock/markets/shares/boards/TQBR/securities/AFKS?iss.meta=off&iss.only=marketdata&marketdata.columns=LAST"))
    { 
      int httpCode = http.GET();
      if (httpCode > 0) {
        if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
          String payload = http.getString();
               lcd.createChar(0, r);
               lcd.clear();
               lcd.print("AFK Sistema:");
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
    delay(5000);
}
}}}}}}
