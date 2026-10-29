
#include <stdio.h>
#include <string.h>

struct Symbol {
    char name[30];
    char type[20];
    int value;
};

int main() {
    struct Symbol s[50];
    int n = 0, choice, i;
    char key[30];

    while (1) {
        printf("\n1.Insert  2.Search  3.Display  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter name, type and value: ");
            scanf("%29s %19s %d",
                  s[n].name, s[n].type, &s[n].value);
            n++;
            printf("Symbol inserted.\n");
        }
        else if (choice == 2) {
            printf("Enter name to search: ");
            scanf("%29s", key);

            for (i = 0; i < n; i++) {
                if (strcmp(s[i].name, key) == 0) {
                    printf("Found: %s %s %d\n",
                           s[i].name, s[i].type, s[i].value);
                    break;
                }
            }

            if (i == n)
                printf("Symbol not found.\n");
        }
        else if (choice == 3) {
            printf("\nName\tType\tValue\n");
            for (i = 0; i < n; i++)
                printf("%s\t%s\t%d\n",
                       s[i].name, s[i].type, s[i].value);
        }
        else if (choice == 4) {
            break;
        }
        else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}

output :
1.Insert  2.Search  3.Display  4.Exit
Enter choice: 1
Enter name, type and value: age int 10
Symbol inserted.

1.Insert  2.Search  3.Display  4.Exit
Enter choice: 3

Name    Type    Value
age     int     10
