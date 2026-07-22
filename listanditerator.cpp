#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> numbers = {1, 2, 3, 4, 5};
    for (auto it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << " ";
    }
}