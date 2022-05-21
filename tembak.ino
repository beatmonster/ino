void tembak(int tem) {
  if (tem == 1) {
    analogWrite(robinl2, lk);
    analogWrite(robinl1, 0);
    analogWrite(robinr2, lk);
    analogWrite(robinr1, 0);
  } else if (tem == 2) {
    analogWrite(robinl2, 0);
    analogWrite(robinl1, 0);
    analogWrite(robinr2, 0);
    analogWrite(robinr1, 0);
  }
}

void tembak(){
  tembak(1);
  delay(5000);
  komunikasi_bit(1);
  delay(3000);
  komunikasi_bit(2);
  delay(3000);
  komunikasi_bit(3);
}
