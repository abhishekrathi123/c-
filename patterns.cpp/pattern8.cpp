#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no of rows : ";
    cin>>n;
    int a=n;
    int i=1;
    while(i<=n){
        int k=1;
        while(k<a){
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        a--;
        i++;
        cout<<endl;
    }

    return 0;
}