#include <iostream>

void merge(int nums1[], int m, int nums2[], int n) {
  int i = m - 1;
  int j = n - 1;
  int k = m + n - 1;

  while (i >= 0 && j >= 0) {
    if (nums2[j] > nums1[i]) {
      nums1[k] = nums2[j];
      j--;
    } else {
      nums1[k] = nums1[i];
      i--;
    }
    k--;
  }
  
  while (j >= 0) {
    nums1[k] = nums2[j];
    j--;
    k--;
  }
}

int main() {
  int m, n;
  std::cout << "Enter the sizes of the arrays (nums1 and nums2): ";
  std::cin >> m >> n;

  int nums1[m+n], nums2[n];
  
  std::cout << "Enter the elements of the first array (nums1): ";
  for (int i = 0; i < m; i++) {
    std::cin >> nums1[i];
  }

  std::cout << "Enter the elements of the second array (nums2): ";
  for (int i = 0; i < n; i++) {
    std::cin >> nums2[i];
  }

  merge(nums1, m, nums2, n);

  std::cout << "Merged array: ";
  for (int num : nums1) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
