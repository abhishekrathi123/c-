#include<iostream>
using namespace std;

void alternate(int arr[],int n){
   for(int i=0;i<n;i=i+2){
    if(i+1<n){
        swap(arr[i],arr[i+1]);
    }
    
   }
   
}

int main(){
    int arr[5]={1,2,3,4,5};
    alternate(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }

    // for(int i=0;i<6;i=i+2){
    //     if((i+1)<6){
    //         swap(arr[i],arr[i+1]);
    //     }
    // }
    return 0;
}