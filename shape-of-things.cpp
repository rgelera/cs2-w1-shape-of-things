#include <iostream>

using std::cout;

void printNumOfHash(int i) {
  for (int hashNum = 1; hashNum <= i; hashNum++) {
      cout << "#";
  }
}

void printSpaces(int i) {
  for (int spaceBNum = 1; spaceBNum <= i; spaceBNum++) {
      cout << " ";
    }
}

int main(int argc, char** argv) {
  int spaceNum;

  for (int row = 1; row <= 5; row++) {
    printSpaces(row); // starting spaces
    printNumOfHash(row); // starting hashes
    printSpaces(20 - 4 * row); // middle spaces
    printNumOfHash(row); // last hashes
    cout << "\n";
  }

  // doing it in reverse for the bottom half
  for (int row = 5; row >= 1; row--) {
    printSpaces(row); // starting spaces
    printNumOfHash(row); // starting hashes
    printSpaces(20 - 4 * row); // middle spaces
    printNumOfHash(row); // last hashes
    cout << "\n";
  }
}
