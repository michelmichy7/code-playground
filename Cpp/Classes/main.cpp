using namespace std;
#include <iostream>

class People {
    public:
        string name;
        int user_id;

        void userConfig() {
            user_id = 459;

            cout << "Create your username: ";
            cin >> name;
            cout << endl;
        }
};

int main() {
    People user;
    user.userConfig();

    cout << "Your created username: " << user.name << endl;
    cout << "Your ID: " << user.user_id;
    return 0;
}