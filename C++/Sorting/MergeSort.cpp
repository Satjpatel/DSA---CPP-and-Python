#include "iostream"

using namespace std;

//Swapping Function
void Swappy(int *a, int *b)
{
	int temp ;
	temp = *a ;
	*a = *b ;
	*b = temp ;
}

/*
//Testing Code for Swappy - Swappy Works perfectly ; 
int main() 
{ 
  int a = 9 ; 
  int b = 2 ; 
  Swappy(&a, &b) ; 
  cout<<"a = "<<a<<endl<<"b="<<b<<endl ; 

  return 0 ; 
}
*/ 


//Function for Merging two Arrays in a sorted manner
void Merge(int arr[], int lower, int middle, int upper)
{
  int n1 = middle - lower + 1 ;
  int n2 = upper - middle ;
  int arr1[n1], arr2[n2] ;
  int i = 0 ; //Index for arr1
  int j = 0 ; //Index for arr2
  int k = 0 ; //Index for arr -- Merged Array

  //Copying Data to the temp Half Arrays
  for( i = 0 ; i < n1 ; i++ )
    arr1[i] = arr[lower+i] ;
  for( j = 0 ; j < n2 ; j++ )
    arr2[j] = arr[middle+1 + j] ;

  while( (i < n1) && (j < n2))
  {
    if(arr1[i] < arr2[j])
      arr[k++] = arr1[i++] ; //A neat syntax for writing arr3[k] = arr1[i] ; k++ ; i++ ;
    else
      arr[k++] = arr2[j++] ; //A neat syntax for writing arr3[k] = arr2[j] ; k++ ; j++ ;
  }
//Copying remaining elements of arr2 - arr1 is now empty
    while(j < n2)
      arr[k++] = arr2[j++] ;
//Copying remaining elements of arr1 - arr2 is now empty
    while(i < n1)
      arr[k++] = arr1[i++] ;
}



//Merge Sort Function
//We will explore the recursive nature of programming
void MergeSort(int arr[], int lower, int upper)
{
  if(lower >= upper)
  {
    return ;
  }
  int middle = (lower+upper-1)%2 ;
  MergeSort(arr, lower, middle) ;
  MergeSort(arr, middle+1, upper) ;
  Merge(arr, lower, middle, upper) ;
//Divide and conquer baby! The Britishers did this, now its our turn!
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
	int arr[] = {2, 5, 8, 1} ;
	int n = sizeof(arr)/sizeof(arr[0]);

	MergeSort(arr, 0, n-1) ;
	PrintArray(arr, n) ;

	return 0 ;
}
