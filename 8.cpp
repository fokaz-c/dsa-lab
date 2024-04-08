#include <iostream>
#include <unordered_map>

void countFreq(int arr[], int n)
{
  std::unordered_map<int, int> mp;

  for (int i = 0; i < n; i++)
    mp[arr[i]]++;

  for (int i = 0; i < n; i++) {
    if (mp[arr[i]] != -1)
    {
      std::cout << arr[i] << " appeared " << mp[arr[i]] <<" times. "<< std::endl;
      mp[arr[i]] = -1;
    }
  }
}

int main()
{
  int n;
  std::cout << "Enter total number of elements: ";
  std::cin >> n;

  int arr[n];
  std::cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  countFreq(arr, n);
  
  return 0;
}
