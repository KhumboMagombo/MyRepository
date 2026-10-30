#include <iostream>
using namespace std;

enum Color{
    Blue = 2,
    Green,
    Red = 1,
    Black,
    Purple,
};

int main (){
    Color BlueColor = Blue;
    Color BlackColor = Black;

    int var = BlackColor + 20;
    
    if (BlueColor == BlackColor){
        cout << "Equal" << endl;
    }
    return 0;
}