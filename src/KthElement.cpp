
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

KthElement(int* A, int p, int r, int k)
{
	int q = 0;
	q = randomizedpartition(A, p, r);
	if(k == q)
		return A[q];
	else if(k<q)
		q = KthElement(A, p, q, k);
	else
		q = randomizedpartition(A, q+1, r, (k-(q-p+1)));
}
