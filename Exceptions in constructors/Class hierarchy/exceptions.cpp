#include "exceptions.h"

exceptions::exceptions(const std::string& msg) : std::domain_error(msg) {}

