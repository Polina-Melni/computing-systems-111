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
    Goods() = default;
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
        this->name = name;
    }
    /**
 * \brief метод, возвращающий имя
 */
    string getName()
    {
        return name;
    }
    /**
 * \brief метод, устанавливающий значение даты
 */
    void setDate(const string& date)
    {
        this->date = date;
    }
    /**
 * \brief метод, возвращающий дату
 */
    string getDate()
    {
        return date;
    }
    /**
 * \brief метод, устанавливающий значение цены
 */
    void setPrice(double price)
    {
        this->price = price;
    }
    /**
 * \brief метод, возвращающий значение цены
 */
    int getPrice()
    {
        return price;
    }
    /**
 * \brief метод, возварщающий стоимость всех товаров одного наименования
 */
    double getTotalPrice()
    {
        return this->price * this->count;
    }
    /**
 * \brief метод, устанавливающий итоговую стоимость
 */
    void setCount(double count)
    {
        this->count = count;
    }
    /**
 * \brief метод, возвращающий итоговую стоимость
 */
    int getCount()
    {
        return count;
    }
    /**
 * \brief метод, устанавливающий индекс товара
 */
    void setId(const string& id)
    {
        this->id = id;
    }
    /**
 * \brief метод, возвращающий индекс товара
 */
    string getId()
    {
        return id;
    }
    /**
 * \brief метод, потокового вывода количества, наименования и полной стоимости товара в строчку
 */
    void stringstream()
    {
        cout << name << " " << count << " штук(и) будет(ут) стоить " << getTotalPrice() << " руб" << endl; 
    }
};

