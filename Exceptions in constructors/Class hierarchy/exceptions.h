#pragma once
#include <iostream>

class exceptions : public std::domain_error
{
public:
    exceptions(const std::string& msg);
};
