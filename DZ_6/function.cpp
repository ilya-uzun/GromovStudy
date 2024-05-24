
#include "function.h"


int menu(){
    int choice = 0;

    cout << "1. Открыть файл для записи " << endl;
    cout << "2. Открыть файл для чтения " << endl;
    cout << "3. Очистить файл" << endl;
    cout << "4. Сохранить" << endl;
    cout << "5. Выход" << endl;

    cout << "Сделайте выбор :  ";

    //Проверка ввода
    while(!(cin >> choice) || choice > 5 || choice < 1 ){
        // Введите цифру от 1 до 5
        cout << "Сделайте правельный выбор :  ";
        break;
    }
    cout << endl;
    return choice;
}

// Функции вызова
void takeAction(int choice, vector<string> &fileContent, string &nameFile){
    switch (choice){
    case 1:
        appendText(fileContent);
        break;
    case 2:
        diplayContent(fileContent);
        break;
    case 3:
        emptyFile(fileContent);
        break;
    case 4:
       saveFile(fileContent, nameFile);
        break;
    case 5:
        exit(0);
        break;
    default:
        break;
    }
}

void readContent(fstream &file, vector<string> &fileContent){
    string line;
    while(!file.eof()){
        getline(file, line);
        if(!line.empty()){
            fileContent.push_back(line);
        }
    }
}

void appendText(vector<string> &fileContent){

    string append_text{};
    cin.ignore();
    getline(cin, append_text, '\n'); // Вводить до символа
    fileContent.push_back(append_text);
    //append_text[append_text.size() -1] = '.';
    //fileContent.push_back(append_text);
    cin.clear();
}

void diplayContent(vector<string> &fileContent){

    for(string line : fileContent)
        cout << line << endl;
}


void emptyFile(vector<string> &fileContent){
    fileContent.clear();
}

void saveFile(vector<string>&fileContent, string &oldFileName){
    string fileName;
    cout << "Ведите новое имя или нажмите Enter чтобы оставить старое имя ===> ";
    // удалить из буфера
    cin.ignore();
    getline(cin, fileName);

    cout << endl;

    // сохраниеть в файле
    if(fileName.empty()){
        fstream file;
        file.open(oldFileName, ios::out);
        // запись в файл с новой строки
        for(int i=0; i<fileContent.size(); i++){
           file << fileContent[i] << endl;
       }
       file.close();

       file.open(oldFileName, ios::in);
       fileContent.clear(); // очистить

       // обновить содерживое
       readContent(file, fileContent);
       file.close();

    }else{ // сохраниеть в другом файле

        // открыть новый файл для записи
        ofstream newFile(fileName);

        // записать в новый файл
        for(int i=0; i<fileContent.size(); i++){
            newFile << fileContent[i] << endl;
        }

        newFile.close();
    }
    cout << "Файл сохранен" << endl;
}










