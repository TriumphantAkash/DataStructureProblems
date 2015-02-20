/*
This program demonstrate the use of a hashmap
Hashmaps are MAGICAL
Using hashmap we can search an element in O(1) i.e. constant time
*/

#include <string>
#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string, int> M;
	M["Akash"]=12;
	M["Mayank"]=14;
//OR do it this way

	M.insert(pair<string, int>("Manish", 15));
	M.insert(pair<string, int>("Jay", 13));
	M.insert(pair<string, int>("Lawrence", 1));
	M.insert(pair<string, int>("Febian", 2));
	M.insert(pair<string, int>("Kushal", 56));

	cout<<"Size of the map is: "<<M.size()<<endl;
//Iterating through the list
	for(map<string, int>::iterator i=M.begin(); i!=M.end(); i++)
		cout<<i->first<<":"<<i->second<<endl;	


//serching an element
	map<string, int>::iterator j;
	j = M.find("Jay");
	cout<<"printing the searched element :"<<j->second<<endl;
	return 0;
}
