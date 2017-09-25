
#include <iostream>
using namespace std;

int main()
{
  int t1; //start time
  int t2; //end time
  cout << "Enter start time (0000-2359) : " ;
  cin >> t1;
  cout << "Enter end time (0000-2359): " ;
  cin >> t2;
  int t1_mins = (t1 / 100) * 60 + (t1 % 100); //converts t1 to Minutes
  int t2_mins = (t2 / 100) * 60 + (t2 % 100); //converts t2 to Minutes
  int tdif = (t2_mins - t1_mins); // defines time difference and finds time difference
  if ( t2 < t1 ) //tells what to do when start time is later in the day then end time
  t2_mins += 24 * 60;
  cout << tdif <<" Minutes Ahead" ; 
      return 0;
}
