#pragma once
#include <iostream>

void func1();

class Money {

public:

	Money() = default;
	Money(int rubl, int cent) :
		rubl{ rubl },
		cent{ cent } {}

	void print();
	friend Money operator+ (const Money& a, const Money& b);
    friend Money operator- (const Money& a, const Money& b);
	friend bool operator> (const Money& a, const Money& b);
	friend bool operator== (const Money& a, const Money& b);
	friend bool operator!= (const Money& a, const Money& b);
	friend Money operator* (const Money& a, const int b);
	friend std::ostream& operator<< (std::ostream& o, const Money& m);

private:
	int rubl = 0;
	int cent = 0;
};

Money operator+ (const Money& a, const Money& b);
Money operator* (const Money& a, const int b);
Money operator- (const Money& a, const Money& b);


bool operator> (const Money& a, const Money& b);
bool operator< (const Money& a, const Money& b);
bool operator== (const Money& a, const Money& b);
bool operator!= (const Money& a, const Money& b);
bool operator>= (const Money& a, const Money& b);
bool operator<= (const Money& a, const Money& b);

std::ostream& operator<< (std::ostream& o, const Money& m);

class Test {
public:

	Test();
	~Test();

};

class Different
{
public:

	Different();
	~Different();

	Different(int value) : value{ value }, t{new Test} {
		std::cout << "Конструктор 1 для класса Different\n";
		//t = new Test;
	}

	Different(int value, Test* t) : value{ value }, t{t} {
		std::cout << "Конструктор 2 для класса Different\n";
	}

	void setValue(int value) { this->value = value; }
	int getValue() { return value; }

	void print();

	static int getA() { return a; }
	static void setA(int v) { a = v; }
	
private:

	int value = 0;
	Test *t = nullptr;
	static int a;

};

