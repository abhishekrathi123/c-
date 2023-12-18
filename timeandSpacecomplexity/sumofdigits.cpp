#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number : ";
    cin>>n;
    while(n>0){
         int ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
     cout<<"sum of digits of the given number = "<<sum<<endl;
     int ans=0;
    if(sum>9){
        while(sum>0){
            int digit=sum%10;
            ans=ans+digit;
            sum=sum/10;

        }

    }
     cout<<"sum of digits of the given number = "<<ans;
   
    return 0;
}