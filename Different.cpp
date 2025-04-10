#include "Different.h"

int Different::a = 100;

Different::Different() {
	std::cout << "Конструктор по умолчанию для класса Different\n";
	t = new Test;
}

Different::~Different() {
	std::cout << "Деструктор для класса Different\n";
	delete t;
}

Test::Test() {
	std::cout << "Конструктор по умолчанию для класса Test\n";
}

Test::~Test() {
	std::cout << "Деструктор для класса Test\n";
}


void Different::print() {

	std::cout << "value = " << value << std::endl;
}


void func1() {
	static int a = 0;
	std::cout << a << std::endl;
	a++; //a = a+1
}