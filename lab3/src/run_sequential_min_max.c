#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    // Вызываем sequential_min_max с необходимыми аргументами
    char *args[] = {"./sequential_min_max", "--seed", "42", "--array_size", "100", "--pnum", "4", NULL};
    
    // Запускаем sequential_min_max в отдельном процессе
    if (execvp("./sequential_min_max", args) == -1) {
        perror("execvp");
        return 1;
    }

    return 0;
}