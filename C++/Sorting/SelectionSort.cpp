#include "iostream"


using namespace std ;



//Swapping Function
void Swappy(int a, int b)
{
	int temp ;
	temp = a ;
	a = b ;
	b = temp ;
}


//Selection Sort Function
void SelectionSort(int arr[], int n)
{
	int i, j ;

	int Pikachu ; //Pikachu is the assumed min value.

  for ( j = 0 ; j < n-1 ; j++)
  {
    Pikachu = j ;
    for( i = j+1 ; i < n ; i++ )
     {
       if(arr[i]<arr[Pikachu]) //New Minimum
          {
            Pikachu = i;

          }
       }
    Swappy(arr[j],arr[Pikachu]) ;
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
	int arr[] = {2, 1, 5, 9} ;
	int n = sizeof(arr)/sizeof(arr[0]);

	SelectionSort(arr, n) ;
	PrintArray(arr, n) ;

	return 0 ;
}
