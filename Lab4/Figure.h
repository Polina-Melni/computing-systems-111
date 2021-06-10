#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
/**
* \brief ����� ������
*/
class Figure {

protected:
    /**
    * \brief ����������
    */
    virtual ~Figure() = default;
    /**
    * \brief ��������
    */
    double _perimeter = 0;
    /**
    * \brief �������
    */
    double  _area = 0;
    /**
    * \brief ����� �������� �����
    */
    double checkValue(const double value) const;


public:
    /**
    * \brief ����������� ���������� ������ ���������� ���������
    */
    virtual double getPerimeter() = 0;
    /**
    * \brief ����������� ���������� ������ ���������� �������
    */
    virtual double getArea() = 0;
    /**
    * \brief ������������� �������� ������
    */
    friend ostream& operator<< (ostream& out, const Figure& f);

};

/**
* \brief ����� ������
*/
class Ellipse : public Figure {

private:
    /**
    * \brief ���� - ������� �������
    */
    double _r1, _r2;

public:
    /**
    * \brief ����������� �� ���������
    */
    Ellipse() = default;
    /**
    * \brief ����������� �����������������
    */
    Ellipse(const double r1, const double r2);
    /**
    * \brief ����������� �����������
    */
    Ellipse(const Ellipse& e);
    /**
    * \brief ����������
    */
    ~Ellipse() = default;
    /**
    * \brief ����� ���������� ���������
    */
    double getPerimeter() override;
    /**
    * \brief ����� ���������� �������
    */
    double getArea() override;
    /**
     * \brief ������������� �������� �����
     */
    friend istream& operator>> (istream& in, Ellipse& e);


};

/**
* \brief ����� ��������������
*/
class Parallelepiped : public Figure {

private:
    /**
    * \brief  ���� - ������� ���������������
    */
    double _a, _b, _c;
    static constexpr int EQ_ADGES_OF_PLP = 4;
public:
    /**
    * \brief ����������� �� ���������
    */
    Parallelepiped() = default;
    /**
    * \brief ����������� �����������������
    */
    Parallelepiped(double a, double b, double c);
    /**
    * \brief ����������� �����������
    */
    Parallelepiped(const Parallelepiped& p);
    /**
    * \brief ����������
    */
    ~Parallelepiped() = default;
    /**
    * \brief ����� ���������� ���������
    */
    double getPerimeter() override;
    /**
    * \brief ����� ���������� �������
    */
    double getArea() override;
    /**
     * \brief ������������� �������� �����
     */
    friend istream& operator>> (istream& in, Parallelepiped& p);
};

/**
* \brief ����� ����
*/
class Rhomb : public Figure {

private:
    /**
    * \brief  ���� - ������� ����� � ��� ������
    */
    double _a, _h;
    /**
    * \brief  ����� �������� ������������� �����
    */
    void isExist(const double a, const double h) const;
    static constexpr int SIDES_OF_RMB = 4;

public:
    /**
    * \brief ����������� �� ���������
    */
    Rhomb() = default;
    /**
    * \brief ����������� �����������������
    */
    Rhomb(double a, double h);
    /**
    * \brief ����������� �����������
    */
    Rhomb(const Rhomb& r);
    /**
    * \brief ����������
    */
    ~Rhomb() = default;
    /**
    * \brief ����� ���������� ���������
    */
    double getPerimeter() override;
    /**
    * \brief ����� ���������� �������
    */
    double getArea() override;
    /**
     * \brief ������������� �������� �����
     */
    friend istream& operator>> (istream& in, Rhomb& r);
};


