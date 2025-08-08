#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    int first=INT_MIN;
    int second=INT_MIN;
    cout<<"ENTER THE NUMBER ARRAY: ";
    cin>>n;

    int a[n];

    cout<<"ENTER THE ELEMENT: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        }
        else if(a[i]>second && a[i]!=first)
        {
            second=a[i];
        }
    }

    cout<<"FIRST HIGH ELEMENT: "<<first<<endl;
    cout<<"SECOND HIGH ELEMENT: "<<second<<endl;

    return 0;
}