#include <cmath>
#include <print>

struct Informer
{
    Informer() { std::println("Informer stworzony"); }
    ~Informer() { std::println("Informer zniszczony"); }
};

class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
public:
    Wektor2D() : X(0.0), Y(0.0) {}
    Wektor2D(double x, double y) : X(x), Y(y) {}
    ~Wektor2D() {}

    void setX(int x) { X = x; }
    int  getX() { return X; }

    void setY(int y) { Y = y; }
    int  getY() { return Y; }

private:
    double X;
    double Y;
};

Wektor2D operator+(Wektor2D& v1, Wektor2D& v2)
{
    return Wektor2D(v1.getX() + v2.getX(), v1.getY() + v2.getY());
}

double operator*(Wektor2D& v1, Wektor2D& v2)
{
    return v1.getX() * v2.getX() + v1.getY() * v2.getY();
}