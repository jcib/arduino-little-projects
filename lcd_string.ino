#include <LiquidCrystal.h>

// Inicializar librería del LCD con los números de los pines
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Asignar número de columnas y filas del LCD
  lcd.begin(16, 2);
  // Printear un mensaje en el LCD
  lcd.print("¡Hola, mundo!");
}

void loop() {
  // Colocar cursor en columna 0, línea 1 (segunda fila)
  lcd.setCursor(0, 1);
  lcd.print("Counter: ");
  lcd.print(millis() / 1000);

}
