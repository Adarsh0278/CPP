#include <iostream>
// #include "function.h"

using namespace std;

void sumOfTwoNumbers(int a){
    int total = 0;

    for(int i = 0; i<a ;i++){
        total += i;
        int mul = total *i;
        cout<< mul <<endl;
    }
}

int main(){
    sumOfTwoNumbers(10);
    return 0;
}