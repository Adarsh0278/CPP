#include <iostream>
#include <vector>
using namespace std;


// Q- search in rotated sorted array | binary search
// output: [4,5,6,7,0,1,2]
// target: 0

// int SearchRotatedSorted(vector<int>&arr,int taget){
//     int start=0;
//     int end = arr.size()-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==taget){
//             return mid;
//         }
//         // left side
//         if (arr[start]<=arr[mid])
//         {
//             if(arr[start] <= taget && arr[mid] > taget){
//                 end= mid-1;
//             }
//             else{
//                 start= mid+1;
//             }
//         }

//         // right side
//         else{
//             if(arr[mid]<taget && taget<=arr[end]){
//                 start= mid+1;
//             }
//             else{
//                 end= mid-1;
//             }
//         }
        
//     }
//     return -1;
// }

// int main(){
//     vector<int>arr = {4,5,6,7,0,1,2};
//     int taget = 1;
//     int result = SearchRotatedSorted(arr,taget);
//     cout<<result;
//     return 0;
// }


//-------------------------------------------------------------------

int dividableNumber(int n){
    int start =0;
    int end = n;
    int ans = -1;
    while (start<=end){
    int mid = start +(end-start)/2;
    int mutiBytwo = mid*2;
        if(n == mutiBytwo){
            ans = mid;
            return ans;
        }
        else if(mutiBytwo < n){
            ans = mid;
            start= mid+1;
        }
        else if(mutiBytwo > n){
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    int n= 14;
    int result = dividableNumber(n);
    cout<<result;
}