#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
/**
 * \brief Класс Goods для работы с товарами в магазине
 */

class Goods
{
private:
    /**
 * \brief поля наименования, даты и индекса, которые используют тип string
 */
    string name, date, id;
    /**
 * \brief поля цены и общей стоимости, которые инициализированы для дальнейшей работы с конструкторами
 */
    double price = 0, count = 0;
public:
    /**
 * \brief конструктор по умолчанию
 */
    Goods() = delete;
    /**
 * \brief конструктор инициализации
 */
    Goods(const double price, const double count);
    /**
 * \brief деструктор
 */
    ~Goods() = default;
    /**
 * \brief метод, устанавливающий значение имени
 */
    void setName(const string& name)
    {
    }
    /**
 * \brief метод, возвращающий имя
 */
    string getName() const
    {
    }
    /**
 * \brief метод, устанавливающий значение даты
 */
    void setDate(const string& date)
    {
    }
    /**
 * \brief метод, возвращающий дату
 */
    string getDate() const
    {
    }
    /**
 * \brief метод, устанавливающий значение цены
 */
    void setPrice(double price)
    {
    }
    /**
 * \brief метод, возвращающий значение цены
 */
    int getPrice() const
    {
    }
    /**
 * \brief метод, возварщающий стоимость всех товаров одного наименования
 */
    double getTotalPrice()
    {
    }
    /**
 * \brief метод, устанавливающий итоговую стоимость
 */
    void setCount(double count)
    {
    }
    /**
 * \brief метод, возвращающий итоговую стоимость
 */
    int getCount() const
    {
    }
    /**
 * \brief метод, устанавливающий индекс товара
 */
    void setId(const string& id)
    {
    }
    /**
 * \brief метод, возвращающий индекс товара
 */
    string getId() const
    {
    }
    /**
 * \brief метод, потокового вывода количества, наименования и полной стоимости товара в строчку
 */
     stringstream& operator<< (std::ostream & out, const Goods& goods)
    {
    }
};

