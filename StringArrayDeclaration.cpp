#include <iostream>
#include <string>
using namespace std;

int main(){
//String initiallisation and declaration
    string codes[8] = {
        "B123",
        "C234",
        "UNKNOWN",
        "C15",
        "B177",
        "G3003",
        "C385",
        "B179"
    };
    // Checking whether the string end with 3
    
    for (int i = 0; i < 8; i++){
        if (codes[i][codes[i].length() - 1] == '3'){
            cout << codes[i] << endl;
        }
    }
    return 0;
}