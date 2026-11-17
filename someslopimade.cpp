#include <iostream>

using namespace std;

int main(){
    int a;
    int sum{};
    bool t = true;
    while(t){
        cout << "type in your numbers warning typing in 0 will end the program" << endl;
        cin >> a;
        if(a == 0){
            cout << "your final sum is: " << sum << endl;
            t = false;
        }
        else{
            sum += a;
            cout << "your sum alltogether for now is: " << sum << endl;
        }
    }
}
