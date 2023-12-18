#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the element to be searched = ";
    cin>>a;
    cout<<endl;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(a==arr[i]){
            cout<<"searching elemen is present in the array on "<<i<<" index"<<endl;
            continue;
        }
        // else if(a!=arr[i]){
        //     cout<<"element is not present int the array ";
        //     break;
        // }
        
    }
    return 0;
}