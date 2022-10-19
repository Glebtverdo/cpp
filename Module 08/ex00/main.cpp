#include"easyfind.hpp"
#include<vector>


int main(){
    std::vector<int> arr(5);
    arr.at(0) = 0;
    arr.at(1) = 8;
    arr.at(2) = 7;
    arr.at(3) = 6;
    arr.at(4) = 5;

    try
    {
        std::cout << *easyfind(arr, 5) << "\n";
        std::cout << *easyfind(arr, 10) << "\n";
        std::cout << *easyfind(arr, 0) << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << "no occurance" << '\n';
    }
}