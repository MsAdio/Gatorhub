/*
Name: Post Interaction Class
Desciption: User can like, report, create, delete, or display post by 
			searching its title
Date Coded: April 15 -
Who contributed: Brendan
*/
#include <iostream>
#include <string>
#include "ReportedUsersEntity.h"	//write reported post
#include "Post Class.h"				//search post
#include "Post File.txt"			//post info

using namespace std;
class PostInteraction
{
public:
	void postInteraction();	//main menu
	ReportedUsers reportedUser;
	PostClass PC;

};
inline void PostInteraction::postInteraction()
{
	int choice;
	
	PostClass PC;
	cout << "1. Report User\n2. View Reported Users List\n"
		<< "3. Like Post\n4. Create a Post\n5. Delete Post\n"
		<< "6. Display Post\n";
	cin >> choice;
	if (choice == 1)
	{
		reportedUser.writeReportedUser();	//Write user in file
	}
	else if (choice == 2)
	{	
		/* if profileClass.profileType == "admin"; */
		reportedUser.printFile();			//Display reported users
	    /*
		else
		Diplay "Only admins have permission or function
		*/
	}
	else if (choice == 3)
	{
		PC.likePost();		//Post has been liked unless like is already
							//set to 1
	}
	else if (choice == 4)
	{
		string content;
		cout << "What would you like to title the post? \n";
		cin.ignore();
		getline(cin, content);
		PC.setPostTitle(content);	
		cout << "Enter what will be posted: \n";
		getline(cin, content);
		PC.setTypedContent(content);
		PC.makePost();		//create post
	}
	else if (choice == 5)
	{
		/*
		Display << “enter the post title\n;
		Get >> user_input
			deletePost(user_input);
		*/
	}
	else if (choice == 6)
	{
		/*
		Display << “enter the post title\n;
		printPost(user_input);
		*/
	}
	else
	{
		cout << "Error in post intteraction menu\n";
	}
}