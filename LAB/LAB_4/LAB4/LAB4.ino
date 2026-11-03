#include <DHT.h>
#include <LiquidCrystal.h>

#define DHTPIN A0     
#define DHTTYPE DHT22  

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  
  dht.begin();
  
  lcd.print("Iniciando DHT22");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Esperar 2 segundos entre mediciones (el DHT22 toma un tiempo en actualizar)
  delay(2000);

  // Leer la humedad
  float h = dht.readHumidity();
  // Leer la temperatura en grados Celsius
  float t = dht.readTemperature();

  // Comprobar error en la lectura
  if (isnan(h) || isnan(isnan(t))) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Error leyendo");
    lcd.setCursor(0, 1);
    lcd.print("sensor DHT22");
    return;
  }

  // Mostrar datos en la pantalla LCD
  lcd.clear();
  
  //Temperatura
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" C");

  //Humedad
  lcd.setCursor(0, 1);
  lcd.print("Humedad: ");
  lcd.print(h);
  lcd.print(" %");
}