#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;
int main()
{
	cout<<"*****Welcome to the number guessing game*****";
	int guess;
	srand(time(0));
    int target = 1+rand() % 100;
    //cout<<target;
	do{
       
            cout<<"\nGuess the Number: ";
            cin>>guess;
             if(guess == target)
             {
            cout<<"\nGreat!you Guessed the number correctly";
             }
             else if ( guess < target)
             {
             cout<<"     Low";
             }
             else 
             {
            cout<<"     High";
             }
             }
             while(guess!=target);
		
}

