#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Create a vector of integers
    vector<int> vec;

    // Add elements to the vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // Access elements using index
    cout << vec[0] << endl; // Output: 1
    cout << vec[1] << endl; // Output: 2
    cout << vec[2] << endl; // Output: 3

    // Iterate through the vector
    for (int i : vec) {
        cout << i << " ";
    }
    // Output: 1 2 3

    return 0;
}