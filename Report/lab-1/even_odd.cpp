#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int n,even,odd;

    cout<<" ENTER THE ELEMENT: ";
    cin>>n;

    int a[n];

    cout<<"ENTER THE NUMBER: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout<<"TOTAL OF EVEN NUMBER: "<<even<<endl;
    cout<<"TOTAL OF ODD NUMBER: "<<odd<<endl;

    return 0;
}