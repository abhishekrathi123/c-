#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=n;
    int i=1;
    while(i<=n){
        int j=1;
        int b=a;
        while(j<=a){
            cout<<j;
            j++;
            
        }
        int k=1;
        while(k<i){
            cout<<"*";
            k++;
        }
        int l=1;
        while(l<i){
            cout<<"*";
            l++;
        }
        int m=1;
        while(m<=a){
            cout<<b;
            b--;
            m++;
        }

        i++;
        cout<<endl;
        a--;
    }
    return 0;
}