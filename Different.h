#pragma once
#include <iostream>

void func1();

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
		std::cout << "����������� 1 ��� ������ Different\n";
		//t = new Test;
	}

	Different(int value, Test* t) : value{ value }, t{t} {
		std::cout << "����������� 2 ��� ������ Different\n";
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

