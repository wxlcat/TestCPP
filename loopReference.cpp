#include <iostream>
using namespace std;

class A;
class B;

class A {
    public:
    ~A(){
        cout << "Destruct A" << endl;
    }
    shared_ptr<B> ptr;
};

class B {
    public:
    ~B(){
        cout << "Destruct B" << endl;
    }
    shared_ptr<A> ptr;
};

int main() {
    shared_ptr<A> ptrA(new A());    
    shared_ptr<B> ptrB(new B());    

    cout << ptrA.use_count() << endl;

    ptrA->ptr = ptrB;
    ptrB->ptr = ptrA;

    cout << ptrA.use_count() << endl;
}