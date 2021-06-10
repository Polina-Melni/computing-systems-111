#include "Triad.h"
#include <iostream>
using namespace std;

Triad(const double a, const double b, const double c)
{
    setA(a);
    setB(b);
    setC(c);
}

double getA() const
{
    return this->a;
}

double getB() const
{
    return this->b;
}

double getC() const
{
    return this->c;
}

void setA(double a)
{
    this->a = checkValue(a);
}

void setB(double b)
{
    this->b = checkValue(b);
}

void setC(double c)
{
    this->c = checkValue(c);
}

double ckValue(double n) const
{
    if (n > 0)
        return n;
    throw invalid_argument("Error");
}

double getSum() const
{
    return getA() + getB() + getC();
}

istream& operator>>(istream& in, Triad& triad)
{
    double a, b, c;

    in >> a >> b >> c;
    triad = Triad(a, b, c);
    return in;
}

ostream& operator<<(ostream& out, const Triad& triad)
{
    out << "Triad is:  " << triad.getA() << ", " << triad.getB() << ", " << triad.getC() << std::endl;

    return out;
}

Triangle(const double a, const double b, const double c)
{
    isCorrect(a, b, c);
    setA(a);
    setB(b);
    setC(c);
}

double getAngle(const double m, const double n, const double k) const
{
    double angle = acos((m * m + n * n - k * k) / (2 * m * n)) * HALF_CIRCLE_DEG / M_PI;
    return angle;
}

double getArea() const
{
    double p = getSum() / 2;
    return sqrt(p * (p - getA()) * (p - getB()) * (p - getC()));
}

double getAlpha() const
{
    return this->getAngle(getB(), getC(), getA());
}

double getBeta() const
{
    return this->getAngle(getA(), getC(), getB());
}

double getGamma() const
{
    return this->getAngle(getB(), getA(), getC());
}

void isCorrect(double a, double b, double c) const
{
    checkValue(a);
    checkValue(b);
    checkValue(c);
    if (a >= b + c || b >= a + c || c >= a + b)
        throw "Triangle does not exist";
}


istream& operator>>(istream& in, Triangle& triangle)
{
    double a, b, c;
    in >> a >> b >> c;
    triangle = Triangle(a, b, c);
    return in;
}

ostream& operator<<(ostream& out, const Triangle& triangle)
{

    out << "Triangle whith sides  " << triangle.getA() << ", "
        << triangle.getB() << ", " << triangle.getC() << " has square "
        << triangle.getArea() << ". It`s angles: Alpha=" << triangle.getAlpha()
        << " deg, Beta=" << triangle.getBeta() << " deg, Gamma="
        << triangle.getGamma() << " deg " << std::endl;
    return out;
}

