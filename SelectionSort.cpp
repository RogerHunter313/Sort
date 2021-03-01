#include <iostream>
#include <limits.h>  // INT_MAX
using namespace std;

void selectionSort(int a[], int n) {
    for (int i = 0; i <= n-2; i++) { // be sure to to iterate until the second to last element
        int indexSmallest = i;  // initialize by thinking the smallest is at the index i before checking
        for(int j = i+1; j<=n; j++) { // scan elements after i
            if(a[j]<a[indexSmallest]){
                indexSmallest = j; // swap indexes if there is a smaller element
            }
        }

        if(a[i] >= a[indexSmallest]) { // not necessary if you set indexSmallest to i every iteration above
            swap(a[i], a[indexSmallest]);
        }
    }
}



int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }

    selectionSort(a,n);

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
