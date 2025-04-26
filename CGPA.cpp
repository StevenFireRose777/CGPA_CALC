#include <iostream>
#include <vector>


class student_GPA{
public:
    student_GPA(std::string name, std::vector<int> GPAS);
    ~student_GPA();
};

student_GPA::student_GPA(std::string name = "NULL", std::vector<int> GPAS)
{
    std::cout << "What is your name: ";
    std::cin >> name;

    int semseters;
    std::cout << "How many semesters did you have so far: ";
    std::cin >> semseters;

}

student_GPA::~student_GPA()
{
    std::cout << "Class destroyed SUCCESSFULLY\n";
}



int main(){

    student_GPA();


    
    return 0;
}