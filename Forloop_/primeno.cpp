#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=0;
            break;
            
        }
        else{
            a=1;
        }
        
      
    }
    if (a==1){
        cout<<"prime no";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}