#include <iostream>
using namespace std;

class A {
    public:
        int age = 1;
        A() {
            cout << "Construct" << endl;
        }
        ~A(){
            cout << "Destruct" << endl;
        }
};

int main() {
    A *t = new A();
    cout << t << endl;

    shared_ptr<A> ptr(t);
    cout << "ptr: " << ptr.use_count() << endl;

    shared_ptr<A> ptr2(t);
    cout << "ptr2: " << ptr.use_count() << endl;
}