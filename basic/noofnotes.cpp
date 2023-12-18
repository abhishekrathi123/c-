#include<iostream>
using namespace std;

int main(){
    int a,w,x,y,z;
    cout<<"enter the amount = ";
    cin>>a;
     switch(100){
        case 100: w=a/100;
                  cout<<w<<" notes of hundread"<<endl;
                  a=a-(w*100);
                 
        case 50: x=a/50;
                 cout<<x<<" notes of fifty "<<endl;
                 a=a-(x*50);

        case 20: y=a/20;
                 cout<<y<<" notes of twenty"<<endl;
                 a=a-(y*20);

        case 1: z=a/1;
                cout<<z<<" notes of one"<<endl;
     }
    return 0;
}