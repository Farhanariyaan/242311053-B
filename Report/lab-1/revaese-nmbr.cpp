#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER THE NUMBER OF ARRAY : ";
    cin>>n;

    int a[n];
    cout<<"ENTER ELEMENT: ";

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    };

    cout<<"ARRAY BEFORE: ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"ARRAY AFTER: ";
    for(int i=n-1; i>=0; i--)
    {
        cout<<a[i]<<" ";
    }
}