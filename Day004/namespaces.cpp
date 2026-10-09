// Namespaces provide a solution for preventing name conflicts in large projects.
/* Each entity needs a unique name within it's namespace
A namespace allows for identically named entities as long as the namespaces are different*/

#include <iostream>

namespace First {
    int x = 3;
}

namespace Second{
    int x = 5;
}

namespace Third{
    int x = 10;
}

int main() {
    using std::cout; // This allows us to use cout without the std:: prefix
    using std::endl; // This allows us to use endl without the std:: prefix
    using std::string; // This allows us to use string without the std:: prefix
    
    using namespace Third;
    
    cout << x << '\n';
    cout << First::x << '\n';
    cout << Second::x << '\n';

return 0;
}