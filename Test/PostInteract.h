#include <iostream>
#include "ReportedUsersEntity.h"
using namespace std;
class PostInteraction
{
public:
	void postInteraction2();
};
inline void PostInteraction::postInteraction2()
{
	int choice;
	cout << "1. Report User\n2. View Reported Users List\n"
		<< "3. Like Post\n4. Create a Post\n5. Delete Post\n"
		<< "6. Display Post\n";
	cin >> choice;
	if (choice == 1)
	{
		ReportedUsers reportedUser;
		reportedUser.writeReportedUser();
	}
	else if (choice == 2)
	{
		/* if profileClass.profileType == "admin";
		printFile();
	    else
		display profile type is set to userand does not have permission to
		reported user*/
	}
	else if (choice == 3)
	{
		//likePost();
	}
	else if (choice == 4)
	{
		/*
		Display << “enter what will be posted\n”;
		Get >> user_input;
		setTypedContent(user_input);
		makePost();
		*/
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