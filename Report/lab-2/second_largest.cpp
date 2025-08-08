#include<iostream>
#include <climits>
using namespace std;


int main()
{
    int n;
    cout <<"ENTER THE ELEMENT: ";
    cin>>n;

    int array[n];

    cout << "ENTER THE NUMBERS: ";

    for (int i=0; i<n; i++)
    {
        cin >> array[i];
    }

    int first = INT_MIN;
    int second = INT_MIN;
    for (int i=0; i<n; i++)
    {
        if (array[i]>first)
        {
            second = first;
            first =array[i];
        }
        else if (array[i] > second && array[i] != first){

            second=array[i];
        }
    }

    if (second == INT_MIN)
    {
        cout << "There is no element"<<endl;
    }
    else
    {
        cout << "Second Largest number: "<<second<<endl;
    }
}