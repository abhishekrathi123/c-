#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int i=1,a=0;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+a;
            cout<<ch;
            j++;
            a++;

        }
        i++;
        cout<<endl;
        

    }
    return 0;
}