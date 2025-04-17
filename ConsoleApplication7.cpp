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


   int a = 10;
   int b = 20;
   int c = a + b;

   std::cout << " a = " << a << " b = " << b << " c = " << c <<  std::endl;


  /* Money m1{30,45};

   m1.print();

   Money m2{ 20,10 };

   m2.print();

   Money m3 = m1 + m2;

   m3.print();

   Money m4 = m1 + m2 + m3;

   m4.print();

   Money m5 = m1 - m4;

   m5.print();*/


   Money mPetia{ 10,15 };
   Money mIra{ 10,15 };

   mIra.print();

   std::cout << "У Иры " << mIra << " денег \n"; // >>

   Money mLena = mPetia * 10;

  /* if (mPetia > mIra) {
	   std::cout << " Петя богаче чем Ира \n";
   }
   else {
	   std::cout << " Ира богаче чем Петя \n";
   }*/

   /*if (mPetia == mIra) {
	   std::cout << " У Пети столько же денег, сколько и у Иры \n";
   }
   else {
	   std::cout << " У Пети и Иры разное количество денег \n";
   }*/

   if (mPetia != mIra) {	  
	   std::cout << " У Пети и Иры разное количество денег \n";
   }
   else {
	   std::cout << " У Пети столько же денег, сколько и у Иры \n";
   }

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


   //const int SIZE = 3;

   ////Book myBook{ "","",12 };

   //std::cout << "Количество книг в библиотеке  = " << Book::getCount() << std::endl;

   //class Book books[SIZE]{
	  // { "Война и мир. Том 1",
		 //"Толстой Лев Николаевич",
		 //"Исторический роман. Требующий огромного терпения для прочтения.",
		 //3000
	  // },
	  // { "Война и мир. Том 2",
		 //"Толстой Лев Николаевич",
		 //"Исторический роман. Требующий огромного терпения для прочтения.",
		 //2590
	  // },
	  // { "Буратино",
		 //"Толстой Алексей Николаевич",
		 //"Приключенческий и дедективный детский рассказ.",
		 //80
	  // },   
   //};  

   //print_books(books, SIZE);

   //std::cout << "Количество книг в библиотеке  = " << Book::getCount() << std::endl;
   //
   //{
	  // Book bb{ "1","1","1",33 };
	  // std::cout << "Количество книг в библиотеке  = " << Book::getCount() << std::endl;
   //}
   //std::cout << "Количество книг в библиотеке  = " << Book::getCount() << std::endl;

   //return 0;

   //Book* bbb = new Book{ "1","1","1",33 };


   //std::cout << "Количество книг в библиотеке  = " << Book::getCount() << std::endl;

   //delete bbb;

   //std::cout << "Количество книг в библиотеке  = " << Book::getCount() << std::endl;

   

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

