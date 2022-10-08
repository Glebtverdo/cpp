#include"Replace.hpp"

std::string *Replace::openAndRead(){
    std::string *result = new(std::string);
    std::string buffer;
    std::ifstream file(_fileName);
    if(file.is_open()){
        while (std::getline(file, buffer)) {
            size_t indent = buffer.find(_stringToSearch);
            if(indent != std::string::npos){
                int len = _stringToSearch.length();
                int i = 0;
                while (i < len)
                {
                    buffer[indent + i] = _stringToReplace[i];
                    i++;
                }
            }       
            *result += buffer;
            *result += '\n';
        }
        file.close();
    }
    return result;
}

void Replace::createAndWrite(std::string text){
    std::ofstream newFile(_fileName + ".replace");
    if(newFile.is_open()){
        newFile << text;
        newFile.close();
    }else
        std::cout << "Error with making newFile\n";
}

Replace::Replace(std::string fileName, std::string stringToSearch, std::string stringToReplace){
    _fileName = fileName;
    _stringToSearch = stringToSearch;
    _stringToReplace = stringToReplace;
}

void Replace::replace(){
    if(_stringToReplace.length() == _stringToSearch.length() && _stringToSearch.length() != 0 && _stringToReplace.length() != 0 && _fileName.length() != 0){
        std::string *text = openAndRead();
        if(text->length() == 0)
            std::cout << "Error with open\n";
        else
            createAndWrite(*text);
        delete text;
    }else
        std::cout << "Params error\n";
}

void Replace::setFileName(std::string str){
    if(str.length() > 0)
        _fileName  = str;
    else
        std::cout << "Error param is empty\n";
}

void Replace::setStringToSearch(std::string str){
    if(str.length() > 0)
        _stringToSearch = str;
    else
        std::cout << "Error param is empty\n";
}

void Replace::setStringToReplace(std::string str){
    if(str.length() > 0)
        _stringToReplace = str;
    else
        std::cout << "Error param is empty\n";
}
