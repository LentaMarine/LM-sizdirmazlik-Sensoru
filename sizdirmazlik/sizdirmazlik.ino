int led = 13;    // Arduino üzerindeki LED
int sizdirmazlik_sensor = 5;    // Sızdırmazlık sensörünün  bağlanacağı pin
int sizdirmazlik = 0;      // Sızdırmazlık = 0 ise kuru, 1 ise sızıntı 

void setup() {
  pinMode(sizdirmazlik_sensor, INPUT);
  Serial.begin(9600);
  Serial.println("Lenta Marine Sizdirmazlik Sensoru");
}

void loop() {
  sizdirmazlik = digitalRead(sizdirmazlik_sensor);   // Sızdırmazlık sensörü okunuyor ve sizdirmazlik değişkenine kaydediliyor
  digitalWrite(led, sizdirmazlik);  // LED durumu sizrimazlik değeri olarak atandı

  if (sizdirmazlik == 1) {
    Serial.println("SIZINTI!");
  }
}
