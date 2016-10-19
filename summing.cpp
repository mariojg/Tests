#include <iostream>

using namespace std;

template <class summable>
inline summable sum(const summable array[], int size, summable sol=0){
    for(int i = 0; i < size; ++i)
        sol += array[i];
    return sol;
}

int main(){
    double a[] = {1.1, 2.2, 3.3, 4.4, 5.5, 9.3};
    s sum(a, 6);
    cout << "The summ is: " << s << endl;
    return 0;
}