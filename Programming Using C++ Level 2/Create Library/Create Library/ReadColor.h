#pragma once
#include <cstdlib>
#include <iostream>

namespace Color {

    void Screen(const std::string& message) {

        if (message == "RED") {
            system("color 4F");
        }

        else if (message == "BLUE") {
            system("color 3F");
        }

        else if (message == "GREEN") {
            system("color 2F");
        }

        else if (message == "YELLOW") {
            system("color 6F");
        }
    }
}