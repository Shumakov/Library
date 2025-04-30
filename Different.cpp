#include "Different.h"

//int Different::a = 100;

void Money::print() const{
	
	std::cout << "Деньги " << rubl << " руб. " << cent << " коп. \n";

}

Money operator+ (const Money& a, const Money& b) {
	Money result;

	result.rubl = a.rubl + b.rubl;
	result.cent = a.cent + b.cent;

	return result;
}

Money operator- (const Money& a, const Money& b) {
	Money result;

	result.rubl = a.rubl - b.rubl;
	result.cent = a.cent - b.cent;

	return result;
}

 // a > b
bool operator> (const Money& a, const Money& b) {

	if (a.rubl > b.rubl && a.cent > b.cent)
		return true;
	else
		return false;

}

bool operator== (const Money& a, const Money& b) {

	if (a.rubl == b.rubl && a.cent == b.cent) // && - и    || - или
		return true;

	return false;
}

bool operator!= (const Money& a, const Money& b) {

	return !(a == b);
}
Money operator* (const Money& a, const int b) {

	return a;
}
std::ostream& operator<< (std::ostream& o, const Money& m) {

	o << m.rubl << " руб. " << m.cent << " коп.";
	return o;
}


void Money::plusCent(int c) {

	cent += c;
}

//Different::Different() {
//	std::cout << "Конструктор по умолчанию для класса Different\n";
//	t = new Test;
//}
//
//Different::~Different() {
//	std::cout << "Деструктор для класса Different\n";
//	delete t;
//}

Test::Test() {
	std::cout << "Конструктор по умолчанию для класса Test\n";
}

Test::~Test() {
	std::cout << "Деструктор для класса Test\n";
}

std::ostream& operator<< (std::ostream& o, const Test& m) {
	o << m.i;
	return o;
}


//void Different::print() {
//
//	std::cout << "value = " << value << std::endl;
//}


void func1() {
	static int a = 0;
	std::cout << a << std::endl;
	a++; //a = a+1
}