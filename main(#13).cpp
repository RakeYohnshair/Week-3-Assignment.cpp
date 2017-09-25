#include <iostream>
using namespace std;
 
double ConvertToMPH (int paceInMin, int paceInSec);
double ConvertToMPH (double kph);
 
int main()
{
 //declaring
  double paceInMin;
  double paceInSec;
  double kph;
 
  cout << "enter pace in minutes: " ;
  cin >> paceInMin;  //enter your pace in minutes
  cout << "enter pace in seconds: " ;
  cin >> paceInSec;  //enter your pace in seconds
  cout << "pace in MPH is: " << ConvertToMPH (paceInMin, paceInSec) <<  endl; //cout pace conversion
 
  cout << "enter speed in KPH: " ;
  cin >> kph; //enter kph
  cout << "pace in MPH is: " << ConvertToMPH (kph) << endl; //cout kph to mph (pace)
 
     return 0;
}
 
double ConvertToMPH(int paceInMin, int paceInSec) //pace conversions
{
    return 60/(paceInMin + paceInSec/60.);
}
 
double ConvertToMPH(double kph) //kph to mph conversion
{
    return kph/1.61;
}
