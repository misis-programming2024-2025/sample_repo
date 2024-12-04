#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <stdexcept>
#include <vector>

// #include <complex> //include в вашем случае, когда реализация не в этом файле

// Пример функции для тестирования
int add(int a, int b) {
    return a + b;
}

std::vector<int> make_vector(int size) {
    if (size < 0) {
        throw std::invalid_argument("Size cannot be negative");
    }
    return std::vector<int>(size, 0);
}

// Тестовые кейсы
TEST_CASE("Basic functionality of add()") {
    CHECK(add(2, 3) == 10);
    CHECK(add(-1, 1) == 0);
    CHECK(add(0, 0) == 0);
}

TEST_CASE("Exception handling in make_vector()") {
    CHECK_THROWS_AS(make_vector(-1), std::invalid_argument); // Проверка на исключение
}

// Тестирование с подкейсами
TEST_CASE("Vectors with make_vector()") {
    SUBCASE("Empty vector") {
        std::vector<int> v = make_vector(0);
        CHECK(v.empty());
    }
    
    SUBCASE("Non-empty vector") {
        std::vector<int> v = make_vector(3);
        CHECK(v.size() == 3);
        CHECK(v[0] == 0);
    }
}

// Тестирование через циклы
TEST_CASE("Parameterized testing") {
    for (int i : {1, 2, 3}) {
        CHECK(add(i, i) == 2 * i);  // Проверка для разных значений
    }
}