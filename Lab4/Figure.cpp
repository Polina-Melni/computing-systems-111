#include "Figure.h"
using namespace std;

double Figure::checkValue(const double value) const
{
	if (value <= 0)
		throw out_of_range("Zero value");
	return value;
}

Ellipse::Ellipse(const double r1, const double r2)
{
	this->_r1 = r1;
	this->_r2 = r2;
}

Ellipse::Ellipse(const Ellipse& e)
{
	this->_r1 = e._r1;
	this->_r2 = e._r2;
	this->_perimeter = e._perimeter;
	this->_area = e._area;
}

double Ellipse::getPerimeter() {
	this->_perimeter = 2 * M_PI * sqrt((this->_r1 * this->_r1 + this->_r2 * this->_r2) / 2);
	return this->_perimeter;
}

double Ellipse::getArea() {
	this->_area = M_PI * this->_r1 * this->_r2;
	return this->_area;
}

Parallelepiped::Parallelepiped(double a, double b, double c)
{
	this->_a = a;
	this->_b = b;
	this->_c = c;
}

Parallelepiped::Parallelepiped(const Parallelepiped& p)
{
	this->_a = p._a;
	this->_b = p._b;
	this->_c = p._c;
	this->_perimeter = p._perimeter;
	this->_area = p._area;
}

double Parallelepiped::getPerimeter() {
	this->_perimeter = EQ_ADGES_OF_PLP * (this->_a + this->_b + this->_c);
	return this->_perimeter;
}

double Parallelepiped::getArea() {
	this->_area = 2 * (this->_a * this->_b + this->_a * this->_c + this->_c * this->_b);
	return this->_area;
}

void Rhomb::isExist(const double a, const double h) const
{
	checkValue(a);
	checkValue(h);
	if (h >= 2 * a)	throw out_of_range("Too big height of rhomb");
}

Rhomb::Rhomb(double a, double h)
{
	isExist(a, h);
	this->_a = a;
	this->_h = h;
}

Rhomb::Rhomb(const Rhomb& r)
{
	this->_a = r._a;
	this->_h = r._h;
	this->_perimeter = r._perimeter;
	this->_area = r._area;
}

double Rhomb::getPerimeter() {
	this->_perimeter = SIDES_OF_RMB * this->_a;
	return this->_perimeter;
}

double Rhomb::getArea() {
	this->_area = this->_a * this->_h;
	return this->_area;
}

std::ostream& operator<<(std::ostream& out, const Figure& f)
{
	out << "Perimetr " << f._perimeter << std::endl << "Area " << f._area << std::endl;
	return out;
}

std::istream& operator>>(istream& in, Ellipse& e)
{
	double r1, r2;
	in >> r1 >> r2;
	e = Ellipse(r1, r2);
	return in;
}

istream& operator>>(istream& in, Parallelepiped& p)
{
	double a, b, c;
	in >> a >> b >> c;
	p = Parallelepiped(a, b, c);
	return in;
}

istream& operator>>(istream& in, Rhomb& r)
{
	double a, h;
	in >> a >> h;
	r = Rhomb(a, h);
	return in;
}

