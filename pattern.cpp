#include <iostream>
using namespace std;


// pyramind 

//     *
//    ***
//   *****
//  *******
// *********

// int main()
// {
//     int a = 5;
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < a - i - 1; j++)
//         {
//             cout << " ";
//         }

//         for (int k = 0; k < 2*i + 1; k++)
//         {
//             cout << "*";
//         }

        
//         cout << endl;
//     }

//     return 0;
// }







// * * * * *
//  * * * *
//   * * *
//    * *
//     *

// int main()
// {
//     int n = 5;

//     for (int i = 0; i < n; i++)
//     {
//         // spaces
        
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }


//         // stars
//         for (int k = 0; k < n - i; k++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }

//     return 0;
// }



//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

// int main()
// {

//     int n = 6/2;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }

//         for (int k = 0; k < i + 1; k++)
//         {
//             cout << "* ";
//         }

        
//         cout << endl;
//     }

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }


//         // stars
//         for (int k = 0; k < n - i; k++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }

//     return 0;
// }




//     *
//    * *
//   *   *
//  *     *

// int main()
// {

//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         // for space 
//         for(int k=0; k < n-i; k++){
//             cout << " ";
//         }

//         // for star 
//         for(int j=0 ; j<i+1; j++){
//             // cout<<"* ";
//             if(j ==0 || j == i){
//             cout<<"* ";

//             }else{
//                 cout <<"  ";
//             }
//         }
        
//         cout << endl;
//     }

//     return 0;
// }




//  *     *
//   *   *
//    * *
//     *

// int main(){
//     int n = 6;
//     for(int i=0; i<n ;i++){
//        for(int j = 0; j< i ;j++){
//         cout<<" ";
//        }

//        for(int k =0; k< n-i; k++){
//         //  cout<<"* ";
//           if(k ==0 || k == n-i-1){
//             cout<<"* ";

//             }else{
//                 cout <<"  ";
//             }
//        }


//     cout<<endl;

//     }

//     return 0;
// }


// ****    ****
// ***      ***
// **        **
// *          *
// *          *
// **        **
// ***      ***
// ****    ****

int main(){
    int n = 8;
    for(int i=0; i<n ;i++){
    //   upper

        for(int j = 0; j< n-i ;j++){
            cout<<"*";
         }
    
         for(int k =0; k< 2*i ;k++){
            cout<<" ";
         }
    
         for(int l =0; l< n-i ;l++){
            cout<<"*";
         }

            cout<<endl;
        
    // lower

    }

     for(int i=0; i<n ;i++){
        for(int j = 0; j< i+1 ;j++){
            cout<<"*";
         }
    
         for(int k =0; k< 2*(n-i-1) ;k++){
            cout<<" ";
         }
    
         for(int l =0; l< i+1 ;l++){
            cout<<"*";
         }

            cout<<endl;
    }
    return 0;
}