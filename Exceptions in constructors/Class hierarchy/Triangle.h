#pragma once
#include "Figure.h"
#include <string>

class Triangle : public Figure
{
protected:
	int a{}, b{}, c{}; // стороны
	int A{}, B{}, C{}; // углы
	std::string name{"Треугольник"};
public:
	Triangle(int a, int b, int c, int A, int B, int C);

	int get_a() const;
	int get_b() const;
	int get_c() const;
	int get_A() const;
	int get_B() const;
	int get_C() const;

	std::string get_name() const override;
	void print_sides() const override;
	void print_angles() const override;
	virtual void print_creation_info() const;
};

class RectanTriangle : public Triangle
{
public:
	RectanTriangle(int a, int b, int c, int A, int B);
};

class IsosTriangle : public Triangle
{
public:
	IsosTriangle(int a, int b, int A, int B);
};

class EquilTriangle : public Triangle
{
public:
	EquilTriangle(int a);
};


