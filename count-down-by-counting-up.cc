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

  for (int rows = 0; rows < times; rows++) {
    cout << times - rows << "\n";
  }
}

