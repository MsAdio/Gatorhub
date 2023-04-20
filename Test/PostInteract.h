#include <iostream>
#include <string>
#include "ReportedUsersEntity.h"
#include "Post Class.h"
using namespace std;
class PostInteraction
{
public:
	void postInteraction();	//users can like, report, create, delete, or display post
};
inline void PostInteraction::postInteraction()
{
	int choice;
	ReportedUsers reportedUser;
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
		display profile type is set to userand does not have permission to
		reported user
		*/
	}
	else if (choice == 3)
	{
		//idk what to really do here maybe add post to a 'liked post file'?
		PostClass PC;
		PC.likePost();		//like the post
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
		cout << "Error\n";
	}
}