#include "Player.h"
#include <iostream>
#include <fstream>

// Constructor
Player::Player() = default;

// Add an item to the inventory
void Player::addItem(const std::string& item) {
    inventory.push_back(item);
    std::cout << item << " has been added to your inventory.\n";
}

// Remove an item from the inventory
void Player::removeItem(const std::string& item) {
    auto it = std::find(inventory.begin(), inventory.end(), item);
    if (it != inventory.end()) {
        inventory.erase(it);
        std::cout << item << " has been removed from your inventory.\n";
    }
    else {
        std::cout << item << " is not in your inventory.\n";
    }
}

// List all items in the inventory
void Player::listInventory() const {
    if (inventory.empty()) {
        std::cout << "Your inventory is empty.\n";
    }
    else {
        std::cout << "Inventory:\n";
        for (const auto& item : inventory) {
            std::cout << "- " << item << '\n';
        }
    }
}

// Save the inventory to a file
void Player::saveInventoryToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Error: Could not open file for saving.\n";
        return;
    }
    for (const auto& item : inventory) {
        file << item << '\n';
    }
    file.close();
    std::cout << "Inventory saved to " << filename << ".\n";
}

// Load the inventory from a file
bool Player::loadInventoryFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error: Could not open file for loading.\n";
        return false;
    }
    inventory.clear();
    std::string item;
    while (std::getline(file, item)) {
        inventory.push_back(item);
    }
    file.close();
    std::cout << "Inventory loaded from " << filename << ".\n";
    return true;
}

// Get the inventory (read-only)
const std::vector<std::string>& Player::getInventory() const {
    return inventory;
}
