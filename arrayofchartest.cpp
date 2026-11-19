#include <iostream>

using namespace std;

int main(){
    char password[5] {'a', 'd', 'm', 'i', 'n'};
    cout << password << endl;
    password[0] = 'A';
    cout << password << endl;
}
