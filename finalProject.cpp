#include <Arduino.h>

bool start = true, dMotorStart;
int Vrx = A0, Vry = A1, Sw = 2;     // Joy Stick
int motor1 = 6, motor2 = 7, j = 40; // positive,negative
int xPosition = 0, yPosition = 0, Sw_state = 0;
int magnetic1 = A3, magnetic2 = 8; // Hall effect Sensor
int irSensor = 9, relay = 12;      // IR Sensor, relay

void motorOff();
void motorOn(byte x, byte y);
void load();
void drillingUpAndDown();
void drillingMotorOnOff(byte x);
void printConsole();

void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(A0, INPUT);
    pinMode(A1, INPUT);
    pinMode(Sw, INPUT_PULLUP);
    pinMode(motor1, OUTPUT);
    pinMode(motor2, OUTPUT);
    pinMode(irSensor, INPUT);
    pinMode(magnetic1, INPUT);
    pinMode(relay, OUTPUT);
}

void loop()
{
    // put your main code here, to run repeatedly:
    load();
    printConsole();
    drillingUpAndDown();
}

void motorOff()
{
    digitalWrite(motor1, 0);
    digitalWrite(motor2, 0);
}

void motorOn(byte x, byte y)
{
    digitalWrite(motor1, x);
    digitalWrite(motor2, y);
}

void drillingMotorOnOff(byte x)
{
    if (x == 1)
    {
        digitalWrite(relay, HIGH);
    }
    else
        digitalWrite(relay, LOW);
}

void load()
{
    if (digitalRead(irSensor) == 1)
        dMotorStart = false;

    if (dMotorStart)
        digitalWrite(relay, LOW);
    else if (!dMotorStart || digitalRead(magnetic2) == 0)
        digitalWrite(relay, HIGH);

    if (start || digitalRead(magnetic2) == 0)
    {
        dMotorStart = false;
        digitalWrite(relay, HIGH);
        while (digitalRead(irSensor) == 0)
            motorOn(1, 0);
        j = 40;
        start = false;
    }

    xPosition = analogRead(Vrx);
    yPosition = analogRead(Vry);
    Sw_state = digitalRead(Sw);
}

void drillingUpAndDown()
{
    if (xPosition < 100 || yPosition > 900) // UP
    {
        if (digitalRead(irSensor) == 0)
        {
            motorOn(1, 0);
            j++;
        }
        else
            motorOff();
    }
    else if ((xPosition > 900 || yPosition < 100) && digitalRead(magnetic2) != 0) // Down
    {
        if (j > 0)
        {
            dMotorStart = true;
            motorOn(0, 1);
            j--;
        }
        else
            motorOff();
    }
    else
        motorOff();
}

void printConsole()
{
    Serial.print("X: ");
    Serial.print(xPosition);
    Serial.print(" Y: ");
    Serial.print(yPosition);
    Serial.print(" Sw: ");
    Serial.println(Sw_state);
}