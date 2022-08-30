#define LESSON  1
#include <iostream>
#include "lesson_1.cpp"
#include "lesson_2.cpp"
#include "lesson_3.cpp"
using namespace std;


int main()
{
#if LESSON == 1
    lesson1_main();
#endif

#if LESSON == 2
    lesson2_main();
#endif

#if LESSON == 3
    lesson3_main();
#endif
}
