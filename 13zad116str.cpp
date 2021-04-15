#include<iostream>
using namespace std;
int main(){

//програмата въвежда от клавиатурата цяло число n и редица от цели числа A0, A1, A2 ... An-1, и цяло число х.
//програмата да извежда позицията на първото срещане на х в редицата. Ако х не се съдържа в редицата, да се извежда подходящо съобюение.
    bool k=false;
    int n, x;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> x;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            cout << i + 1;
            k=true;
            break;
        }
    }

    if(k==false)
    {
        cout << "No";
    }
    return 0;
}
