#include <iostream>
using namespace std;

/*
* \brief структура для хранения всех параметров уравнения
*/
struct factors {
	double a;
	double b;
	double c;
	double root1;
	double root2;
};

/*
* \brief без спецификации исключений
*/
factors calc1(factors& f) {
	if (f.a == 0) {
		throw 'e';
	}
	if ((f.b * f.b - 4 * f.a * f.c) < 0) {
		throw 'e';
	}
	f.root1 = (sqrt(f.b * f.b - 4 * f.a * f.c) - f.b) / (2 * f.a);
	f.root2 = (-sqrt(f.b * f.b - 4 * f.a * f.c) - f.b) / (2 * f.a);
	return f;
};

/*
* \brief со спецификацией throw()
*/
factors calc2(factors& f) throw() {
	if (f.a == 0) {
		throw 'e';
	}
	if ((f.b * f.b - 4 * f.a * f.c) < 0) {
		throw 'e';
	}
	f.root1 = (sqrt(f.b * f.b - 4 * f.a * f.c) - f.b) / (2 * f.a);
	f.root2 = (-sqrt(f.b * f.b - 4 * f.a * f.c) - f.b) / (2 * f.a);
	return f;
};

/*
* \brief с конкретной спецификацией с подходящим стандартным исключением
*/
factors calc3(factors& f) throw(invalid_argument) {
	if (f.a == 0) {
		throw invalid_argument("Error, a = 0\n");
	}
	if ((f.b * f.b - 4 * f.a * f.c) < 0) {
		throw invalid_argument("Error, D < 0\n");
	}
	f.root1 = (sqrt(f.b * f.b - 4 * f.a * f.c) - f.b) / (2 * f.a);
	f.root2 = (-sqrt(f.b * f.b - 4 * f.a * f.c) - f.b) / (2 * f.a);
	return f;
}

/*
* \brief независимый класс с полями-параметрами функции
*/
class Exception
{
public:
	string s;
	Exception(string str)
	{
		s = str;
	}
	string what()
	{
		return s;
	}
};
/*
* \brief Спецификация с собственным реализованным исключением
*/
factors calc4_1(factors& f) throw(Exception) {
	if (f.a == 0) {
		throw Exception("Error, a = 0\n");
	}
	if ((f.b * f.b - 4 * f.a * f.c) < 0) {
		throw Exception("Error, D < 0\n");
	}
	f.root1 = (sqrt(f.b * f.b - 4 * f.a * f.c) - f.b) / (2 * f.a);
	f.root2 = (-sqrt(f.b * f.b - 4 * f.a * f.c) - f.b) / (2 * f.a);
	return f;
}



/*
* \brief пустой класс
*/
class VoidException {};
/*
* \brief Спецификация с собственным реализованным исключением
*/
factors calc4_2(factors& f) throw(VoidException) {
	if (f.a == 0) {
		throw VoidException();
	}
	if ((f.b * f.b - 4 * f.a * f.c) < 0) {
		throw VoidException();
	}
	f.root1 = (sqrt(f.b * f.b - 4 * f.a * f.c) - f.b) / (2 * f.a);
	f.root2 = (-sqrt(f.b * f.b - 4 * f.a * f.c) - f.b) / (2 * f.a);
	return f;
}

/*
* \brief Класс наследник от стандартного исключения с полями
*/
class InCorrectArgument : public exception
{
public:
	const char* what() const throw() {
		return "Error, some factors are incorrect\n";
	}
};
/*
* \brief Спецификация с собственным реализованным исключением
*/
factors calc4_3(factors& f) {
	if (f.a == 0) {
		throw InCorrectArgument();
	}
	if ((f.b * f.b - 4 * f.a * f.c) < 0) {
		throw InCorrectArgument();
	}
	f.root1 = (sqrt(f.b * f.b - 4 * f.a * f.c) - f.b) / (2 * f.a);
	f.root2 = (-sqrt(f.b * f.b - 4 * f.a * f.c) - f.b) / (2 * f.a);
	return f;
}

int main()
{
	factors first;
	cout << "Enter factors\na: ";
	cin >> first.a;
	cout << "b: ";
	cin >> first.b;
	cout << "c: ";
	cin >> first.c;
	cout << "Test error 1: ";
	try {
		factors second;
		second = calc1(first);
		cout << second.root1 << ", " << second.root2 << endl;
	}
	//error 1
	catch (char) {
		cout << "Error 1\n";
	}
	cout << "Test error 2: ";
	try {
		factors second;
		second = calc2(first);
		cout << second.root1 << ", " << second.root2 << endl;
	}
	//error 2
	catch (char) {
		cout << "Error 2\n";
	}
	cout << "Test error 3: ";
	try {
		factors second;
		second = calc3(first);
		cout << second.root1 << ", " << second.root2 << endl;
	}
	//error 3
	catch (invalid_argument& e) {
		cout << e.what();
	}
	cout << "Test error 4_1: ";
	try {
		factors second;
		second = calc4_1(first);
		cout << second.root1 << ", " << second.root2 << endl;
	}
	//error 4_1
	catch (Exception& e) {
		cout << e.what();
	}
	cout << "Test error 4_2: ";
	try {
		factors second;
		second = calc4_2(first);
		cout << second.root1 << ", " << second.root2 << endl;
	}
	//error 4_2
	catch (VoidException& e) {
		cout << "Error 4_2\n";
	}
	cout << "Test error 4_3: ";
	try {
		factors second;
		second = calc4_3(first);
		cout << second.root1 << ", " << second.root2 << endl;
	}
	//error 4_3
	catch (InCorrectArgument& e) {
		cout << e.what();
	}
}
