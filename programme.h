#include <iostream>
#include <string.h>
#include <fstream>
#include <stdexcept>
#include <sstream>
using namespace std;
class Programme
{
protected:
    int programmeCode, maxCourses;
    string name, awardAndAccredition;

public:
    // constructors
    Programme()
    {
        this->programmeCode = 0;
        this->maxCourses = 0;
        this->name = "";
        this->awardAndAccredition = "";
    }
    // primary constructor.
    // TODO - add course object
    Programme(int programmeCode, int maxCourses, string name, string awardAndAccredition)
    {
        this->programmeCode = programmeCode;
        this->maxCourses = maxCourses;
        this->name = name;
        this->awardAndAccredition = awardAndAccredition;
    }
    // destructor
    ~Programme()
    {
    }
    // mutators
    void setProgammeCode(const int programmeCode)
    {
        this->programmeCode = programmeCode;
    }

    void setName(const string name)
    {
        this->name = name;
    }

    void setMaxCourse(const int maxCourses)
    {
        this->maxCourses = maxCourses;
    }

    void setAwardAndAccredition(const string awardAndAccredition)
    {
        this->awardAndAccredition = awardAndAccredition;
    }

    // accessors
    const string getName() const
    {
        return this->name;
    }

    const int getProgrammeCode() const
    {
        return this->programmeCode;
    }

    const int getMaxCourses() const
    {
        return this->maxCourses;
    }

    const string getAwardAndAccredition() const
    {
        return this->awardAndAccredition;
    }

    void addCourse(int courseCode)
    {
        // use course code to add an specific course object
    }

    void removeCourse(int courseCode)
    {
        // use course code to remove an specific course object
    }

    void displayStudentList()
    {
    }

    // menu to modify a specific programme
    void modifydetails()
    {
        // display all programmes in programme.txt, prompt user to enter programme code they wish to change,
        Programme programme[] = {};
        int length = sizeof(programme) / sizeof(programme[0]);

        for (size_t i = 0; i < length; i++)
        {
            /* code */
        }
        int choice, _maxCourses, _programmeCode;
        string _name, _awardAndAccredition;
        do
        {

            cout << "\n\tChoose an option below\n";
            cout << "1.Programme Name\n";
            cout << "2.Max Courses\n";
            cout << "3.Programme Code\n";
            cout << "4.Awards and accredition\n";
            cout << "5.Exit\n";
            cout << "-->";
            cin >> choice;
            cin.ignore(1, '\n');
            switch (choice)
            {
            case 1:
                cout << "Enter new programme name: " << endl;
                getline(cin, _name);
                setName(_name);
                break;

            case 2:
                cout << "Enter new maximum courses: ";
                cin >> _maxCourses;
                setMaxCourse(_maxCourses);
                break;
            case 3:
                cout << "Enter new Programme code: ";
                cin >> _programmeCode;
                setProgammeCode(_programmeCode);
                break;
            case 4:
                cout << "Enter new Awards and Accredition: ";
                getline(cin, _awardAndAccredition);
                setAwardAndAccredition(_awardAndAccredition);
                break;
            default:
                cout << "Invalid Input.";
                break;
            }
        } while (choice != 5);
        // search file with current programme and display them to user, then allow them to choose which programme they wish to change

        // since we are allowing the user to change the programme name, change the name in every other file
    }

    // displays programme details
    void displayProgrammeDetails()
    {
        cout << "\n\tProgramme Details\n";
        cout << "Name: " << getName() << "\n";
        cout << "Programme code: " << getProgrammeCode() << "\n";
        cout << "maxCourse: " << getMaxCourses() << "\n";
        cout << "Award and Accredation: " << getAwardAndAccredition() << "\n";
    }

    // saves a programme record
    void saveFile()
    {
        try
        {
            ofstream *outStream = new ofstream("programme.txt", ios::out | ios::app);
            if (outStream->fail())
            {
                throw runtime_error("File creation failed.");
            }
            *outStream << getName() << "\t" << getProgrammeCode() << "\t" << getMaxCourses() << "\t" << getAwardAndAccredition() << endl;
            outStream->close();
        }
        catch (runtime_error *re)
        {
            cerr << re->what() << '\n';
        }
    }

    // reads, and searches file
    void modifyFile()
    {
        try
        {
            ifstream inFile("programme.txt", ios::in);
            if (inFile.fail())
            {
                throw runtime_error("Failed to open File.");
            }
            string line;
            cout << "\n\tProgrammes\n";
            while (std::getline(inFile, line, ' '))
            {
                istringstream iss(line);

                string column1;
                int column2;

                iss >> column1 >> column2;
                cout << "Programme Name: " << column1 << "\t"
                     << "Code: " << column2 << endl;
            }

            // int searchProgrammeCode = 0;
            // cout << "Enter the code of the programme you want to modify: ";
            // cin >> searchProgrammeCode;
            // while (!inFile.eof())
            // {
            //     inFile >> name >> programmeCode >> maxCourses >> awardAndAccredition;
            //     if (this->programmeCode == searchProgrammeCode)
            //     {
            //     }
            // }
        }
        catch (runtime_error *re)
        {
            std::cerr << re->what() << '\n';
        }
    }
};