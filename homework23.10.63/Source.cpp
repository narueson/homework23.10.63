
#include <stdio.h>
int main() {
    char line[100];

    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin); 


    for (int i = 0, m; line[i] != '\0'; ++i) {

        
        while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {
            for (m = i; line[m] != '\0'; ++m) {

                
                line[m] = line[m + 1];
            }
            line[m] = '\0';
        }
    }
    printf("Output String: ");
    puts(line);
    return 0;
}