//Testing C++ Strucutures 

#include<iostream> 
#include<string> 

using namespace std ; 
using std::string ; 

//A structure is an aggregation of elements 
int main() 
{ 
enum MealType { no_preference, regular , low_fat, vege } ; 

struct Passenger { 
		string name ; //passenger name 
		MealType mealpref ; 
		bool isFreqFlyer ; 
		string frewqFlyerNo ; 
	} ;

Passenger pass = { "John Smith" , vege , true , "566555" } ; 

		pass.name = "Pocahonstacs " ; //changing name. Why? Beause we can! 
		pass.mealpref = regular ; 
		
		cout<<pass.name<<endl ; 
		cout<<pass.mealpref<<endl ; 
		cout<<pass.isFreqFlyer<<endl ; 
		cout<<pass.frewqFlyerNo ; 
		
		
	return 0 ; 
} 

	////Using references 
 //string author = "Samuel Clemens" ; 
 //string& penName = author ; 
 //penName = "Mark Twain" ; 
 //cout<<author ; 
