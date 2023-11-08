#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string sourceFileName, destinationFileName;
    
    // Get the source and destination file names from the user
    std::cout << "Enter the name of the source text file: ";
    std::cin >> sourceFileName;
    std::cout << "Enter the name of the destination text file: ";
    std::cin >> destinationFileName;

    // Create an ifstream object for the source file (input)
    std::ifstream sourceFile(sourceFileName);

    // Check if the source file was successfully opened
    if (!sourceFile.is_open()) {
        std::cerr << "Failed to open the source file." << std::endl;
        return 1;
    }

    // Create an ofstream object for the destination file (output)
    std::ofstream destinationFile(destinationFileName);

    // Check if the destination file was successfully opened
    if (!destinationFile.is_open()) {
        std::cerr << "Failed to open the destination file." << std::endl;
        sourceFile.close();
        return 1;
    }

    // Copy the contents from the source file to the destination file
    std::string line;
    while (std::getline(sourceFile, line)) {
        destinationFile << line << std::endl;
    }

    // Close both files
    sourceFile.close();
    destinationFile.close();

    std::cout << "File copied successfully." << std::endl;

    return 0;
}
