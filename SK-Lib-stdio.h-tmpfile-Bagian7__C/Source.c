#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    FILE* stream;
    char tempstring[] = "String to be written";
    int  i;
    errno_t err;

    // Create temporary files.
    for (i = 1; i <= 3; i++) {
        err = tmpfile_s(&stream);
        if (err) {
            perror("Could not open new temporary file\n");
        } else {
            printf("Temporary file %d was created\n", i);
        }  
    }

    // Remove temporary files.
    printf("%d temporary files deleted\n", _rmtmp());

    _getch();
    return 0;
}