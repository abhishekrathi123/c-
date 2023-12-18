#include<iostream>
using namespace std;
int main(){
    int n,ld,rev=0;
    cout<<"enter the no : ";
    cin>>n;
    int original=n;
    while(n>0){
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    if(original==rev){
        cout<<"given no is palindrome";
    }
    else{
        cout<<"given no is not palindrome";
    }
    return 0;
}