#include "Book.h"

void Book::setName(const std::string& val) {
	name = val;
}

void Book::setAuthor(const std::string& val) {
	author = val;
}

void Book::setDescription(const std::string& val) {
	description = val;
}
void Book::setPageCount(const unsigned int val) {
	page_count = val;
}

std::string Book::getName() {
	return name;
}

std::string Book::getAuthor() {
	return author;
}

std::string Book::getDescription() {
	return description;
}

unsigned int Book::getPageCount() {
	return page_count;
}

void Book::print() {

	printf("Книга называется:   %s \n", name.c_str());
	printf("Автор книги:        %s \n", author.c_str());
	printf("Краткое описание:   %s \n", description.c_str());
	printf("Количество страниц: %d \n", page_count);
}


//Book::Book() {
//	std::cout << "Вызван конструктор по умолчанию." << std::endl;
//}

Book::Book(const std::string& n,
	const std::string& a,
	const unsigned int cp) : name{ n },
	author{ a },
	page_count(cp) {
	std::cout << "Конструктор номер 1" << std::endl;
	/*name = n;
	author = a;
	page_count = cp;*/
}

Book::Book(const std::string& n,
	const std::string& a,
	const std::string& d,
	const unsigned int cp) : Book(n, a, cp) {
	std::cout << "Конструктор номер 2" << std::endl;
	description = d;
}
