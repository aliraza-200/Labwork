#include <iostream>
using namespace std;

class ParkingMeter {
private:
    int timeRemaining;
    const int maxTime = 120;

public:
    ParkingMeter() {
        timeRemaining = 0;
    }

    int getTimeRemaining() {
        return timeRemaining;
    }

    void addTime(int minutes) {
        timeRemaining += minutes;

        if (timeRemaining > maxTime) {
            timeRemaining = maxTime;
            cout << "Max time reached. Excess coins refunded." << endl;
        }
    }
};

int main() {
    ParkingMeter meter;

    meter.addTime(60);
    meter.addTime(90);

    cout << "Time on meter: " << meter.getTimeRemaining() << " mins" << endl;
}
