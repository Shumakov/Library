#pragma once
#include <iostream>

void func1();



struct Point2D;

struct Point3D {

	int x;
	int y;
	int z;
	
	/*operator Point2D() {

		return Point2D{ x, y };
	}*/
};


struct Point2D {

	int x; 
	int y;

	operator Point3D() {

		return Point3D{ x, y, 0 };
	}

};



class MyArray {

	int size;
	int* arr;

public:

	MyArray(int size) :size{ size }, arr{ new int[size] {} } {}
	~MyArray() { delete[] arr; }

	void setElement(int ind, int value) {
		if (ind >= 0 && ind < size)
			arr[ind] = value;
	}

	int getElement(int ind) const {
		if (ind >= 0 && ind < size)
			return arr[ind];
		return 0;
	}

	int getSize() const { return size; }

	int& operator [] (int ind) { // setElement
		if (ind >= 0 && ind < size)
			return arr[ind];
		return arr[0];
	}

	int operator [] (int ind) const{  // getElement
		if (ind >= 0 && ind < size)
			return arr[ind];
		return arr[0];
	}


};

class Money {

public:

	Money() = default;
	Money(int rubl, int cent) :
		rubl{ rubl },
		cent{ cent } {}

	void print() const;

	void plusCent(int c);

	int operator [] (char c) const {
		if (c == 'R' || c == 'r')
			return rubl;
		if (c == 'c' || c == 'C')
			return cent;

		return -1;
	}

	int& operator [] (char c)  {
		if (c == 'R' || c == 'r')
			return rubl;
		if (c == 'c' || c == 'C')
			return cent;

		return rubl;
	}

	explicit operator double() {
		return rubl + cent * 0.01;
	}

	operator int() {
		/*if (cent > 50)
			return rubl +1;

		return rubl;*/

		return rubl + (cent > 50);
	}

	


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

Money operator+ (const Money& a, const Money& b); //b +y
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
	int i = 0;
	Test();
	~Test();

	Test& operator ++() {// ++t
		++i;
		return *this;
	}

	Test operator ++(int) { // t++
		Test t = *this;
		i++;
		return t;
	}

	Test& operator --() {// ++t
		--i;
		return *this;
	}

	Test operator --(int) { // t++
		Test t = *this;
		i--;
		return t;
	}

};

std::ostream& operator<< (std::ostream& o, const Test& m);

//class Different
//{
//public:
//
//	Different();
//	~Different();
//
//	Different(int value) : value{ value }, t{new Test} {
//		std::cout << "Конструктор 1 для класса Different\n";
//		//t = new Test;
//	}
//
//	Different(int value, Test* t) : value{ value }, t{t} {
//		std::cout << "Конструктор 2 для класса Different\n";
//	}
//
//	void setValue(int value) { this->value = value; }
//	int getValue() { return value; }
//
//	void print();
//
//	static int getA() { return a; }
//	static void setA(int v) { a = v; }
//	
//private:
//
//	int value = 0;
//	Test *t = nullptr;
//	static int a;
//
//};

