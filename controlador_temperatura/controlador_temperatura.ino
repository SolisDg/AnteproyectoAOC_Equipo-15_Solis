void setup() {
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}

void loop() {
    int valor = analogRead(A0);

    // Convertimos 0-1023 en 15-35 °C
    float temperatura = 15.0 + (valor * 20.0 / 1023.0);

    if (temperatura < 25) {
        // Temperatura normal
        digitalWrite(11, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
        digitalWrite(10, LOW);
    }
    else if (temperatura <= 30) {
        // Advertencia
        digitalWrite(11, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
        digitalWrite(10, LOW);
    }
    else {
        // Temperatura alta
        digitalWrite(11, LOW);
        digitalWrite(12, LOW);
        digitalWrite(13, HIGH);
        digitalWrite(10, HIGH);
    }
}