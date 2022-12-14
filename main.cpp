#include <iostream>
#include <vector>

#include "permutation_random.cpp"

using std::cout;
using std::endl;
using std::vector;

int main(int argc, char const *argv[])
{
    vector<double> x{25,50,75,44,66,31};

    for (auto i:x) cout << i << "   ";
    cout << endl;

    x = permut(x);

    for (auto i:x) cout << i << "   ";

    return 0;
}
