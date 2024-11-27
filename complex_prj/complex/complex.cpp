#include <complex.hpp>

Complex::Complex(const double re)
    : re(re)
{}


Complex& Complex::operator+=(const Complex& rhs){
    //полная реализация
    this->re += rhs.re;
    this->im += rhs.im;
    return *this;
}

// Complex operator+(const Complex& lhs, const Complex& rhs){
//     //используете уже реализованную логику
//     // переиспользуете
//     Complex new_complex = Complex(lhs);
//     return new_complex += rhs;
// }


// ostream << '{' << re << ',' << im << '}' ДЕЛАЕМ ТАК без пробелов
// ostream << re << '+' << im << "i"