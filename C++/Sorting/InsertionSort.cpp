#include "iostream"

using namespace std; 

//Insertion Sort Function 
void InsertionSort(int arr[], int n) 
	{ 
		int i, Pikachu, j ; 
		
		for(j = 1 ; j < n ; j++) 
		{ 
			Pikachu = arr[j] ; 
			i = j-1 ; 
			
			while(i>=0 && arr[i]>Pikachu) 
			{ 
				arr[i+1] = arr[i] ; 
				i-- ; 
			} 
			
			arr[i+1] = Pikachu ; 
		} 
	} 
	
//Utility Function to Print array 
void PrintArray(int arr[], int n) 
{ 
	int i ; 
	for (i = 0; i < n; i++) 
		cout<<arr[i]<<" "; 
		cout<<endl ; 
} 

//Driver Code 
int main() 
{ 
	int arr[] = {2, 5, 1} ; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	
	InsertionSort(arr, n) ; 
	PrintArray(arr, n) ; 
	
	return 0 ; 
} 
