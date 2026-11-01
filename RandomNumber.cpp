#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int daysUntilExpiration = rand() % 12;
    if (daysUntilExpiration == 0){
        cout << "Your Subscription has Expired. " << endl;
    }
    if (daysUntilExpiration == 1){
        cout << "Your Subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    }
    else if(daysUntilExpiration <= 5 && daysUntilExpiration > 1){
        cout << "Your Subscription expires in " << daysUntilExpiration << "days" << endl;
        cout << "Renew now and save 10%!" << endl;
    }
    else if(daysUntilExpiration <=10 && daysUntilExpiration > 5){
       cout << "Your Subscription will expire soon." << "Renew now!"<< endl;

    }
    else if(daysUntilExpiration > 10){
        cout << "You have an active subscription." << endl;
    }

    return 0;
}