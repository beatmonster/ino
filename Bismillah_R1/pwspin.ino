void pwspin(int pwm) {
  if (pwm > 0) {
    analogWrite(pws, pwm);
    digitalWrite(pwsc, 1);
    digitalWrite(pwscw, 0);
  } else if (pwm <= 0) {
    analogWrite(pws, -pwm);
    digitalWrite(pwsc, 0);
    digitalWrite(pwscw, 1);
  }
}
