#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

#include "password.hpp"

void setup()
{
    Serial.begin(115200);

    WiFi.begin(ssid(), passw());
    while (WiFi.status() != WL_CONNECTED)
        delay(5000);
        
    Serial.println("Red: " + ssid());
    Serial.println("IP: " + WiFi.localIP().toString());
    pinMode(2, OUTPUT);
}

void loop()
{
    if (Serial.available())
    {
        Serial.println("dato recibido");
        digitalWrite(2, LOW);
    }
    digitalWrite(2, HIGH);
}