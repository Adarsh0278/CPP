#include <iostream>
using namespace std;

void divNagPos(int arr1[], int size) {

    int allNav = 0;

    for(int i = 0; i < size; i++) {

        if(arr1[i] < 0) {

            swap(arr1[i], arr1[allNav]);
            allNav++;
        }
    }
}

int main() {

    cout << "it working" << endl;

    int demo1[] = {1, -3, 5, -2, 6, 3, 0};

    int size = 7;

    divNagPos(demo1, size);

    for(int i = 0; i < size; i++) {

        cout << demo1[i] << " ";
    }

    return 0;
}