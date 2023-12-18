#include<iostream>
using namespace std;

void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=3,b=4;
    cout<<"values before swapping"<<endl;
    cout<<"value of a is "<<a<<" and value of b is "<<b<<endl;
    swap(a,b);
    cout<<"values after swapping "<<endl;
    cout<<"value of a is "<<a<<" and value of b is "<<b<<endl;
    return 0;
}