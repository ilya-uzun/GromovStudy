#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main()
{
    //long fileLength;
    //const int max_length {256};
    //char text[max_length] {};
    string line;
// тест ввода
    //cin.getline(text, max_length);
    //cout << text <<  endl;

    fstream data;
    data.open("file.txt",ios::app | ios::out); // создать*

    // Проверка на открытие и запись
    if(!data.is_open()){
        cout << "Cannot open file" << endl;
        return 1;
    }
    else {
        data << "line" << endl;
    }
    data.close();

    data.open("file.txt",ios::app |ios::in); // создать*
    // Проверка на открытие и чтение
    if(!data.is_open()){
        cout << "Cannot open file" << endl;
        return 1;
    }
    else {
        while(getline(data,line)){
        cout << line << endl;
        }
    }
    data.close();


    // Check of file
    // if(!data.seekg(0, data.end).good()){
    //     cout << "Cannot move to the end of the file" << endl;
    //     return 1;
    // }
    //data.seekg(0, data.end); // перейти в конец файла
    //fileLength = data.tellg(); // выдать позицию указателя
    //cout <<"File length: " << fileLength;



    //data.open("file.txt", ios::in); // создать*
    //data.close();

//     // text input
//     cout << "Enter name of file: ";
//     string text;
//     cin >> text;
//
//     // open file
//     FILE *data;
//     data = fopen(text.c_str(), "w");
//
//     if (data == NULL) {
//             cout << "Fail to pen file" << endl;
//         }
//
//     fclose(data);

    // string filename{"test1.txt"};
    // ofstream data{filename};
    //
    // if (!data.is_open())
    //     cout << "failed to open: " << filename << '\n';
    // else
    // {
    //
    //     //write
    //     double d{3.14};
    //     data.write(reinterpret_cast<char*>(&d), sizeof d);
    //     data << 123 << "ads";
    //
    //     // read
    //
    // }

/*    int x = 433242;
    int b;
    cin >> b;
    fstream data;
    data.open("file.bin", ios::out); // создать*/ //файл для записи
    //data.write((char*)&x, sizeof(int));
    //data.read((char*)&x, sizeof(int));

    return 0;
}
