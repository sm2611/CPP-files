// Interact with command line using this program.
/*
To run this code, go to the folder containing this program.
Then open terminal and do:
g++ CommandLineArguments.cpp -o CommandLineArguments
then run do:
./CommandLineArguments hey1 hey2

output:   0: ./CommandLineArguments
		  1: hey1
		  2: hey2
*/
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

	for(int i = 0;i < argc;i++){
		cout << i << " : " << argv[i] << endl;
	}

	return 0;
}
