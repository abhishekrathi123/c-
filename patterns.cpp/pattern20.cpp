#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<a){
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=i){
            cout<<"*";
            k++;
        }
        i++;
        cout<<endl;
        a--;
    }
    return 0;
}