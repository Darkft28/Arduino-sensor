#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Projet STI2D");
  lcd.setCursor(0, 1);
  lcd.print("Mur vegetal");
  delay(5000);
}

void loop() {

 
 for (int i = 0; i < 30; i++) {   // boucle pour afficher 10 fois la valeur
    lcd.clear();
    lcd.print("Taux d'humidite :");
    lcd.setCursor(0, 1);
    int sensorValue = analogRead(A1);
    float humidity = sensorValue * 100.0 / 715.0;
    lcd.print(humidity, 1);
    lcd.print("%");
    delay(200);
}
delay(500);

 

  lcd.clear();
  lcd.print("Plante : Rosier");
  lcd.setCursor(0, 1);
  lcd.print("Saison : ete");
  delay(2000);

  lcd.clear();
  lcd.print("Plante : Lierre");
  lcd.setCursor(0, 1);
  lcd.print("Saison : hiver");
  delay(2000);

  lcd.clear();
  lcd.print("Temp. de l'eau:");
  lcd.setCursor(0, 1);
  lcd.print("5"),lcd.write((char)223),lcd.print("C");
  delay(2000);

  lcd.clear();
  lcd.print("Temp. exterieure:");
  lcd.setCursor(0, 1);
  lcd.print("18"),lcd.write((char)223),lcd.print("C");
  delay(2000);

  lcd.clear();
  lcd.print("Projet STI2D");
  lcd.setCursor(0, 1);
  lcd.print("Mur vegetal");
  delay(2000);
}
