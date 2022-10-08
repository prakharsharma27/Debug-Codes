
// This is the code for the function of selection sort. 
// The desireed OUTPUT is in _Descending order_ 

// INPUT 
// 64, 25, 12, 22, 11
// Desired OUTPUT
// 64 25 22 12 11 
// Actual OUTPUT
// 11 12 22 25 64


void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n-1; i++)
    {
       
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        if(min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
}
