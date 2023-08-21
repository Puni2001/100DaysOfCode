// Find the Largest and Smallest Elements in an Array

#include<bits/stdc++.h>
using namespace std;
int main (){
    int size;
    cout << "Enter the size of arrray "<<endl;
    cin >> size;
    int array[size];

    cout << "Enter " <<size<< " Elements for array "<<endl;

    for ( int i = 0; i < size; i++){
        cin >> array[i];
    }

    int largest = array[0];
    int smallest = array[0];

    for(int i = 1; i < size ; i++){
        if (array[i] > largest){
        largest = array[i];
    }
            if (array[i] < smallest){
        smallest = array[i];
}
    }

cout << "Largest Element is " << largest << endl ; 
cout << "Smallest Element is " << smallest << endl;

return 0 ;
}
