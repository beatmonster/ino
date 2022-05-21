void pwlift(int pwm) {
  if (pwm > 0) {
    analogWrite(pwup, pwm);
    digitalWrite(pwupc, 1);
    digitalWrite(pwupcw, 0);
  } else if (pwm <= 0) {
    analogWrite(pwup, -pwm);
    digitalWrite(pwupc, 0);
    digitalWrite(pwupcw, 1);
  }
}
