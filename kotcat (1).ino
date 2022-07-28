int vibor_nostress_pulse = 60; //Пульс в покое
int vibor_nostress_ecg = 511; //ECG в покое
int vibor_nostress_gsr = 200; //GSR в покое

int vibor_stress_pulse = 91; //Пульс в стрессе
int vibor_stress_ecg = 525; //ECG в стрессе
int vibor_stress_gsr = 358; //GSR стрессе

int p; //Подключение переменой
int e; //Подключение переменой
int g; //Подключение переменой

void setup() {
  Serial.begin(38400); //Подключение COM-порта
  
}

void loop() {
  
  p = analogRead(A0); //Поиск среднего арефметического
  e = analogRead(A2); //Поиск среднего арефметического
  g = analogRead(A1); //Поиск среднего арефметического
  if (p < vibor_nostress_pulse && e < vibor_nostress_ecg && g < vibor_nostress_gsr ) { //Сравнение
     Serial.println("Ожидание данных "); //Вывод
    Serial.println("Вы совсем не волнуетесь! Так держать! Удачи на соревнованиях!"); //Вывод
      delay(1000);
  }
   if (p < vibor_nostress_pulse  && e > vibor_nostress_ecg && g > vibor_nostress_gsr ) { //Сравнение
    Serial.println("Ожидание данных "); //Вывод
    Serial.println("Уровень вашего стресса - 1. Низкий. Уровень вашего стресса в допустимой норме. Легкий выброс адреналина в кровь поможет справиться с поставленной задачей.");//Вывод
      delay(1000);
  }
  if (p > vibor_nostress_pulse  && e < vibor_nostress_ecg && g > vibor_nostress_gsr ) { //Сравнение
    Serial.println("Ожидание данных "); //Вывод    
    Serial.println("Уровень вашего стресса - 1. Низкий. Уровень вашего стресса в допустимой норме. Легкий выброс адреналина в кровь поможет справиться с поставленной задачей.");//Вывод
      delay(1000);
  }
  if (p > vibor_nostress_pulse  && e > vibor_nostress_ecg && g < vibor_nostress_gsr ) { //Сравнение
    Serial.println("Ожидание данных "); //Вывод
    Serial.println("Уровень вашего стресса - 1. Низкий. Уровень вашего стресса в допустимой норме. Легкий выброс адреналина в кровь поможет справиться с поставленной задачей.");//Вывод
      delay(1000);
  }

   if (p > vibor_nostress_pulse  && e > vibor_nostress_ecg && g < vibor_nostress_gsr ) { //Сравнение
    Serial.println("Ожидание данных "); //Вывод    
    Serial.println("Уровень вашего стресса - 1. Низкий. Уровень вашего стресса в допустимой норме. Легкий выброс адреналина в кровь поможет справиться с поставленной задачей.");//Вывод
      delay(1000);
  }
  if (p < vibor_nostress_pulse  && e < vibor_nostress_ecg && g > vibor_nostress_gsr ) { //Сравнение
    Serial.println("Ожидание данных "); //Вывод
    Serial.println("Уровень вашего стресса - 2. Средний. Вы волнуетесь. Глубоко дышите. Просто вдохните на четыре счета, а затем так же на четыре счета выдохните. Повторите данную процедуру несколько раз.");//Вывод
      delay(1000);
  }
  if (p > vibor_nostress_pulse  && e < vibor_nostress_ecg && g < vibor_nostress_gsr ) { //Сравнение
    Serial.println("Ожидание данных "); //Вывод
    Serial.println("Уровень вашего стресса - 2. Средний. Вы волнуетесь. Глубоко дышите. Просто вдохните на четыре счета, а затем так же на четыре счета выдохните. Повторите данную процедуру несколько раз.");//Вывод
      delay(1000);
  }
  if (p > vibor_nostress_pulse  && e < vibor_nostress_ecg && g > vibor_nostress_gsr ) { //Сравнение
    Serial.println("Ожидание данных "); //Вывод
    Serial.println("Уровень вашего стресса - 2. Средний. Вы волнуетесь. Глубоко дышите. Просто вдохните на четыре счета, а затем так же на четыре счета выдохните. Повторите данную процедуру несколько раз.");//Вывод
      delay(1000);
  }
    if (p < vibor_stress_pulse  && e < vibor_stress_ecg && g > vibor_nostress_gsr ) { //Сравнение
      Serial.println("Ожидание данных "); //Вывод
    Serial.println("Уровень вашего стресса - 2. Средний. Вы волнуетесь. Глубоко дышите. Просто вдохните на четыре счета, а затем так же на четыре счета выдохните. Повторите данную процедуру несколько раз.");//Вывод
      delay(1000);
  }
  if (p > vibor_nostress_pulse  && e < vibor_stress_ecg && g < vibor_stress_gsr ) { //Сравнение
    Serial.println("Ожидание данных "); //Вывод
    Serial.println("Уровень вашего стресса - 2. Средний. Вы волнуетесь. Глубоко дышите. Просто вдохните на четыре счета, а затем так же на четыре счета выдохните. Повторите данную процедуру несколько раз.");//Вывод
      delay(1000);
  }
  if (p > vibor_stress_pulse  && e < vibor_stress_ecg && g > vibor_nostress_gsr ) { //Сравнение
    Serial.println("Ожидание данных "); //Вывод
    Serial.println("Уровень вашего стресса - 2. Средний. Вы волнуетесь. Глубоко дышите. Просто вдохните на четыре счета, а затем так же на четыре счета выдохните. Повторите данную процедуру несколько раз.");//Вывод
      delay(1000);
  }
  
 if (p > vibor_stress_pulse && e > vibor_stress_ecg && g > vibor_stress_gsr ) { //Сравнение
  Serial.println("Ожидание данных "); //Вывод
    Serial.println("Уровень вашего стресса - 3.  Высокий. Попробуйте метод прогрессирующей мышечной релаксации. Вам нужно напрягать, а затем расслаблять основные группы мышц в течение пяти секунд на каждую. По возможности рекомендуем вам воздержаться от нагрузок: стресс может помешать вам в сегодняшнем соревновании."); //Вывод
    delay(1000);
    
  }
  delay(10000); //Задержка
}
