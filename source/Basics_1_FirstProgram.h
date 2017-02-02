﻿// Рассматриваемые темы:
// Первая программа на языке С++

#pragma once

// Подключение библиотеки
// Файл с библиотекой открывается и все содержимое
// копируется вместо команды подключения библиотеки
#include <iostream>
// iostream - библиотека для организациия ввода/вывода

// Использовать по умолчанию пространство имен std
using namespace std;
// Эта строчка избавила нас от необходимости
// все время писать std::cout, std::endl и т.п.

// Пространство имен для данной подпрограммы,
// чтобы не было конфликтов имен  переменных и функций 
// с другими подпрограммами
namespace FirstProgram1
{
    // Функция main без параметров и возвращаемого значения (ВЗ)
    // NB! Некоторые компиляторы не любят ф-цию main без ВЗ
    // Например, для gcc и gpp лучше писать
    // int main() и в конце ф-ции return 0;
    void main()
    {
        // Выводим на консоль сообщение с переносом строки
        cout << "Hello, World!" << endl;
        // Останавливаем выполнение программы,
        // чтобы успеть увидеть результат
        // иначе окно консоли сразу же закроется
//        system("pause");

        // вот тут, например, для gcc и gpp нужно добавить
        // return 0;
    }
}