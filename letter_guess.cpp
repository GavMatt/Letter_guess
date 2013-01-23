/*
 * Generates a random letter that is compared to a guess
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> /* Required for srand */

using namespace std;

int main ()
{

	char c;

	do
	{
	
	string real_letter, guess;
	int random_integer;
	cout << "Guess a letter, A or B. \n";
	cout << "What is your guess? \n";
	cin >> guess;
	srand((unsigned)time(0)); /* Sets up random number in range (FIX!) */
for(int index=0; index<2; index++)
	{ 
        random_integer = (rand()%2)+1; /* two random numbers (1 and 2) */ 
	}
if (guess != "A" && guess != "B") /* Avoids random inputs */
	{
	cout << "Try again with A or B!\n";
	return 0;
	}
else

if (random_integer == 1) /* Crude random letter generator (FIX!) */
	{	
		real_letter = "A";
	}
else 
	{
		real_letter = "B";
	}
	
	cout << "Correct answer is:\n";
	cout << real_letter << endl;
if (guess == real_letter) /* Determines if random letter matches guess */
	{
	cout << "Winner!\n";
	}
else
	{
	cout << "Loser!\n";
	}
	
	cout << "Play again? (N/Y)\n";
	cin >> c;

	} while ( c == 'Y' );

	
return 0;	

}
