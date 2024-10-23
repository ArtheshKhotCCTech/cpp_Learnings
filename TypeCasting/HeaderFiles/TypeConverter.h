#pragma once

class TypeConverter {
public:
    float intToFloat(int intValue);      // Implicit casting
    int floatToInt(float floatValue);    // Explicit casting
    int charToAscii(char charValue);     // Char to ASCII conversion
    int doubleToInt(double doubleValue); // Explicit casting
};
