#include<iostream> 

using namespace std ; 

int main() 
{ 
    int a = 5 ; 
    int *p ; 
    p = &a ; //& gets the address
    //Pointers should always be initialized before 
    cout<<"p "<<p ; 
    cout<<"\n&a "<<(&a) ; 
    cout<<"\n&p "<<(&p) ; 
    cout<<"\n*p "<<(*p) ; //Dereferencing

    return 0 ; 

}