#include <iostream>
#include <vector>
#include <random>
#include <utility>

#include "permutation_random.h"

using namespace std;

template <class LISTA>
LISTA permut(LISTA x){
    int n = x.size();

    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(0,1);

    double u{dist(mt)};

    int k{n-1};
    while (k > -1)    
    {
        int r = int(u*k)+1;
        swap(x[k], x[r]);
        k -=1;
    }

    return x;
}
