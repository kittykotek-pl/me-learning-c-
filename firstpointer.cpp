#include <iostream>

using namespace std;

int main(){
    int v = 1;
    int *ptr = &v;
    *ptr = 2;
    cout << v << endl;
}