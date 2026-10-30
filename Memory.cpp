#include <iostream>
using namespace std;

int main (){
    //Variables
    int count = 5;
    short status = 2;
    char letter = 'A';
    string s = "ABC";

    //Pointers
    int* pCount = &count;
    short* pStatus = &status;
    char* pLetter = &letter;
    string* pString =  &s;
    
    cout<< "Size of Variable: " << sizeof(count)<< endl;
    cout<< "Size of Pointer: " << sizeof(pCount)<< endl; 
    cout<< "Size of Variable 2: " << sizeof(status)<< endl;
    cout<< "Size of Pointer 2: " << sizeof(pStatus)<< endl;
    cout<< "Size of Variable 3: " << sizeof(letter)<< endl;
    cout<< "Size of Pointer 3: " << sizeof(pLetter)<< endl;
    cout<< "Size of Variable 4: " << sizeof(string)<< endl;
    cout<< "Size of Pointer 4: " << sizeof(pString)<< endl;   
    

    return 0;
}