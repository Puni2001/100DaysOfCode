// Find Maximum of Two Numbers:
// Take two integer inputs from the user and determine and print the larger number.

#include<bits/stdc++.h>
using namespace std;
int main(){

    int num1, num2;

    cout<<" Enter First Number "<<endl;
    cin>>num1;

    cout<<" Enter Second Number "<<endl;
    cin>>num2;

    if ( num1 > num2 ){
        cout<< " Larger number is "<<num1;
    }
    else if ( num2 > num1){
        cout<< " Larger number is "<<num2;
    }
    else {
        cout<<" Both are equal numbers ";
    }
}