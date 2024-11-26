#pragma once
#include <vector>
#include <string>

class Player {
private:
    std::vector<std::string> inventory; // Player's inventory

public:
    Player();
    void addItem(const std::string& item);
    void removeItem(const std::string& item);
    void listInventory() const;
    void saveInventoryToFile(const std::string& filename) const;
    bool loadInventoryFromFile(const std::string& filename);
    const std::vector<std::string>& getInventory() const;
};
