// moodtracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Atharva Usturge
// 10/7
// Mood

#include <iostream>
using namespace std;
int main()
{
	int mood;
	// ask for mood
	cout << "What is your mood \n1)Happy \n2)Sad \n3)Mad \n4)Anxiety \n5)Fear \n6) Press for a secret suprise";
	cin >> mood;
	// siwtch 
	switch (mood) {
	case 1:
		cout << "You are Happy Gang"; break;
	case 2:
		cout << "What are you sad dude"; break;
	case 3:
		cout << "Ok bro why are you mad not that deep"; break;
	case 4:
		cout << "Just take a nap if you anxious"; break;
	case 5:
		cout << "What is bro fearing"; break;
		// if they dont put valid input
	case 6:
		cout <<"haha get pranked no suprise"; break;
	default:
		cout << "Not an emotion"; break;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
