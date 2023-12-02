/*
* Given a sorted Array in ascending order need to square every element in this array
* and maintain the sorting in the same order.
* {1,5,6,7,8,9}
* {1,25,36,49,64,81}
* Space complexity should be O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {

	vector<int> squaredArray;

	transform(array.begin(),array.end(),array.begin(),[](int element)->int{
		return (element*element);
	});
	sort(array.begin(),array.end());
	return array;
}

int main()
{
    vector<int> data = {1,5,6,7,8,9};
    auto result = sortedSquaredArray(data);
    for( auto element : result)
    {
        cout << element << " ";
    }

    return 0;
}