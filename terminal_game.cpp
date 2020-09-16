#include <iostream>
#include <string>
#include <ctime>
#include <random>

void addNumbers(bool &result){
    std::cout << "What is sum of this numbers :" << '\t';
    int a = rand()%10 + rand()%10, b = rand()%10 + rand()%10, c = rand()%10 + rand()%10;
    std::cout << a << '\t' << b << '\t' << c << std::endl;
    int sum = a + b + c;
    int answer;
    std::cin >> answer;
    if(answer == sum){
        std::cout << "correct answer" << std::endl;
        result = true;
    }
    else{
        std::cout << "wrong answer" << '\t' << "correct answer was : " << sum << std::endl;
        result = false;
    }
}

void multiplyNumbers(bool &result){
    std::cout << "What is multiplication product of this numbers :" << '\t';
    int a = rand()%10 , b = rand()%10 , c = rand()%10 ;
    std::cout << a << '\t' << b << '\t' << c << std::endl;
    int multiply = a * b * c;
    int answer;
    std::cin >> answer;
    if(answer == multiply){
        std::cout << "correct answer" << std::endl;
        result = true;
    }
    else{
        std::cout << "wrong answer" << "correct answer was : " << multiply << std::endl;
        result = false;
    }
}

void factorial(bool &result){
    std::cout << "What is factorial of this number :" << '\t';
    int a = (rand()%10)%6 + 1;
    std::cout << a << std::endl;
    int factorial = 1;
    for(a;a > 0;a--){
        factorial *= a;
    }
    int answer;
    std::cin >> answer;
    if(answer == factorial){
        std::cout << "correct answer" << std::endl;
        result = true;
    }
    else{
        std::cout << "wrong answer" << "correct answer was : " << factorial << std::endl;
        result = false;
    }
}

void xyFunction(bool &result){
    int a = rand()%10 , b = rand()%10;
    int multiply = a * b;
    int sum = a + b;
    std::cout << "Guess 2 numbers whose :" << '\n';
    std::cout << "Multiplication product is:" << multiply << '\t';
    std::cout << "and sum is:" << sum << '\t';
    int number1, number2;
    std::cout << "Your answer is :" << '\t';
    std::cin >> number1 >> number2;
    int multiplyResult = number1 * number2;
    int sumResult = number1 + number2;
    if(multiplyResult == multiply && sumResult == sum){
        std::cout << "correct answer" << std::endl;
        result = true;
    }
    else{
        std::cout << "wrong answer" << "correct answer was : " << a << '\t' << b << '\t' << '\t' << std::endl;
        result = false;
    }
}

void xyzFunction(bool &result){
    int a = rand()%10 , b = rand()%10 , c = rand()%10;
    int multiply = a * b * c;
    int sum = a + b + c;
    std::cout << "Guess 3 numbers whose :" << '\n';
    std::cout << "Multiplication product is:" << multiply << '\t';
    std::cout << "and sum is:" << sum << '\t';
    int number1, number2, number3;
    std::cout << "Your answer is :" << '\t';
    std::cin >> number1 >> number2 >> number3;
    int multiplyResult = number1 * number2 * number3;
    int sumResult = number1 + number2 + number3;
    if(multiplyResult == multiply && sumResult == sum){
        std::cout << "correct answer" << std::endl;
        result = true;
    }
    else{
        std::cout << "wrong answer" << "correct answer was : " << a << '\t' << b << '\t' << c << '\t' << std::endl;
        result = false;
    }
}

int main(){
    srand((unsigned int)time(NULL));
    std::cout << "Are you ready for exercising your brain?" << std::endl;
    std::cout << "Yes or No?" << '\t';
    std::string answer;
    while(std::cin >> answer){
        if(answer == "yes" || answer == "Yes"){
            std::cout << "Try to guess 3 correct numbers for this problem" << std::endl;
            int level = 1, maxLevel = 5;
            while(level >= 1 && level <= maxLevel){
                std::cout << "level" << '\t' << level << std::endl;

                if(level == 1){
                    bool result;
                    addNumbers(result);
                    if(result) {
                        ++level;
                        continue;
                    }    
                    else {
                        --level;
                        std::cout << "game over" << std::endl;
                        continue;
                    }   
                }
                if(level == 2){
                    bool result;
                    multiplyNumbers(result);
                    if(result) {
                        ++level;
                        continue;
                    } 
                    else {
                        --level;
                        continue;
                    } 
                }
                if(level == 3){
                    bool result;
                    factorial(result);
                    if(result) {
                        ++level;
                        continue;
                    } 
                    else {
                        --level;
                        continue;
                    } 
                }
                if(level == 4){
                    bool result;
                    xyFunction(result);
                    if(result) {
                        ++level;
                        continue;
                    } 
                    else {
                        --level;
                        continue;
                    } 
                }
                if(level == 5){
                    bool result;
                    xyzFunction(result);
                    if(result) {
                        std::cout << "you won" << std::endl;
                        ++level;
                        continue;
                    } 
                    else {
                        --level;
                        continue;
                    } 
                }
            }
            break;
        }
        else if(answer == "no" || answer == "No"){
            std::cout << "Ok, let's try another time" << std::endl;
            break;
        }
        std::cout << "Please give us 'Yes' or 'No' answer :" << '\t';
    }
    
    return 0;
}
