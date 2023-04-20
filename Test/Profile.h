/*
Name: Profile Class
Desciption: Stpres users profile type, first name, last name, skills,
			username, password, birthday, person statement, clubs,
			classification, major, and prospective industry. Users
			can display profile information and update them as well.
Date Coded: April 15 -
Who contributed: Brendan
*/
#include <iostream>
#include <string>
using namespace std;
class Profile
{
private:
	string profileType = "";
	string fName = "";
	string lName = "";
	string skills = "";
	string username = "";
	string password = "";
	string birthday = "";
	string personalStatement = "";
	string clubs = "";
	string classification = "";
	string major = "";
	string prospectiveIndustry = "";
public:
	string getProfileType();
	void setProfileType(int);

	string getFname(); 
	void setFname(string);

	string getLname();
	void setLname(string);

	string getSkills(); 
	void setSkills(string);

	string getUsername(); 
	void setUsername(string);

	string getPassword(); 
	void setPassword(string);

	string getBirthday(); 
	void setBirthday(string);

	string getPersonalStatement(); 
	void setPersonalStatement(string);

	string getClubs(); 
	void setClubs(string);

	string getClassification(); 
	void setClassification(string);

	string getMajor(); 
	void setMajor(string);

	string getProspectiveIndustry(); 
	void setProspectiveIndustry(string);

	void readResume();

	void updateFname();
	void updateLname();
	void updatePersonalStatement();
	void updateClubs();
	void updateSkills();
	void updateClassification();
	void updateMajor();
	void updateResume();
	void updateProspectiveIndustry();
	void updateUsername();
	void updatePassword();

	void setupProfile();
	void printAll();
};
inline string Profile::getProfileType() 
{
	return profileType;
}
inline void Profile::setProfileType(int a)
{
	if (a == 1)
	{
		profileType = "User";
	}
	else if (a == 2)
	{
		profileType = "Admin";
	}
	else
	{
		cout << "error type setProfileType\n";
	}
}

inline string Profile::getFname()
{
	return fName;
}
inline void Profile::setFname(string b)
{
	fName = b;
}

inline string Profile::getLname()
{
	return lName;
}
inline void Profile::setLname(string c)
{
	lName = c;
}

inline string Profile::getSkills()
{
	return skills;
}
inline void Profile::setSkills(string d)
{
	skills = d;
}

inline string Profile::getUsername()
{
	return username;
}
inline void Profile::setUsername(string e)
{
	username = e;
}

inline string Profile::getPassword()
{
	return password;
}
inline void Profile::setPassword(string f)
{
	password = f;
}

inline string Profile::getBirthday()
{
	return birthday;
}
inline void Profile::setBirthday(string g)
{
	birthday = g;
}

inline string Profile::getPersonalStatement()
{
	return personalStatement;
}
inline void Profile::setPersonalStatement(string h)
{
	personalStatement = h;
}

inline string Profile::getClubs()
{
	return clubs;
}
inline void Profile::setClubs(string i)
{
	clubs = i;
}

inline string Profile::getClassification()
{
	return classification;
}
inline void Profile::setClassification(string j)
{
	classification = j;
}

inline string Profile::getMajor()
{
	return major;
}
inline void Profile::setMajor(string k)
{
	major = k;
}

inline string Profile::getProspectiveIndustry()
{
	return prospectiveIndustry;
}
inline void Profile::setProspectiveIndustry(string l)
{
	prospectiveIndustry = l;
}
inline void Profile::updateFname()
{
	string changeFname;
	cout << getFname() << "\n";
	cin.ignore();
	cout << "What would you like to change your first name to?\n";
	getline(cin, changeFname);
	setFname(changeFname);
}
inline void Profile::updateLname()
{
	string changeLname;
	cout << getLname() << "\n";
	cin.ignore();
	cout << "What would you like to change your last name to?\n";
	getline(cin, changeLname);
	setLname(changeLname);
}
inline void Profile::updatePassword()
{
	string changePassword;
	cout << getPassword() << "\n";
	cin.ignore();
	cout << "What would you like to change your password to?\n";
	getline(cin, changePassword);
	setPassword(changePassword);
}
inline void Profile::updateUsername()
{
	string changeUsername;
	cout << getUsername() << "\n";
	cin.ignore();
	cout << "What would you like to change your username to?\n";
	getline(cin, changeUsername);
	setUsername(changeUsername);
}
inline void Profile::updatePersonalStatement()
{
	string changePS;
	cout << getPersonalStatement() << "\n";
	cin.ignore();
	cout << "What would you like to change your personal statement to?\n";
	getline(cin, changePS);
	setPersonalStatement(changePS);
}
inline void Profile::updateClubs()
{
	string changeClubs;
	cout << getClubs() << "\n";
	cin.ignore();
	cout << "What would you like to change your clubs to?\n";
	getline(cin, changeClubs);
	setClubs(changeClubs);
}
inline void Profile::updateSkills()
{
	string changeSkills;
	cout << getSkills() << "\n";
	cout << "What would you like to change your skills to?\n";
	getline(cin, changeSkills);
	cin.ignore();
	setSkills(changeSkills);
}
inline void Profile::updateClassification()
{
	string changeClassification;
	cout << getClassification() << "\n";
	cout << "What would you like to change your classification to?\n";
	getline(cin, changeClassification);
	cin.ignore();
	setClassification(changeClassification);
}
inline void Profile::updateMajor()
{
	string changeMajor;
	cout << getMajor() << "\n";
	cout << "What would you like to change your major to?\n";
	getline(cin, changeMajor);
	cin.ignore();
	setMajor(changeMajor);
}
inline void Profile::updateProspectiveIndustry()
{
	string changePI;
	cout << getProspectiveIndustry() << "\n";
	cout << "What would you like to change your prospective industry to?\n";
	getline(cin, changePI);
	cin.ignore();
	setProspectiveIndustry(changePI);
}
inline void Profile::updateResume()
{
	//ill have to come back to this
}
inline void Profile::printAll()
{
	cout << "\n====== User Profile ======\n";
	cout << "Name: " << fName << " " << lName << "\n";
	cout << "Birthday: " << getBirthday() << "\n";
	cout << "About: " << getPersonalStatement() << "\n";
	cout << "Clubs: " << getClubs() << "\n";
	cout << "Skills: " << getSkills() << "\n";
	cout << "Classification: " << getClassification() << "\n";
	cout << "Major: " << getMajor() << "\n";
	cout << "Prospective industry: " << getProspectiveIndustry() << "\n";
	cout << "==========================\n\n";
}
inline void Profile::setupProfile()
{
	updateFname();
	updateLname();
	updatePersonalStatement();
	updateClubs();
	updateSkills();
	updateClassification();
	updateMajor();
	updateProspectiveIndustry();
	printAll();
}