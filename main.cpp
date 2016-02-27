#include <iostream>


using namespace std;


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

int main() {
	        // Print Start screen
		
		start_screen();	
		
		bool switchExit = true;
		int input_int;
			do {
			// Get input
			cout << "What do you choose: ";
			cin >> input_int;	
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
				default : 
					 cout << "Not a option.\n" << endl;  
					 switchExit = false;
					 break;

			}
			}
			while (!switchExit);
	
		return 0;
}


