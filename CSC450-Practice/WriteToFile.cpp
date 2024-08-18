#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

// for less typing
using namespace std;

// reversal method
void reverseFile (const string &inputFile, const string &outputFile) {

    string fileContent;
    // error handling, if error opeing file, Error will print. 
    ifstream inText(inputFile);
    if(!inText) {
        cerr << "Error opening file" << endl;
        return;
    }

    // fileContent string that text in file will be added to. 
    fileContent.assign((istreambuf_iterator<char>(inText)), istreambuf_iterator<char>());
    // Close input from File
    inText.close();

    // reverse file content, #include <algorithm>
    reverse(fileContent.begin(), fileContent.end());
    // output file steam
    ofstream outText(outputFile);

    // error handling, if error closing file, Error will print.
    if(!outText) {
        cerr << "Error closing file" << endl;
        return;
    }

    // takes file Content and writes to the 
    outText << fileContent;
    outText.close();

    cout << "Text written to file" << endl;

}

int main() {
    
    string userInput;
    ofstream outFile;

    // Open file, Append mode.
    outFile.open("CSC450_CT5_mod5.txt", ios_base::app);

    // Validate opening of file, "!outFile" 'not'outFile, cerr is error stream, cin 'input', cout 'output', same idea. 
    if(!outFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Get user input. 
    cout << "Enter in something to write to the file: " << endl;
    // gets input from user until "\n" is encountered. "enter", 
    getline(cin, userInput);

    // Writes input to the file
    outFile << userInput << endl;

    // Close the file, (This seems to be the norm whenever you open any connector to the program, files, user input, data 
    // connections to the outside like a database)
    outFile.close();

    // gets File for input, and gets name for the output file. 
    string inputFile = "CSC450_CT5_mod5.txt";
    string outputFile = "CSC450-mod5-reverse.txt";

    // runs revers method. 
    reverseFile(inputFile, outputFile);

    return 0;
}