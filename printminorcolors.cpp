#include "misaligned.hpp"

char *printfirstmajorcolor(int i, int first, int n){
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
	
    std::cout << i * n + first << " " " | " << majorColor[i] << " " " | " << minorColor[i] << "\n";
	return minorColor[i];
}

char *printsecondmajorcolor(int i, int second, int n){
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
    std::cout << i * n + second << " " " | " << majorColor[i] << " " " " " " " | " << minorColor[i] << "\n";
	return minorColor[i];
}

char *printthirdmajorcolor(int i, int third, int n){
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
    std::cout << i * n + third << " | " << majorColor[i] << " " " | " << minorColor[i] << "\n";
    return minorColor[i];
}

char *printfourthmajorcolor(int i, int fourth, int n){
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
    std::cout << i * n + fourth << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
    return minorColor[i];
}

char *printfifthmajorcolor(int i, int fifth, int n){
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
    std::cout << i * n + fifth << " | " << majorColor[i] <<  " | " << minorColor[i] << "\n";
    return minorColor[i];
}
