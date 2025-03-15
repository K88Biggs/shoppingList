#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	const string shoppingItem1 = "shoes";
	const string shoppingItem2 = "hat";
	const string shoppingItem3 = "food";
	const string shoppingItem4 = "clothing";

	// Create a vector of strings and add the string variables to it
	vector<string> stringList;
	stringList.push_back(shoppingItem1);
	stringList.push_back(shoppingItem2);
	stringList.push_back(shoppingItem3);
	stringList.push_back(shoppingItem4);

	// Print the elements of the vector in a list format
	cout << "String List:" << endl;
	for (size_t i = 0; i < stringList.size(); ++i) {
		cout << i + 1 << ". " << stringList[i] << endl;
	}
}


