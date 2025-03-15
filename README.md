# shoppingList
This C++ program demonstrates how to create and manage a list of shopping items using the std::vector container. The program initializes a list of shopping items, stores them in a vector, and prints the items in a numbered list format.

# Features
Initialization of Shopping Items: The program initializes four shopping items as constant strings.
Vector Usage: The shopping items are stored in a std::vector for dynamic management.
List Display: The program prints the shopping items in a numbered list format.

# Code Explanation

using namespace std;

int main() {
    // Initialize shopping items
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

    return 0;
}
# Detailed Breakdown
Include Necessary Libraries:

#include '<iostream>': For input/output operations.
#include '<vector>': For using the std::vector container.
#include '<string>': For using the std::string class.
Using the Standard Namespace:

using namespace std;: Allows you to use standard library names without the std:: prefix.
# Main Function:

int main() { ... }: The entry point of the program.
Initialize Shopping Items:

const string shoppingItem1 = "shoes";
const string shoppingItem2 = "hat";
const string shoppingItem3 = "food";
const string shoppingItem4 = "clothing"; These variables store the names of the shopping items.
Create a Vector of Strings:

vector<string> stringList;: Declares a vector to hold strings.
stringList.push_back(shoppingItem1);
stringList.push_back(shoppingItem2);
stringList.push_back(shoppingItem3);
stringList.push_back(shoppingItem4); Adds the shopping items to the vector.
Print the Shopping List:

cout << "String List:" << endl;: Prints a header for the list.
A for loop iterates over the vector and prints each item with its position in the list:
for (size_t i = 0; i < stringList.size(); ++i) {
    cout << i + 1 << ". " << stringList[i] << endl;
}
This loop prints each item in the vector, prefixed by its index (starting from 1).

# How to Run
Make sure you have a C++ compiler installed on your system.
Save the code to a file named shopping_list.cpp.
Open a terminal or command prompt and navigate to the directory where shopping_list.cpp is saved.
Compile the code using the command: g++ shopping_list.cpp -o shopping_list
Run the compiled program using the command: ./shopping_list (on Unix-based systems) or shopping_list.exe (on Windows).
