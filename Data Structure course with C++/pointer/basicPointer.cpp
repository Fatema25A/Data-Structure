#include<iostream>
using namespace std;
int main()
{
    int x;
    x=10;
    cout<<"1."<<x<<endl;
    cout<<"2."<<&x<<endl;

    int *p;//pointer variable declare
    p=&x;//pointer variable assign
    cout<<"3."<<p<<endl;
    cout<<"4."<<&p<<endl;

    x=20;
    cout<<"5."<<*p<<endl;

    int **q;
    q=&p;
    cout<<"6."<<q<<endl;
    cout<<"7."<<&q<<endl;
    cout<<"8."<<*q<<endl;
    cout<<"9."<<**q<<endl;

    *p=100;
    cout<<"10."<<x<<endl;
    cout<<"11."<<*q<<endl;

    return 0;


}