#include<iostream>
using namespace std;

int findunique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    int arr[100];
    cout<<"enter the elements of the array = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=findunique(arr,n);
    cout<<a;
    return 0;
}

