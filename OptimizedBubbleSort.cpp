#include <iostream>
using namespace std;

void bubblesort (int a[], int n) {
    for(int count = 1; count <= n - 1; count++) {
            int flag = 0;
        for (int j = 0; j <= n - 2; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j],a[j+1]);
                flag = 1;
            }
        }
        if (flag = 0) // array sorted
            break;      // come out of loop
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main() {

    int myArray[5] = {1,2,3,4,6};

    for (int i = 0; i < sizeof(myArray)/sizeof(int); i++ ) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    bubblesort(myArray, sizeof(myArray)/sizeof(int));

    return 0;
}

