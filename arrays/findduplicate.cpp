#include<iostream>
using namespace std;

int duplicate(int arr[],int n){
    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }

    for(int i=1;i<n;i++){
        ans=ans^i;
    }

    return ans;
}

int main(){
    int n;
    cout<<"enter size of the array "<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the elements of the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    cout<<endl;
    int d=duplicate(arr,n);
    cout<<"duplicate in the array is "<<d<<endl;
    return 0;
}