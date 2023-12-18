#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array = ";
    cin>>n;
    int arr[100];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int j=0;j<n;j++){
        sum=sum+arr[j];
    }
    cout<<"sum of the given array is = "<<sum;
    return 0;
}