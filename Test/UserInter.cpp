/*
Name: User Interface Class
Desciption: Displays menus which guides the user through the program
Date Coded: April 15 -  
Who contributed: Brendan
*/
#include <stdlib.h>	//header file to clear screen
#include "PostInteract.h"
#include "Manage Profile.h"
class UserInterface
{
public:
	void pressEnter();
	void clearScreen();
	void displayLoginScreen();
	void displayAdminMenu();
	void displayHomeScreen();
	void displayPostMenu();
	void displayPost();
	void displayProfileInfo();
	char getChar(char);
	string getString(string);
	int getInt(int);
};
void UserInterface::displayHomeScreen() //first thing users sees
{
	int choice;
	cout << "====== Home Screen ======\n";
	cout << "1. Profile Settings\n";
	cout << "2. View Friends\n";
	cout << "3. Create a Post\n";
	cout << "=========================\n";
	cin >> choice;

	if (choice == 1)
	{
		ManageProfile mp;
		mp.manageProfile();	//takes user to Manage Profile artifact
		displayHomeScreen();
	}
	else if (choice == 3)
	{
		PostInteraction postcontrol;
		postcontrol.postInteraction(); //takes user to postInteract artifact
		displayHomeScreen(); 
	}
	else
	{
		cout << "error in display home screen option\n";
		displayHomeScreen();
	}
}
void UserInterface::clearScreen()
{
	system("cls"); //this will clear the console
}
void UserInterface::displayProfileInfo()
{
	//display profiles info
}
void UserInterface::displayLoginScreen()
{
	//Display login screen
}
void UserInterface::displayPost()
{
	//display post 
}
void UserInterface::displayAdminMenu()
{
	//display admin menu over a popup
	//I want it to have the option to review reported users + homescreen options
}
char UserInterface::getChar(char a)
{
	//await user input for storing char data
	//return char
	return a;
}
string UserInterface::getString(string b)
{
	//await user input for storing string data
	//return string
	return b;
}
int UserInterface::getInt(int c)
{
	//await user input for storing int data
	//return int
	return c;
}
int main()
{
	UserInterface UI;
	UI.displayHomeScreen();	//when program starts show home screen
}