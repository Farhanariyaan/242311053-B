#include <iostream>
using namespace std;

int main()
{
    int number1,number2,number3;

    cout<<"Enter Three Numbers: ";
    cin>>number1>>number2>>number3;

    int maxNum=number1;

    if(number2>maxNum)
    {
        maxNum=number2;
    }
    if(number3>maxNum)
    {
        maxNum=number3;
    }

    cout<<"MAXIMUM NUMBER OF: "<<maxNum<<endl;
    return 0;
}