#include <iostream>
#include <string>

using namespace std;

int main() {
  //university timing 
    string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    string startTimes[5] = {"8:00 AM", "8:00 AM", "8:00 AM", "8:00 AM", "8:00 AM"};
    string endTimes[5] = {"5:00 PM", "5:00 PM", "5:00 PM", "5:00 PM", "12:00 PM"};

  // Display university timings
    cout << "University Timings:" << endl;
    for (int i = 0; i < 5; i++) {
    cout << days[i] << ": " << startTimes[i] << " - " << endTimes[i] << endl;
    }

    return 0;
}