#include <iostream>
using namespace std;

namespace one{
    int exampleVariable;
    void HelloWorld();

    namespace two{
        int exampleVariableTwo;
        void HelloWorldTwo();
        exampleVariable = 20;
        exampleVariableTwo = 50;

    void HelloWorld (){
        cout << "Hello World" << endl;
    }
    void HelloWorldTwo (){
        cout << "Hello World" << endl;
    }
    }
}

int main(){
    

    return 0;
    
}

void one ::HelloWorld(){
    two ::HelloWorldTwo();
}
void one :: two ::HelloWorldTwo(){
    cout << "Hello World" << endl;
    cout << exampleVariable << endl;
   // cout << exampleVariableTwo << endl;
    
}