#include<iostream>
using namespace std;

int iseven(int n){
    if(n&1){
        return 0;
    }
    else{
        return 1;
    }
    
}

int main(){

    int num;
    cin>>num;

    if(iseven(num)){
        cout<<"no is even"<<endl;
    }
    else{
        cout<<"no is odd"<<endl;
    }

    return 0;
}