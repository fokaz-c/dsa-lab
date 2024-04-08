#include<iostream>
using namespace std;

void checkOrder(int arr[], int n){
    bool isAsc = true;
    bool isDec = true;

    for(int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1]) {
            isAsc = false;
        }
        if (arr[i] < arr[i + 1]) {
            isDec = false;
        }
    }

    if (isAsc && !isDec) {
        cout << "Given Array is Ascending";
    } else if (!isAsc && isDec) {
        cout << "Given Array is Descending";
    } else {
        cout << "Array is not Sorted";
    }
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
    checkOrder(arr, n);

    return 0;
}
