#include<iostream>
using namespace std;

void dummy(int n){
    n++;

    cout<<"value of n is = "<<n<<endl;
}

int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    dummy(n);
    cout<<"value of n= "<<n<<endl;

    return 0;
}