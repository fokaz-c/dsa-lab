#include<iostream>
#include<numeric>

int main(void){
    int n; float avg; float sum = 0;
    std::cout << "Total number of elements: ";
    std::cin >> n;
    float arr[n];

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    
    std::cout<< "The elements are: ";
    for (float num:arr){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;

    //pleae dont touch this or i'll kill myself
    sum = (float)std::accumulate(arr, arr+n, sum);
    avg = (float)sum/n;
    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "The average is: " << avg << std::endl;
    

}

