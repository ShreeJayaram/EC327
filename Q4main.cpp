#include <iostream>
#include "cashiercalc.cpp"
#include "cashiercalc.h"
using namespace std;

int main() 

{   

double amount;
char kind;
int percent;
int people;
int amounttotal;
double tax;
double taxtotal = 0;
double tippedamount;
double taxtiptotal;
double rawtotal = 0;
double counter = 0;
double totalall;
char yesno;
		
 do { 

	cout << "What is the amount?";
	cin >> amount;
	rawtotal = amount + rawtotal;

	//cout << "total raw amount is" << rawtotal;	

	cout << "Is it food(f) or liquor(l)?";
	cin >> kind;
	
	if (kind == 'f') { 
		tax = amount*0.09;
}
	if (kind == 'l') { 
		tax = amount*0.12;
}
	counter = tax + counter;
	totalall = counter + rawtotal;
	//cout << "total all is: " << totalall;

	//totalall = taxtotal + totalall;
	

	//totaltotal = taxtotal + rawtotal;
	//cout << "final total is" << totaltotal;

	//cout << "total tax amount is: " << taxtotal;
	//cout << "total amount wit tax is" << totaltotal;

	cout <<"Do you have more items? ";
	cin >> yesno;       
	         

} while (yesno != 'n');


	cout << "What percent would you like to tip?";
	cin >> percent;
	if (percent <= 15) { 
		cout << "Tip should be greater or equal to 15." << endl;
		}
	cout << "Percent? ";
	cin >> percent;

	taxtiptotal = totalall + (totalall * percent/100);
	//taxtiptotal = tippedamount + totalall;
	
	cout << "How many people are you splitting this with?";
	cin >> people;
	
	cout << "Your total will be " << split(taxtiptotal,people) << " per person" << endl;
	

   return 0;

} 

