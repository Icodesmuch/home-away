#include "programme.h"
class Associate : public Programme
{

private:
    int specializedCourses;

public:
    Associate()
    {
        this->programmeCode = 0;
        this->maxCourses = 0;
        this->name = "";
        this->awardAndAccredition = "";
        this->specializedCourses = 8;
    }

    Associate(int programmeCode, int maxCourses, string name, string awardAndAccredition)
    {
        this->programmeCode = programmeCode;
        this->maxCourses = maxCourses;
        this->name = name;
        this->awardAndAccredition = awardAndAccredition;
        this->specializedCourses = 8;
    }
};