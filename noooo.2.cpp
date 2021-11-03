/**
*@ Siti Munizaiyanah binti Bahaman
*@ Matric No: 2116492
*@ Lab #3 Section 4
*/

#include<iostream>

using namespace std;

int main()
{
	float hours;
	cout << "Enter number of hours a car parked at the international airport: "; 
    cin >> hours; 
    
    if(hours >= 0 && hours <= 3)
    {
    	cout << "Parking fee: 5";
	}
	else if (hours > 3 && hours <= 9)
	{
		cout << "Parking fee: " << 6 * int(hours);
	} 
	else if (hours > 9 && hours <= 24)
	{
		cout<< "Parking fee: 60";
	}
	
	return 0;
}



