#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout<<"**********************************************************"<<endl;
    cout << "WELCOME DEAR PLAYER TO GUESS THE NUMBER !" << endl;
    cout<<"**********************************************************"<<endl;

    int val, guess,attempts=0;
    srand(time(0));
	val = rand() % 50 + 1;

    do
    {
            cout << "GUESS A NUMBER FROM 1 TO 50 !" << endl;

            cin >> guess;
            attempts++;

            if (guess > val)
                cout << "Too high!\n\n";
                cout<<":`( Try AGAIN"<<endl;

            if (guess < val){
                cout << "Too low!\n\n";
                cout<<":`( Try AGAIN"<<endl;
            }


            else{
                cout<<"**********************************************************"<<endl;
                cout << "\nCorrect! You got it in " << attempts << " guesses!\n";
                cout<<"**********************************************************"<<endl;

            }

    }while (guess != val);





    return 0;
}
