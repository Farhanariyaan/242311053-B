
#include <iostream>
using namespace std;

int main() {
    int a, c;
    cout << "ENTER TWO NUMBER: ";
    cin >> a >> c;

    a = a + c;
    c = a - c;
    a = a - c;

    cout << "AFTER SWAPPING : a = " << a << ", c = " << c << endl;
    return 0;
}
//int main ()
// {
//     int a,c,temp;
//     cout<<"ENTER TWO NUMBER:";
//     cin>>a >> c;
    
//     temp=a;
//     a=c;
//     c=temp;

//     cout <<"AFTER SWAP: a= "<< a << "c=" <<c <<endl;
// }