#include <iostream>

using namespace std;


int main() {    
    char response;
    cout << "Choose between 'y' or 'Y' or 'n' or 'N': ";
    cin >> response;    

    switch(response){
        case 'y':
            cout << "You chose y" << endl;
            break;
        case 'Y':
            cout << "You chose Y" << endl;
            break;
        case 'n':
            cout << "You chose n" << endl;
            break;
        case 'N':
            cout << "You chose N" << endl;
            break;
        default:
            cout << "You didn't choose a valid option" << endl;
            break;
    }
    
    return 0;
}