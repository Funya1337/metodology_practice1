#include "LcmGame.h"
#include "../helpers/LcmHelpers.h"

void StartLcmGame()
{
    std::srand(std::time(0));
    
    int num1 = std::rand() % 20 + 1;
    int num2 = std::rand() % 20 + 1;
    int num3 = std::rand() % 20 + 1;
    
    std::cout << "Find the least common multiple (LCM) of the numbers: "
              << num1 << " " << num2 << " " << num3 << std::endl;
    
    int userAnswer;
    std::cout << "Your answer: ";
    std::cin >> userAnswer;
    
    int correctAnswer = lcm(num1, num2, num3);
    
    if (userAnswer == correctAnswer) {
        std::cout << "Congratulations! You have found the correct NOC." << std::endl;
    } else {
        std::cout << "Incorrect. The correct answer is: " << correctAnswer << std::endl;
    }
}