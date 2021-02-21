#ifndef CRADLE_H
#define CRADLE_H

#include <string> 

void GetChar();

void Error(std::string s);
void Abort(std::string s);
void Expected(std::string s);
void Match(char x);

int IsAlpha(char c);
int IsDigit(char c);
int IsAddop(char c);

std::string GetName();
std::string GetNum();

void Emit(std::string s);
void EmitLn(std::string s);

void Init();


#endif
