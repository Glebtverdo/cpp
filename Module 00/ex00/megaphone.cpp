#include <iostream>

int main(int argc, char *argv[] ){
    int i = 0;
    int indexForWords = 1;
    if(argc > 1){
        while(argv[indexForWords]){
            i = 0;
            while (argv[indexForWords][i]){
                std::cout << (char)std::toupper(argv[indexForWords][i]);
                i++;
            }
            indexForWords++;
        }
    } else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout << "\n";
    return 0;
}