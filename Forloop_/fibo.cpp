#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    int a=0,b=1;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<=n;i++){
        sum=a+b;
        cout<<sum<<endl;
        a=b;
        b=sum;
    }
    return 0;
}