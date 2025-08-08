#include<iostream>
#include <climits>
using namespace std;



int main() {
    int n;
    cout <<"ENTER THE ELEMENT:";
    cin>> n;
    int array[n];
    cout<<"ENTER THE NUMBERS:";
    for (int i=0;i<n;i++){
        cin>> array[i];
    }

    int target;

    cout << "SEARCH OF THE VALUE: ";
    cin >> target;


    int low = 0, high = n - 1, mid;
    bool found = false;

    while (low <= high) {
        mid = (low + high) / 2;

        if (array[mid] == target) {
            cout << "INDEX NUMBER: " << mid << endl;
            found = true;
            break;
        }
        else if (array[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        cout << "NOT FOUNT THE VALUE" << endl;
    }

    return 0;
}