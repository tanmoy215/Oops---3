#include<bits/stdc++.h>
using namespace std;
class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 1);
    Complex sum = c1 + c2; // Operator overloading in action!
    return 0;
}
