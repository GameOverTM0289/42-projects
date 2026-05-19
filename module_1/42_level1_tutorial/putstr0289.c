#include <unistd.h>


int len(char *str) {
    
    int count = 0;


        while(str[count]) {
            count++;
        }

        write(1, &count, 1);
    

    return 0;
}