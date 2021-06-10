#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/**
 * \brief ����� Goods ��� ������ � �������� � ��������
 */

class Goods
{
private:
    /**
 * \brief ���� ������������, ���� � �������, ������� ���������� ��� string
 */
    string name, date, id;
    /**
 * \brief ���� ���� � ����� ���������, ������� ���������������� ��� ���������� ������ � ��������������
 */
    double price = 0, count = 0;
public:
    /**
 * \brief ����������� �� ���������
 */
    Goods() = default;
    /**
 * \brief ����������� �������������
 */
    Goods(const double price, const double count);
    /**
 * \brief ����������
 */
    ~Goods() = default;
    /**
 * \brief �����, ��������������� �������� �����
 */
    void setName(const string& name)
    {
        this->name = name;
    }
    /**
 * \brief �����, ������������ ���
 */
    string getName()
    {
        return name;
    }
    /**
 * \brief �����, ��������������� �������� ����
 */
    void setDate(const string& date)
    {
        this->date = date;
    }
    /**
 * \brief �����, ������������ ����
 */
    string getDate()
    {
        return date;
    }
    /**
 * \brief �����, ��������������� �������� ����
 */
    void setPrice(double price)
    {
        this->price = price;
    }
    /**
 * \brief �����, ������������ �������� ����
 */
    int getPrice()
    {
        return price;
    }
    /**
 * \brief �����, ������������ ��������� ���� ������� ������ ������������
 */
    double getTotalPrice()
    {
        return this->price * this->count;
    }
    /**
 * \brief �����, ��������������� �������� ���������
 */
    void setCount(double count)
    {
        this->count = count;
    }
    /**
 * \brief �����, ������������ �������� ���������
 */
    int getCount()
    {
        return count;
    }
    /**
 * \brief �����, ��������������� ������ ������
 */
    void setId(const string& id)
    {
        this->id = id;
    }
    /**
 * \brief �����, ������������ ������ ������
 */
    string getId()
    {
        return id;
    }
    /**
 * \brief �����, ���������� ������ ����������, ������������ � ������ ��������� ������ � �������
 */
    void stringstream()
    {
        cout << name << " " << count << " ����(�) �����(��) ������ " << getTotalPrice() << " ���" << endl; 
    }
};

