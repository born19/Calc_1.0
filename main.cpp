#include <iostream>
#include <limits>
using namespace std;

bool DEBUG = true;

void start_screen() {
	cout <<
		// Print start screen
		"      Calculator 1.0      " << "\n" <<
		"==========================" << "\n" <<
		"| 1. Add                 |" << "\n" <<
		"| 2. Subtract            |" << "\n" <<
		"| 3. Mult                |" << "\n" <<
		"| 4. Divide              |" << "\n" <<
		"| 5. Exit                |" << "\n" <<
		"==========================" << "\n" << endl; 
}

int getInt(){
cout << "Enter an int: ";
	int x = 0;
	while(!(cin >> x)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Try again: ";
	}
cout << "You enterd: " << x << endl;
return(x);
}

int main() {
	        // Print Start screen
		start_screen();	
		bool switchExit = true;
		int input_int;
			do {
			// Get input
			input_int = getInt();	
			// Switch for mode
	    		switch(input_int) {
				case 1 : cout << "1\n";
			 		switchExit = true;
					break;
				case 2 : cout << "2\n";
			 		switchExit = true;
					break;
				case 3 : cout << "3\n";
					switchExit = true;
			 		break;
				case 4 : cout << "4\n";
					switchExit = true;
			 		break;
				case 5 : cout << "5\n";
					switchExit = true;
					break;
				default : 
					 cout << "Not a option.\n" << endl;  
					 switchExit = false;
					 break;

			}
			}
			while (!switchExit);
	
		return 0;
}

