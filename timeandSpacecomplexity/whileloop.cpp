#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<setw(2)<<i<<endl;
        i++;
    }
    return 0;
}