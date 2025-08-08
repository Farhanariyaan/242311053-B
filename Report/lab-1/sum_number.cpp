#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;

    cout<<"ENTER THE ELEMENT: ";
    cin>>n;

    int a[n];

    cout<<"ENTER THE NUMBERS: ";

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }

    cout<<"SUM OF THE NUMBER: "<<sum<<endl;

}