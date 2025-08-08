#include<iostream>
#include <climits>
using namespace std;



int main (){
    int n;
    cout << "ENTER THE ELEMENT:";
    cin>> n;


    int array[n];
    int position;
    cout << "ENTER THE NUMBER:";
    for (int i=0;i<n;i++){
        cin>> array[i];
    }
    cout << "ENTER THE DELETE POSITION:";
    cin >> position;
    for (int i=position; i<n-1;i++){
        array[i]=array[i+1];
    }
    n--;
     cout << "GET NEW ELEMENT:";
    for (int i=0;i<n;i++){
       cout<< array[i]<<" ";
    }
   return 0;
}