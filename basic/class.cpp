#include<iostream>
using namespace std;

class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1){
        a=a1;
        b=b1;
        c=c1;

    }
    void getdata() { 
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;
    cout<<"the value of d is "<<d<<endl;
    cout<<"the value of e is "<<e<<endl;
    }
};
int main(){
    employee harry;
    // harry.a=9;
    // harry.b=2;
    // harry.c=4;
    harry.d=7;
    harry.e=8;
    harry.setdata(2,4,8);
    harry.getdata();

    return 0;
}