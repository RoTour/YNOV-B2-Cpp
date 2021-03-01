#include <iostream>
#include <vector>

std::string myStrToLower(const std::string str) {
    std::string result = "";
    for(char c : str){
        result.push_back(tolower(c));
    }
    return result;
}

bool contains(std::vector<char> values, char test){
    for(char c : values){
        if (c == test) return true;
    }
    return false;
}

bool is_isogram(std::string str) {
    std::vector<char> buffer = std::vector<char>();
    std::string strLowered = myStrToLower(str);
    for(char c : strLowered){
        if (!contains(buffer, c)){
            buffer.push_back(c);
        } else {
            return false;
        }
    }
    return true;
}
