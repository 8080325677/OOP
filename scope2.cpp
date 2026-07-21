#include <iostream>
#include <string>

// Define the physics namespace
namespace physics {
    std::string subject = "Classical Mechanics";
}

// Define the chemistry namespace
namespace chemistry {
    std::string subject = "Organic Chemistry";
}

int main() {
    // Access the variable from the physics namespace
    std::cout << "Physics Department: " << physics::subject << std::endl;

    // Access the variable from the chemistry namespace
    std::cout << "Chemistry Department: " << chemistry::chemistry::subject << std::endl; 
    
    // Note: You can also use a shortened alias if you access one frequently
    namespace chem = chemistry;
    std::cout << "Alias Access: " << chem::subject << std::endl;

    return 0;
}

