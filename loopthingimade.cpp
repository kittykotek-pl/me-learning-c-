#include <iostream>

using namespace std;

int main(){
    bool a = true;
    int liczba;
    
    while(a){
        cout << "wpisz swoja liczbe" << endl;
        cin >> liczba;
        if(liczba == 0){
            cout << "Blad nie obslujemy zero" << endl;
            a = false;
        }
        else{
            cout << "program dalej dziala" << endl;
        }

    }

}
