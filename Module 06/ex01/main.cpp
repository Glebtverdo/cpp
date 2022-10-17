#include"struct.h"

void showData(Data *obj){
    int i = 0;
    while (i < 9)
    {
        std::cout << obj->bytes[i] << "  ";
        i++;
    }   
    std::cout << "\n";
}

uintptr_t serialize(Data* ptr){
    int i = 0;
    long int div = 1;
    uintptr_t result = 0;
    while (i < 9)
    {
        result += ptr->bytes[i] * div;
        i++;
        div *= 10;
    }
    return result;
}

Data* deserialize(uintptr_t raw){
    Data *result = new Data;
    int i = 0;
    long int div = 100000000;
    while (i < 9)
    {
        result->bytes[8-i] = raw / div;
        raw -= result->bytes[8-i] * div;
        i++;
        div /= 10;
    }
    return result;
}


int main(){
    Data some;
    some.bytes[0] = 9;
    some.bytes[1] = 8;
    some.bytes[2] = 7;
    some.bytes[3] = 6;
    some.bytes[4] = 5;
    some.bytes[5] = 6;
    some.bytes[6] = 7;
    some.bytes[7] = 8;
    some.bytes[8] = 9;
    showData(&some);
    uintptr_t buf = serialize(&some);
    std::cout << buf << "\n";
    Data *res = deserialize(buf);
    showData(res);
    delete res;
    std::cout << buf;
}