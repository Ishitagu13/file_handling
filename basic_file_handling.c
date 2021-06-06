
# include <stdio.h>
# include <string.h>

int main( )
{

    FILE *filePointer ;


    char appendData[50] = "This is the appended data";

    filePointer = fopen("helloWorld.c", "w") ;


    if ( filePointer == NULL )
    {
        printf( "helloWorld.c file failed to open." ) ;
    }
    else
    {

        printf("The file is now opened.\n") ;


        if ( strlen ( appendData  ) > 0 )
        {

            fputs(appendData, filePointer) ;
            fputs("\n", filePointer) ;
        }


        fclose(filePointer) ;

        printf("Data successfully written in file helloWorld.c\n");
        printf("The file is now closed.") ;
    }
    return 0;
}
