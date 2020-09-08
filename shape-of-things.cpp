#include <iostream>

using std::cout;

int main(int argc, char** argv) {
  for (int row = 1; row <= 10; row++) {
    for (int hashNum = 1; hashNum <= 9; hashNum++) {
      cout << "#";
    }
    cout << "\n";
  }
}
