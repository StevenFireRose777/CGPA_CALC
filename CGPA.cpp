#include <iostream>
#include <vector>


class student_GPA{
public:
    std::string name;
    std::vector<double> GPAS;
    int semesters;
    student_GPA();
    ~student_GPA();
};

student_GPA::student_GPA(){

    std::cout << "What is your name: ";
    std::cin >> name;

    std::cout << "How many semesters did you have so far: ";
    std::cin >> semesters;

    GPAS.resize(semesters);
    

    for(int i = 0; i < semesters; ++i){
        std::cout << "Enter GPA for semester: " << (i + 1) << ": ";
        std::cin >> GPAS[i];
    }
    

}

student_GPA::~student_GPA()
{
    std::cout << "Class destroyed SUCCESSFULLY\n";
}


void calc_GPA(const std::vector<double>& GPAS, int semesters){
    for(auto i = 0; i < 10; ++i){
        std::cout << "COOKIES\n";
    }



}



int main(){

    student_GPA student;


    calc_GPA(student.GPAS, student.semesters);

    
    return 0;
}