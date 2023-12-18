#include<iostream>
using namespace std;
int main(){
    int n,ld,arm=0;
    cout<<"enter the no : ";
    cin>>n;
    int original=n;
    while(n>0){
        ld=n%10;
        arm=arm+(ld*ld*ld);
        n=n/10;
    }
    if(arm==original){
        cout<<"given no is armstrong no";
    }
    else{
        cout<<"given no is not armstrong ";
    }
    return 0;
}