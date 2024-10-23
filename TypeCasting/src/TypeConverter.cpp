#include "../HeaderFiles/TypeConverter.h"

float TypeConverter::intToFloat(int intValue) {
    return intValue;
}

int TypeConverter::floatToInt(float floatValue) {
    return static_cast<int>(floatValue);
}

int TypeConverter::charToAscii(char charValue) {
    return static_cast<int>(charValue);
}

int TypeConverter::doubleToInt(double doubleValue) {
    return static_cast<int>(doubleValue);
}
