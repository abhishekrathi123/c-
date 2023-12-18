#include<iostream>
using namespace std;

int fibonacci(int n){
    int a=0,b=1;
    int fibo=0;
    if(n==1){
        return 0;
    }
    else if (n==2){
        return 1;
    }

    for(int i=3;i<=n;i++){
        fibo=a+b;
        a=b;
        b=fibo;
    }
    return fibo;
}

int main(){
    int n;
    cin>>n;
    int ans=fibonacci(n);
    cout<<ans;

    return 0;
}