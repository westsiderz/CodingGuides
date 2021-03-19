#ifndef HIGH_QUALITY_ROUTINES
#define HIGH_QUALITY_ROUTINES

#include <vector>
#include <string>

#define FUNC(a, b) a*b
#define FUNC1(a, b) (a)*(b)
#define FUNC2(a, b) ((a)*(b))

#define MACRO(a, b) \
    b += a; \
    ++a;
#define MACRO1(a, b){ \
    b += a; \
    ++a; \
}

namespace xq
{
    struct Person
    {
        std::string name;
        std::string surname;
        std::string address;
        int age;
    };


    void useComplexCode();
    void getPeople(std::vector<Person>&, int);
    void useSimpleCode();

    void useBooleanTest();
    bool checkConditions();
    void useBooleanFunc();

    int calculateYearsToRetirement(int);

    void useMacro();
}
#endif // !HIGH_QUALITY_ROUTINES