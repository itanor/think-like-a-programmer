#include <iostream>
using std::cin;
using std::cout;
using std::stoi;

int main(int argc, char* argv[]) {
  if (argc <= 1) {
    cout << "Invalid number of arguments\n";
    cout << "run as: ./app 5\n";
    exit(1);
  }
  int times = stoi(argv[1]);

  int pivot = (times/2) + 1;
  int diff = 2;

  for (int rows = 1; rows <= times; rows++) {
    int exp = rows;
    if (rows > pivot) {
      exp = rows - diff;
      diff += 2;
    }
    for (int hashes = 1; hashes <= exp; hashes++) {
      cout << "#";
    }
    cout << "\n";
  }
}

