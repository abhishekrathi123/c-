#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1,a=n;
    while(i<=n){
        int j=1;
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
            cout<<n-i-m+2;
            m++;
        }
        i++;
        a--;
        cout<<endl;

    }
    int k=1,b=n;
    while(k<=n){
        int j=1;
        while(j<=k){
            cout<<j;
            j++;
        }
        int l=1;
        while(l<b){
            cout<<"*";
            l++;
        }
        int o=1;
        while(o<b){
            cout<<"*";
            o++;
        }
        int p=1;
        while(p<=k){
            cout<<k-p+1;
            p++;
        }
        k++;
        b--;
        cout<<endl;
    }
    return 0;
}