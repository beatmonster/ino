long ir(int pin) {
  long vin, jarak;
  switch (pin) {
    case 0:
      vin = analogRead(sharp);
      jarak = 29.988 * pow(map(vin, 0, 1023, 0, 5000) / 1000.0, -1.173);
      return jarak;
      break;
    case 1:
      vin = analogRead(A6);
      jarak = 29.988 * pow(map(vin, 0, 1023, 0, 5000) / 1000.0, -1.173);
      return jarak;
      break;
    case 2:
      vin = analogRead(A7);
      jarak = 29.988 * pow(map(vin, 0, 1023, 0, 5000) / 1000.0, -1.173);
      return jarak;
      break;
  }
}
