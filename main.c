#include <stdio.h>
#include <stdbool.h>

int main() {
    int rok;
    bool przestepny;

    printf("Podaj rok: ");
    scanf("%i", &rok);

    przestepny = !(rok % 4) && rok % 100 || !(rok % 400);

    przestepny ?
     printf("Rok %i jest przestępny", rok):
     printf("Rok %i nie jest przestępny", rok);

    return 0;
}