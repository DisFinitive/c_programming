#include <stdio.h>

#define MENU_C       1
#define MENU_CPP     2
#define MENU_JAVA    3
#define MENU_PYTHON  4
#define MENU_EXIT    5
#define TEXT_C       "\n#include <stdio.h>\n\nint main (void)\n{\n    \
printf (\"Hello, World!\\n\");\n    getchar ();\n    return 0;\n}\n"
#define TEXT_CPP     "\n#include <iostream>\nusing namespace std;\n\nint main()\n{\n    \
cout << \"Hello, world!\" <<  '\\n';\n    return 0;\n}\n"
#define TEXT_JAVA    "\nclass HelloWorld {\n    \
public static void main(String[] args) {\n        System.out.println(\"Hello World!\");\n    }\n}\n"
#define TEXT_PYTHON  "\nprint('Hello, World!')\n"

int main(void) 
{
    int item;

    printf("<Hello, World!> in different programming languages\n"
        "1. in C language\n"
        "2. in C++ language\n"
        "3. in Java language\n"
        "4. in Python language\n"
        "5. Exit\n"
        "\nYour input: ");

    if(scanf("%d", &item) != 1) {
        printf("Error input\n");
        return 0;
    } 

    switch(item) {
    case MENU_C:
        printf(TEXT_C);
        break;
    case MENU_CPP:
        printf(TEXT_CPP);
        break;
    case MENU_JAVA:
        printf(TEXT_JAVA);
        break;
    case MENU_PYTHON:
        printf(TEXT_PYTHON);
        break;
    case MENU_EXIT:
        return 0;
    default:
        printf("Incorrect symbol");
    }
    return 0;
}