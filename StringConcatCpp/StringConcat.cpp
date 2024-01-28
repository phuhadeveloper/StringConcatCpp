#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int i;
	for (i = 0; i < 3; i++) {
		// storing user input 1
		string input1;
		// storing user input 2
		string input2;
		// store concat string
		string combined;
		
		// Ask user to input first string
		cout << "Enter your first string: ";
		// store user input
		getline(cin, input1);
		
		// Ask user to input second string
		cout << "Enter your second string: ";
		// store input
		getline(cin, input2);
		
		// getline() include endl char at the end, get rid of endl char
		// resize() the inputs 1 length shorter
		input1.resize(input1.length() - 1);
		input2.resize(input2.length() - 1);
		
		combined = input1 + input2;
		cout << "The combined string: " << combined << endl;
	}
	
	return 0;
}