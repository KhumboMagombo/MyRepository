#include <iostream>
using namespace std;

int main(){
    float* pExamplePointer = nullptr;

    float exampleVariable = 2.5f;

    pExamplePointer = &exampleVariable;

    cout << "Size of Variable: "<< sizeof(exampleVariable)<< endl;
    cout << "Size of Pointer :"<< sizeof(pExamplePointer)<< endl;
    cout << "Address of variable: "<< &exampleVariable << endl;
    cout << "Address assigned to poiter: "<< pExamplePointer << endl;
    return 0;
}