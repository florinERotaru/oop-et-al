

#include <iostream>
#include <cstring>
float operator""_Kelvin(const char* celsius) {
    float celsius_number = 0;
    float part           = 0;
    int i                = 0;
    int cifra            = 0;
    if (celsius[i] == '-') {
        celsius_number *= -1;
        i++;
    }
    int base = 10;
    int point = 0;
    for (; celsius[i] != '\0'; i++) {
        if (celsius[i] == '.') {
            // se trece la partea zecimala
            celsius_number += part;
            part = 0;
            point = i;
            i++;
        }
        cifra = celsius[i] - 48;
        part  = part * base + cifra;
        
        
    }
    int decimals = strlen(celsius) - point-1;
    if (point == 0)
        celsius_number += part;
    else {
        for (int i = 0; i < decimals; i++)
            part = part / 10;
        celsius_number += part;
    }
            
    return celsius_number+273.15;
}
float operator""_Fahrenheit(const char* celsius) {
    float celsius_number = 0;
    float part           = 0;
    int i                = 0;
    int cifra            = 0;
    if (celsius[i] == '-') {
        celsius_number *= -1;
        i++;
    }
    int base  = 10;
    int point = 0;
    for (; celsius[i] != '\0'; i++) {
        if (celsius[i] == '.') {
            // se trece la partea zecimala
            celsius_number += part;
            part  = 0;
            point = i;
            i++;
        }
        cifra = celsius[i] - 48;
        part  = part * base + cifra;
    }
    int decimals = strlen(celsius) - point - 1;
    if (point == 0)
        celsius_number += part;
    else {
        for (int i = 0; i < decimals; i++)
            part = part / 10;
        celsius_number += part;
    }

    return celsius_number*1.8 + 32.0;
}
int main() {
    
    float a = 300.123_Kelvin;
    float b = 300.123_Fahrenheit;
    std::cout << "kelvin:"<< a << "\nfahrenheit:" << b;
    return 0;
}