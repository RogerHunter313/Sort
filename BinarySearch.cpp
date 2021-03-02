#include <iostream>
using namespace std;

int linearSearch(int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if(a[i] == key) {
            return i;
        }
    }
    return -1;
}

int BinarySearch(int a[], int n, int key) {
    int s = 0, e = n - 1;
    while (s <= e) {
       // int mid = (s+e)/2; //overflow possible
       int mid = s + (e-s)/2;

        if(a[mid] == key) {
            return mid;
        }else if (a[mid] > key) {
            e = mid - 1;
        }else{
            s = mid + 1;
        }

    }
    return -1;
}


int main() {

    int myArray[7] = {1,2,3,5,7,8,9};
    int key = 5;
    int n = sizeof(myArray)/sizeof(int);

    for (int i = 0; i < sizeof(myArray)/sizeof(int); i++ ) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    int pos = BinarySearch(myArray, n, key);
    if (pos == -1) {
        cout <<"Key not found" << endl;
    }else {
        cout << "key found at index " << pos << endl;
    }

    return 0;
}
