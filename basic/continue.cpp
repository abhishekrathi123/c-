#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=40;i++){
        cout<<i<<endl;
        if(i==9){
            break;
        }
    }
    cout<<endl<<endl;
    for(int i=0;i<=40;i++){
        
        if(i==4){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}