#include <iostream>
using namespace std;

// int main()
// {
//     int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
//     int size = 10;
//     int j = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] != arr[j])
//         {
//             j++;
//             // arr[j] = arr[i];
//         }
//     }
//     cout << j+1;
// }

//----------------------------------------int removeElement(vector<int>& nums, int val) {
int main()
{   int val =3;
    int nums[] = {3,2,2,3};
    int k = 0;
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != val)
        {
            k++;
            nums[k] = nums[i];
            cout<<nums[k];
        }

    }
    // cout<<k;
    // return k + 1;
}