// Leap Year Checker:
// Write a program that checks whether a given year is a leap year or not. A leap year is divisible by 4, but not divisible by 100, except if it's also divisible by 400.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year to check leep year or not "<<endl;
    cin>>year;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ){
        cout<< " It's a Leep year ";
    }
    else {
        cout<< " Not a Leep year ";
    }
}