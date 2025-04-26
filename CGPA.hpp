#ifndef GCPA_HPP
#define GCPA_HPP

#include <vector>
#include <iostream>
#include <string>

class student_GPA{
    public:
        std::string name;
        std::vector<double> GPAS;
        int semesters;
        student_GPA();
        ~student_GPA();
    };
    
void calc_GPA(const std::vector<double>& GPAS, int semesters, std::string name);


#endif

