 /*
____________________1_
__________________2___3_
________________4___5___6_
______________7___8___9___10_*/
#include <iostream>

using namespace std;

int main(){
    int x = 1;
    for(int i = 0; i < 4; i++){
        for(int j = 8 - i; j >= 0; j--){
            cout << "__";
        }
        for(int k = 0;k <= i;k++){
            cout << "__" << x << "_";
            x++;
        }
        cout << endl;;
    }
}