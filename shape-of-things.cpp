#include <iostream>

using std::cout;

void printNumOfHash(int i) {
  for (int hashNum = 1; hashNum <= i; hashNum++) {
      cout << "#";
  }
}

int main(int argc, char** argv) {
  int spaceNum;

  for (int row = 1; row <= 5; row++) {
    for (int spaceBNum = 0; spaceBNum <= row - 1; spaceBNum++) {
      cout << " ";
    }
    printNumOfHash(row);
    for (int spaceMNum = 1; spaceMNum <= 20 - 4 * row; spaceMNum++) {
      cout << " ";
    }
    printNumOfHash(row);
    cout << "\n";
  }
}
