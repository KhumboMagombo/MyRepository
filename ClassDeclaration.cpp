#pragma once
#include <string>
using namespace std;

namespace university{
    class Student{
        string mFirstName;
        string mLastName;
        unsigned int mAge;
        float mWeight;

        void initialise();
        void CalculateAge(int yearBorn, int currentYear)
    };
    #include "Student.h"

    void university::Student::initialise(){
        mFirstName = "Khumbo";
        mLastName = "Magombo";
        mAge = 19;
        mWeight = 87;

     void university::Student::CalculateAge(int yearBorn, int currentYear){
        mAge = currentYear - yearBorn;
     }   
    }
}