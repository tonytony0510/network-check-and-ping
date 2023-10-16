#include <cstdlib>
#include <iostream>

int main() {
    while (true) {
        std::string command = "ping -c 1 8.8.8.8 | grep 'time='";
        FILE* pipe = popen(command.c_str(), "r");
        if (pipe) {
            char buffer[128];
            while (!feof(pipe)) {
                if (fgets(buffer, 128, pipe) != nullptr) {
                    std::cout << buffer;
                }
            }
            pclose(pipe);
        }
    }

    return 0;
}