/*
Name: Manage Friends
Desciption: User can send friend requests, remove friends, search for friends and view profiles
Date Coded: April 26 -
Who contributed: Evy
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int selection;
string friendName;

cout<<"1. Send Friend request \n2. Remove friends\n3.Search and view profiles";
cin>>selection;

vector<string> friendsList;

if(selection ==1)
{
 
 cout<<"Who would like to send a friend request to?";
 cin>>friendName;
 
    friendsList.push_back(friendName);
   
}

if(selection==2)
{
    cout<<"What friend would you to remove from the list?";
 cin>>friendName;

    friendsList.erase(remove(friendsList.begin(), friendsList.end(), friendName), friendsList.end());
    
}

if(selection ==3)
{

vector<string> allProfiles = {"Eve", "Ana", "Brendan", "Arielle"};

    vector<string> availableFriends = searchFriends(allProfiles, friendsList, "a");

vector<string> searchFriends(vector<string> &allFriends, vector<string> &currentFriendsList, string searchQuery) {
    vector<string> availableFriends;
    for (string friendName : allFriends) {
        if (friendName.find(searchQuery) != string::npos && find(currentFriendsList.begin(), currentFriendsList.end(), friendName) == currentFriendsList.end()) {
            availableFriends.push_back(friendName);
        }
    }
    return availableFriends;
}
}









