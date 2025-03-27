#include "GeometryProgression.h"

void StartGeometryGame()
{
    std::srand(std::time(0));
    
    int length = std::rand() % 6 + 5;
    int first = std::rand() % 10 + 1;
    int ratio = std::rand() % 5 + 2;
    
    std::vector<int> progression;
    for (int i = 0; i < length; ++i) {
        progression.push_back(first * std::pow(ratio, i));
    }
    
    int hiddenIndex = std::rand() % length;
    int correctAnswer = progression[hiddenIndex];
    progression[hiddenIndex] = -1;
    
    std::cout << "Find the hidden number in geometric progression:\n";
    for (int i = 0; i < length; ++i) {
        if (progression[i] == -1) {
            std::cout << ".. ";
        } else {
            std::cout << progression[i] << " ";
        }
    }
    std::cout << "\nYour answer: ";
    
    int userAnswer;
    std::cin >> userAnswer;
    
    if (userAnswer == correctAnswer) {
        std::cout << "Congratulations! You found the number correctly." << std::endl;
    } else {
        std::cout << "Incorrect. The correct answer is: " << correctAnswer << std::endl;
    }
}