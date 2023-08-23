// Merge Two Sorted Arrays into a Single Sorted Array:

#include <iostream>
using namespace std;

int main() {
    int sizeA, sizeB;

    cout << "Enter the size of Array A: ";
    cin >> sizeA;
    int arrayA[sizeA];

    cout << "Enter " << sizeA << " elements for Array A in ascending order: ";
    for (int i = 0; i < sizeA; i++) {
        cin >> arrayA[i];
    }

    cout << "Enter the size of Array B: ";
    cin >> sizeB;
    int arrayB[sizeB];

    cout << "Enter " << sizeB << " elements for Array B in ascending order: ";
    for (int i = 0; i < sizeB; i++) {
        cin >> arrayB[i];
    }

    int mergedSize = sizeA + sizeB;
    int mergedArray[mergedSize];

    int i = 0, j = 0, k = 0;

    while (i < sizeA && j < sizeB) {
        if (arrayA[i] < arrayB[j]) {
            mergedArray[k++] = arrayA[i++];
        } else {
            mergedArray[k++] = arrayB[j++];
        }
    }

    while (i < sizeA) {
        mergedArray[k++] = arrayA[i++];
    }

    while (j < sizeB) {
        mergedArray[k++] = arrayB[j++];
    }

    cout << "Merged Array: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
