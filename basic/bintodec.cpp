#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    int rev=0;

    while(n!=0){
        int bit=n%10;
        
        if(bit==1){
            rev=rev+pow(2,i);

        }
        i++;
        n=n/10;
    }
    cout<<rev;
    
    return 0;
}