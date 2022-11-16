#include "programme.h"
class Certificate : public Programme
{

private:
    int specializedCourses;

public:
    // constructors
    Certificate()
    {
        this->programmeCode = 0;
        this->maxCourses = 0;
        this->name = "";
        this->awardAndAccredition = "";
        this->specializedCourses = 4;
    }

    Certificate(int programmeCode, int maxCourses, string name, string awardAndAccredition)
    {
        this->programmeCode = programmeCode;
        this->maxCourses = maxCourses;
        this->name = name;
        this->awardAndAccredition = awardAndAccredition;
        this->specializedCourses = 4;
    }

    
};