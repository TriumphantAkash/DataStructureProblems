/*to find 3 such elements in the array such that
A[i]+A[j]+A[k] == x*/
#include <stdio.h>

int binary_search(int* A, int p, int r, int n)
{
	if(p>r)
		return 1000;
	else{
		int q = (p+r)/2;
		if(A[q] == n)
			return q;
		else if(n > A[q])
			binary_search(A, q+1, r, n);
		else
			binary_search(A, p, q-1, n);
	}
}

int main()
{
	int A[10] = {10,20,30,40,50,60,70,80,90,100};
	int i = 0;
	int k = 9;
	int j = 0; 
	int x = 14;
	int r = 0;
/*
	while(A[i]+A[k]+A[j] != x) {	
		
	}
*/
	for (i=0;i<10;i++){
		for(k=9;k>0;k--){
			if(A[i]+A[k]<x){
				r = x-A[i]-A[k];
				j = binary_search(A, 0, 9, r);
				if(j != 1000){
					printf("%d, %d, %d\n", i, j, k);
					break;
				}
			}
		}
	}

	return 0;
}
