#pragma once
#include <iostream>

class Book {

public:
	// Конструктор

	//Book();
	Book(const std::string& n,
		const std::string& a,
		const unsigned int cp);

	Book(const std::string& n,
		const std::string& a,
		const std::string& d,
		const unsigned int cp);

	// Сетторы
	void setName(const std::string& val);
	void setAuthor(const std::string& val);
	void setDescription(const std::string& val);
	void setPageCount(const unsigned int val);

	// Геттер
	std::string getName();
	std::string getAuthor();
	std::string getDescription();
	unsigned int getPageCount();

	// Остальные функции
	void print();

private:

	std::string author;
	std::string name;
	std::string description;
	unsigned int page_count = 0;
};

