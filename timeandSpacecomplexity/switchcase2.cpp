#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the age = ";
    cin>>n;
    while(1){
         switch(n){
        
       
        case 18:
           cout<<"age is 18";
           //break;
           continue;
           
        case 0:
           cout<<"age is 0";
           //break;
        default:
           cout<<"age is not in menu";
           break;            
    }
    exit(0);
}
    return 0;
}