#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main()
{

    string line;
    string nameFile;
    fstream data;

    cout << "Укажите файл= ";
    cin >> nameFile;

    // запись
    data.open(nameFile,ios::app |ios::out);
    // Проверка на открытие и чтение
    if(!data.is_open()){
        cout << "Cannot open file" << endl;
        return 1;
    }
    else {
        int a;
        for (int i=0; i<5; i++){
            cout << "a= ";
            cin >> a ;
            data << a << " ";
        }
    }
    data.close();

    // чтение
    data.open(nameFile,ios::app | ios::in); // создать*

    // Проверка на открытие и чтение
    if(!data.is_open()){
        cout << "Cannot open file" << endl;
        return 1;
    }
    else {
        cout << "File open - " << nameFile << endl;
        char ch;
        while (data.get(ch)){
            cout << ch ;
        }
    }
    data.close();

    return 0;
}
