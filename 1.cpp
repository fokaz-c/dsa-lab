#include <iostream>


void insertX(int arr[], int& n, int pos, int x) {
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;
    n++;
}


void deleteElement(int arr[], int& n, int x) {
    for (int i = 0; i < n; i++)
        if (arr[i] == x) {
            for (int j = i; j < n - 1; j++)
                arr[j] = arr[j + 1];
            n--;
            break;
        }
}


int main() {
    int n, choice, x, pos;
    std::cout << "Total number of elements: ";
    std::cin >> n;
    int arr[n];


    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];


    do{
        std::cout << "Enter a function to perform (1. Insert, 2. Delete 3. Exit): ";
        std::cin >> choice;


        switch (choice) {
            case 1:
                std::cout << "Enter an element and position to insert: ";
                std::cin >> x >> pos;
                insertX(arr, n, pos, x);
                break;
            case 2:
                std::cout << "Enter an element to delete: ";
                std::cin >> x;
                deleteElement(arr, n, x);
                break;
            case 3:
                return 1;
            default:
                std::cout << "Enter a valid choice\n";
        }


        std::cout << "Modified array: ";
        for (int i = 0; i < n; i++)
            std::cout << arr[i] << " ";
        
        std::cout<<std::endl;
            

    }while(n!=3);
    return 0;
}
