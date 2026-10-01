#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    puts("      /\\");
    puts("     /  \\");
    puts("    /    \\");
    puts("   /      \\");
    puts("  /________\\");
    puts("  |        |");
    puts("  |  ~~~~  |");
    puts("  |________|");
    puts(" /          \\");
    puts("/____________\\");
    puts("~~~~~~~~~~~~~~~~");

    puts("");
    puts("Нажмите Enter, чтобы выйти");
    getchar();

    return 0;
}