#include <iostream>
using namespace std;

void bubblesort (int a[], int n) {
    for(int count = 1; count <= n - 1; count++) {
        for (int j = 0; j <= n - 2; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j],a[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main() {

    int myArray[5] = {2,1,3,5,4};

    for (int i = 0; i < sizeof(myArray)/sizeof(int); i++ ) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    bubblesort(myArray, sizeof(myArray)/sizeof(int));

    return 0;
}
