#include "programme.h"
class Diploma : public Programme
{
private:
    int specializedCourses;

public:
    Diploma()
    {
        this->programmeCode = 0;
        this->maxCourses = 0;
        this->name = "";
        this->awardAndAccredition = "";
        this->specializedCourses = 6;
    }

    Diploma(int programmeCode, int maxCourses, string name, string awardAndAccredition)
    {
        this->programmeCode = programmeCode;
        this->maxCourses = maxCourses;
        this->name = name;
        this->awardAndAccredition = awardAndAccredition;
        this->specializedCourses = 6;
    }
};