#include <iostream>
#include <fstream>

void replace(std::string filename, std::string s1, std::string s2) {

    std::fstream    file;
    std::fstream    file_replaced;
    char            buffer;
    std::string     file_content;

    file.open(filename);

    if (file.is_open()) {
        file_replaced.open("FILENAME.replace", std::ios::out);

        while (file.get(buffer)) {
            file_content += buffer;
        }

        int count;
        while ((count = file_content.find(s1)) != -1) {
            file_content.erase(count, s1.length());
            file_content.insert(count, s2);
        }

        file_replaced << file_content;       
    }
    file.close();
    file_replaced.close();

}
