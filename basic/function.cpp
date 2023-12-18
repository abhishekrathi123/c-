#include<iostream>
using namespace std;

int sum(int a,int b);
int main(){
    int a,b;
    cout<<"enter the first no : ";
    cin>>a;
    cout<<"enter the second no : ";
    cin>>b;
    cout<<"sum of two numbers is : "<<sum(a,b);
    return 40;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}