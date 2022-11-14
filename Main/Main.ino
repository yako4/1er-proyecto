

const byte IO13 = 13;

int adc_value = 0;
float voltage_value = 0;


void setup() {
  Serial.begin(115200);

}

void loop() {
  adc_value = analogRead( IO13);
  Serial.print("adc valor = ");
  Serial.println(adc_value);
  // delay(1000);
  voltage_value = (adc_value * 3.3 ) / (4095);
  Serial.print("voltage = ");
  Serial.print(voltage_value);
  Serial.println(" volts");
  delay(1000);
  
  
}
