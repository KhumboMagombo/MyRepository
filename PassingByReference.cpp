#include <iostream>
using namespace std;

int main(){
    int addVarOne = 2;
    int addVarTwo = 5;
    int result = 0;
    
    result = Add(addVarOne, addVarTwo);

    cout << "addVarOne is: " << addVarOne << endl;
    cout << "result is: " << result << endl;

    int multiVarOne = 3;
    int multiVarTwo = 1;

    result = Multiply(&multiVarOne, multiVarTwo);

    cout << "multiVarOne is: " << multiVarOne << endl;
    cout << "result is: " << result << endl;

    int subVarOne = 10;
    int subVarTwo = 6;

    result = Subtract(subVarOne, sunVarTwo);

    cout << "subVarOne is: " << subVarOne <<endl;
    cout << "result is: "<< result << endl;
    
    return 0;
}