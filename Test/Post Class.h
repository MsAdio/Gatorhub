#include <iostream>
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
	string getTypedContent();
	void setTypedContent(string);
	
	int getLikes();

	string getPostTitle();
	void setPostTitle(string);
	void updateContent();
	void likePost();
	void makePost();
	void deletePost();
	void printPost();
	PostClass()
	{
		likes = 0;
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
	cout << getTypedContent() << "\n";
	cin >> changeContent;
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