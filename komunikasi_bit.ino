void komunikasi_bit(int val) {
  int a = 1 & val >> 0;
  int b = 1 & val >> 1;
  int abcd = 2 * b + 1 * a;
  digitalWrite(pin1, 1 & val >> 0);
  digitalWrite(pin2, 1 & val >> 1);
  lcd.setCursor(0, 0);
  lcd.print(abcd);
}
