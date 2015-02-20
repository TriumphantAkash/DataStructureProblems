/*
In this program I am trying to implement heap
The compilation is file but my program has some logical error
I am unable to debug it by now
*/

#include <iostream>
using namespace std;

void insert_heap(int* H, int* tail_addr, int a)
{
	int tail = *tail_addr;
	int temp;
	*tail_addr = *tail_addr + 1;
	H[*tail_addr] = a;
	//percolate
	if(*tail_addr>=1){
		while(H[*tail_addr]>=H[*tail_addr-1]/2){
		//swap(H[tail], H[tail-1]/2);
			temp = H[*tail_addr];
			H[*tail_addr] = H[*tail_addr-1/2];
			H[(*tail_addr - 1)/2] = temp;
			
			if (*tail_addr < 1)
				break;
		}
	}
	
}

int main()
{
	int A[15]={2,8,1,5,3,4,7,9,6,10,15,13,14,11,12}; 
	int HEAP[15];
	int tail = -1;
	int i;
	//inserting element in the heap
	for(i=0;i<15;i++){
		insert_heap(HEAP, &tail, A[i]);
	}

	//printing heap
	for(i=0;i<=14;i++){
		cout<<HEAP[i]<<endl;
	}

	return 0;
}


