#include<iostream>
using namespace std;

int setbits(int a,int b){
    int n=0,p=0;
    while(a!=0){ 
        int bit=a&1;
        if(bit==1){
            n++;
        }
        a=a>>1;
    }
    while(b!=0){
        int bits=b&1;
        if(bits==1){
            p++;
        }
        b=b>>1;
    }
    return n+p;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int ans=setbits(a,b);
    cout<<ans;
    return 0;
}