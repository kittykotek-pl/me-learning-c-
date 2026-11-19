#include <iostream>

using namespace std;

int main(){
    char at[] = "kernel2026boot7";
    int sum{};
    for(int i{}; i < 15; ++i){
        if(at[i] >= '0' && at[i] <= '9'){
            sum = ++sum;
        }
    }
    cout << sum << endl;
}