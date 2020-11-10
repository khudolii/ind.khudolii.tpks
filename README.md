# Індивідуальна робота

### Індивідуальне завдання №2. Проектування пристроїв на базі ESP8266 та керування ними через хмарні сервіси

В ході індивідуальної роботи буде розроблено пристрій детектор руху, який буде надсилати нотифікацію на смартфон, коли відбувається рух поруч з пристроєм.
Пристрій буде розроблено на базі Wemos D1 Mini з ESP8266:

![Image alt](https://github.com/khudolii/ind.khudolii.tpks/raw/main/screenshots/image_2020-11-10_22-04-52.png)

В ролі датчика, який буде визначати рух виступає HC-SR501:

![Image alt](https://github.com/khudolii/ind.khudolii.tpks/raw/main/screenshots/hc-sr5011.jpg)

Розроблена схема пристрою виглядає наступним чином:

![Image alt](https://github.com/khudolii/ind.khudolii.tpks/raw/main/screenshots/schema.jpg)

### Індивідуальне завдання №3. Побудова хмарної платформи для ESP8266/32

Наступним етапом є розробка скетча детекору руху. Розробка ведеться в Arduino IDE:

![Image alt](https://github.com/khudolii/ind.khudolii.tpks/raw/main/screenshots/ide.jpg)

Було використано методи бібліотек `ESP8266WiFi` та `BlynkSimpleEsp8266`
Посилання на повний скетч - https://github.com/khudolii/ind.khudolii.tpks/tree/main/detector

### Індивідуальне завдання №4. Створення мобільних додатків для керування IoT-пристроями на основі App Inventor та HC-05/06

У вигляді додатку на смартфоні буде використано сервіс Blynk, який дозволяє керувати ІоТ пристроями.

Створимо потрібний девайсу в сервісі:

![Image alt](https://github.com/khudolii/ind.khudolii.tpks/raw/main/screenshots/3.jpg)

Налаштуємо потрібні параметри та скопіюємо токен для доступу до додатку з пристрою:

![Image alt](https://github.com/khudolii/ind.khudolii.tpks/raw/main/screenshots/4.jpg)

Знайдемо потрібний віджет, який виконує нотифікації для смартфону:

![Image alt](https://github.com/khudolii/ind.khudolii.tpks/raw/main/screenshots/1.jpg)

Додамо віджет на робоче поле:

![Image alt](https://github.com/khudolii/ind.khudolii.tpks/raw/main/screenshots/2.jpg)

Запустимо роботу додатку та пристрою. Отримаємо результат:

![Image alt](https://github.com/khudolii/ind.khudolii.tpks/raw/main/screenshots/phone.jpg)






