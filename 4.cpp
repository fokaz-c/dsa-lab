#include<iostream>

void reverseElement(int arr[],int i,int j,int n){
    while (i<j){
        std::swap(arr[i],arr[j]);
        i++;
        j--;
    }
    std::cout<<"The Reversed Array is: ";
    for (int k=0;k<n;k++){
        std::cout<<arr[k]<<" ";
    }
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
    reverseElement(arr,0,n-1,n);

    return 0;
}

