#include<iostream>
using namespace std;

int main(){
    float n;
    cout<<"enter the temperature in farenheight = ";
    cin>>n;
    float c=5*(n-32)/9;
    cout<<"temperature in celcious = "<<c;
    return 0;
}