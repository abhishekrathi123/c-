#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1,a=i;
        while(j<=n){
            char ch='A'+i+j-2;
            cout<<ch;
            j++;
            a++;

        }
        i++;
        cout<<endl;

    }
    return 0;
}