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
    Goods() = delete;
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
    }
    /**
 * \brief �����, ������������ ���
 */
    string getName() const
    {
    }
    /**
 * \brief �����, ��������������� �������� ����
 */
    void setDate(const string& date)
    {
    }
    /**
 * \brief �����, ������������ ����
 */
    string getDate() const
    {
    }
    /**
 * \brief �����, ��������������� �������� ����
 */
    void setPrice(double price)
    {
    }
    /**
 * \brief �����, ������������ �������� ����
 */
    int getPrice() const
    {
    }
    /**
 * \brief �����, ������������ ��������� ���� ������� ������ ������������
 */
    double getTotalPrice()
    {
    }
    /**
 * \brief �����, ��������������� �������� ���������
 */
    void setCount(double count)
    {
    }
    /**
 * \brief �����, ������������ �������� ���������
 */
    int getCount() const
    {
    }
    /**
 * \brief �����, ��������������� ������ ������
 */
    void setId(const string& id)
    {
    }
    /**
 * \brief �����, ������������ ������ ������
 */
    string getId() const
    {
    }
    /**
 * \brief �����, ���������� ������ ����������, ������������ � ������ ��������� ������ � �������
 */
     stringstream& operator<< (std::ostream & out, const Goods& goods)
    {
    }
};

