#include <iostream>

class MyClass{
    public:
    int myNum;
    String myString;

};

int main(){
    MyClass myObj;

    myObj.myNum = 15;
    myObj.myString = "Khumbo Magombo";

    std::cout << myObj.myNum << endl;
    std::cout << myObj.myString << endl;

    return 0;
}