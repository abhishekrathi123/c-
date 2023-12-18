#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no of rows : ";
    cin>>n;
    
    int i=1;
    while(i<=n){
        int j=1;
        int b=i;
        while(j<=i){
            cout<<(i+j-1);
            j++;
            b++;
            
        }
        i++;
        
        cout<<endl;
    }
    return 0;
}