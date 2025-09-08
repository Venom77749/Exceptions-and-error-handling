#include "Quadrangle.h"
#include "exceptions.h"
#include <iostream>

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
{
	this->a = a; this->b = b; this->c = c; this->d = d;
	this->A = A; this->B = B; this->C = C;  this->D = D;

	if (A + B + C + D != 360)
	{
		throw exceptions("����� ����� �� ����� 360");
	}

}

int Quadrangle::get_a() const { return a; }
int Quadrangle::get_b() const { return b; }
int Quadrangle::get_c() const { return c; }
int Quadrangle::get_d() const { return d; }
int Quadrangle::get_A() const { return A; }
int Quadrangle::get_B() const { return B; }
int Quadrangle::get_C() const { return C; }
int Quadrangle::get_D() const { return D; }
std::string Quadrangle::get_name() const { return name; }
			
void Quadrangle::print_sides() const
{
	std::cout << "�������: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
}

void Quadrangle::print_angles() const
{
	std::cout << "����: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl;
}

void Quadrangle::print_creation_info() const {
	std::cout << get_name() << " (������� " << get_a() << ", " << get_b() << ", " << get_c() << ", " << get_d()
		<< "; ���� " << get_A() << ", " << get_B() << ", " << get_C() << ", " << get_D() << ") ������" << std::endl;
}

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B)
{
	name = "��������������";

	if (!(a == get_c() && b == get_d() ))
	{
		throw exceptions("������� ������� �� �����");
	}
	else if (!(A == get_C() && B == get_D() ))
	{
		throw exceptions("���� ������� �� �����");
	}


}


Rectangle::Rectangle(int a, int b) : Parallelogram(a, b, 90, 90)
{
	name = "�������������";

	if (a != get_c() || b != get_d() )
	{
		throw exceptions("������� ������� �� �����");
	}
	if (!(get_A() == 90 && get_B() == 90 && get_C() == 90)) {
		throw exceptions("���� �� ����� 90");
	}


}


Rhombus::Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B)
{
	name = "����";

	if (!(a == get_b() && get_b() == get_c() ))
	{
		throw exceptions("������� ������� �� �����");
	}
	else if (!(A == get_C() && B == get_D() ))
	{
		throw exceptions("���� ������� �� �����");
	}


}

Square::Square(int a) : Rhombus(a, 90, 90)
{
	name = "�������";


	if (!(get_A() == 90 && get_B() == 90 && get_C() == 90)) {
		throw exceptions("���� �� ����� 90");
	}
	if (!(a == get_b() && get_b() == get_c() )) {
		throw exceptions("������� �� �����");
	}


}
