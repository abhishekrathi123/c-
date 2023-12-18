#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no of rows : ";
    cin>>n;
    int a=n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=a){
            cout<<i;
            j++;
        }
        i++;
        a--;
        cout<<endl;
    }
    return 0;
}