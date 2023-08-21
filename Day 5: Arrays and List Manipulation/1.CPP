// Find the Sum and Average of Elements in an Array

#include<bits/stdc++.h>
using namespace std; 
int main (){
    int size;
    int array[size];
    cout << "Enter the size of array " << endl ;
    cin >> size ;

    cout << "Enter " <<size << " of array elements" << endl; 
    for (int i = 0 ; i < size; i++){
        cin >> array[i] ;
    }

    int sum = 0;
    for ( int i = 0; i < size; i++){
        sum += array[i];
    } 
    
    double average = sum / 2 ; 
    
    cout << "The Sum is " <<sum << endl;

    cout << "The Average is " << average << endl;
}