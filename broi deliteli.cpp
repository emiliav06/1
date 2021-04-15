#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    long long n, imax, brdeliteli=1;
    cout<<"namira delitelite na est chislo"<<endl;
    cout<<"napishi chislo"<<endl;
    cin>>n;

    cout<<"delitelite sa :"<<endl;
    cout<<1<<",";
    imax=n;
    for(long long i=2;i<=imax;i++){
        if(n%i==0){
            brdeliteli=brdeliteli+1;
            cout<<i<<",";
        }
    }
    cout<<endl<<"chisloto ima "<<brdeliteli<<" na broi delitelq";
     return 0;
}

