#include <cstdlib>
#include <iostream>
#include <string>

// Variable Declarations
char Look;

// Report an Error
void Error(std::string s) { std::cout << "Error: " + s; }

// Report Error and Halt
void Abort(std::string s) {
    Error(s);
    std::abort();
}

// Report What Was Expected
void Expected(std::string s) { Abort(s + " Expected"); }

// Match a Specific Input Character

void Match(char x) {
    if (Look == x) {
	getchar();
    } else {
	Expected(std::to_string(x));
    }
}

// Recognize an Alpha Character

bool IsAlpha(char c) { return std::isalpha(c); }

// Recognize a Decimal Digit

bool IsDigit(char c) { return std::isdigit(c); }

// Get an Identifier

std::string GetName() {
    char c = Look;
    if (!IsAlpha(Look)) {
	Expected("Name");
    }
    getchar();
    return std::to_string(c);
}

// Get a Number

std::string GetNum() {
    char c = Look;
    if (!IsDigit(Look)) {
	Expected("Integer");
	return "";
    }
    getchar();
    return std::to_string(c);
}

// Output a String with Tab
void Emit(std::string s) { std::cout << s; }

// Output a String with Tab and CRLF
void EmitLn(std::string s) {
    Emit(s);
    std::cout << std::endl;
}

// Initialize

void Init() { getchar(); }

int main() {
    Init();
    return 0;
}

