#include<iostream>
using namespace std;
int main(){
    int n,table;
    cout<<"enter the number ";
    cin>>n;
    for(int i=1;i<=10;i++){
        table=n*i;
        cout<<table<<endl;
    }
    return 0;
}