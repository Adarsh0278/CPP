#include <iostream>
using namespace std;


void indexFindArray(int aray[], int size, int findArray){
    bool flage = false;

    for(int i=0; i<size; i++){
        if(aray[i] == findArray){
           cout << "Found " << findArray << " at index " << i << endl;
            flage = true;
            break;
        }
    }
    if(!flage){
        cout<<"notfound";
    }


}

int main(){
    int size = 7;
    int arry[] = {1,2,3,4,5,6,7};
    int findArray =4;
    indexFindArray(arry, size, findArray);

    return 0;
    
}