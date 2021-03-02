#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int myArray[5] = {1,4,2,5,3};

    for (int i = 0; i < sizeof(myArray)/sizeof(int); i++ ) {
        cout << myArray[i] << " ";
    }
    cout << endl;
    // parameters are the beginning point of the array and the point end of the array
    // https://www.geeksforgeeks.org/internal-details-of-stdsort-in-c/
    sort(myArray, myArray + (sizeof(myArray)/sizeof(int)));

    for (int i = 0; i < sizeof(myArray)/sizeof(int); i++ ) {
        cout << myArray[i] << " ";
    }


    return 0;
}
