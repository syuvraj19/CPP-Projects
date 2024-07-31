#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // File names
    string inputFileName, outputFileName;

    // Get file names from user
    cout << "Enter the input file name: ";
    cin >> inputFileName;
    cout << "Enter the output file name: ";
    cin >> outputFileName;

    // Open the input file
    ifstream inputFile(inputFileName);
    if (!inputFile) {
        cerr << "Error opening input file: " << inputFileName << endl;
        return 1;
    }

    // Read names from the input file into a vector
    vector<string> names;
    string name;
    while (getline(inputFile, name)) {
        names.push_back(name);
    }

    // Close the input file
    inputFile.close();

    // Reverse the order of names
    reverse(names.begin(), names.end());

    // Open the output file
    ofstream outputFile(outputFileName);
    if (!outputFile) {
        cerr << "Error opening output file: " << outputFileName << endl;
        return 1;
    }

    // Write names to the output file in reverse order
    for (const string& name : names) {
        outputFile << name << endl;
    }

    // Close the output file
    outputFile.close();

    cout << "Names have been read from " << inputFileName << " and written in reverse order to " << outputFileName << endl;

    return 0;
}
