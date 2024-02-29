#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class GuessTheNumber{
private:
    int computerGeneratedNumber;
    int userGuessedNumber;
    int aim;

public:
    GuessTheNumber(){
        srand(time(0));
        computerGeneratedNumber=rand()%100+1;
        aim=0;
    }

    void startGame(){
        do{
            cout<<"Guess the number:";
            cin>>userGuessedNumber;
        	aim++;
			cout << "Attempt: " << aim << endl;
			
            if(userGuessedNumber > computerGeneratedNumber){
                cout<<"Guessed number is greater than computer generated number\n"<<endl;
            } else if(userGuessedNumber < computerGeneratedNumber){
                cout<<"Guessed number is smaller than computer generated number\n"<<endl;
            } else{
                cout<<"Congratulations! You won the game in "<<aim<<" attempts\n"<<endl;
            }
		} while(userGuessedNumber != computerGeneratedNumber);
    }
};

int main(){
    GuessTheNumber guess;
    guess.startGame();
    return 0;
}
