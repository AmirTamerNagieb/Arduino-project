const int trigPin = 3;
const int echoPin = 4;

void setup() {
  pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

      Serial.begin(9600);
      }

      void loop() {
        digitalWrite(trigPin, LOW);
          delayMicroseconds(2);

            digitalWrite(trigPin, HIGH);
              delayMicroseconds(10);
                digitalWrite(trigPin, LOW);

                  long duration = pulseIn(echoPin, HIGH, 30000);

                    if (duration == 0) {
                        Serial.println("No object detected");
                          }
                            else {
                                float distance = duration * 0.0343 / 2;

                                    Serial.print("Distance: ");
                                        Serial.print(distance);
                                            Serial.println(" cm");
                                              }

                                                delay(200);
                                                }
