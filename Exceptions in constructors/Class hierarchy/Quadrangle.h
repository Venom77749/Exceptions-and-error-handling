#pragma once
#include "Figure.h"
#include <string>

class Quadrangle : public Figure
{
protected:
	int a{}, b{}, c{}, d{}; // стороны
	int A{}, B{}, C{}, D{}; // углы
	std::string name{ "Четырехугольник" };
public:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);

	int get_a() const;
	int get_b() const;
	int get_c() const;
	int get_d() const;
	int get_A() const;
	int get_B() const;
	int get_C() const;
	int get_D() const;

	std::string get_name() const override;
	void print_sides() const override;
	void print_angles() const override;
	void print_creation_info() const;
};

class Parallelogram : public Quadrangle
{
public:
	Parallelogram(int a, int b, int A, int B);
};

class Rectangle : public Parallelogram
{
public:
	Rectangle(int a, int b);
};

class Rhombus : public Parallelogram
{
public:
	Rhombus(int a, int A, int B);
};

class Square : public Rhombus
{
public:
	Square(int a);
};