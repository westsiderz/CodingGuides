#include <HighQualityRoutines.hpp>
#include <iostream>

namespace xq
{
    void useComplexCode()
    {
        constexpr int c_participantsCout = 5;
        std::vector<Person> l_people{};
        for (int i = 0; i < c_participantsCout; ++i)
        {
            Person l_person;
            std::cout << "Enter person's name: ";
            std::cin >> l_person.name;
            std::cout << "Enter person's surname: ";
            std::cin >> l_person.surname;
            std::cout << "Enter person's address: ";
            std::cin >> l_person.address;
            std::cout << "Enter person's age: ";
            std::cin >> l_person.age;

            l_people.push_back(l_person);
        }

        // ...
        // Do more stuffz
        // ...
    }
    void getPeople(std::vector<Person>& a_people, int a_peopleCount)
    {
        for (int i = 0; i < a_peopleCount; ++i)
        {
            Person l_person;
            std::cout << "Enter person's name: ";
            std::cin >> l_person.name;
            std::cout << "Enter person's surname: ";
            std::cin >> l_person.surname;
            std::cout << "Enter person's address: ";
            std::cin >> l_person.address;
            std::cout << "Enter person's age: ";
            std::cin >> l_person.age;

            a_people.push_back(l_person);
        }
    }
    void useSimpleCode()
    {
        constexpr int c_participantsCout = 5;
        std::vector<Person> l_people{};
        getPeople(l_people, c_participantsCout);

        // ...
        // Do more stuffz
        // ...
    }

    void useBooleanTest()
    {
        int a;
        int b;
        std::string text;

        // ...
        // Some code piece
        // ...

        if (((a >= 0 && a <= 100) && (b <= 120))
            || ((a + b >= 190) && (a * b < 5000))
            || ((a >= 50) && (text == "TXT"))
            /*||  Many more checks */)
        {
            // Do something
        }
    }
    bool checkConditions()
    {
        int a;
        int b;
        std::string text;
        bool result;
        // Some simplification algorithms returning result

        return result;
    }
    void useBooleanFunc()
    {
        // ...
        // Some code piece
        // ...

        if (checkConditions())
        {
            // Do something
        }
    }

    int calculateYearsToRetirement(int employeeAge)
    {
        constexpr int cRetirementAge = 55;
        employeeAge = cRetirementAge - employeeAge;
        return employeeAge;
    }

    void useMacro()
    {
        int a{ 1 };
        int b{ 2 };

        // ...

        int result1 = FUNC(a + 1, b + 2);     // a + 1*b + 2
        int result2 = FUNC1(a + 1, b + 2);    // (a + 1)*(b + 2)
        int result3 = FUNC2(a + 1, b + 2);    // ((a + 1)*(b + 2))

        // ...


        while (a < 10)
            MACRO(a, b);

        std::cout << b << "\n";
    }
}