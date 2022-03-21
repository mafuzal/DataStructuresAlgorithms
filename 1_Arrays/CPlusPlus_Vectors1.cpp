#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Initializer List
    vector<int> vector1 = {1, 2, 3, 4, 5};

    // Uniform initialization
    vector<int> vector2{6, 7, 8, 9, 10};

    // Method 3
    vector<int> vector3(5, 12);

    cout << "vector1 = ";

    // ranged loop
    for (const int &i : vector1)
    {
        cout << i << " ";
    }

    cout << "\nvector2 = ";

    // ranged loop
    for (const int &i : vector2)
    {
        cout << i << " ";
    }

    cout << "\nvector3 = ";

    // ranged loop
    for (const int &i : vector3)
    {
        cout << i << " ";
    }

    return 0;
}