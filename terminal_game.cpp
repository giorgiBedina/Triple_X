#include <iostream>
#include <string>

int main(){
    std::cout << "Are you ready for exercising your brain?" << std::endl;
    std::cout << "Yes or No?" << '\t';
    std::string answer;
    while(std::cin >> answer){
        if(answer == "yes" || answer == "Yes"){
            std::cout << "Try to guess 3 correct numbers for this problem" << std::endl;
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