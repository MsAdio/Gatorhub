#include <stdlib.h>	//header file to clear screen
#include "PostInteract.h"
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
void UserInterface::clearScreen()
{
	system("cls"); //this will clear the console
}
void UserInterface::displayProfileInfo()
{
	//display "profile info" over a popup
	//await user input
}
void UserInterface::displayLoginScreen()
{

	//Display user menu over a popup
	//await user input
}
void UserInterface::displayPost()
{
	//display "post" over a popup
	//await user input
}
void UserInterface::displayHomeScreen()
{
	int choice;
	cout << "User Menu\n";
	cout << "1. See Profile\n";
	cout << "2. View Friends\n";
	cout << "3. Create a Post\n";
	cin >> choice;
	if (choice == 3)
	{
		PostInteraction postcontrol;
		postcontrol.postInteraction2();

	}
	//display home screen over a popup
	//await user input
}
void UserInterface::displayAdminMenu()
{
	//display admin menu over a popup
	//await user input
}
void UserInterface::displayPostMenu()
{
	//display post menu over a popup
	//await user input
}
void UserInterface::pressEnter()
{
	cout << "Press Enter to Continue";
	cin.ignore();
	//await user input
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
	UserInterface UF;
	UF.displayHomeScreen();
}