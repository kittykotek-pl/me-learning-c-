#include <iostream>

using namespace std;

int main(){
//all variables part
int health = 100;
int mana = 50;
char gamename[] = "testgame";
int memory[] = {10, 40, 25, 60, 15};
char gameid[] = "ts2gm355";
int userinput;
int sum = 0;
int othersum = 0;
int sum1 = 0;
//logic probably the hardest code yet
bool t = true; //needed
while(t){
cout << "=====" << gamename << "=====" << endl;
cout << "1.game status" << endl;
cout << "2.game.doDamage" << endl;
cout << "3.memory check" << endl;
cout << "4.game id check" << endl;
cout << "0.shutdown" << endl;
cout << "==================" << endl;
//user input  and pointer
cin >> userinput;
int *ptr = &health;
//continuation of logic
    if(userinput == 1){
    cout << "health: " << health << endl;
    cout << "mana: " << mana << endl;
    }
    else if(userinput == 2){
        *ptr = 75;
        ptr = &mana;
        *ptr = 25;
        cout << "damage applied" << endl;
        }
        else if(userinput == 3){
            for(int i{0}; i < 5; ++i){
                sum = sum + memory[i];
                if(memory[i] > 30){
                    othersum = othersum + 1;
                }
                
            }
            cout << "memory avaible: " << sum << endl;
            cout << "how many digts above 30: " << othersum << endl;
            sum = 0;
            othersum = 0;
        }
        else if(userinput == 4){
            cout  << "the game id is: " << gameid << endl;
            for(int i {0}; i < 8; ++i){
                if(gameid[i] >= '0' && gameid[i] <= '8'){
                    sum1 = ++sum1;
                }
                
            }
            cout << "number of digits found: " << sum1 << endl;
            sum1 = 0;
        }
        else if(userinput == 0){
           cout << "shutting down testgame..."  << endl;
           t = false;
        }
    else{
        cout << "unkown command" << endl;
        }
    }
}