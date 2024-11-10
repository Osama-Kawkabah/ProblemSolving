//c++ Code To Generate 10 Unique Keys

#include <iostream>
#include <windows.h>

int main() {
    for (int i = 0; i < 10; i++) {
        GUID guid;
        CoCreateGuid(&guid);

        // Accessing individual components of the GUID
        std::cout << "GUID " << i + 1 << ": "
            << std::hex << guid.Data1 << "-"
            << std::hex << guid.Data2 << "-"
            << std::hex << guid.Data3 << "-"
            << std::hex << static_cast<int>(guid.Data4[0])
            << static_cast<int>(guid.Data4[1]) << "-"
            << static_cast<int>(guid.Data4[2])
            << static_cast<int>(guid.Data4[3])
            << static_cast<int>(guid.Data4[4])
            << static_cast<int>(guid.Data4[5])
            << static_cast<int>(guid.Data4[6])
            << static_cast<int>(guid.Data4[7])
            << std::endl;
    }

    return 0;
}