#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool palindrome(char data[], int size){
    int start =0;
    int index=0;
    int end = size -1;
    while(start<end){
        if(data[start] == data[end]){
            start ++;
            end --;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char data[20] = "oppo";
    int size = strlen(data);
    bool result = palindrome(data, size);
    if (result)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}