#include "Different.h"

int Different::a = 100;

Different::Different() {
	std::cout << "����������� �� ��������� ��� ������ Different\n";
	t = new Test;
}

Different::~Different() {
	std::cout << "���������� ��� ������ Different\n";
	delete t;
}

Test::Test() {
	std::cout << "����������� �� ��������� ��� ������ Test\n";
}

Test::~Test() {
	std::cout << "���������� ��� ������ Test\n";
}


void Different::print() {

	std::cout << "value = " << value << std::endl;
}


void func1() {
	static int a = 0;
	std::cout << a << std::endl;
	a++; //a = a+1
}