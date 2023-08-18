// Positive/Negative/Zero Checker:
// Take an integer input from the user and print whether it's positive, negative, or zero.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number "<<endl;
    cin>>num;

    if (num > 0){
        cout<<"Positive Number ";
    }
    else if(num < 0){
        cout<<"Negative Number ";
    }
    else {
        cout<<"You Entered Zero";
    }
}