#include <iostream>
using namespsce std;

//Passing by Value Function Declaration
int Add(int paramOne, int paramTwo);

//Passing by Reference using a pointer
int Multiply(int* argOne, int argTwo);

//Passing by reference using a refence
int Subtract(int& paramA, int paramB);

//Functions definitions

int Add(int paramOne, int paramTwo){
    paramOne = paramOne + 2;
    return(paramOne + paramTwo);
}

int Multiply(int* argOne, int argTwo){
    *argOne = *argOne * 2;
    return (*argOne*argTwo);
}

int Subtract(int& paramA, int paramB){
    paramA = paramA - 1;
    return(paramA - paramB);
}

int main(){
    int addVarOne = 2;
    int addVarTwo = 5;
    int result = 0;

    //Calling Add Function
    result = Add(addVarOne, addVarTwo);

    cout << "AddVarOne is: " << addVarOne << endl;
    cout << "Result is: " << result << endl;

    int multiVarOne = 10;
    int multVarTwo = 1;

    result = Multiply(multiVarOne, multVarTwo);

    cout << "MultiVarOne is : " << multiVarOne << endl;
    cout << "Result is: " << result << endl;

    int subVarOne = 10;
    int subVarTwo = 6;

    result = Subtract(subVarOne, subVarTwo);
    cout << "SubVarOne is: " << subVarOne << endl;
    cout << "Result is: " << result << endl;

    return 0;

}