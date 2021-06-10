#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
/**
* \brief Класс фигура
*/
class Figure {

protected:
    /**
    * \brief Деструктор
    */
    virtual ~Figure() = default;
    /**
    * \brief Периметр
    */
    double _perimeter = 0;
    /**
    * \brief Площадь
    */
    double  _area = 0;
    /**
    * \brief метод проверки ввода
    */
    double checkValue(const double value) const;


public:
    /**
    * \brief виртуальное объявление метода нахождения периметра
    */
    virtual double getPerimeter() = 0;
    /**
    * \brief виртуальное объявление метода нахождения площади
    */
    virtual double getArea() = 0;
    /**
    * \brief Перегруженный оператор вывода
    */
    friend ostream& operator<< (ostream& out, const Figure& f);

};

/**
* \brief Класс эллипс
*/
class Ellipse : public Figure {

private:
    /**
    * \brief поля - радиусы эллипса
    */
    double _r1, _r2;

public:
    /**
    * \brief Конструктор по умолчанию
    */
    Ellipse() = default;
    /**
    * \brief Конструктор параметризованный
    */
    Ellipse(const double r1, const double r2);
    /**
    * \brief Конструктор копирования
    */
    Ellipse(const Ellipse& e);
    /**
    * \brief Деструктор
    */
    ~Ellipse() = default;
    /**
    * \brief метод нахождения периметра
    */
    double getPerimeter() override;
    /**
    * \brief метод нахождения площади
    */
    double getArea() override;
    /**
     * \brief Перегруженный оператор ввода
     */
    friend istream& operator>> (istream& in, Ellipse& e);


};

/**
* \brief Класс параллелепипед
*/
class Parallelepiped : public Figure {

private:
    /**
    * \brief  поля - стороны параллелепипеда
    */
    double _a, _b, _c;
    static constexpr int EQ_ADGES_OF_PLP = 4;
public:
    /**
    * \brief Конструктор по умолчанию
    */
    Parallelepiped() = default;
    /**
    * \brief Конструктор параметризованный
    */
    Parallelepiped(double a, double b, double c);
    /**
    * \brief Конструктор копирования
    */
    Parallelepiped(const Parallelepiped& p);
    /**
    * \brief Деструктор
    */
    ~Parallelepiped() = default;
    /**
    * \brief метод нахождения периметра
    */
    double getPerimeter() override;
    /**
    * \brief метод нахождения площади
    */
    double getArea() override;
    /**
     * \brief Перегруженный оператор ввода
     */
    friend istream& operator>> (istream& in, Parallelepiped& p);
};

/**
* \brief Класс ромб
*/
class Rhomb : public Figure {

private:
    /**
    * \brief  поля - сторона ромба и его высота
    */
    double _a, _h;
    /**
    * \brief  метод проверки существования ромба
    */
    void isExist(const double a, const double h) const;
    static constexpr int SIDES_OF_RMB = 4;

public:
    /**
    * \brief Конструктор по умолчанию
    */
    Rhomb() = default;
    /**
    * \brief Конструктор параметризованный
    */
    Rhomb(double a, double h);
    /**
    * \brief Конструктор копирования
    */
    Rhomb(const Rhomb& r);
    /**
    * \brief Деструктор
    */
    ~Rhomb() = default;
    /**
    * \brief метод нахождения периметра
    */
    double getPerimeter() override;
    /**
    * \brief метод нахождения площади
    */
    double getArea() override;
    /**
     * \brief Перегруженный оператор ввода
     */
    friend istream& operator>> (istream& in, Rhomb& r);
};


