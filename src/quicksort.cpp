/* Program	:	implementation of quick qort
			This program implements quick sort algorithm with an example of array of 15 elements
 * Author	:	Akash Chaturvedi
 * Instructor	:	Dr. Neeraj Gupta
 * Course	:	CS5343
 */

#include <iostream>
using namespace std;

class Quicksort{
	private:
		int A[15];
	public:
		void sort(int, int);
		int randomizedPartition(int, int);
		void print();
		Quicksort();
};

Quicksort::Quicksort()
{
	A[0]=2;
	A[1]=4;
	A[2]=23;
	A[3]=1;
	A[4]=7;
	A[5]=8;
	A[6]=12;
	A[7]=1;
	A[8]=53;
	A[9]=41;
	A[10]=67;
	A[11]=18;
	A[12]=98;
	A[13]=34;
	A[14]=5;

}

int Quicksort::randomizedPartition(int p, int r)
{
	int pivot = A[r];
	int pIndex = p;
	int temp;
	for(int i = p; i<r-1; i++){
		if(A[i]<=pivot){
			swap(A[i],A[pIndex]);
			pIndex++;
		}
	}
	swap(A[pIndex], A[r]);
	
	return pIndex;
}

void Quicksort::sort(int p, int r)
{
	int q;
	if(p<r){
		q = randomizedPartition(p, r);
		sort(p, q-1);
		sort(q+1, r);
	}
}

void Quicksort::print()
{

	int i = 0;
	while(i<15){
		cout<<A[i]<<" ";
		i++;
	}
	cout<<endl;
}

int main()
{
	Quicksort qs;
	
	qs.sort(0, 15);
	cout<<"Printing the sorted array:"<<endl;
	qs.print();
	return 0;
}
