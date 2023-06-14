![fajny_termometr](https://github.com/Snowyy4K/projekt_arduino/assets/44754701/ee4df606-23dc-43f4-bb44-65d16f6d8e7d) <br />
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
Asemblaż, nagrany przeze mnie, można znaleźć pod tym linkiem: https://www.youtube.com/watch?v=A6GCf6XGyAs <br/>
Po skończonym składaniu, należy odpalić program Arduino IDE, wybrać płytkę Arduino, z którą ma się do czynienia, wkleić [kod](https://github.com/Snowyy4K/projekt_arduino/blob/main/kod) oraz przesłać go do płytki korzystając z guzika Upload.
# Przykładowe zdjęcie działającego termometra w symulatorze
![ewewewew](https://github.com/Snowyy4K/projekt_arduino/assets/44754701/3138d1f8-c6c6-4836-a00f-824aedb76d83)
# Jak to działa?
Kod napisany, aby termometr w ogóle działa, wykorzystuje bibliotekę LiquidCRystal do obsługi wyświetlacza. Tworzony zostaje obiekt 'lcd' typu 'LiquidCrystal', który jest inicjalizowany, przekazując piny do podłączenia wyświetlacza LCD do Arduino. Potem, definiowana jest zmienna 'value' jako liczba zmiennoprzecinkowa (float) i zmienna 'tmp' jako integer, która przechowuje numer pinu A1. Sekcja 'void setup()' jest jak nazwa wskazuje, przywoływana jedynie na początku działania programu, i ustawia pin 'tmp' jako INPUT. Sekcja 'void loop()' jest wykonywana ciągle po zakończeniu funkcji 'setup()'. W tej częsci kodu odczytywana jest wartość z pinu analogowego A1 za pomocą 'analogRead()'. Następnie ta wartość jest przeliczana na stopnie Celsjusza. Po sekundowej przerwie 'delay(1000)', ekran jest czyszczony i proces się powtarza.
 
