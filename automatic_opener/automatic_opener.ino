#define BUTTON_GREEN        BDPIN_GPIO_1
#define BUTTON_RED          BDPIN_GPIO_2
#define MOTOR_OPEN_SPEED    500
#define MOTOR_CLOSE_SPEED   -500

void setup() {
  Serial.begin(115200);                                                         // Motor1, Motor2
  Serial2.begin(115200);

  Serial2.setTimeout(20);

  pinMode(BUTTON_GREEN, INPUT_PULLUP);
  pinMode(BUTTON_RED,   INPUT_PULLUP);

}

void loop() {
  int button_frontaction  = digitalReadFast(BUTTON_GREEN);
  int button_backaction   = digitalReadFast(BUTTON_RED);

  if(button_frontaction == 0)
    Serial2.println("!M " + String(MOTOR_OPEN_SPEED) + " " + String(MOTOR_OPEN_SPEED));
  else if (button_backaction == 0)
    Serial2.println("!M " + String(MOTOR_CLOSE_SPEED) + " " + String(MOTOR_CLOSE_SPEED));
  else
    Serial2.println("!M " + String(0) + " " + String(0));
    
  delay(100);

}
