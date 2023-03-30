#include "Console.h"

int main() {
    std::string str;
    do {
        Console::getty(str, "");
        Console::color(Console::Colors::green);
        Console::print_history();
        Console::color();
    } while (str != "quit");
    return 0;
}
