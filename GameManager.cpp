#include "GameManager.h"


class ChoiceSearchForSister : public GameManager {
public:
    void execute() const override {
        std::cout << "You venture out in a search to find your sister!\n";
    }
};
