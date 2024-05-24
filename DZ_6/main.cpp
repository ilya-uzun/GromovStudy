// #include <iostream>
// #include <string>
// #include <fstream>
// #include <vector>
#include "function.h"

//using namespace std;

int main()
{

    vector<string>fileContent;
    string nameFile;
    fstream data;
    data.open(nameFile);

    cout << "Введите имя файла (если файл не найден он будет создан): ";
    cin >> nameFile;

    // Проверка на открытие и чтение
    if(data){
        cout << "Этот файл существует" << endl;
    }
    else {
        // Если не существует создать заного
        data.open(nameFile, ios::out);
        cout << "Создан файл: " << nameFile << endl;
    }

    //read file content in vector
    readContent(data, fileContent);

    // Работа меню
    while(true){

        takeAction(menu(), fileContent, nameFile);
        cout << "\n";
    }

    data.close();

    return 0;
}
