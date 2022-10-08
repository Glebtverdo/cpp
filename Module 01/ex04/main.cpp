#include "Replace.hpp"

// Replace some("Replace.cpp", "std", "mmm");
// Replace some("Replace.cpp", "", ""); // error
// Replace some("Replace.cpp", "else", "some");
// Replace some("Replace.cpp", "ty", "tutututu"); // error
// Replace some("Replace.cpp", "", "some"); // error
// Replace some("Replace.cpp", "std", ""); // error
// Replace some("", "std", "mmm"); // error
// Replace some("","",""); // error


int main(int argc, char *argv[]){
    if(argc == 4){
        Replace some(argv[1], argv[2], argv[3]);
        some.replace();
    }else
        std::cout << "unvalid input\n";
    return 0;
}
