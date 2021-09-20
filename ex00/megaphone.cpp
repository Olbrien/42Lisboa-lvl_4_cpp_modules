#include <iostream>

int main(int argc, char **argv) {

    int i = 1;

    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    } else if (argc > 1) {
        while (i < argc) {

            std::string temp = argv[i];

            int x = 0;
            while (temp[x]) {
                putchar (toupper(temp[x]));
                x++;
            }
            i++;
        }
    }
}