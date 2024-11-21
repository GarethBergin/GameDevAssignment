#include <iostream>
#include <string>

class GameManager {
public:
    virtual void execute() const = 0; // Pure virtual function for executing the choice
    virtual ~GameManager() = default; // Virtual destructor
};
