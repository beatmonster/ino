void leced(int col, int row, String words) {
  lcd.setCursor(col, row);
  lcd.print(words);
  lcd.print("   ");
}
