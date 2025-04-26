#include "CGPA.hpp"


student_GPA::student_GPA(){

    std::cout << "What is your name: ";
    std::cin >> name;

    std::cout << "How many semesters did you have so far: ";
    std::cin >> semesters;

    GPAS.resize(semesters);
    

    for(int i = 0; i < semesters; ++i){
        std::cout << "Enter GPA for semester " << (i + 1) << ": ";
        std::cin >> GPAS[i];
    }
    

}

student_GPA::~student_GPA()
{
    std::cout << "Class destroyed SUCCESSFULLY\n";
}


void calc_GPA(const std::vector<double>& GPAS, int semesters, std::string name){
    double total, average;
    for(auto i = 0; i < semesters; ++i){
        total += GPAS[i];
    }
    average = total / semesters;

    std:: cout << name + " your cummunative GPA in " << semesters << " semesters is about " << average << "\n";



}



int main(){

    student_GPA student;


    calc_GPA(student.GPAS, student.semesters, student.name);

    
    return 0;
}