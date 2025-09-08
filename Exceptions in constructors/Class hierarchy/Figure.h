#pragma once
#include <string>

class Figure {
public:
	virtual void print_sides() const = 0;
	virtual void print_angles() const = 0;
	virtual std::string get_name() const = 0;
	virtual void print_creation_info() const = 0;
};