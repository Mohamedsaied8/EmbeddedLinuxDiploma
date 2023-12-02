
/*
* Given an array has Integer values and include multiple values of the same element 
* need to move the a given integer value to the end of the array.
* example 1,2,3,2,10,9,2,27,30,17,8,9
* answer  1 3 10 9 27 30 17 8 9 2 2 2 
* Time complexity should be O(n)
*/





#include <vector>
#include <iostream>

using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
int front=0,end=array.size()-1;
	vector<int> out(array.size(),0);
	for(int i=0; i < array.size(); i++)
	{
		if(array[i] == toMove)
		{
			out[end] = toMove;
			end--;
		}
		else{
			out[front]=array[i];
			front++;
		}
	}
	return out;
}

int main()
{
    vector<int> data = {1,2,3,2,10,9,2,27,30,17,8,9};
    auto result = moveElementToEnd(data, 2);
    for( auto element : result)
    {
        cout << element << " ";
    }

    return 0;
}
