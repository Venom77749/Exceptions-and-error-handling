#include <iostream>

int function(std::string str, int forbidden_length);

int main()
{
    int forbidden_length{};
    std::string str{};

    while (true)
    {
        std::cout << "Enter the forbidden length: ";
        std::cin >> forbidden_length;
        std::cout << "Enter the word: ";
        std::cin >> str;

        try
        {
            std::cout << "Word length \"" << str << "\" is " << function(str, forbidden_length);
        }
        catch (const std::runtime_error& e)
        {
            std::cout << "You have entered a word of a forbidden length! Goodbye! " << e.what();
            return EXIT_FAILURE;
        }

        std::cout << std::endl << std::endl;
    }

    return EXIT_SUCCESS;
}

int function(std::string str, int forbidden_length)
{
    if (str.length() == forbidden_length)
    {
        throw std::runtime_error("bad_length");
    }
    return str.length();
}