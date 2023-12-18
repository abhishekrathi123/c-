#include<iostream>
using namespace std;
int main(){
    int marks[]={23,24,25,21};
    cout<<"marks of student 0 "<<marks[0]<<endl;
    cout<<"marks of student 1 "<<marks[1]<<endl;
    cout<<"marks of student 2 "<<marks[2]<<endl;
    cout<<"marks of student 3 "<<marks[3]<<endl<<endl;
    int* p=marks;
    cout<<"marks of *p is "<<*p<<endl;
    cout<<"marks of *p+1 is "<<*(p+1)<<endl;
    cout<<"marks of *p+2 is "<<*(p+2)<<endl;
    cout<<"marks of *p+3 is "<<*(p+3)<<endl;

    return 0;
}