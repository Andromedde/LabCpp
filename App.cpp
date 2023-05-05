#include "App.h"
#include "Servesis/Algoritm.h"
#include "Servesis/Algoritm.cpp"
#include <algorithm>
#include "vector"
#include "array"
#include "assert.h"
using namespace std;

int App::start() {
    struct Cpoint {
        int x;
        int y;
    };
    vector<Cpoint> numbers1;
    numbers1.push_back({1, 1});
    numbers1.push_back({2, 2});

    cout <<"any_of: " << anyOf(numbers1.begin(), numbers1.end(), [](const Cpoint &point) { return (point.x == point.y); }) << endl;

    array<int, 9> v {1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto is_even = [](int i) { return i % 2 == 0; };
    cout.setf(ios_base::boolalpha);
    cout << isPartitioned(v.begin(), v.end(), is_even) << ' ';

    isPartitioned(v.begin(), v.end(), is_even);
    cout << isPartitioned(v.begin(), v.end(), is_even) << ' ';

    reverse(v.begin(), v.end());
    cout << isPartitioned(v.cbegin(), v.cend(), is_even) << ' ';
    cout << isPartitioned(v.crbegin(), v.crend(), is_even) << '\n';


    vector<int> numbers3{1, 2, 3, 4, 5};
    for(int i =0;i<5;i++){
        assert(findNot(static_cast<Iterator>(numbers3.begin()), static_cast<Iterator>(numbers3.end()), 5) == numbers3.end());
    }


}