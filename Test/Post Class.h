/*
Name: Post Class
Desciption: Stores users post in Post File.txt where the user can 
			like, report, or delete the post
			
Date Coded: April 15 -
Who contributed: Brendan
*/
#include <iostream>
#include <string>
#include <fstream>
#include <string>
using namespace std;
class PostClass
{
private:
	string postTitle;
	string typedContent;
	int likes;
	fstream postFile;

public:
	string getTypedContent();		//holds post info
	void setTypedContent(string);	//sets post info
	
	int getLikes();			//return the amount of likes on post

	string getPostTitle();		//returns the title of the post
	void setPostTitle(string);	//sets post title

	void updateContent();	//change post
	void likePost();		//like post
	void makePost();		//create a post
	void deletePost();		//delete post
	void printPost();		//display post
	PostClass()				//creating a post automatically starts with 0 likes
	{
		likes = 0;	//post create have 0 likes to start
	}
};
inline string PostClass::getTypedContent()
{
	return typedContent;
}
inline void PostClass::setTypedContent(string a)
{
	typedContent = a;
}
inline int PostClass::getLikes()
{
	return likes;
}
inline string PostClass::getPostTitle()
{
	return postTitle;
}
inline void PostClass::setPostTitle(string b)
{
	postTitle = b;
}
inline void PostClass::updateContent()
{
	string changeContent;
	cin.ignore();
	cout << getTypedContent() << "\n";
	getline(cin, changeContent);
	setTypedContent(changeContent);
}
inline void PostClass::likePost()
{
	if (getLikes() >= 1)
	{
		cout << "Post has already been liked by user\n";
	}
	else
	{
		likes += 1;
		cout << "Post has been liked\n";
	}
}
inline void PostClass::makePost()
{
	postFile.open("Post File.txt", ios::out | ios::app);
	postFile << getPostTitle() << "\n" << getTypedContent() << endl;
	postFile.close();
}
inline void PostClass::deletePost()
{
	postFile.open("Post File.txt", ios::out | ios::trunc);
	postFile.close();
}
inline void PostClass::printPost()
{
	string readFile;
	postFile.open("Post File.txt", ios::out);
	while (!postFile.eof())
	{
		getline(postFile, readFile);
		cout << readFile << endl;
	}
	postFile.close();
}