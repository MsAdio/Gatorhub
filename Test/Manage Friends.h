#include <vector>
#include <string>
#include <Friends.h>

using namespace std;


class manageFriends {
private:
  vector<Friend> friendsList;
public:
  void addFriend(string name, int age, string city) {
    Friend newFriend(name, age, city);
    friendsList.push_back(newFriend);
  }
  vector<Friend> getFriends() const {
    return friendsList;
  }
  vector<Friend> getFriendsInCity(string city) const {
    vector<Friend> friendsInCity;
    for (const Friend& Friend : friendsList) {
      if (Friend.getCity() == city) {
        friendsInCity.push_back(Friend);
      }
    }
    return friendsInCity;
  }
  vector<Friend> getFriendsInRange(int minAge, int maxAge) const {
    vector<Friend> friendsInRange;
    for (const Friend& Friend : friendsList) {
      int age = Friend.getAge();
      if (age >= minAge && age <= maxAge) {
        friendsInRange.push_back(Friend);
      }
    }
    return friendsInRange;
  }
};