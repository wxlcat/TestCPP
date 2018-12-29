#include <iostream>
#include <vector>
#include <array>
using namespace std;


void test1() {
    array<int, 10> arr {1,2,3};
    vector<int> vec = {std::begin(arr), std::end(arr)};
    for(int &val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

void test2() {
    array<int, 10> arr {1,2,3,4};
    vector<int> vec { std::make_move_iterator(std::begin(arr)), std::make_move_iterator(std::end(arr)) };
    for(int val : arr) {
        cout << val << " ";
    }
    cout << endl;
    for(int val : vec) {
        cout << val << " ";
    }
}

int main() {
    test2();
}