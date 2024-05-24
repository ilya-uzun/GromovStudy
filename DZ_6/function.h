#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
#ifndef HEAD
#define HEAD

// объявление и интерфейс

int menu();
void takeAction(int, vector<string>&, string&);
void appendText(vector<string>&);
void diplayContent(vector<string>&);
void emptyFile(vector<string>&);
void saveFile(vector<string>&, string&);
void readContent(fstream&, vector<string>&);

#endif
