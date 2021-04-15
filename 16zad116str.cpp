#include<iostream>
using namespace std;
int main(){

/// програмата въвежда от клавиатурата цяло число n и редица от цели числа A0, A1, A2, ... , An-1
/// след това намира и извежда произведението на тези числа от редицата, които са кратни на 7. Ако няма такива извежда No

    int n, br=0;
    int pr=1;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i]%7==0)
            {
            pr = pr * arr[i];
            br++;

            }
    }

    if(br>0)
    {
       cout << pr;
    }
    else{cout << "No";}


    return 0;
}
