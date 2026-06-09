#include <iostream>
#include <climits>
using namespace std;


// find smallest array 

// int main(){
//     int smallest = INT_MAX;
//     int array1[5]= {1,0,-4,-30,1};
//     int size = 5;
//     for(int i = 0; i<size; i++){
//         if(array1[i] < smallest){
//             smallest = array1[i];
//         }
//     }
//     cout<<smallest<< endl;

//     cout<<"working";
//     return 0;
// }

// ------------------------

// find lagest array 

// int main(){
//     int array2[6] = {1,3,-6,8,0,6};
//     int size = 6;
//     int lagestValue = INT_MIN;
//     for(int i = 0; i<size; i++){
//         lagestValue = max(array2[i],lagestValue);
//     }
//     cout<<lagestValue;
// }

// ------------------------

// find smallest value on array index

// int main() {
//     int array2[7] = {1, 3, -6, -3, 8, 0, 6};
//     int size = 7;

//     int index = 0;  // Assume first element is smallest

//     for (int i = 1; i < size; i++) {
//         if (array2[i] < array2[index]) {
//             index = i;
//         }
//     }

//     cout << "Smallest element index: " << index << endl;
//     cout << "Smallest element value: " << array2[index] << endl;

//     return 0;
// }


// -------------------------------

// find target number using linear search 

// int main(){
//     int ary1[4] ={0,1,4,6};
//     int size=4;
//     int targetNumber = 4;
//     bool found = false;
//     for(int i=0; i<size; i++){   
//         if(ary1[i] == targetNumber){
//             found = true;
//             cout << "Target found at index: " << i << endl;
//             break;
//         }
        
//     }
//     if(found == false){
//             cout<<-1;
//         }

// }