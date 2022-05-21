void algoservo() {
  byte bitdata = 1 * baca + 2 * baca1;
  switch (bitdata) {
    case 0:
      if (!bacaprox) {
        servde.write(112);
        servbe.write(30);
      } else if (bacaprox) {
        while (true) {
          if (!bacaprox) {
            servbe.write(0);
            delay(500);
            servde.write(0);
            break;
          }
        }
      }
      break;
    case 1:
    for(int i = 112; i > 90; i--){
      servde.write(i);
      delay(50);
    }
      break;
    case 2:
      servde.write(0);
      delay(1000);  
      servde.write(120);
      delay(1000);
      servbe.write(90);
      delay(1000);
      break;
    case 3:
      servbe.write(30);
      delay(1000);
      servde.write(0);
      delay(1000);
      while(true){
        
      }
      break;
    default:
      servde.write(112);
      servbe.write(50);
      break;
  }
}
