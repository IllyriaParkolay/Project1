void GetAnalog_A0()
{
    int Purple_Monkey = analogRead(A0);
    Serial.println(Purple_Monkey);
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    delay(Purple_Monkey);             // wait for a second
      // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  /*float voltage = Purple_Monkey * (5.0 / 1023.0);*/
}
