#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    char *delivery = "";
    int thick = 0;
    int count = 0;
    char ch;

    while ((ch = getopt(argc, argv, "d:t")) != EOF)
        switch (ch) {
            case 'd':
                delivery = optarg;
                break;
            case 't':
                thick = 1;
                break;
            default:
                fprintf(stderr, "Неизвестный параметр: %s\n", optarg);
                return EXIT_SUCCESS;
        }
    argc -= optind;
    argv += optind;

    if (thick)
        puts("Пышное тесто.");

    if (delivery[0])
        printf("Доставка для %s.\n", delivery);

    puts("Ингредиенты:");

    for (count = 0; count < argc; count++)
        puts(argv[count]);
    return EXIT_SUCCESS;
}
