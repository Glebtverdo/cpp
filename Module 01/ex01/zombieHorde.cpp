#include"Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    if(N > 0){
        Zombie  *hord = new Zombie[N];
        int     i = 0;
        while (i < N)
        {
            hord[i].setName(name);
            i++;
        }
        return hord;
    }
    std::cout << "unvalid N\n";
    return NULL;
}