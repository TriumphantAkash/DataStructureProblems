#include <limits>
class Node *p = new Node();

void merge(int* A, int p, int q, int r)
{
	int L[q-p+1] = A[p to q];
	int R[r-q] = A[q+1 to r];
	set L[q-p+2] = INT_MAX;
	set R[r-q+1] = INT_MAX;


	int i = 0;
	int j = 0;

	while(k = p to r || L[i] != INT_MAX || R[j] != INT_MAX)
	{
		if(L[i]<R[j]){
			A[k] = L[i];
			i++;
		} else{
			A[k]=R[j];
			j++;
		}
	}
	if(L[i]==INT_MAX)
		//copy rest of R's elements in  A
	else if(R[j] == INT_MAX)
		//copy rest of L's elemets in A
	else
		return;
}

void merge_sort(int* A, int p, int r)
{
	if(p<r){
		(q = p+r)/2;
		merge_sort(A, p, q);
		merge_sort(A, q+1, r);
		merge(A, p, q, r);
	}
}
