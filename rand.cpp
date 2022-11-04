#include <cstdlib>
#include <ctime>
#include <iostream>
/*Gambling game:
Player will upload a balance
*/
using namespace std;

int main() {
	cout<< "This is a roulette program\n "
		<< "If number hits 1 Player will get x10 of his balance\n "
		<< "If number can be multiply by 4 Player will get x2 of his balance\n ";
	char ans;	
	do {		
	int balance;
	cout<< "Desired amount for gamble(min 100$): ";
	cin>> balance;
	
	srand((unsigned) time(0));
	int randomNumber;
	for (int index = 0; index < 1; index++) {
		randomNumber = (rand() %4 ) + 1;
    	cout << randomNumber << endl;
	}
	if (randomNumber == 1){
   		cout<< "Balance: "<< balance * 10<< "$"<< endl;
	}
 	else if (randomNumber % 4 == 0){
 		cout<< "Balance: "<< balance * 2<< "$"<< endl;
	} 
	else
		cout<< "Balance: "<< balance * 0<< endl;
	
	cout<< "Would you like to play again?(Y for yes N for no): ";
	cin>> ans;
}	while (ans == 'y' || ans == 'Y');

	
	return 0;

}
