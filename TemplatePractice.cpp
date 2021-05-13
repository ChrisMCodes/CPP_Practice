#include <iostream>
using namespace std;

template<class T>
class Rectangle {
  private:
    T length;
    T width;
  public:
    Rectangle(T lengh, T width);
    T add();
    T subtract();
};

template<class T>
Rectangle<T>::Rectangle(T length, T width) {
    this->length = length;
    this->width = width;
}

template<class T>
T Rectangle<T>::add() {
    return length + width;
}

template<class T>
T Rectangle<T>::subtract() {
    return length - width;
}


int main()
{
    Rectangle<int> r(10, 5);
    
    cout << "Add: " << r.add() << endl;
    cout << "Subtract: " << r.subtract() << endl;
    
    return 0;
}
