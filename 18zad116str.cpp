#include<iostream>
using namespace std;
int main(){

/// програмата въвежда от клавиатурата цяло число n и редица от цели числа A0, A1, A2, ... , An-1
/// да се намерят макс ел. и мин. ел. от масива и да се изведат техните разлика и произведение
    int n, br=0;

    cin >> n;
    double arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    double max1=arr[0], min1=arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i]>max1)
            {
            max1=arr[i];
            }
    }
    for(int i = 0; i < n; i++){
        if(arr[i]<min1)
            {
            min1=arr[i];
            }
    }

    cout << max1*min1 << " " << max1-min1;

    return 0;
}
