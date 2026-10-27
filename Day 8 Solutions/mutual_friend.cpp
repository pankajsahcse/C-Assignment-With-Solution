#include <iostream>
#include <vector>
#include <string>
using namespace std;

class User
{
public:
    string name;
    vector<string> friends;

    User(string n)
    {
        name = n;
    }

    void addFriend(string f)
    {
        for (string x : friends)
        {
            if (x == f)
            {
                cout << "Friend already exists!\n";
                return;
            }
        }

        friends.push_back(f);
        cout << "Friend added successfully.\n";
    }

    void deleteFriend(string f)
    {
        for (int i = 0; i < friends.size(); i++)
        {
            if (friends[i] == f)
            {
                friends.erase(friends.begin() + i);
                cout << "Friend deleted successfully.\n";
                return;
            }
        }

        cout << "Friend not found!\n";
    }

    void displayFriends()
    {
        cout << "\nFriends of " << name << ": ";

        for (string f : friends)
            cout << f << " ";

        cout << endl;
    }
};

int main()
{
    string name1, name2, f;
    int ch, u;

    cout << "Enter first user name: ";
    cin >> name1;

    cout << "Enter second user name: ";
    cin >> name2;

    User u1(name1);
    User u2(name2);

    do
    {
        cout << "\n--- SOCIAL MEDIA MENU ---";
        cout << "\n1. Add Friend";
        cout << "\n2. Delete Friend";
        cout << "\n3. Display Friends";
        cout << "\n4. Find Mutual Friends";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Select user (1 or 2): ";
            cin >> u;

            cout << "Enter friend name: ";
            cin >> f;

            if (u == 1)
                u1.addFriend(f);
            else if (u == 2)
                u2.addFriend(f);
            else
                cout << "Invalid user!\n";
            break;

        case 2:
            cout << "Select user (1 or 2): ";
            cin >> u;

            cout << "Enter friend name to delete: ";
            cin >> f;

            if (u == 1)
                u1.deleteFriend(f);
            else if (u == 2)
                u2.deleteFriend(f);
            else
                cout << "Invalid user!\n";
            break;

        case 3:
            u1.displayFriends();
            u2.displayFriends();
            break;

        case 4:
            cout << "\nMutual friends: ";
            {
                bool found = false;

                for (string a : u1.friends)
                {
                    for (string b : u2.friends)
                    {
                        if (a == b)
                        {
                            cout << a << " ";
                            found = true;
                        }
                    }
                }

                if (!found)
                    cout << "No mutual friends";

                cout << endl;
            }
            break;

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    }
    while (ch != 5);

    return 0;
}
