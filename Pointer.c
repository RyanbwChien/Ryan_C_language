#include <stdio.h>

struct Person {
    int age;
};

int main() {
    struct Person ryan = { .age = 18 };
    struct Person *p = &ryan;

    printf("%d\n", ryan.age);   // ✅ 印出 18
    printf("%d\n", p->age);     // ✅ 同上，更簡潔
}