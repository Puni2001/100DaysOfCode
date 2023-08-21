// Remove Duplicates from an Array:

#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int array[], int array_size) {
    int unique_elements = 0;

    for (int i = 0; i < array_size; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < unique_elements; j++) {
            if (array[i] == array[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            array[unique_elements] = array[i];
            unique_elements++;
        }
    }

    return unique_elements;
}

int main() {
    int array_size;

    cout << "Enter the size of the array: ";
    cin >> array_size;

    int array[array_size];

    cout << "Enter " << array_size << " elements:" << endl;
    for (int i = 0; i < array_size; i++) {
        cin >> array[i];
    }

    int new_size = removeDuplicates(array, array_size);

    cout << "Array with duplicates removed: ";
    for (int i = 0; i < new_size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}