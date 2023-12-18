#include<iostream>
using namespace std;

int ap(int n){
    int nterm;
    nterm=3*n+7;
    return nterm;

}

int main(){
    int n;
    cin>>n;
    int ans=ap(n);
    cout<<ans;

    return 0;
}