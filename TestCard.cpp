#include "CreditCard.h" //provides CreditCard 
#include<vector> 
using namespace std ; 

//CreditCard test function 
void testCard() 
{ 
	//vector of 10 CreditCard pointers 
	vector<CreditCard*>wallet(10) ; 

	//allocate 3 new cards 
	
	wallet[0] = new CreditCard("2365 2256 1478 9635", "PashaBhai", 6522) ; 
	wallet[1] = new CreditCard("2589 6325 1478 9658", "Musabhai", 7896) ; 
	wallet[2] = new CreditCard("7894 7986 7913 5698", "PetaBro" , 4599) ; 
	
	for (int j = 1 ; j <= 16 ; j++ ) 
		{ 
			wallet[0]->chargeIt(double(j)) ; //explicity cast to double 
			wallet[1]->chargeIt(2 * j) ; //implicity cast to double 
			wallet[2]->chargeIt(double(3 * j)) ; 
		} 
		
	cout<<"Card payments: \n" ; 
	for (int i = 0 ; i < 3 ; i++ ) 
	{ 
		cout<<*wallet[i] ; 
		while (wallet[i]->getBalance() > 100.0) 
		{
			wallet[i]->makePayment(100.0) ; 
			cout<<"New balance = "<<wallet[i]->getBalance()<<"\n" ; 
		} 
		
		cout<<"\n" ; 
		delete wallet[i] ;  //deallocate storage 
	} 
} 

int main() 
{ 
	testCard() ; 
	return 0 ; //Successful execution 
} 

