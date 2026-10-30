#include <iostream>
using namespace std;

enum Months{
    January,
    February,
    March,
    April,
    May
};

int main(){
    Months thisMonth = February;
    if (thisMonth == March || thisMonth == May){
        cout << "We will have a public holiday";

    }
    return 0;
}