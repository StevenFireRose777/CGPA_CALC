#include "CGPA.hpp"
#include <iomanip>

// Basic CGPA C++ program, not the best one, just for learning classes

student_GPA::student_GPA(){ // Constructor

    std::cout << "What is your name: ";
    std::cin >> name;

    std::cout << "How many semesters did you have so far: ";
    std::cin >> semesters;
    // Get input values 

    GPAS.resize(semesters); // Adjust vector size to num of semesters
    

    for(int i = 0; i < semesters; ++i){
        std::cout << "Enter GPA for semester " << (i + 1) << ": ";
        std::cin >> GPAS[i];
    } // Let user put in GPA for each number of semesters
    

}

student_GPA::~student_GPA()
{
    std::cout << "Class destroyed SUCCESSFULLY\n"; // Destroy class and object (Just there to learn)
}


void calc_GPA(const std::vector<double>& GPAS, int semesters, std::string name){
    double total, average;
    for(auto i = 0; i < semesters; ++i){ // auto = "Yo compiler, initalize to this number"
        total += GPAS[i]; // For every GPA index, add it to entire decimal total
    }
    average = total / semesters; // Get total GPA

    std:: cout << name + " your cummunative GPA in " << semesters << " semesters is about " << std::fixed << std::setprecision(3) << average << "\n";

    // Prints out name + cummunative GPA with decimal point precision of 3 places.
}



int main(){

    student_GPA student; // object that will call constructer automatically


    calc_GPA(student.GPAS, student.semesters, student.name); // function call after constructor

    
    return 0;
}