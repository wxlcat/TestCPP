#include <memory>
#include <iostream>
using namespace std;

class Book : public enable_shared_from_this<Book> {
    public:
        ~Book() {
            cout << "Destruct" << endl;
        }  

        shared_ptr<Book> getPtr() {
            return shared_from_this(); 
        }
};

int main() {
    shared_ptr<Book> ptr(new Book());
    shared_ptr<Book> ptr2 = ptr->getPtr();
    shared_ptr<Book> ptr3 = ptr;
    cout << ptr.use_count() << endl;
}