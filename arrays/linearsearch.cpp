#include<iostream>
using namespace std;

int main(){
    int n,key;
    cout<<"enter the size of the array = ";
    cin>>n;
    int arr[100];
    cout<<"enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to search = ";
    cin>>key;
    for(int j=0;j<n;j++){
        if(arr[j]==key){
            cout<<"searched element index is = "<<j;
        }
    }
    return 0;
}