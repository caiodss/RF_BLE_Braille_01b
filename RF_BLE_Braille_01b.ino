#include <RFduinoBLE.h>
#include <RFduinoGZLL.h>
device_t role = HOST;

//define pins RFduino
int pin1a = 1; //3
int pin1b = 2; //4
int pin2a = 6; //5
int pin2b = 5; //6
int pin3a = 4; //7
int pin3b = 3; //17

int digPin[] = {pin1a, pin1b, pin2a, pin2b, pin3a, pin3b};

int readSp = 750;

void setup() {
//  Serial.begin(9600, 0, 8);

  // initialize pins
  for (int i = 0; i <= 5; i++) {
    pinMode(digPin[i], OUTPUT);
  }

  // start the GZLL stack
  //  RFduinoGZLL.begin(role); // begin BLE communications
  RFduinoBLE.advertisementData = "braille";
  RFduinoBLE.deviceName = "caio";
  RFduinoBLE.begin();
}

void loop() {
  RFduino_ULPDelay(INFINITE);
}

void RFduinoBLE_onConnect() {
  for (int i = 0; i <= 5; i++) {
    digitalWrite(digPin[i], HIGH);
  }
  delay(1000);

  for (int i = 0; i <= 5; i++) {
    digitalWrite(digPin[i], LOW);
  }

  //  Serial.println("Hello");
}

void RFduinoBLE_onDisconnect() {
  // turn all leds off on disconnect and stop pwm
  for (int i = 0; i <= 5; i++) {
    digitalWrite(digPin[i], LOW);
  }
  //  Serial.println("Goodbye");
}

void RFduinoBLE_onReceive(char *data, int len) {

  //create charArray for storing incoming data
  char mydata[1000];
  int eachChar = 0; //to store char by char

  //filling array with incoming data
  for (int l = 1; l <= len; l ++) {
    mydata[l] = data[l];
  }
  //checking data on serialmonitor
  //  Serial.println(mydata);

  //"printing" to braille
  for (int w = 1; w < len; w++) {
    eachChar = mydata[w];
    for (int i = 0; i <= 122; i++) {
      if (eachChar == i) {
        digit(i);

        //prints ASCII value for each character in the string stored in char array 'mydata'
        //Serial.println(eachChar);
        //        Serial.write(eachChar);
      }
    }
  }

  for ( int i = 0; i <= sizeof(data);  ++i )
    data[i] = (char)0;
  eachChar = 0;
}
