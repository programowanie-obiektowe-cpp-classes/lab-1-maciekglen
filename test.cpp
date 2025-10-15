#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <type_traits>

#include "Wektor2D.hpp"

TEST_CASE("ctor, set, get", "[]")
{
    Wektor2D v{};
    CHECK(v.getX() == Approx{0.});
    CHECK(v.getY() == Approx{0.});

    v.setX(1.);
    v.setY(2.);
    CHECK(v.getX() == Approx{1.});
    CHECK(v.getY() == Approx{2.});
}

TEST_CASE("algebra", "[]")
{
    Wektor2D v1{1., 2.};
    Wektor2D v2{2., 1.};
    auto     sum = v1 + v2;

    REQUIRE(std::is_same_v< Wektor2D, decltype(sum) >);
    CHECK(sum.getX() == Approx{3.});
    CHECK(sum.getY() == Approx{3.});

    auto prod = v1 * v2;

    REQUIRE(std::is_same_v< double, decltype(prod) >);
    CHECK(prod == Approx{4.});
}

/*
int main()
{
Wektor2D v1{};         // Konstruktor domyślny, wektor o wsp. [0, 0]
v1.setX(1.0);          // setter
v1.setY(1.0);          // setter
double x1 = v1.getX(); // getter
double y1 = v1.getY(); // getter

std::println("X = {}", x1);
std::println("Y = {}", y1);

Wektor2D v2{2., 2.};     // Konstruktor nadający współrzędne
double   x2 = v2.getX(); // getter
double   y2 = v2.getY(); // getter

std::println("X = {}", x2);
std::println("Y = {}", y2);

Wektor2D sum = v1 + v2; // dodawanie wektorów

double sumax = sum.getX(); // getter
double sumay = sum.getY(); // getter

std::println("SumaX = {}", sumax);
std::println("SumaY = {}", sumay);

double prod = v1 * v2; // iloczyn skalarny
std::println("Iloczyn = {}", prod);
}

*/
