#include "cashiercalc.h"
#include <iostream> 
using namespace std;

/*double tip(double totaltotal, double percent)
{
	tip = totaltotal * percent/100;
	return tip;
} */

/*double taxtiptotal(double tip; double totaltotal)
{
	taxtiptotal = tip+totaltotal;
	return taxtiptotal;
} */ 

double split(double taxtiptotal,int people)
{	
	double splitno;
	splitno = taxtiptotal/people;
	return splitno;

} 
