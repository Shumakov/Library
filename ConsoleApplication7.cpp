#include <iostream>

//#include "Book.h"
#include "Different.h"



//void print_books(Book b[], int size);
//
//void print_books(Book b[], int size) {
//	for (int i = 0; i < size; i++) {
//		b[i].print();
//		std::cout << "----------------------------------------------------------" << std::endl;
//	}
//}



int main() {

   setlocale(LC_ALL, "Ru");


   //Money m1{ 10,45 };

   //m1.print();

   //m1.plusCent(1);
   //

   //const Money premia{ 100,1 };

   ////premia.plusCent(1);

   //premia.print();

   //MyArray m{ 5 };

  /* m.setElement(0, 1);
   m.setElement(1, 2);
   m.setElement(2, 3);
   m.setElement(3, 5);
   m.setElement(4, 6);*/

   /*for (int i = 0; i < m.getSize(); i++)
	   m[i] = i+1;

   for (int i = 0; i < m.getSize(); i++)
	   std::cout << m[i] << " ";

   std::cout << std::endl;*/

   Money m{ 10,49 };

   std::cout << "Rubl = " << m['r'] << std::endl;
   std::cout << "Cent = " << m['c'] << std::endl;
   std::cout << "??? = " <<  m['X'] << std::endl;

   /*m['r'] += 33;

   std::cout << "Rubl = " << m['r'] << std::endl;
   std::cout << "Cent = " << m['c'] << std::endl;
   std::cout << "??? = " <<  m['X'] << std::endl;*/

   double d = (double)m;


   std::cout << "d = " << d << std::endl;

   int r = m;
   std::cout << "r = " << r << std::endl;


   Point2D p1{ 10,10 };

   Point3D p2;

   p2 = p1;

   Test t;

   //++t;

   std::cout << t++ << std::endl;
   std::cout << t << std::endl;

  
}

