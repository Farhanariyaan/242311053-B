#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"ENTER THE ELEMENT: ";
    cin>>n;

    int array[n],sumArr[n];

    cout<<"ENTER THE NUMBERS: ";
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    sumArr[0]=array[0];

    for(int i=1; i<n; i++)
    {
        sumArr[i]=sumArr[i-1]+array[i];

    }
    cout <<"SUM OF THE NUMBERS ARRAY : ";

    for(int i=0; i<n; i++)
    {
        cout<< sumArr[i] <<" ";

    }

    return 0;
}