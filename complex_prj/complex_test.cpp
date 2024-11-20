#include <complex.hpp>

bool testOperatorPlus(){
    return true;
}

bool testConstructor(double re, double im){
    Complex complex_num = Complex(re);
    return complex_num.re == re; // только не так сравнивайте, а через epsilon
}

// Комлексное число состоит из действительной части и мнимой
// re == 1.2
// im == 4.3
// complex_number: 1.2 + 4.3i

int main(){
    // желательно тестировать не только на одной паре параметров
    // а рассматривать несколько комбинаций
    // в том числе если есть какие-то особые случаи
    std::cout << testConstructor(1.2, 4.3);

}

