#include <iostream>
using std::cin;
using std::cout;
using std::stoi;

int doubleDigitValue(int digit) {
  int doubleDigit = digit * 2;
  if (doubleDigit > 10) {
    return 1 + doubleDigit % 10;
  }
  return doubleDigit;
}

int main(int argc, char* argv[]) {
  char digit;
  cout << "enter a one digit number: ";
  cin >> digit;

  int sum = digit - '0';
  cout << "is the sum of digits " << sum << "? \n";
  //int sum = doubleDigitValue(digit);
  //cout << "sum of digits in doubled number: " << sum << "\n";
}


