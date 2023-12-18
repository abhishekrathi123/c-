#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //printing 1 to n integers
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<setw(4)<<i<<endl;
    }
    return 0;
}