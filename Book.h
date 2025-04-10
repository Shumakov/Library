#pragma once
#include <iostream>

class Book {

public:
	// �����������

	//Book(); ����������� �� ���������
	Book(const std::string& n,
		const std::string& a,
		const unsigned int cp);

	Book(const std::string& n,
		const std::string& a,
		const std::string& d,
		const unsigned int cp);

	~Book() { count--; }

	// �������
	void setName(const std::string& val);
	void setAuthor(const std::string& val);
	void setDescription(const std::string& val);
	void setPageCount(const unsigned int val);

	// ������
	std::string getName();
	std::string getAuthor();
	std::string getDescription();
	unsigned int getPageCount();

	// ��������� �������
	void print();

	static unsigned int getCount() { return count; }

private:

	std::string author;
	std::string name;
	std::string description;
	unsigned int page_count = 0;
	static unsigned int count;
};

