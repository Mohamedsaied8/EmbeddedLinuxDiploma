// CPP Program to demonstrate the implementation in Map

#include <iostream>
#include <iterator>
#include <map>
#include <unordered_map>

using namespace std;
std::pair<int,int> g_pair(8,10);

std::unordered_map<int, string> x_unordered_map;

template<class T1, class T2>
struct xPair
{
	xPair(){}
	xPair(T1 first_, T2 second_) : first(first_), second(second_)
	{

	}

	//factory mehtod.
	static xPair Make_xPair(T1 local_first, T2 local_second)
	{
		//xPair temp_pair(local_first,local_second );
		return xPair(local_first, local_second);
	}

T1 first;
T2 second;
};


int main()
{

	xPair<int, string> x_pair = xPair<int,string>::Make_xPair(11,"Mohamed Salah");

 
	map<string, int> myMap;
	//factory method
	myMap.insert(make_pair<string, int>("Mohamed Saied", 22)); 
	myMap.insert(make_pair<string, int>("Mohamed Salah", 22)); 
	
	// empty map container
	map<int, int> quiz;
	//quiz_id , time limit
	// insert elements in random order
	quiz.insert(make_pair<int, int>(1, 40)); 
	quiz.insert(pair<int, int>(2, 30));
	quiz.insert(pair<int, int>(3, 50));
	quiz.insert(pair<int, int>(4, 20));
	quiz.insert(pair<int, int>(5, 100));
	quiz.insert(pair<int, int>(6, 200));
	
	quiz[7]=10;	 // another way of inserting a value in a map
	
	for(auto& pair : quiz)
	{
		auto key = pair.first;
		auto value = pair.second;

	}

	for(auto& [key, value] : quiz)
	{

	}
	// printing map quiz
	map<int, int>::iterator itr;
	cout << "\nThe map quiz is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = quiz.begin(); itr != quiz.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second << '\n';
	}
	cout << endl;

	// assigning the elements from quiz to quiz2
	map<int, int> quiz2(quiz.begin(), quiz.end());

	// print all elements of the map quiz2
	cout << "\nThe map quiz2 after"
		<< " assign from quiz is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = quiz2.begin(); itr != quiz2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

	cout << endl;

	// remove all elements up to
	// element with key=3 in gquiz2
	cout << "\n quiz2 after removal of"
			" elements less than key=3 : \n";
	cout << "\tKEY\tELEMENT\n";
	quiz2.erase(quiz2.begin(), quiz2.find(3));
    
	for (itr = quiz2.begin(); itr != quiz2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

	// remove all elements with key = 4
 	int num;
	num = quiz2.erase(4);
	cout << "\ngquiz2.erase(4) : ";
	cout << num << " removed \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = quiz2.begin(); itr != quiz2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

	cout << endl;
 
	// lower bound and upper bound for map gquiz1 key = 5
	cout << "gquiz1.lower_bound(5) : "
		<< "\tKEY = ";
	auto it = quiz2.lower_bound(5);
	cout << it->first << '\t';
	cout << "\tELEMENT = " << it->second
		<< endl;
	cout << "gquiz1.upper_bound(5) : "
		<< "\tKEY = ";
	cout << quiz2.upper_bound(5)->first << '\t';
	cout << "\tELEMENT = " << quiz2.upper_bound(5)->second
		<< endl;

	return 0;
}
