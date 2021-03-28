
#include <iostream>
#include <limits>
#include <string>

using namespace std;
class longlong
{
private:
    long s1, s2;
    unsigned long m1, m2;
    long first;
    unsigned long second;
    long max = numeric_limits<long>::max();

    string tostring()//перевод в строку 
    {
        string Zeros = "";
        int countOfZeros = (9 - countOfDigits(first)) + (9 - countOfDigits(second)); //Добавляем нули неиспользованным разрядам

        if (first != 0)
        {
            for (int i = 0; i < countOfZeros; i++)
            {

                Zeros += "0";
            }
            return to_string(first) + Zeros + to_string(second); //Если старшая часть не равна нулю 
        }
        else return to_string(second); //Если старшая часть равна нулю 
    }

    int countOfDigits(int Num) //Считаем к-ство цифр в числе
    {
        int count = 0;
        while (Num >= 1)
        {
            Num /= 10;
            count++;
        }

        return count;
    }
public:
    longlong(long valueS1, long valueS2, unsigned long valueM1, unsigned long valueM2)//конструктор класса в него передаем все значения
    {
        // if (valueS1 > max || valueS2 > max || valueM1 > max || valueM2 > max) throw "Error!";
      //  if (valueM1<0||valueM2<0) throw "Error!";
        s1 = valueS1;
        m1 = valueM1;
        s2 = valueS2;
        m2 = valueM2;
        first = 0;
        second = 0;


    }
    void add()//сложение 
    {
        first = s1 + s2;
        second = m1 + m2;
    }
    void razn()//вычитание 
    {
        first = s1 - s2;
        second = m2 - m1;

    }
    void mult()//умножение
    {
        first = s1 * s2;
        second = m1 * m2;

    }
    void div()//деление
    {
        first = s1 / s2;
        second = m1 / m2;
    }
    void display()//вывод
    {
        cout << tostring();
    }

};
int main()
{
    setlocale(LC_ALL, "RUS");
    long s1, s2;//старшие разряды
    unsigned long m1, m2;//младшие разряды
    char vib;//для выбора действия

    cout << "Введите старший разряд первого числа: ";
    cin >> s1;

    cout << "Введите младший разряд первого числа: ";
    cin >> m1;

    cout << "\nВведите старший разряд второго числа: ";
    cin >> s2;

    cout << "Введите младший разряд второго числа: ";
    cin >> m2;
    longlong ls(s1, s2, m1, m2);//вызов обьекта класса и передача данных в класс

f://метка для перемещения в случае ввода неправильной операции

    cout << "Выберите операцию с числами:+,-,/,*: ";

    cin >> vib;//ввод операции


    switch (vib)
    {
    case('+')://вывод суммы
        ls.add();
        cout << "Сумма чисел равна: "; ls.display(); cout << endl;
        break;

    case('-')://вывод разности
        ls.razn();
        cout << "Разность чисел равна: "; ls.display(); cout << endl;
        break;

    case('*')://произведение чисел 
        ls.mult();
        cout << "Произведение чисел равно: "; ls.display(); cout << endl;
        break;

    case('/')://деление
        ls.div();
        cout << " частное чисел равно: "; ls.display(); cout << endl;
        break;

    default:
        system("cls");
        cout << "Введены неверные данные"; cout << endl;
        goto f;//переходная метка
    }

}
