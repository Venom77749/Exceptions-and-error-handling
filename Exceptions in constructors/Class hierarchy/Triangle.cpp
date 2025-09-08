#include "Triangle.h"
#include "exceptions.h"
#include <iostream>

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{
	this->a = a; this->b = b; this->c = c;
	this->A = A; this->B = B; this->C = C;
	
	if (A + B + C != 180)
	{
		throw exceptions("Сумма углов не равна 180");
	}
}

int Triangle::get_a() const { return a; }
int Triangle::get_b() const { return b; }
int Triangle::get_c() const { return c; }
int Triangle::get_A() const { return A; }
int Triangle::get_B() const { return B; }
int Triangle::get_C() const { return C; }
std::string Triangle::get_name() const { return name; }

void Triangle::print_sides() const
{
	std::cout << "Стороны: a = " << a << ", b = " << b << ", c = " << c << std::endl;
}

void Triangle::print_angles() const
{
	std::cout << "Углы: A = " << A << ", B = " << B << ", C = " << C << std::endl;
}

void Triangle::print_creation_info() const {
	std::cout << get_name() << " (стороны " << get_a() << ", " << get_b() << ", " << get_c()
		<< "; углы " << get_A() << ", " << get_B() << ", " << get_C() << ") создан" << std::endl;
}


RectanTriangle::RectanTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90)
{
	name = "Прямоугольный треугольник";

	if (get_C() != 90)
		throw exceptions("угол C не равен 90");


}

IsosTriangle::IsosTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A)
{
	name = "Равнобедренный треугольник";

	if (a != get_c())
	{
		throw exceptions("стороны а и с не равны");
	}
	else if (A != get_C())
	{
		throw exceptions("углы A и С не равны");
	}
	

}


EquilTriangle::EquilTriangle(int a) : Triangle(a, a, a, 60, 60, 60)
{
	name = "Равносторонний треугольник";

	if (!(a == get_b() && get_b() == get_c())) {
		throw exceptions("стороны не равны");
	}
	if (!(get_A() == 60 && get_B() == 60 && get_C() == 60)) {
		throw exceptions("углы не равны 60");
	}


}
