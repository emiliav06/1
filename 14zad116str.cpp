#include<iostream>
using namespace std;
int main(){

// програмата въвежда от клавиатурата цяло число n и редица от цели числа A0, A1, A2, ... , An-1, след което намира и извежда броя на четните числа в редицата.
    int n, br=0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i]%2==0)
            {
            br++;
            }
    }


        cout << br;

    return 0;
}
