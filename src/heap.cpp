/*
In this program I am trying to implement heap
The compilation is file but my program has some logical error
I am unable to debug it by now
*/

//parent index i				child index 2i+1, 2i+2
//child index i					parent index i-1/2

#include <iostream>
using namespace std;

void insert_heap(int* H, int* tail_addr, int a)
{
	int tail = *tail_addr;
	int temp;
	*tail_addr = *tail_addr + 1;
	H[*tail_addr] = a;
	//percolate up
	if(*tail_addr>=1){
		while(H[*tail_addr]>=H[*tail_addr-1]/2){	//if the inserted element is bigger than it's parent then percolate up
		//swap(H[tail], H[tail-1]/2);
			temp = H[*tail_addr];
			H[*tail_addr] = H[*tail_addr-1/2];
			H[(*tail_addr - 1)/2] = temp;
			
			if (*tail_addr < 1)
				break;
		}
	}
	
}

int delete_from_heap(int* H, int* tail_addr)
{
	int ret = H[0];		//return the root element becasue this is the max element in the heap, it's a max heap
	H[0] = H[*tail_addr];	//replace root with tail element
	
	int i = 0;			//we will percolate down H[0], untill it reaches its appropriate place

	*tail_addr = *tail_addr - 1;
	
	while(H[i]<2*i+1 || H[i]<2*i+1 ? true : false){
		if(H[i]<2*i+1){
			swap(H[i], H[2*i+1]);
			i=2*i+1;
		}else{
			swap(H[i], H[2*i+2]);
			i=2*i+2;
		}
	}


	return ret;
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
	int n = 15;
	/*To sort the heap we will keep on deleting from the heap and store it in the last index in the array*/
	for(i = n-1; i>0; i++){
		A[i]=delete_from_heap(HEAP, &tail);
	}

	return 0;
}


