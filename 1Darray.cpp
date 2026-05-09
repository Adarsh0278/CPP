    #include <iostream>
    using namespace std;

    int main(){
        int ar1[6] = {1,1,2,2,3,5};
        int size = 6;
        int ans = 0;
        for(int i=0; i<size; i++){
            
            ans = ans ^ ar1[i];

        } 
            cout << "unique element XOR result: " << ans << endl;

        return 0;
    }