 // Reverse a String

 #include<bits/stdc++.h>
 using namespace std;
 int main (){
    string input;
    cout << "Enter the String " << endl;
    getline;
    string reversed = " ";
    for(int i = input.length()-1; i >= 0; i--){
        reversed+=input[i];
    }
    cout<<"Reversed String is "<<reversed;
 }