#include <iostream>
#include <vector>
using namespace std;
#include <climits>
// --------------------------------------------------
// question = [-1,0,3,6,-4,43]
// move all negative numbers to the beginning = [-1,-4,0,3,6,43]

// void negativeArray(int arry[6], int size){
//     int movingJ=0;

//     for(int i=0; i<size; i++){
//         if(arry[i] < 0){
//             swap(arry[i],arry[movingJ]);
//             movingJ++;

//         }

//     }
// }

// int main(){
//     int arry[6]= {-1,0,3,6,-4,43} ;
//     int size= 6;
//     negativeArray(arry,size);

//     for(int k=0; k<size;k++){
//         cout<<arry[k]<<" ";
//     }
//     return 0;
// }

//---------------------------------------------------------------

// Move all zeros to the end

// Input:  [0, 1, 0, 3, 12]
// Output: [1, 3, 12, 0, 0]

// void moveZoroEnd(int ary[5], int sz){
//     int j=0;
//     for(int i=0; i<sz;i++){
//         if(ary[i]>0){
//             swap(ary[i],ary[j]);
//             j++;
//         }
//     }
// }

// int main(){
//     int ary[5]={0,1,0,3,2};
//     int sz = 5;
//     moveZoroEnd(ary,sz);

//     for(int i=0;i<sz;i++){
//         cout<<ary[i]<<" ";
//     }

//     return 0;
// }

// -------------------------------------------------------------

// Move all even numbers before odd numbers

// Input:  [1, 2, 3, 4, 5, 6]
// Output: [2, 4, 6, 1, 5, 3]

// void moveZoroEnd(int ary[6], int sz){
//     int j=0;
//     for(int i=0; i<sz;i++){
//         if(ary[i]%2 == 0){
//             swap(ary[i],ary[j]);
//             j++;
//         }
//     }
// }

// int main(){
//     int ary[6]={1, 2, 3, 4, 5, 6};
//     int sz = 6;
//     moveZoroEnd(ary,sz);

//     for(int i=0;i<sz;i++){
//         cout<<ary[i]<<" ";
//     }

//     return 0;
// }

// --------------------------------------------------------------------

// Sort an array of 0s, 1s, and 2s (Dutch National Flag)

// Input:  [2, 0, 2, 1, 1, 0]
// Output: [0, 0, 1, 1, 2, 2]

// void sortArray(vector<int>& arr){
//     int left=0;
//     int index =0;
//     int n= arr.size();
//     int righ = n-1;

//     while(index <= righ){
//         if(arr[index]==0){
//             swap(arr[index],arr[left]);
//             index++;
//             left++;
//         }
//         else if(arr[index]==2){
//             swap(arr[index],arr[righ]);
//             righ--;
//         }
//         else{
//             index++;
//         }
//     }
// }

// int main()
// {
//     vector<int> arr = {2, 0, 2, 1, 1, 0};

//     sortArray(arr);

//     for (int x : arr)
//         cout << x << " ";

//     return 0;
// }

/// -----------------------------------------

// k=2
// input = [10,20,30,40,50,60]
// output = [50,60,40,10,20,30]

// void rotation(vector<int>&arr, int k){
//     int n = arr.size();
//     vector<int> ans(n);

//     for(int index=0; index<n; index++){
//         int newIndex= (index + k)%n;
//         ans[newIndex] = arr[index];
//     }
//     arr= ans;

// }
// int main(){
//     vector<int> arr= {10,20,30,40,50,60};
//     int k=2;
//     rotation(arr,k);
//     for(int x:arr){
//         cout<<x<<" ";
//     }
// }

///---------------------------

// [10,20,30,40,50]
// [30,40,50,10,20]
// (i+n)%n

// void rotate(vector<int> &arr, int k)
// {
//     int n = arr.size();
//     vector<int> ans(n);

//     for (int i = 0; i < n; i++)
//     {
//         int newIndex = (i - k +n) % n;
//         ans[newIndex] = arr[i];
//     }
//     arr = ans;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     int k = 2;
//     rotate(arr, k);
//     for (int x : arr)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }


//-------------------------------------------------------------------------------------

// missing number
// input: [3,0,1]
// output: [2]
// using formula ((n)*(n+1))/2

// void missingNumber(vector<int>&arr){
//     int n = arr.size();
//     int sum =0;
//     for(int i=0;i<n;i++){
//         sum +=arr[i];
//     }
//     int total = ((n)*(n+1))/2;
//     int missNum = total-sum;
//     cout<<missNum;

// }
// int main(){
//     vector<int> arr= {0,1,2,4};
//     missingNumber(arr);
//     return 0;
// }


//-------------------------------------------------------------------


vector<int> rowMax(vector<vector<int>>& arr){
    vector<int> ans;
    int onecount = INT_MIN;
    int row = -1;

    for(int i = 0; i < arr.size(); i++){
        int count = 0;

        for(int j = 0; j < arr[i].size(); j++){
            if(arr[i][j] == 1){
                count++;
            }
        }

        if(count > onecount){
            onecount = count;
            row = i;
        }
    }

    ans.push_back(row);
    ans.push_back(onecount);

    return ans;
}

int main(){
    vector<vector<int>> arr = {
        {1,0,0,0},
        {0,1,1,0},
        {1,1,1,0},
        {0,0,1,0}
    };

    vector<int> result = rowMax(arr);

    cout << "Row Index: " << result[0] << endl;
    cout << "Number of 1s: " << result[1] << endl;

    return 0;
}