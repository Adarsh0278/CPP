#include <iostream>
#include <climits>
using namespace std;

// ------------------------------------------------------------------------------------------
// print all element

// void Matrix(int arry[3][4],int row, int column){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<column; j++){
//             cout<<arry[i][j]<< " ";
//         }

//     }
// }

// int main(){
//     int arry[3][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12}} ;
//     int row= 3;
//     int calumn = 4;
//     Matrix(arry,row,calumn);
// }

//--------------------------------------------------------------------------------------------

// find target

// void Matrix(int arry[3][4], int row, int column, int target)
// {
//     int index = 0;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             index++;
//             if (arry[i][j] == target)
//             {
//                 cout << "Target found: " << target << endl;
//                 cout << "Row: " << i << endl;
//                 cout << "Column: " << j << endl;
//                 return;
//             }
//         }
//     }
// }

// int main()
// {
//     int arry[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//     int row = 3;
//     int calumn = 4;
//     int target = 7;
//     Matrix(arry, row, calumn, target);
// }

// ----------------------------------------------------------------------------------------

// find maximum row

// void MaximumRow(int arry[3][3], int row, int col)
// {
//     int maxinum = INT_MIN;
//     // int store = 0;
//     for (int i = 0; i < row; i++)
//     {
//         int store = 0;
//         for (int j = 0; j < col; j++)
//         {
//             store += arry[i][j];
//         }

//         maxinum = max(maxinum, store);
//     }
//     cout<< maxinum <<endl;

// }

// int main()
// {
//     int arry[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int row = 3;
//     int col = 3;
//     MaximumRow(arry, row, col);
// }


//---------------------------------------------------------------------------



//Diagonal sum

int diagonalSum(int arry[][4], int n){
    int store=0;
    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){
            if(i==j){
                store += arry[i][j];
            }
            else if (j == n-i-1)
            {
                store += arry[i][j];
            }
            
        }
    }
    cout<<store;

}

int main(){
    int arry[4][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n= 4;
    diagonalSum(arry,n);
    return 0;
}