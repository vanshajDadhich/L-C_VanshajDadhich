#include <iostream>
#include <algorithm>

void swap(char &num1, char &num2) {
    char temp = num1;
    num1 = num2;
    num2 = temp;
}

std::string stringSort(std::string &str, bool ascending) {
    int length = str.size();

    for (int count = 0; count < length - 1; ++count) {
        for (int index = 0; index < length - count - 1; ++index) {
            if ((ascending && str[index] > str[index + 1]) || (!ascending && str[index] < str[index + 1])) {
                swap(str[index], str[index + 1]);
            }
        }
    }
    return str;
}

int findKaprekar(int number) {
    std::string numberString = std::to_string(number);

    while (numberString.length() < 4) {
        numberString = "0" + numberString;
    }

    std::string ascendingNumString = stringSort(numberString, true);
    std::string descendingNumString = stringSort(numberString, false);

    int ascendingNumber = std::stoi(ascendingNumString);
    int dscendingNumber = std::stoi(descendingNumString);

    return dscendingNumber - ascendingNumber;
}

int findStepsForKaprekarConstant(int initialNumber) {
    int steps = 0;
    int currentNumber = initialNumber;

    while (currentNumber != 6174 && steps <8) {
        currentNumber = findKaprekar(currentNumber);
        steps++;
    }

    return currentNumber == 6174 ? steps : -1;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int steps = findStepsForKaprekarConstant(number);

    if (steps != -1) {
        std::cout << "In " << steps <<" iterations "<<number<<" is converted to kaprekar's constant "<< std::endl;
    }else {
        std::cout << "This "<< number <<" does not reach kaprekar's constant" << std::endl;
    }

    return 0;
}
