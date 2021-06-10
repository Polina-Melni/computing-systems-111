#include <iostream>
#include "Figure.h"
using namespace std;


void menu()
{
    string list[3] = { "Ellipse", "Parallelepiped", "Rhomb" };
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter " << i << " for test " << list[i] << endl;
    }
    cout << "Enter -1 for exit" << endl;
}

int main() {
    while (true)
    {
        auto e = Ellipse();
        auto p = Parallelepiped();
        auto r = Rhomb();
        int i;
        menu();
        cin >> i;
        switch (i)
        {
        case 0:
        {
            cin >> e;
            e.getArea();
            e.getPerimeter();
            cout << e;
            break;
        }
        case 1:
        {
            cin >> p;
            p.getArea();
            p.getPerimeter();
            cout << p;
            break;
        }
        case 2:
        {
            cin >> r;
            r.getArea();
            r.getPerimeter();
            cout << r;
            break;
        }
        case -1:
        {
            return 0;
        }
        }
    }
}
