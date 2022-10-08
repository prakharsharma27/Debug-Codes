
// This is the code for the function of selection sort. 
// The desireed OUTPUT is in _Descending order_ 

// INPUT 
// 64, 25, 12, 22, 11
// Desired OUTPUT
// 64 25 22 12 11 
// Actual OUTPUT
// 11 12 22 25 64


// Name : Anmol Saxena  Age : 21


void selectionSort(int arr[], int n)
{
    int i, j;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++){
            if (arr[j] > arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
