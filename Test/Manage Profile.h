/*
Name: Manage Profile
Desciption: User can setup, update, and display there profile.
			it is then stored in a file
Date Coded: April 20 -
Who contributed: Brendan
*/
#include <iostream>
#include "profile.h"

using namespace std;
class ManageProfile
{
public:
	void manageProfile();	//Display, update, and setup user's profile
	Profile mp;
};
inline void ManageProfile::manageProfile()
{
	
	int choice;
	cout << "\n====== Profile Settings ======\n";
	cout << "What would you like to your profile?\n1.  first name\n2.  last name\n";
	cout << "3.  personal statement\n4.  clubs\n5.  skills\n6.  classification\n";
	cout << "7.  major\n8.  prospective industry\n9.  password\n10. username\n";
	cout << "11. Display Profile\n12. Setup Profile\n";
	cout << "==============================\n";
	cin >> choice;

	if (choice == 1) 
	{
		mp.updateFname();
	}
	else if (choice == 2)
	{
		mp.updateLname();
	}
	else if (choice == 3)
	{
		mp.updatePersonalStatement();
	}
	else if (choice == 4)
	{
		mp.updateClubs();
	}
	else if (choice == 5)
	{
		mp.updateSkills();
	}
	else if (choice == 6)
	{
		mp.updateClassification();
	}
	else if (choice == 7)
	{
		mp.updateMajor();
	}
	else if (choice == 8)
	{
		mp.updateProspectiveIndustry();
	}
	else if (choice == 9)
	{
		mp.updatePassword();
	}
	else if (choice == 10)
	{
		mp.updateUsername();
	}
	else if (choice == 11)
	{
		mp.printAll();
	}
	else if (choice == 12)
	{
		mp.setupProfile();
	}
	else
	{
		cout << "Error choice Manage Profile\n";
	}
}
