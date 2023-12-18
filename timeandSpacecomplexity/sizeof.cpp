#include<iostream>
using namespace std;

int main(){
    float a=35.5;
    long double b=35.5;
    cout<<"the size of 35.5 is "<<sizeof(35.5)<<endl;
    cout<<"the size of 35.5f is "<<sizeof(35.5f)<<endl;
    cout<<"the size of 35.5F is "<<sizeof(35.5F)<<endl;
    cout<<"the size of 35.5l is "<<sizeof(35.5l)<<endl;
    cout<<"the size of 35.5L is "<<sizeof(35.5L)<<endl;
    return 0;
}