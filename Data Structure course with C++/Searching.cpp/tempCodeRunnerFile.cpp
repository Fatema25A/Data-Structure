#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    
    int a;
    cout<<"Enter the element that you want to search: ";
    cin>>a;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            cout<<a<<" is found at index: "<<i<<endl;
        }
        
        
    }
   
    return 0;
}