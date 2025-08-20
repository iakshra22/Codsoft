#include<iostream>
#include<cstdlib>
#include<ctime>
#include<limits>
#include<cctype> 

using namespace std;

void displayWelcomeMessage(){ 
	cout<<"HI, WELCOME TO NUMBER GUESSING GAME \n";
    cout<<"===============================\n";
    cout<<"I have picked a random number between 1 and 100.\n";
    cout<<"\n";
    cout<<"You have to guess it!\n";
    cout<<"\n";
    cout<<"Good luck !\n";
} 

int GetUserGuess(){
	int guess;
	while (true){
		cout << "Enter your guess (1-100): ";
		cin >> guess;

		if (cin.fail() || guess < 1 || guess > 100){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input! Please enter a valid number that is between 1-100.\n"; // fixed: added semicolon and removed stray comment
		} else {
			return guess;
		}
	}
}

bool AskToPlayAgain(){
	char choice;
	cout << "Would you like to play this interesting game again? Please select 'Y' for YES and 'N' for NO:\n"; 
	cin >> choice;
	return tolower(choice) == 'y';
}

void PlayGame(){
	srand(static_cast<unsigned int>(time(0))); 
	int secretNumber = rand() % 100 + 1;
	int attempts = 0;
	int guess;

	cout << "\nI have chosen the number. Start guessing!\n";

	while (true){
		guess = GetUserGuess(); 
		attempts++;

		if (guess > secretNumber){
			cout << "Too High! Try a Smaller number.\n";
		} else if (guess < secretNumber){
			cout << "Too Low! Try a Bigger number.\n";
		} else {
			cout << "Congoooooo! You guessed it right in " << attempts << " attempts.\n";
			break;
		}
	}
}

int main(){
	displayWelcomeMessage();

	do {
		PlayGame();
	} while (AskToPlayAgain());

	cout << "Thanks for Playing! I love it...See you next time. BYE!\n";
}








