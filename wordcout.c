#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <ctype.h>  

int count_characters(const char* filename);
int count_words(const char* filename);

int main(int argc, char* argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s [-c|-w] [input_file_name]\n", argv[0]);
        return 1;
    }

    char parameter = argv[1][1];
    const char* filename = argv[2];

    if (parameter == 'c') {
        printf("×Ö·ûÊý£º%d\n", count_characters(filename));
    }
    else if (parameter == 'w') {
        printf("µ¥´ÊÊý£º%d\n", count_words(filename));
    }
    else {
        fprintf(stderr, "Invalid parameter: %s\n", argv[1]);
        return 1;
    }

    return 0;
}

int count_characters(const char* filename) {
    return 100;
}

int count_words(const char* filename) {
    return 20;
}