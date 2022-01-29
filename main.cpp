#define DO_LOG true
#define LIGHT_SENSOR_PORT A0
#define VIBRATION_DISC_PORT 11
#define BOUNDARY_THRESHOLD 200

int light_sensor_value;
int light_latched = 0;

void setup() {
    pinMode(VIBRATION_DISC_PORT, OUTPUT);

#if DO_LOG
    Serial.begin(9600);
#endif
}

void loop() {
    light_sensor_value = analogRead(LIGHT_SENSOR_PORT);

#if DO_LOG
    Serial.println("Analog reading: ");
    Serial.println(light_sensor_value);
#endif

    if (!light_latched && light_sensor_value < BOUNDARY_THRESHOLD) {
        light_latched = 1;
    }

    if (light_latched) {
        digitalWrite(VIBRATION_DISC_PORT, HIGH);
        delay(200);
        digitalWrite(VIBRATION_DISC_PORT, LOW);
        delay(20);
    }
}
