// Vincent Phillip Rodriguez CPSC120-19

#include <iostream>
using namespace std;

// TODO: Declare global constants here using const int. Name them appropriately,
// and using all upper case letters.
const float SECONDS_IN_MINUTE = 60,
            SECONDS_IN_HOUR = 3600,
            SECONDS_IN_DAY = 86400;

int main() {
  // TODO: Prompt the user for an integer (at least 0) to represent the total
  // number of seconds to convert into days, hours, minutes, seconds.
  int UserSeconds;

  cout << "Input an integer (at least 0) to represent the total number of seconds to convert into: " << endl;
  cout << "Days, hours, minutes, seconds.\n";
  cin >> UserSeconds;
  cout << endl;
  
  // The starting total seconds has days, hours, minutes, and seconds all
  // bundled together into a bunch of seconds.
  // TODO: Deconstruct the total number of seconds into its days, hours, minutes
  // and seconds.

  // HINT: To get the number of days, divide the total seconds by the number of
  // seconds there are in a day. Keep track of the remainder! What's left can be
  // broken down further into hours, minutes, seconds.
  int NumberOfDays = UserSeconds / SECONDS_IN_DAY;

  // HINT: To get the number of hours, divide the remaining part from above by
  // the number of seconds there are in an an hour. Keep track of the remainder,
  // which can be broken down further into minutes and seconds.
  int NumberOfHours = (UserSeconds % (int) SECONDS_IN_DAY) / SECONDS_IN_HOUR;

  // HINT: To get the number of of minutes, divide the remaining part from above
  // by the number of seconds in a minute. Keep track of the remainder!
  int NumberOfMinutes = (UserSeconds % (int) SECONDS_IN_DAY) % (int) SECONDS_IN_HOUR / SECONDS_IN_MINUTE;

  // HINT: What's left from above is your number of seconds.
  int NumberOfSeconds = (UserSeconds % (int) SECONDS_IN_DAY) % (int) SECONDS_IN_HOUR % (int) SECONDS_IN_MINUTE;

  // TODO: Display the result in a the format "n days h:m:s". For example,
  // "3 days 4:2:45" or "0 days 3:0:0". Don't worry about "day" vs "days," just
  // use "days"
  cout << NumberOfDays << " days " << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds << endl;

  return 0;
}
