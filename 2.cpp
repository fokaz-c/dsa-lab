#include<iostream>
#include<limits.h>
void minMax(int arr[],int n){
    int min = INT_MAX;
    int max = INT_MIN;
 
    for (int i = 0; i < n; i++){
        if (arr[i] < min){
        min = arr[i];
        }
        if (arr[i] > max){
        max = arr[i];
        }
    }

    std::cout << "The smallest element is: " << min << std::endl;
    std::cout << "The largest element is: " << max << std::endl;
}

int main(){
    int n;
    std::cout << "Total number of elements: ";
    std::cin >> n;
    int arr[n];

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    
    std::cout<< "The elements are: ";
    for (int num:arr){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;
    minMax(arr,n);
    
    return 0;
}

