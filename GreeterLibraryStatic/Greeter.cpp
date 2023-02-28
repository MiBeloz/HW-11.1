#include "Greeter.h"


namespace GreeterLibraryStatic {
    std::string Greeter::greet(const std::string _name) {
        return "Привет, " + _name + '!';
    }
}
