#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<0){
        n=(-1)*n;
    }
    int i=0;
    int ans=0;
    while(n!=0){
        int bit=n&1;
        // if(bit==1){
        //     bit=0;
        // }
        // else {
        //     bit=1;
        // }
        ans=(bit*pow(10,i))+ans;
        i++;
        n=n>>1;
    }
    int newans=(~ans);
    
    cout<<newans;
    return 0; 
}