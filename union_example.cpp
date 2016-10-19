#include <iostream>

using namespace std;

//Only save one field, if you assign another, lost the other fields.
union numbericUnion {
        int intValue;
        long longValue;
        double doubleValue;
};

enum months{ JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC}month;

int main() {    
    numbericUnion myUnion;
    myUnion.intValue = 3;
    cout << myUnion.intValue << endl;
    myUnion.doubleValue = 4.5;
    cout << myUnion.doubleValue << endl;
    cout << myUnion.intValue; cout << endl;
    
    return 0;
}