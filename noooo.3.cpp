/**
*@ Siti Munizaiyanah binti Bahaman
*@ Matric No: 2116492
*@ Lab #3 Section 4
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	int today, elapsedDay;
	string todayName, nameForFuture;
	cout << "Enter today's day: ";
	cin >> today;
	cout << endl;
	
	cout << "Enter the number of days elapsed since today: ";
	cin >> elapsedDay;
	cout << endl;
	
     if (today == 0)
      todayName = "Sunday";
    else if (today == 1)
      todayName = "Monday";
    else if (today == 2)
      todayName = "Tuesday";
    else if (today == 3)
      todayName = "Wednesday";
    else if (today == 4)
      todayName = "Thursday";
    else if (today == 5)
      todayName = "Friday";
    else if (today == 6)
      todayName = "Saturday";
    else 
	cout << "Invalid (Enter a number between 0-6)" << endl;
	 
	int futureDay = (today + elapsedDay) % 7;
	
	switch (futureDay)
	{
		case 0: nameForFuture = "Sunday";
		    break;
		case 1: nameForFuture = "Monday";
		    break;
		case 2: nameForFuture = "Tuesday";
		    break;
		case 3: nameForFuture = "Wednesday";
		    break;
		case 4: nameForFuture = "Thursday";
		    break;
		case 5: nameForFuture = "Friday";
		    break;
		case 6: nameForFuture = "Saturday";
		    break;	    
	}
	
	cout << "Today is " << todayName << " and the future day is " << nameForFuture << endl;
	
	return 0; 
	
}
