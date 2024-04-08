#include <iostream>

int removeDuplicates(int nums[], int size) {
  if (size == 0) {
    return 0;
  }
  int j = 0;
  for (int i = 1; i < size; i++) {
    if (nums[i] != nums[j]) {
      j++;
      nums[j] = nums[i];
    }
  }
  return j + 1;
}

int main() {
  const int maxSize = 100; // Maximum size of the array
  int nums[maxSize];
  int input, size = 0;

  std::cout << "Enter elements (enter -1 to stop): ";
  while (std::cin >> input && input != -1) {
    nums[size++] = input;
    if (size == maxSize) {
      std::cerr << "Array size limit reached." << std::endl;
      return 1;
    }
  }

  int newSize = removeDuplicates(nums, size);

  std::cout << "Modified array: ";
  for (int i = 0; i < newSize; i++) {
    std::cout << nums[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}

