#include<iostream>
using namespace std;
int main(){
    int a=23,b=3,c=4;
    if(a>b&&a>c){
        cout<<"a is greatest no";
    }
    else if(b>c){
        cout<<"b is greatest no ";
    }
    else {
        cout<<"c is greatest no ";
    }
    return 0;
}