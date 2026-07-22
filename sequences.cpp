#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> sequence = {1, 2, 3, 4, 5};
    for (int value : sequence)
    {
        cout << value << " ";
    }
}