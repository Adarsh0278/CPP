#include <iostream>
#include <vector>
using namespace std;

// find first and last index of taget
// int LastTaget(vector<int> &arr, int target)
// {
//     int start = 0;
//     int end = arr.size()-1;
//     int ans = -1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == target)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else if (arr[mid] > target)
//         {
//             end = mid - 1;
//         }
//     }
//     return ans;
// }

// int firstTaget(vector<int> &arr, int target)
// {
//     int start = 0;
//     int end = arr.size() - 1;
//     int ans = -1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == target)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else if (arr[mid] > target)
//         {
//             end = mid - 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 4, 5, 5, 5, 5, 5, 6, 7, 8};
//     int target = 5;
//     int result1 = firstTaget(arr, target);
//     int result2 = LastTaget(arr, target);

//     cout << result1<<" "<<result2;
//     return 0;
// }

//------------------------------------------------------------------------

// find square root
// int squareRoot(int n)
// {
//     int start = 0;
//     int end = n;
//     int ans = -1;
//     while (start <= end)
//     {
//         long long mid = start + (end - start) / 2;
//         long long sqare = mid * mid;
//         {
//             if (sqare == n)
//             {
//                 ans = mid;
//                 break;
//             }
//             else if (sqare < n)
//             {
//                 ans = mid;
//                 start = mid + 1;
//             }
//             else if (sqare > n)
//             {
//                 end = mid - 1;
//             }
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n = 20;
//     int ans = squareRoot(n);
//     cout<<ans;
//     return 0;
// }

//-------------------------------------------------------------------------

// find target element in 2d array using binary search.

// 1  3  5   7
// 10 11 16 20
// 23 30 34 60
// target = 16

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    int start = 0;
    int end = rows * cols - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int row = mid / cols;
        int col = mid % cols;
        if (matrix[row][col] == target)
        {
            return true;
        }
        else if (matrix[row][col] > target)
        {
            end = mid - 1;
        }
        else if (matrix[row][col] < target)
        {
            start = mid + 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    bool ans= searchMatrix(matrix,111);
    if (ans)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
}