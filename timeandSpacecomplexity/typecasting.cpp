#include<iostream>
using namespace std;

int main(){
    int a=9;
    float b=23.23;
    cout<<"the value of a is "<<float(a)<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of b is "<<int(b)<<endl;
    cout<<"value of a+b is "<<a+b<<endl;
    cout<<"value of a+b is "<<a+int(b)<<endl;
    cout<<"size of a is "<<sizeof(a)<<endl;
    cout<<"size of b is "<<sizeof(b)<<endl;
    return 0;
}