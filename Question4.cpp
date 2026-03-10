#include <iostream>
using namespace std;

class UserProfile {
private:
    string username;
    string password;

public:
    UserProfile(string u, string p) {
        username = u;
        password = p;
    }

    string getUsername() {
        return username;
    }

    void updatePassword(string oldPassword, string newPassword) {
        if (oldPassword == password) {
            password = newPassword;
            cout << "Password updated." << endl;
        } else {
            cout << "Access Denied: Incorrect current password." << endl;
        }
    }
};

int main() {
    UserProfile user("ali_dev", "qwerty123");

    user.updatePassword("wrongpass", "newSecurePass!");
    user.updatePassword("qwerty123", "newSecurePass!");
}
