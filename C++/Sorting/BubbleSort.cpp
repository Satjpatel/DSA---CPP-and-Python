#include "iostream"
using namespace std ;



//Swapping Function
void Swappy(int *a, int *b)
{
	int temp ;
	temp = *a ;
	*a = *b ;
	*b = temp ;
}


//Bubble Sort Function
void BubbleSort(int arr[], int n)
{
   int i, j;

   for (i = 0; i < n-1; i++)
   {
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           Swappy(&arr[j], &arr[j+1]);

        }
     }
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
	int arr[] = {2, 7, 5} ;
	int n = sizeof(arr)/sizeof(arr[0]);

	BubbleSort(arr, n) ;
	PrintArray(arr, n) ;

	return 0 ;
}
