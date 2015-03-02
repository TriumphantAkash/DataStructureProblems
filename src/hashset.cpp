/*
This program demonstrate the use of a hashmap
Hashmaps are MAGICAL
Using hashmap we can search an element in O(1) i.e. constant time
*/

/*

*/
#include <string>
#include <iostream>
#include <unordered_map>		//This is 
using namespace std;

int main()
{
	unordered_set< int> M;
//OR do it this way

	M.insert(15);
	M.insert(12);
	M.insert(11);
	M.insert(14);
	M.insert(5);
	M.insert(6);

	cout<<"Size of the map is: "<<M.size()<<endl;
//Iterating through the list
	for(unordered_set<int>::iterator i=M.begin(); i!=M.end(); i++)
		cout<<*i<<endl;	


//serching an element
	unordered_set<int>::iterator j;
	j = M.find(6);
	cout<<"printing the searched element :"<<*j<<endl;
	return 0;
}
