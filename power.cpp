#include <iostream>

using namespace std;

float vpow (int base, int exp){
    
    bool exp_positive {true};
    
    if (exp == 0)
        return 1;    
    else if (exp < 0){
        exp *= -1;
        exp_positive = false;
    }        
        
    int result = base;        
    for(int i = 1; i < exp; i++){
        result *= base;
    }    
    
    if(exp_positive == true)
        return result;
    else
        return 1/(float)result;    
}

float vsin (float opposite, float hypotenuse){
    return opposite / hypotenuse;
}

float avg(int *values, int n){
    int sum{0};
    for(int i = 0; i < n; i++){
        sum += values[i];
    }
    return (float)sum/(float)n;
}

int main() {    
//     int base = 0;
//     int exponent = 0;
//     float pow = 0.0F;
//     
//     cout << "Insert base: ";
//     cin >> base;    
//     cout << "Insert exponent: ";
//     cin >> exponent;
// 
//     pow = vpow (base, exponent);
//     cout << base << "^" << exponent << " is " << pow << endl;
//     
//     float opposite{0.0F}, hypotenuse{0.0F}, sin{0.0};
//     cout << "Insert opposite: ";
//     cin >> opposite;    
//     cout << "Insert hypotenuse: ";
//     cin >> hypotenuse;
// 
//     sin = vsin (opposite, hypotenuse);
//     cout << "sin is " << sin << endl;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int elements = 10;
    
    cout << avg( array, elements) << endl;

}