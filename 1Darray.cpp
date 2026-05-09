    #include <iostream>
    using namespace std;

    int sumFunction(int arr[],int size){
        int total =0;
        for(int i=0 ; i<size ; i++){
            total += arr[i];
        }
        return total;
    }

    int main(){
        int size = 6;
        int arr[6]={1,2,3,4,5,7};
        int sum1 = sumFunction(arr, size);
        cout<<sum1;

        // int ar1[6] = {1,1,2,2,3,5};
        // int size = 6;
        // int ans = 0;
        // for(int i=0; i<size; i++){
            
        //     ans = ans ^ ar1[i];

        // } 
        //     cout << "unique element XOR result: " << ans << endl;

        return 0;
    }