#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char start='A'+i-j;
        while(j<=n){
            cout<<start;
            j++;
            start++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}