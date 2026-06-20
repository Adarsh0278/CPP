#include <iostream>
#include <climits>
using namespace std;

// int FirstOccurValue(int arr[], int size, int target)
// {
//     int start = 0;
//     int ans = -1;
//     int end = size - 1;
//     int count = 0;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == target)
//         {
//             ans = mid;
//             count++;
//            end= mid - 1;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid +1;
//         }
//         else if(arr[mid]> target)
//         {
//             end = mid-1;
//         }
//     }
//     return ans;
// }
// int main()
// {  
//     int arr[8]={10,20,30,30,30,30,40,50};
//     int size =8;
//     int result = FirstOccurValue(arr,size,30);
//     if(result != -1){
//         cout<<"First element found at Index: "<<result;
//     }
//     else{
//         cout<<"not found";
//     }

//     return 0;
// }


//---------------------------------------------------

int FirstOccurValue(int arr[], int size, int target)
{
    int start = 0;
    int ans = -1;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
           end= mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid +1;
        }
        else if(arr[mid]> target)
        {
            end = mid-1;
        }
    }
    return ans;
}

int LastOccurValue(int arr[], int size, int target)
{
    int start = 0;
    int ans = -1;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
           start= mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid +1;
        }
        else if(arr[mid]> target)
        {
            end = mid-1;
        }
    }
    return ans;

    
}

int TotalCount(int arr[], int size, int target){
        int first = FirstOccurValue(arr,size,target);
        if(first == -1){
            return 0;
        }
        int last = LastOccurValue(arr,size,target);
        // count = first - last + 1  formual
        int count=  last -first +1;

        return count;
    }
int main()
{  
    int arr[8]={10,20,30,30,30,30,40,50};
    int size =8;
    int result = TotalCount(arr,size,30);
    if(result != -1){
        cout<<"Total num of target Element:"<<result;
    }
    else{
        cout<<"not found";
    }

    return 0;
}
