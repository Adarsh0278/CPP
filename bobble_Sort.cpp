#include <iostream>
#include <vector>
using namespace std;

main()
{
    vector<int> arr = {1, 3, -3, 95, 5, 0};
    int n = arr.size();
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int x : arr)
        cout << x << " ";

    return 0;
}