#include<iostream>
#include<fstream> // Добавляем заголовочный файл для работы с файлами
using namespace std;

int main() {
    // Открываем файл для записи
    ofstream outputFile("output.txt");
    
    // Проверяем, успешно ли открылся файл
    if (!outputFile.is_open()) {
        cout << "Unable to open file";
        return 1;
    }
    
    // Записываем текстовое сообщение в файл
    outputFile << "Hello world!";
    
    // Закрываем файл
    outputFile.close();
    
    cout << "Data written to file successfully";
    
    return 0;
}
