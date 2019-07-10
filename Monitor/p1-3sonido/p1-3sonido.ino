const int pinAdc = A2;

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    long sum = 0;
    for(int i=0; i<32; i++)
    {
        sum += analogRead(pinAdc);
    }

    sum >>= 5;

    Serial.println(sum);
    delay(100);
}
