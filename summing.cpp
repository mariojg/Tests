#include <iostream>

using namespace std;

template <class summable>
inline summable sum(const summable array[], int size, summable sol=0){
    for(int i = 0; i < size; ++i)
        sol += array[i];
    return sol;
}

using namespace std;

template <class subtractable>
inline subtractable sub(const subtractable array[], int size, subtractable sol=0){
    for(int i = 0; i < size; ++i)
        sol -= array[i];
    return sol;
}

int main(){

    int a[] = {1, 2, 3, 4, 5, 6};
    double b[] = {1.1, 2.2, 3.3, 4.4, 5.5, 9.3};

    cout << "The int sum is: " << sum(a, 6) << endl;
    cout << "The double sum is: " << sum(b, 6) << endl;
    cout << "The int sub is: " << sub(a+1, 5, a[0]) << endl;
    cout << "The double sub is: " << sub(b, 6) << endl;
    
    return 0;
}