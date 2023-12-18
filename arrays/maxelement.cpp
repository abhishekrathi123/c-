#include<iostream>
using namespace std;

int main(){
    int arr[4]={4,12,8,10};
    for(int i=0;i<4;i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    cout <<"maximum element is = "<<arr[0];
    return 0;
}