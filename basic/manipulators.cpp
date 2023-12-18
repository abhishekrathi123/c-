#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=2,b=23,c=234,d=2345;
    cout<<"without setw"<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
    cout<<"with setw"<<endl;
    cout<<setw(4)<<a<<endl<<setw(4)<<b<<endl<<setw(4)<<c<<endl<<setw(4)<<d<<endl;
    return 0;
}