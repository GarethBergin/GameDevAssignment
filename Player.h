#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For std::find
#include <fstream>   // For file I/O

class Player {
private:
    std::vector<std::string> inventory; // Holds items in the inventory

public:
    // Constructor
    Player();

    // Inventory management
    void addItem(const std::string& item);
    void removeItem(const std::string& item);
    void listInventory() const;

    // Save and Load inventory
    void saveInventoryToFile(const std::string& filename) const;
    bool loadInventoryFromFile(const std::string& filename);

    // Destructor
    ~Player() = default;
};
