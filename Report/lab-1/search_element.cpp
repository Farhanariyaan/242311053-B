#include <iostream>
using namespace std;


int main()
{

    int n;
    cout << "ENTER THE ELEMENT:";
    cin>>n;

    int arr[n];
    cout <<"ENTER THE NUMBERS:";
    for (int i=0;i<n; i++)
    {
        cin>> arr[i];
    }
    int value;
    cout <<"ENTER THE SEARCH VALUE:";
         cin >> value;
    for(int i=0; i<n; i++)
    {
        if (arr[i]==value)
        {
            cout <<"THE NUMBER IS:"<<i <<endl;
             return 0;
        }
    }
    cout << "NOT FOUND"<<endl;
    return 0;
}