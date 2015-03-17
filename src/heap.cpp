/* Functionality	:	This program is an implementation of heap using array that based on the following rule
 * 			 	parent index i, child index 2i+1, 2i+2
 * 			 	child index i, parent index i-1/2
				Also, this program contains all the functions(percolate_up, percolate_down etc.
				that are used in the heap insert and delete operations)
 * Author 		: 	Akash Chaturvedi
 * Instructor 		: 	Dr. Neeraj Gupta
 * Course		:	CS5343.501
*/
#include <iostream>
using namespace std;

class Heap{
	private:
		int H[20];
		int temp;
	public:
		Heap();
		void swap(int*, int*);
		void print_heap(void);
		void percolate_up(void);
		void percolate_down(void);
		void insert_in_heap(int);
		int delete_from_heap(void);
		void heapify(void);
};

void Heap::swap(int* a, int* b)
{
	temp = *a;
	*a = *b;
	*b = temp;
}
void Heap::print_heap()
{
	int i=1;
	while(i<=H[0]){
		cout<<H[i]<<" ";
		i++;
	}
	cout<<endl;
}

Heap::Heap()
{
	H[0] = 0;
}


void Heap::percolate_up()
{
	int i = H[0];
	int n = H[i];
	while(n>=H[i/2] && i>=2){
		swap(&H[i], &H[i/2]);
		i = i/2;
	}
}

void Heap::percolate_down()
{
	int n = H[1];
	int i = 1;
	while((n<=H[2*i] || n<=H[2*i+1]) && (2*i+1) <= H[0]){
		if(H[2*i] > H[2*i+1]){
			swap(&H[i], &H[2*i]);
			i = 2*i;
		}else{
			swap(&H[i], &H[2*i+1]);
			i = 2*i+1;
		}
	}
}

void Heap::insert_in_heap(int a)
{
	H[0] = H[0]+1;
	H[H[0]] = a;
	percolate_up();
}

int Heap::delete_from_heap()
{
	int ret = H[1];
	H[1]=H[H[0]];
	H[0] = H[0]-1;
	percolate_down();
	return ret;	
}

int main()
{
	int i;
	int sorted_heap[20];
	//inserting element in the heap
	class Heap h;
	h.insert_in_heap(8);
	h.insert_in_heap(7);
	h.insert_in_heap(67);
	h.insert_in_heap(45);
	h.insert_in_heap(2);
	h.insert_in_heap(1);
	h.insert_in_heap(53);
	h.insert_in_heap(63);
	h.insert_in_heap(34);
	h.insert_in_heap(2);
	h.insert_in_heap(15);
	h.insert_in_heap(5);
	h.insert_in_heap(4);
	h.insert_in_heap(23);
	h.insert_in_heap(1);

	cout<<"printing initial heap"<<endl;
	h.print_heap();	

	//storing the sorted numbers in local array
	for(i = 0;i<15;i++)
		sorted_heap[i] = h.delete_from_heap();

	cout<<"printing the sorted list:"<<endl;
	for(i = 0;i<15;i++)
		cout<<sorted_heap[i]<<" ";
	cout<<endl;
	
	return 0;
}


