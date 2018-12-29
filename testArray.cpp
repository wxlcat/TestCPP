#include <iostream>
#include <array>
using namespace std;

void test1() {
     array<int, 10> arr = {1,2};
    arr.fill(3);

    cout << arr.at(0) << endl;
    
    cout << endl;
    for(int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << endl;
    }

    cout << endl;
    for(int &t : arr) {
        cout << t << endl;
    }

    cout << endl;
    for(int &t : arr) {
        cout << t << endl;
    }

    int *ite = std::begin(arr);
    int *endPrt = std::end(arr);
    cout << endl;
    while(ite != endPrt) {
        cout << *ite << endl;
        ite++;
    }

    
}

void test5() {
    array<int, 10> arr1 = {};
    array<int, 10> arr2 = {};
    arr1.fill(1);
    arr2 = arr1;
    for(int &t : arr2) {
        cout << t << " ";
    }

    cout << endl << (arr1 == arr2);
    arr2.at(9) = 2;
    cout << endl << (arr1 == arr2);
}

int main() {
   
    test5();
}