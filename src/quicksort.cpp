#include <iostream>
using namespace std;

int randomizedpartition(int* A, int p, int r)
{
	int pivot = A[r];
	int pIndex = p;
	int temp;

	for(int i = p; i<r-1; i++){
		if(A[i]<=pivot){
			//swap(A[i],A[pIndex]);
			temp = A[i];
			A[i] = A[pIndex];
			A[pIndex] = temp;
			pIndex++;
		}
	}
	//swap(pivot, A[pIndex]);
	temp = pivot;
	pivot = A[pIndex];
	A[pIndex] = temp;

	return pIndex;
}

void quicksort(int* A, int p, int r)
{
	int q;
	if(p<r){
		q = randomizedpartition(A, p, r);
		quicksort(A, p, q-1);
		quicksort(A, q+1, r);
	}
}

int main()
{
	int A[10]={4,3,2,5,6,1,9,7,8,10};
	quicksort(A, 0, 9);
	cout<<"printing the array after sorting"<<endl;
	for(int i = 0; i<10;i++)
		cout<<A[i]<<" ";
	return 0;
}
