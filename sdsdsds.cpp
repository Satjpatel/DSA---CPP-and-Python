//Expressions 
Bitwise OPerators 
~exp --> Bitwise complements 
exp&exp --> Bitwise AND 
	exp^exp  --> Bitwise exclusive OR 
	exp | exp --> Bitsise OR 
	
	exp1<<exp2 --> shift exp1 left by exp2 bits 
	The left shift operator always fills with zeros. 
	
	//Assignments Operators 
	
	//Changing Types through Casting 
	Casting is an operation that allows us to change the type of a variable. 
	In essence, we can take a variable of one type and cast it into an equivalent variable of another type. 
	
	int cat= 14 ; 
	double pig = double(cat) ; //C++ functional cast 
	
	int i1 = 18 ; 
	int i2 = 16 ; 
	double dv1 = i1/i2 ; 
	double dv2 = double(i1)/double(i2) ; 
	double dv3 = double(i1 / i2) ; 
	
	Explicit Cast Operators 
	1. static_cast 
	2. dynamic_cast 
	3. const_cast 
	4. reinterpret_cast 
	
	1. Static Casting 
	
	1.3 Control Flow 
	
	if(condition)
		true_statement 
	else if(condition) 
	
	Switch
	
	
	
	//default constructor 
	Passenger::Passenger() 
	{ 
		name = " -- No Name -- " ; 
		mealPref = No_PRef ; 
		isFreqFlyer = false ; 
		freqFlyerNo = "NONE" ; 
	} 
	
	//constructor given member values 
	Passenger::Passenger(const string& nm, MealType mp, const string& ffn) 
	{ 
		name = nm ; 
		mealPref = mp ; 
		isFreqFlyer = (ffn != "NONE") ; //true only if ffn given 
		freqFlyerNo = ffn ; 
	} 
	
	//copy constructor 
	Passenger::Passenger(const Passenger& pass) 
	{ 
		name = pass.name ; 
		mealPref = pass.mealPref ; 
		isFreqFlyer = pass.inFreqFlyer ; 
		freqFlyerNo= pass.freqFlyerNo ; 
	} 
	
	
	//default constructor 
	Passenger p1; 
	//2nd constructor 
	Passenger p2 ( "John Smith" , VEGE , 1729 ) ; 
	//not a frequent flyer 
	Passenger p3("Pocahontas" , REGULAR ) ; 
	//copied from p3 
	Passenger p4(p3) ; 
	//copied from p2 
	Passenger p5 = p2 ; 
	//default constructor 
	Passenger* pp1 = new Passenger ; 
	//2nd constructor 
	Passenger* pp2 = new Passenger("Joe Blow" , NO_PREF ) ; 
	//uses the default constructor 
	Passenger pa[20] ; 
	
	//Initializing Class Members with "'Initializer Lists" 
	//constructor using an initializer list 
	
	Passenger::Passenger(const string& nm, MealType mp, string ffn) 
		: name(nm) , MealPref(mp) , isFreqFlyer(ffn != "NONE") 
	{ 
		freqFlyerNo = ffn ; 
	} 
	
	//Destructor 
	
	A destructor is a member function that is automatically called when 
	a class object ceases to exist. 
	
	If a class object comes into existence dynamically using the new 
	operator, the destructor will be called when this object is destroyed 
	using the delete operator. 
	
	#include<vector> 
	using namespace std ; 
	
	vector<int>scores(100) ; 
	//100 integer scores 
	
	//buffer of 500 characters 
	vector<char>buffer(500) ; 
	
	//list of 20 Passengers 
	vector<Passenger>passenLIst(20) ; 
	
	
	
	
	
	
	
