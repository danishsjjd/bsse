#include <iostream>

int main() {
  const int maxRows = 3;
  const int maxCols = 3;
  int row, col;
  int a[maxRows][maxCols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  std::cout << "Printing in original order:" << std::endl;
  for (row = 0; row < maxRows; row++) {
    for (col = 0; col < maxCols; col++) {
      std::cout << a[row][col] << " ";
    }

    if (row != maxRows) {
      std::cout << std::endl;
    }
  }

  std::cout << "Printing in reverse order:" << std::endl;
  for (row = maxRows - 1; row >= 0; row--) {
    for (col = maxCols - 1; col >= 0; col--) {
      std::cout << a[row][col] << " ";
    }

    if (row != 0) {
      std::cout << std::endl;
    }
  }

  std::cout << std::endl;

  return 0;
}
