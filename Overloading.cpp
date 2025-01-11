#include <iostream>
using namespace std;
//Complex numbers are involved in the following.
class Complex {
    public:
        float real, imag;

        Complex(float r = 0, float i = 0) : real(r), imag(i) {}

        // Overloading the + operator
        Complex operator+(const Complex& obj) {
            return Complex(real + obj.real, imag + obj.imag);
        }

        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1(2.5, 3.5), c2(1.5, 4.5);
    Complex c3 = c1 + c2; // Using overloaded + operator
    c3.display();
    return 0;
}
