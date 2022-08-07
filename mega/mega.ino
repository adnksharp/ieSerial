#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define led LED_BUILTIN

Adafruit_SSD1306 oled(128, 64, &Wire, -1);

void setup()
{
    Serial1.begin(115200);
    oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    oled.clearDisplay();
    oled.display();
    pinMode(led, OUTPUT);
}

void loop()
{
    if (Serial1.available() > 0)
    {
        oled.clearDisplay();
        oled.setTextColor(WHITE);
        oled.setCursor(0, 0);
        oled.println("ESP:\n" + Serial1.readString());
        oled.display();
    }
    digitalWrite(led, LOW);
}