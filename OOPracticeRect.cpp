#include <iostream>
using namespace std;

class Rectangle {
    private:
    int length;
    int width;
    
    public:
    Rectangle() {
        length = width = 1;
    }
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    
    int area() {
        return length * width;
    }
    
    int perimeter() {
        return 2 * (length + width);
    }
    
    int getLength() {
        return length;
    }
    void setLength(int l) {
        length = l;
    }
    
    int getWidth() {
        return width;
    }
    
    void setWidth(int w) {
        width = w;
    }
    
    // nothing to destroy
    // but keeping this so
    // that I remember and
    // can refer back to it
    ~Rectangle() {
        
    }
    
};

int main() {
    Rectangle r(10, 5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    
    r.setLength(20);
    
    cout << r.getLength() << endl;
    
    r.setWidth(10);
    
    cout << r.area() << endl;
    cout << r.perimeter() << endl;

    return 0;
}
