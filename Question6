#include <iostream>
using namespace std;

class LoyaltyCard {
private:
    string customerName;
    int stamps;

public:
    LoyaltyCard(string name) {
        customerName = name;
        stamps = 0;
    }

    int getStamps() {
        return stamps;
    }

    void addStamp() {
        stamps++;

        if (stamps == 10) {
            cout << "Congratulations " << customerName << "! You earned a free coffee!" << endl;
            stamps = 0;
        }
    }
};

int main() {
    LoyaltyCard card("Sara");

    for(int i = 0; i < 10; i++) {
        card.addStamp();
    }

    cout << "Current Stamps: " << card.getStamps() << endl;
}
