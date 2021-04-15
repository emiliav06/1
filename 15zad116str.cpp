#include<iostream>
using namespace std;
int main(){

// програмата въвежда от клавиатурата цяло число n и редица от цели числа A0, A1, A2, ... , An-1, след което намира и извежда средноаритметичното на положителните ел. от редицата
    int n, br=0;
    double sbor=0;
    cin >> n;
    double arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i]>0)
            {
            sbor = sbor + arr[i];
            br++;
            }
    }

    if(br>0)
    {
       cout << sbor/br;
    }
    else{cout << 0;}


    return 0;
}
