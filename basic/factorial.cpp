#include<iostream>
using namespace std;

int main(){
    int n,fact=1;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<"factorial of given number : "<<fact<<endl;
    return 0;
}
