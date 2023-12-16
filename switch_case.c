#include <stdio.h>

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
    case 1:
        printf("\n#include <stdio.h>\n\nint main (void)\n{\n    printf (\"Hello, World!\\n\");\n    getchar ();\n    return 0;\n}\n");
        break;
    case 2:
        printf("\n#include <iostream>\nusing namespace std;\n\nint main()\n{\n    cout << \"Hello, world!\" <<  '\\n';\n    return 0;\n}\n");
        break;
    case 3:
        printf("\nclass HelloWorld {\n    public static void main(String[] args) {\n        System.out.println(\"Hello World!\");\n    }\n}\n");
        break;
    case 4:
        printf("\nprint('Hello, World!')\n");
        break;
    case 5:
        return 0;
    default:
        printf("Incorrect symbol");
    }
    return 0;
}