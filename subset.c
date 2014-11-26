#include <stdio.h>
#include <stdlib.h>


// Should use a O(n log n) sorting algorithm instead.

void inserationsort(int arr[], int low, int high){
	int j, k, key;
	for(j = low + 1; j <= high; j++){
		key = arr[j]; 
		k = j -1;
		while(k >= 0 && key < arr[k]){			
			arr[k+1] = arr[k];
			k--;
		}
		arr[k+1] = key;
	}
}

void sumSubSets(int arr[], int x){
	int i = 0, j = 5;
	while(i <5 && j >1){

		if(arr[i] + arr[j] == x){
			printf("%d + %d = %d\n", arr[i], arr[j], arr[i]+arr[j]);
			i++;
			j--;			
		}else if(arr[i]+arr[j] > x){
			j--;
		}else{
			i++;
		}
	}
}

int main()
{

	int arr[] = {2,3,4,7,8,9};

	inserationsort(arr,0,5);	

	sumSubSets(arr, 11);
	return 0;
}