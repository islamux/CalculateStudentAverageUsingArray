#include <iostream>
using namespace std;


void PrintStarsUsingText(string text){

    // New line 
    cout << "\n";

    // Lenght of text
    int textLength = text.length();
    
    // Print * with number of textLenght letter
    int i = 0;
    for(i = 0; i<=textLength; i++){
        cout << "*";
    }
    // New line 
    cout << "\n";
    
    
}
