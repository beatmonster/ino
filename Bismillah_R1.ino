//servo naik 47 turun 130
#include <PS2X_lib.h>
#define clc 38
#define com 40
#define att 36
#define dat 42
PS2X ps2x;
byte lk;
#define baca ps2x.read_gamepad(0,0)
#define segi3 ps2x.Button(PSB_TRIANGLE)
#define kotak ps2x.ButtonPressed(PSB_SQUARE)
#define bulat ps2x.Button(PSB_CIRCLE)
#define ex ps2x.Button(PSB_CROSS)
#define atas ps2x.Button(PSB_PAD_UP)
#define bawah ps2x.Button(PSB_PAD_DOWN)
#define kiri ps2x.Button(PSB_PAD_LEFT)
#define kanan ps2x.Button(PSB_PAD_RIGHT)
#define l1 ps2x.Button(PSB_L1)
#define l2 ps2x.Button(PSB_L2)
#define l3 ps2x.Button(PSB_L3)
#define r1 ps2x.Button(PSB_R1)
#define r2 ps2x.Button(PSB_R2)
#define r3 ps2x.Button(PSB_R3)
#define start ps2x.Button(PSB_START)
#define select ps2x.Button(PSB_SELECT)


#define moki 2
#define mokic 45
#define mokicw 47
#define mote 3
#define motec 49
#define motecw 51
#define moka 4
#define mokac 52
#define mokacw 53

#define pws 5
#define pwsc 46
#define pwscw 44
#define pwup 6
#define pwupc 48
#define pwupcw 50

#define robinr1 7
#define robinr2 8
#define robinl1 9
#define robinl2 10

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);

#define pin1 14
#define pin2 15
void setup() {
  setup_pin();
  lcd.init();
  lcd.backlight();
  Serial.begin(57600);
  ps2x.config_gamepad(clc, com, att, dat, false, false);
  setup_mot();
  leced(0, 0, "Bismillah");
  Serial.print("Bismillah");
  delay(1000);
  lcd.clear();
}

void loop() {
  if (baca) {
    if (start) {
      delay(200);
      while (true) {
        if (baca) {
          leced(0, 0, "sik idup");
          if (kanan) {
            leced(0, 1, "kiri");
            pwspin(75);
          } else if (kiri) {
            leced(0, 1, "kanan");
            pwspin(-75);
          } else if (atas) {
            leced(0, 1, "atas");
            pwlift(250);
          }else if (segi3) {
            leced(0, 1, "segitiga");
            lcd.setCursor(8, 1);
            lcd.print(lk);
            lk++;
          }else if (ex) {
            leced(0, 1, "silang");
            lcd.setCursor(8, 1);
            lcd.print(lk);
            lk--;
          }else if (bawah) {
            leced(0, 1, "bawah");
            pwlift(-30);
          } else if (kotak) {
            leced(0, 1, "tembak");
            tembak();
            
          } else if (bulat) {
            leced(0, 1, "stop");
            digitalWrite(14, 0);
            tembak(2);
          } else {
            leced(0, 1, "go");
            pwspin(0);
            pwlift(0);
          }
        } else {
          leced(0, 0, "sik mati");
        }
      }
    }
  }
}
