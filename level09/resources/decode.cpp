#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    std::ifstream file("./token");
    std::string flag;

    if (file.is_open()) {
        file >> flag;
        file.close();
    } else {
        std::cerr << "Failed to open the file." << std::endl;
    }

    for (int i = 0; i < flag.size(); i++) {
        std::cout << (char)(flag[i] - i);
    }
}