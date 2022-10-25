/* Add digit in a number and print
eg: 1234= 1+2+3+4=10*/
#include <iostream>

using namespace std;

int main(){
    int i, d, sum = 0;
    int cache;

    cout << "Enter The number:" << endl;
    cin >> i;

    cache = i;

    for(int j = 0;j < 5;j++){
        d = i % 10;	//gives the last number.

        i = i / 10;	//removes the last number.

        sum = sum + d;	// add numbers.

    }

    cout << "The sum of digits in " << cache << " is " << sum << endl;

    return 0;
}
