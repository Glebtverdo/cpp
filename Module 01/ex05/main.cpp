#include"Harl.hpp"

int main()
{
    Harl Jarvis;

    Jarvis.complain("DEBUG");
    Jarvis.complain("INFO");
    Jarvis.complain("WARNING");
    Jarvis.complain("ERROR");
    Jarvis.complain("UNEXPECTED");
    Jarvis.complain("");
    return 0;
}