#pragma once
#include <sstream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

/**
* \brief Класс Triad для работы с тройками чисел
*/

class Triad
{
protected:
	double a;
	double b;
	double c;
	/**
	* \brief Проверяем допустимость значений
	*/
	double checkValue(double n) const;

public:

	/**
	 * \brief Конструктор по умолчанию
	 */
	Triad() = default;

	/**
	 * \brief Параметризованный конструктор
	 */
	explicit Triad(const double a, const double b, const double c);

	/**
	 * \brief Деструктор
	 */
	~Triad() = default;

	/**
	 * \brief геттер значения поля А
	 */
	double getA() const;
	/**
	 * \brief геттер значения поля B
	 */
	double getB() const;
	/**
	 * \brief геттер значения поля С
	 */
	double getC() const;
	/**
	 * \brief геттер суммы 3 полей
	 */
	double getSum() const;

	/**
	 * \brief Сеттер поля А
	 */
	void setA(double a);

	/**
	 * \brief Сеттер поля в
	 */
	void setB(double b);

	/**
	 * \brief Сеттер поля С
	 */
	void setC(double c);

	/**
	 * \brief Перегруженный оператор ввода
	 */
	friend istream& operator>> (istream & in, Triad & triad);

	/**
	 * \brief Перегруженный оператор вывода
	 */
	friend ostream& operator<< (ostream & out, const Triad & triad);
};

/**
* \brief Класс Triangle для работы с треугольниками, задаваемыми длинами их сторон
*/
class Triangle :public Triad
{

protected:
	/**
	* \brief Получение значения угла треугольника в общем виде
	*/
	double getAngle(const double m, const double n, const double k) const;
	static constexpr double HALF_CIRCLE_DEG = 180.0;

public:

	/**
	* \brief конструктор по умолчанию
	*/
	Triangle() = default;

	/**
	* \brief параметризованный конструктор
	*/
	explicit Triangle(const double c, const double b, const double a);

	~Triangle() = default;

	/**
	* \brief Получение площади треугольника
	*/
	double getArea() const;

	/**
	* \brief Получение значения угла А
	*/
	double getAlpha() const;
	/**
	* \brief Получение значения угла B
	*/
	double getBeta() const;
	/**
	* \brief Получение значения угла С
	*/
	double getGamma() const;

	/**
	 * \brief Проверяем существование треугольника
	 */
	void isCorrect(double a, double b, double c) const;

	/**
	 * \brief Перегруженный оператор ввода
	 */
	friend istream& operator>> (istream& in, Triangle& triangle);

	/**
	* \brief Перегруженный оператор вывода
	*/
	friend ostream& operator<< (ostream& out, const Triangle& triangle);

};

