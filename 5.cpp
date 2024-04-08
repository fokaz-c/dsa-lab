#include<iostream>

bool checkIfPalindrome(int arr[],int n){
  int i = 0; int j = n-1;
  while(i<j){
    if(arr[i]!=arr[j]){
      return false;
    }i++;j--;
  }return true; //works only if the while loop doesn't return anything
}


int main(){
  int n;
  std::cout << "Total number of elements: ";
  std::cin >> n;
  int arr[n];

  std::cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++){
    std::cin >> arr[i];
  }
  if(!checkIfPalindrome(arr,n)){ //if false
    std::cout<<"Is not a Palindrome";
  }
  else if(checkIfPalindrome(arr,n)){ //if true
    std::cout<<"Is a Palindrome.";
  }

  return 0;
}


