#include <iostream>
#include <limits>
#include <string>
using namespace std;

bool DEBUG = true;
 // Functions (Non mathematical)
 // ====================================================
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
	while(!(cin >> x)){ // While x is not 0 ?
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Try again: ";
	}
return(x);
}

 // Functions (Mathematical)
 // ====================================================

int addNumb(float number_a, float number_b){
	return(number_a + number_b);
}

int subNumb (float number_a, float number_b){
	return(number_a - number_b);
}

int multNumb(float number_a, float number_b){
	return(number_a * number_b);
}

int divNumb(float number_a, float number_b){
	return(number_a / number_b);
}

 // Main
 // =====================================================
int main() {
	        // Print Start screen
		bool switchExit = true;
		int input_int;
			do {
			start_screen();	
			// Get input
			input_int = getInt();	
			// Switch for mode
	    		switch(input_int) {
				case 1 : cout << addNumb(getInt(), getInt()) << endl; 
			 		switchExit = false;
					break;
				case 2 : cout << subNumb(getInt(), getInt()) << endl; 
			 		switchExit = false;
					break;
				case 3 : cout << multNumb(getInt(), getInt()) << endl; 
					switchExit = false;
			 		break;
				case 4 : cout << divNumb(getInt(), getInt()) << endl; 
					switchExit = false;
			 		break;
				case 5 : return 0; 
					break;
				default : 
					 cout << "Not a option.\n" << endl;  
					 switchExit = false;
					 break;
			}
			cout << endl << endl;
			}
			while (!switchExit);
	
		return 0;
}
