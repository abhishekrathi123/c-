#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter the value of n = ";
    cin>>n;
    int i=1;
    while( i<=n){
        sum=sum+i;
        i++;

    }
    cout<<"sum of numbers upto n = "<<sum<<endl;
    return 0;
}