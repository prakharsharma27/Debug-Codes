// Code for Binary Search 

// Get the desired output

// INPUT
// arr :- 2, 3, 4, 10, 40
// element to search :- 10

// Desired OUTPUT
// Should return the index 3

// Actual OUTPUT 
// -1 (Means not present)

// find bug in code. 





int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle
		// itself
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, mid - 1,l, x);

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, r, mid+1, x);
	}

	// We reach here when element is not
	// present in array
	return -1;
}
