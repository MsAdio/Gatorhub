#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class ReportedUsers
{
private:
	string reportedUsers;
	fstream reportedUsersFile;

public:
	void setReportedUser(string);
	string getReportedUser() const;
	void printFile();
	void writeReportedUser();
};
inline void ReportedUsers::setReportedUser(string a)
{
	reportedUsers = a;
}
inline string ReportedUsers::getReportedUser() const
{
	return reportedUsers;
}
inline void ReportedUsers::printFile()
{

	string readFile;
	reportedUsersFile.open("Reported User List.txt");
	while (!reportedUsersFile.eof()) {
		getline(reportedUsersFile, readFile);
		cout << readFile << endl;
	}
	reportedUsersFile.close();
}
inline void ReportedUsers::writeReportedUser()
{
	reportedUsersFile.open("Reported User List.txt");
	string name;
	cout << "Enter the name of the user: ";
	cin >> name;
	reportedUsersFile << name << endl;
	reportedUsersFile.close();
}