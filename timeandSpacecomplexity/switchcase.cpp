#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age ";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"age is 18";
        //break;
        
    case 17:
        cout<<"age is 17";
        break;    
    
    default:
        cout<<"age is above 18";
        break;
    }
    return 0;
}