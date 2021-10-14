#include <ESP8266WiFi.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  WiFi.begin("Sundeep", "sundeep123");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print("..");
    Serial.println(WiFi.status());
    delay(200);
  }
  Serial.println();
  Serial.println("NodeMCU is Connected!");
  Serial.println(WiFi.localIP());
  Serial.println(WL_CONNECTED);
  Serial.println(WiFi.status());

}

void loop() {
  // put your main code here, to run repeatedly:

}
