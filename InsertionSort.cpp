/*
InsertionSort

Name : Bhawana
Age : 22

*/

/*
Input---
size of array - 5
array elements - 9 0 1 2 4
Output---
0 1 2 4 9
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=1;i<n;i++)
	{
		int j=i,key;
		if(a[j]<a[j-1]){
			key=a[j];

			while(key<a[j-1] && j>0){
			a[j]=a[j-1];
			j--;
			}
			a[j]=key;	
		}

	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
