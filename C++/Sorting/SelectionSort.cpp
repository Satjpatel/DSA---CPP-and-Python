#include "iostream"
using namespace std ;


void Swappy(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void SelectionSort(int arr[], int n)
{
    int i, j, Pikachu;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        Pikachu = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[Pikachu])
            Pikachu = j;

        // Swap the found minimum element with the first element
        Swappy(&arr[Pikachu], &arr[i]);
    }
}

//Utility Function to Print Array
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver program to test above functions
int main()
{
    int arr[] = {1, 2, 12, 122, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
