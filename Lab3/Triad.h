#pragma once
#include <sstream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

/**
* \brief ����� Triad ��� ������ � �������� �����
*/

class Triad
{
protected:
	double a;
	double b;
	double c;
	/**
	* \brief ��������� ������������ ��������
	*/
	double checkValue(double n) const;

public:

	/**
	 * \brief ����������� �� ���������
	 */
	Triad() = default;

	/**
	 * \brief ����������������� �����������
	 */
	explicit Triad(const double a, const double b, const double c);

	/**
	 * \brief ����������
	 */
	~Triad() = default;

	/**
	 * \brief ������ �������� ���� �
	 */
	double getA() const;
	/**
	 * \brief ������ �������� ���� B
	 */
	double getB() const;
	/**
	 * \brief ������ �������� ���� �
	 */
	double getC() const;
	/**
	 * \brief ������ ����� 3 �����
	 */
	double getSum() const;

	/**
	 * \brief ������ ���� �
	 */
	void setA(double a);

	/**
	 * \brief ������ ���� �
	 */
	void setB(double b);

	/**
	 * \brief ������ ���� �
	 */
	void setC(double c);

	/**
	 * \brief ������������� �������� �����
	 */
	friend istream& operator>> (istream & in, Triad & triad);

	/**
	 * \brief ������������� �������� ������
	 */
	friend ostream& operator<< (ostream & out, const Triad & triad);
};

/**
* \brief ����� Triangle ��� ������ � ��������������, ����������� ������� �� ������
*/
class Triangle :public Triad
{

protected:
	/**
	* \brief ��������� �������� ���� ������������ � ����� ����
	*/
	double getAngle(const double m, const double n, const double k) const;
	static constexpr double HALF_CIRCLE_DEG = 180.0;

public:

	/**
	* \brief ����������� �� ���������
	*/
	Triangle() = default;

	/**
	* \brief ����������������� �����������
	*/
	explicit Triangle(const double c, const double b, const double a);

	~Triangle() = default;

	/**
	* \brief ��������� ������� ������������
	*/
	double getArea() const;

	/**
	* \brief ��������� �������� ���� �
	*/
	double getAlpha() const;
	/**
	* \brief ��������� �������� ���� B
	*/
	double getBeta() const;
	/**
	* \brief ��������� �������� ���� �
	*/
	double getGamma() const;

	/**
	 * \brief ��������� ������������� ������������
	 */
	void isCorrect(double a, double b, double c) const;

	/**
	 * \brief ������������� �������� �����
	 */
	friend istream& operator>> (istream& in, Triangle& triangle);

	/**
	* \brief ������������� �������� ������
	*/
	friend ostream& operator<< (ostream& out, const Triangle& triangle);

};

