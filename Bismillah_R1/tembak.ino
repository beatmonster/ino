void tembak(int tem) {
  if (tem == 1) {
    analogWrite(robinl2, 200);
    analogWrite(robinl1, 0);
    analogWrite(robinr2, 200);
    analogWrite(robinr1, 0);
  } else if (tem == 2) {
    analogWrite(robinl2, 0);
    analogWrite(robinl1, 0);
    analogWrite(robinr2, 0);
    analogWrite(robinr1, 0);
  }
}
