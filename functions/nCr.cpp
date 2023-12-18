#include<iostream>
using namespace std;

int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
        int num=factorial(n);
        int denom=factorial(r)*factorial(n-r);
        int nCr=num/denom;

        return nCr;
}

int main(){
    int n,r;
    cout<<"enter the value of n = ";
    cin>>n;
    cout<<"enter the value of r = ";
    cin>>r;
    int ans=nCr(n,r);
    cout<<ans;
    return 0;
            
}