#include <iostream>
#include "Triangle.h"
#include "Quadrangle.h"
#include "exceptions.h"

void print(Figure* figure) // В данном задании не используется
{
	std::cout << figure->get_name() << ": " << std::endl;
	figure->print_sides();
	figure->print_angles();
	std::cout << std::endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	try {

        Triangle t(10, 20, 30, 50, 60, 70);
        t.print_creation_info();

        RectanTriangle rt(3, 4, 5, 50, 40);
        rt.print_creation_info();

        IsosTriangle it(10, 20, 50, 80);
        it.print_creation_info();

        EquilTriangle et(30);
        et.print_creation_info();

        Quadrangle q(10, 20, 30, 40, 90, 80, 100, 90);
        q.print_creation_info();

        Parallelogram p(20, 30, 60, 120);
        p.print_creation_info();

        Rectangle r(10, 20);
        r.print_creation_info();

        Rhombus rh(30, 60, 120);
        rh.print_creation_info();

        Square s(20);
        s.print_creation_info();



		//Figure* figures[] = { &t, &rt, &it, &et, &q, &r, &s, &p, &rh };
		//for (int i{}; i < 9; ++i)
		//{
		//	print(figures[i]);
		//}
	}
	catch (const exceptions& ex)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << std::endl;
	}

	return EXIT_SUCCESS;
}