#include <iostream>

using namespace std;

int main(){
    int a[6] {7, 12, 5, 18, 9, 24};
    for(int i {0}; i < 6; ++i){
        if((a[i]%2) == 0){
            cout << a[i] << endl;
        }
    }
}
