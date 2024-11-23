#include "GameManager.h"
#include "Forest.h"
#include "River.h"
#include "Cave.h"
#include "FinalLevel.h"
#include <memory>

int main() {
    GameManager gameManager;

    // Add levels in sequence
    gameManager.addLevel(std::make_unique<Forest>());
    gameManager.addLevel(std::make_unique<River>());
    gameManager.addLevel(std::make_unique<Cave>());
    gameManager.addLevel(std::make_unique<FinalLevel>());

    gameManager.execute();
    return 0;
}






    //// Add items to the inventory
    //player.addItem("Sword");
    //player.addItem("Shield");
    //player.addItem("Health Potion");

    //// List inventory
    //player.listInventory();

    //// Save the inventory to a file
    //player.saveInventoryToFile("inventory.txt");

    //// Create a new Player instance and load inventory from the file
    //Player loadedPlayer;
    //if (loadedPlayer.loadInventoryFromFile("inventory.txt")) {
    //    loadedPlayer.listInventory();
    //}

    //return 0;
