#include<iostream>
using namespace std;
int main()
{
    int x;
    x=10;
    int *p,*q;
    cout<<"1."<<x<<endl;
    
    x=20;
    p=&x;q=&x;
    cout<<"2."<<*p<<endl;
    cout<<&p<<endl;
    cout<<"3."<<*q<<endl;
    cout<<&q<<endl;

    x=100;
    cout<<"4."<<*p<<endl;
    cout<<"5."<<*q<<endl;

    *p=30;
    cout<<"6."<<*p<<endl;
     
    x++;
    cout<<"7."<<*p<<endl;
    *p++;//address er increment hoise
    cout<<"8."<<x<<endl;
    cout<<"9."<<*p<<endl;//ekhane address change korar karone vitore kono value nai tai garbage value dekhaitese
    cout<<"10."<<&p<<endl;//increment kora address print hobe
    (*p)++;//value increment hobe
    cout<<"11."<<p<<endl;
    cout<<"12."<<*p<<endl;


}