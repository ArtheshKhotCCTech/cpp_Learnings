#include "../HeaderFiles/MyString.h"

MyString::MyString(const std::string& str) : str(str) {}

std::string MyString::reorder() {
    std::string vowels = "", consonants = "";
    for (char ch : str) {
        if (isVowel(ch)) {
            vowels += ch;
        }
        else {
            consonants += ch;
        }
    }
    return vowels + consonants;
}

bool MyString::isVowel(char ch) {
    char lowerCh = tolower(ch);
    return lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u';
}