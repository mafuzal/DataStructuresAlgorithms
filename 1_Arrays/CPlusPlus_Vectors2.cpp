// Add elements to a vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> num{1, 2, 3, 4, 5};
    cout << "Initial Vector: ";
    for (const int &i : num)
    {
        cout << i << " ";
    }

    // Add the integers 25 and 18 to the vector
    num.push_back(25);
    num.push_back(18);

    cout << "\nUpdated Vector: ";
    for (const int &i : num)
    {
        cout << i << " ";
    }

    return 0;
}