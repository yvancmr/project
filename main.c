#include <stdio.h>
#include "book.h"

int main() {
    Book b1 = {"Le Petit Prince", "Antoine de Saint-Exupéry", 1943, 1};

    printf("Titre : %s\nAuteur : %s\nAnnée : %d\nID : %d\n",
           b1.title, b1.author, b1.year, b1.id);

    return 0;
}
