#include <iostream>
#include "Goods.h"
using namespace std;

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

    pizza.stringstream(); 
    cake.stringstream();
}
