#include<stdio.h>
#include<conio.h>
#include<stdlib.h>




int main()
{
    FILE *info_image, *image_raw;
    info_image = fopen("picture.inf","r");
    int **matriz_image, test;

    int i, j, rows, colums;


    //i read dimension image
    fscanf(info_image,"%i %i",&colums, &rows);


    //i create dinamic rows
    matriz_image = (int **) malloc (rows*sizeof(int*));

    //i create dinamic colums
    for(i=0;i<rows;i++)
    {

         matriz_image[i] = (int*) malloc (colums*sizeof(int)); 



    }

    //i open image raw
    image_raw = fopen("picture.raw","r");

    //i copy values to matriz_image
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colums;j++)
        {

            //fscanf(image_raw,"%i",*(*(matriz_image+i)+j)); 
            fscanf(image_raw,"%i",&test);
            *(*(matriz_image+i)+j)=test;
            //printf("%i \n", test); 

        }

    }


    //i print matriz
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colums;j++)
        {

            printf("%i ",*(*(matriz_image+i)+j)); 
            //printf("%i ",matriz_image[i][j]); 


        }
        printf("\n");

    }






    getch();
}