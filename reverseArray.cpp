#include <iostream>
using namespace std;

//-------------------------------------
// reverse an array

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    while (start < end)
    {

        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

main()
{
    int arr[6] = {1, 2, 3, 4, 5,6};
    int size = 6;

    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}