#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid+1;
        }
        else if (arr[mid] > target)
        {
            end = mid-1;
        }
    }
    return -1;
}

main()
{

    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;
    int target = 70;

    int result = BinarySearch(arr, size, target);
    if (result != -1)
    {
        cout << "Element found at index: " << result;
    }
    else{

        cout<< "Not found!";
    }

    return 0;
}