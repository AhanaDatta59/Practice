// #include <stdio.h>
// #include <stdlib.h>
// void print(int *arr,int n){
//     for(int i=0;i<n;i++)
//     printf("%d ",arr[i]);
//     printf("\n");
// }
// void merge(int *arr,int l,int m,int r){
//     int i=l;
//     int k=l;
//     int j=m+1;
//     int b[l-r+1];
//     while((i<=m)&&(j<=r)){
//         if(arr[i]<=arr[j])
//         b[k++]=arr[i++];
//         else
//         b[k++]=arr[j++];
//      }
//      while(i<=m)
//      b[k++]=arr[i++];
//      while(j<=r)
//      b[k++]=arr[j++];
//      while(l<=r)
//      arr[l++]=b[l];
     
// }
// void mergeSort(int *arr,int l,int r){
//     if(l<r){
//         int m = (l+r)/2;
//         mergeSort(arr,l,m);
//         mergeSort(arr,m+1,r);
//         merge(arr,l,m,r);
//     }
// }
// int main(){
//     int arr[]={3,6,9,1,5,8,10,0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     print(arr,n);
//     mergeSort(arr,0,n-1);
//     print(arr,n);
// }
// C program for Merge Sort 
#include <stdio.h> 
#include <stdlib.h> 

// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(int arr[], int l, int m, int r) 
{ 
	int i=l, j=m+1, k=l; 
	// int n1 = m - l + 1; 
	// int n2 = r - m; 

	// Create temp arrays 
	//int L[n1], R[n2]; 
    int b[l-r+1];

	// Copy data to temp arrays 
	// L[] and R[] 
	// for (i = 0; i < n1; i++) 
	// 	L[i] = arr[l + i]; 
	// for (j = 0; j < n2; j++) 
	// 	R[j] = arr[m + 1 + j]; 
    while(i<=m&&j<=r){
        if(arr[i]<=arr[j])
        b[k++]=arr[i++];
        else
        b[k++]=arr[j++];
    }
     while(i<=m)
     b[k++]=arr[i++];
     while(j<=r)
     b[k++]=arr[j++];
     while(l<=r)
     arr[l++]=b[l];
	// Merge the temp arrays back 
	// into arr[l..r] 
	// Initial index of first subarray 
// 	i = 0; 

// 	// Initial index of second subarray 
// 	j = 0; 

// 	// Initial index of merged subarray 
// 	k = l; 
// 	while (i < n1 && j < n2) { 
// 		if (L[i] <= R[j]) { 
// 			arr[k] = L[i]; 
// 			i++; 
// 		} 
// 		else { 
// 			arr[k] = R[j]; 
// 			j++; 
// 		} 
// 		k++; 
// 	} 

// 	// Copy the remaining elements 
// 	// of L[], if there are any 
// 	while (i < n1) { 
// 		arr[k] = L[i]; 
// 		i++; 
// 		k++; 
// 	} 

// 	// Copy the remaining elements of 
// 	// R[], if there are any 
// 	while (j < n2) { 
// 		arr[k] = R[j]; 
// 		j++; 
// 		k++; 
// 	} 
 } 

// l is for left index and r is 
// right index of the sub-array 
// of arr to be sorted 
void mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) { 
		// Same as (l+r)/2, but avoids 
		// overflow for large l and h 
		int m = l + (r - l) / 2; 

		// Sort first and second halves 
		mergeSort(arr, l, m); 
		mergeSort(arr, m + 1, r); 

		merge(arr, l, m, r); 
	} 
} 

// UTILITY FUNCTIONS 
// Function to print an array 
void printArray(int *A, int size) 
{  
	for (int i = 0; i < size; i++) 
		printf("%d ", A[i]); 
	printf("\n"); 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 12, 11, 13, 5, 6, 7 }; 
	int arr_size = sizeof(arr) / sizeof(arr[0]); 

	printf("Given array is \n"); 
	printArray(arr, arr_size); 

	mergeSort(arr, 0, arr_size - 1); 

	printf("\nSorted array is \n"); 
	printArray(arr, arr_size); 
	return 0; 
}