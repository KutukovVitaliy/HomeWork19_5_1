/*
Что нужно сделать

Составьте небольшой текстовый файл «words.txt», в котором последовательно, через пробелы и переносы строк
 расположены различные слова. Можете использовать любые англоязычные слова. Разработайте программу, которая искала бы
 среди этих слов нужное пользователю и выводила бы общее количество повторений этого слова. 0 — если слово вообще не
 присутствует в файле.
*/
#include <iostream>
#include <fstream>

int main() {
    int count = 0;
    std::string CurrentWord, WordToSearch;
    std::ifstream TxtFile("../words.txt");
    if(!TxtFile)
    {
        std::cout << "Can't open file!" << std::endl;
        exit (1);
    }
    std::cout << "Input word to search: ";
    std::cin >> WordToSearch;

    while(TxtFile)
    {
        TxtFile >> CurrentWord;
        if(CurrentWord == WordToSearch) count++;
    }
    TxtFile.close();
    std::cout << "count = " << count << std::endl;
    return 0;
}
