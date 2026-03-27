#include <stdio.h>
#include <stdlib.h>

//Hi, I hope you enjoy the beautiful code, God bless you
//Jesus is King

int main(int argc, char *argv[])
{
        if(argc < 2)
        {
                printf("no parameters bro\n");
                return 0;
        }

        if(*(*(argv + 1)) == 'h')
        {
                printf("hex translation: \n");
                //Basically I need to reserve not only memory to the major
                //pointers, but also for the pointers itselfs
                //still doesn't understand why lol
                const char** arg = malloc(argc * sizeof(char*));
                for(int i = 2; i < argc; i++){
                        unsigned int letter;
                        arg[i] = argv[i];
                        letter = strtol(arg[i], NULL, 16);
                        printf("%c", letter);
                }
                free(arg);
        }
        else {

                printf("ascii translation: \n");
                for(int i = 1; i < argc; i++)
                {
                        unsigned int r = atoi(argv[i]);
                        printf("%c", r); 
                }
        }
        printf("\n");
        return 0;
}
