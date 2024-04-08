#include<iostream>

void insertX(int n, int arr[], int pos, int x)
{   
    int i;
    n++;
    for(i=n; i>=pos;i--)
    {
        arr[i] = arr [i-1];
    }
    arr[i]=x;
    
}

int deleteElement(int arr[], int n, int x)
{
int i;
for (i=0; i<n; i++)
    if (arr[i] == x)
        break;
if (i < n)
{
    
    n = n - 1;
    for (int j=i; j<n; j++)
        arr[j] = arr[j+1];
}

return n;
}

int main()
{   
    int choice;
    int x; int pos;
    int n;
    std::cout<<"Total number of elements: "<<std::endl;
    std::cin>>n;
    int arr[n];
    std::cout<<"Enter the ELements of the array"<<std::endl;
    int sizeOfArray= sizeof(arr)/sizeof(arr[0]);

    for (int j=0;j<n;j++)
    {
        std::cin>>arr[j];
    }
    
    std::cout<<"Enter a Funtion to Perform: "<<std::endl;
    std::cout<<"1.Insert an Element to the array."<<std::endl;
    std::cout<<"2.Delete an Element from the array. "<<std::endl;
    std::cin>>choice;

    switch (choice)
    {
        case 1:
            std::cout<<"Enter an Element to insert: "<<std::endl;
            std::cin>>x;
            std::cout<<"Enter the postition: "<<std::endl;
            std::cin>>pos;
            insertX(sizeOfArray,arr,pos,x);
            std::cout << "Modified array is \n";    
            for (int i=0; i<=sizeOfArray; i++)
                std::cout << arr[i] << " ";
            break;
             
        case 2:
            std::cout<<"Enter an Element to Delete "<<std::endl;
            std::cin>>x;
            n = deleteElement(arr, sizeOfArray, x);
 
            std::cout << "Modified array is \n";
            for (int i=0; i<sizeOfArray; i++)
                std::cout << arr[i] << " ";
            break;
        
        default:
            std::cout<<"Enter a valid choice"<<std::endl;
            break;
    }
    
    return 0;
}




