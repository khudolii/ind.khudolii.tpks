#include &lt;ESP8266WiFi.h&gt;
 
#define BLYNK_PRINT Serial    
#include &lt;BlynkSimpleEsp8266.h&gt;
char auth[] = "47c9d3d8bc924cc1b592cd64d63d3mka";
 
char ssid[] = "WiF405";
char pass[] = "evgeniy123654789";
 
#define ledPin D7 
#define pirPin D1 
int pirValue; 
int motionDetected = 0;
 
void setup()
{
  Serial.begin(115200);
  delay(10);
  Blynk.begin(auth, ssid, pass);
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  digitalWrite(ledPin, LOW);
}
 
void loop()
{
  getPirValue();
  Blynk.run();
}
 
 
void getPirValue(void)
{
  pirValue = digitalRead(pirPin);
  if (pirValue) 
  { 
    Serial.println("Motion detected");
    Blynk.notify("Motion detected");  
  }
   
  digitalWrite(ledPin, pirValue);
}
