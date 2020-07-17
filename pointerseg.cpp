#include<iostream> 
#include<string> 

using std::string ; 
using namespace std ; 

int main() 
	{ 
		string s = "to be" ; 
		string t = "not " + s ; 
		string u = s + " or " + t ; 
		if (s>t) 
			cout<<"\n"<<u ; 
		string k = "John" ; 
		int i = k.size() ; 
		cout<<i<<"\n"  ; 
		char c = k[3] ;
		cout<<c<<"\n" ;  
		k += "Sith" ; 
		cout<<k ; 
		
		return 0 ; 
	} 
