#include <stdio.h>

int main() {
#ifdef _WIN32
    printf("Vous utilisez Windows.\n");
#elif __APPLE__
    printf("Vous utilisez macOS.\n");
#elif __linux__
    printf("Vous utilisez Linux.\n");
#else
    printf("Système d'exploitation non pris en charge.\n");
#endif

    return 0;
}
