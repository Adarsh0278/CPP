#include <iostream>
#include <vector>

int main() {
    // Declare a 2D vector with 3 empty rows initially
    std::vector<std::vector<int>> myGrid(3);

    // Add elements to the rows (Notice the different lengths!)
    myGrid[0] = {1, 2, 3};          // Row 0 has 3 elements
    myGrid[1] = {4, 5};             // Row 1 has 2 elements
    myGrid[2] = {6, 7, 8, 9};       // Row 2 has 4 elements

    // Add a completely new row to the bottom using push_back
    myGrid.push_back({10, 11});     // Now we have a Row 3 with 2 elements

    // Access a specific element (Row 2, Column 1)
    std::cout << "Element at myGrid[2][1]: " << myGrid[2][1] << "\n\n";

    // Iterate through the entire 2D vector
    std::cout << "Printing the jagged 2D vector:\n";
    for (int row = 0; row < myGrid.size(); row++) {
        std::cout << "Row " << row << " (size " << myGrid[row].size() << "): ";
        
        for (int col = 0; col < myGrid[row].size(); col++) {
            std::cout << myGrid[row][col] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}