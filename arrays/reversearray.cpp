#include<iostream>
using namespace std;

void reversearray(int arr[],int n){
    int start=0;
    int end=n-1;
    for(int i=0;i<n;i++){
        if(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={2,8,6,1,0};
    cout<<"printing the array "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    reversearray(arr,5);
    
    return 0;
}