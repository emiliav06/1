#include<iostream>
using namespace std;
int main(){

/// програмата въвежда от клавиатурата цяло число n и масив от цели числа A0, A1, A2, ... , An-1
/// да се намерят макс ел. от масива и неговия индекс
    int n, br=0, index=0;

    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long max1=arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i]>max1)
            {
            max1=arr[i];
            index=i;
            }
    }

    cout << max1 << " " << index;

    return 0;
}
