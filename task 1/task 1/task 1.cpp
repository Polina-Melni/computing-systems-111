#include <iostream>
#include <string>

using namespace std;

class Goods
{
private:
    string name, date, id;
    int price, count;
public:
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setDate(string date)
    {
        this->date = date;
    }
    string getDate()
    {
        return date;
    }
    void setPrice(int price)
    {
        this->price = price;
    }
    int getPrice()
    {
        return price;
    }
    void setCount(int count)
    {
        this->count = count;
    }
    int getCount()
    {
        return count;
    }
    void setId(string id)
    {
        this->id = id;
    }
    string getId()
    {
        return id;
    }
    string toString(int count)
    {
        string temp = name + " " + to_string(count) + " штук(и)" + " будет(ут) стоить " + to_string(count * price) + " руб";
        return temp;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Goods pizza;
    Goods cake;

    pizza.setName("Пицца");
    int priceP;
    cout << "Введите цену пиццы\n";
    cin >> priceP;
    pizza.setPrice(priceP);
    pizza.setDate("03.03.2021");
    int countP;
    cout << "\nВведите количество пиццы\n";
    cin >> countP;
    pizza.setCount(countP);
    pizza.setId("23у165893");

    cake.setName("Торт");
    int priceC;
    cout << "\nВведите цену торта\n";
    cin >> priceC;
    cake.setPrice(priceC);
    cake.setDate("05.03.2021");
    int countC;
    cout << "\nВведите количество тортов\n";
    cin >> countC;
    cake.setCount(countC);
    cake.setId("24у756218");

    cout << endl << pizza.toString(countP) << endl;
    cout << cake.toString(countC) << endl;
}