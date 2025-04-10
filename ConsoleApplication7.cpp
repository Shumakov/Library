#include <iostream>
#include "Book.h"
#include "Different.h"

void print_books(Book b[], int size);

void print_books(Book b[], int size) {
	for (int i = 0; i < size; i++) {
		b[i].print();
		std::cout << "----------------------------------------------------------" << std::endl;
	}
}



int main() {
   setlocale(LC_ALL, "Ru");

   //Different d{100};
   //d.setValue(100);

  /* Test* a = new Test;

   Different d{ 100, a };

   d.print();*/

   /*func1();
   func1();
   func1();
   func1();*/

   /*Different::setA(999);

   Different d;
   Different d1;
   Different d2;

   std::cout << d.getA() << std::endl;
   std::cout << d1.getA() << std::endl;
   std::cout << d2.getA() << std::endl;

   Different::setA(99999);

   std::cout << d.getA() << std::endl;
   std::cout << d1.getA() << std::endl;
   std::cout << d2.getA() << std::endl;

   return 0;*/


   const int SIZE = 3;

   //Book myBook{ "","",12 };

   std::cout << "Количество книг в библиотеке  = " << Book::getCount() << std::endl;

   class Book books[SIZE]{
	   { "Война и мир. Том 1",
		 "Толстой Лев Николаевич",
		 "Исторический роман. Требующий огромного терпения для прочтения.",
		 3000
	   },
	   { "Война и мир. Том 2",
		 "Толстой Лев Николаевич",
		 "Исторический роман. Требующий огромного терпения для прочтения.",
		 2590
	   },
	   { "Буратино",
		 "Толстой Алексей Николаевич",
		 "Приключенческий и дедективный детский рассказ.",
		 80
	   },   
   };  

   print_books(books, SIZE);

   std::cout << "Количество книг в библиотеке  = " << Book::getCount() << std::endl;
   
   {
	   Book bb{ "1","1","1",33 };
	   std::cout << "Количество книг в библиотеке  = " << Book::getCount() << std::endl;
   }
   std::cout << "Количество книг в библиотеке  = " << Book::getCount() << std::endl;

   return 0;

   Book* bbb = new Book{ "1","1","1",33 };

   std::cout << "Количество книг в библиотеке  = " << Book::getCount() << std::endl;

   delete bbb;

   std::cout << "Количество книг в библиотеке  = " << Book::getCount() << std::endl;

   

   //       setName (Book* this, std::string name);
   //books[0].setName("Война и мир. Том 1 (Авторская редакция)");

   //print_books(books, SIZE);

   /*Book b{ "Война и мир" ,
           "Толстой Лев Николаевич",
	       "Исторический роман. Требующий огромного терпения для прочтения.",
           3000
   };

   b.print();

   return 0;*/

  /* b.setName("Война и мир");
   b.setAuthor("Толстой Лев Николаевич");
   b.setDescription("Исторический роман. Требующий огромного терпения для прочтения.");
   b.setPageCount(3000);

   b.print();

 

   return 0;*/
}

