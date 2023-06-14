# Prosty projekt Arduino termometra
W tym repo, postaram się przybliżyć prosty schemat na termometr, jak i zaprezentuję jego asemblaż
# Potrzebne komponenty:
  -Płytka Arduino <br />
  -Breadboard <br />
  -Złącza męsko-męskie <br />
  -Potencjometr, ustawiony na maxa <br />
  -Rezystor 220Ω <br />
  -Wyświetlacz LCD 16x2 <br />
  -Sensor temperatury TMP36 <br />
  -Arduino IDE (Do zamieszczenia kodu) <br />
# Asemblaż
Asemblaż, nagrany przeze mnie, można znaleźć pod tym linkiem: https://www.youtube.com/watch?v=A6GCf6XGyAs
# Przykładowe zdjęcie działającego termometra w symulatorze
![Untitled](https://github.com/Snowyy4K/projekt_arduino/assets/44754701/1df81534-8137-4c4f-88ea-57bf243e3c56)
# Jak to działa?
Kod napisany, aby termometr w ogóle działa, wykorzystuje bibliotekę LiquidCRystal do obsługi wyświetlacza. Tworzony zostaje obiekt 'lcd' typu 'LiquidCrystal', który jest inicjalizowany, przekazując piny do podłączenia wyświetlacza LCD do Arduino. Piny podłączone do Arduino to: RS (2), E (4), D4 (8), D5 (9), D6 (10) i D7 (11). Potem, definiowana jest zmienna 'value' jako liczba zmiennoprzecinkowa (float) i zmienna 'tmp' jako integer, która przechowuje numer pinu A1. Sekcja 'void setup()' jest jak nazwa wskazuje, przywoływana jedynie na początku działania programu, i ustawia pin 'tmp' (A1) jako INPUT. Sekcja 'void loop()' jest wykonywana ciągle po zakończeniu funkcji 'setup()'. W tej częsci kodu odczytywana jest wartość z pinu analogowego A1 za pomocą 'analogRead()'. Następnie ta wartość jest przeliczana na stopnie Celsjusza. Po sekundowej przerwie 'delay(1000)', ekran jest czyszczony i proces się powtarza.
 
