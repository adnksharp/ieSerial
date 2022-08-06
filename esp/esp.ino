#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 oled(128, 64, &Wire, -1);

void setup ()
{
    Serial.begin(115200);
    oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    oled.clearDisplay();
    oled.setTextColor(WHITE);
    oled.setCursor(0, 0);
    oled.println("<h1>\n  aK#\n</h1>");
    oled.display();
}

void loop ()
{
    if (Serial.available())
    {
        Serial.println("Dato recibido");
        oled.clearDisplay();
        oled.setTextColor(WHITE);
        oled.setCursor(0, 0);
        oled.println(Serial.readString());
        oled.display();
    }
}