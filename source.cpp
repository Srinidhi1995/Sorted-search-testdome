#include <vector>
#include <stdexcept>
#include <iostream>
#include<algorithm>
using namespace std;
int countNumbers(const std::vector<int>& v, int lessThan)
{
    auto itr =lower_bound(begin(v), end(v), lessThan); // O(log n)

      // return the distance between two iterators
    return distance(std::begin(v), itr); // O(1)
}

#ifndef RunTests
int main()
{
    std::vector<int> v { 1, 3, 5, 7 };
    std::cout << countNumbers(v, 4);
}
#endif
