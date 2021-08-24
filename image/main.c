#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *info_image, *image_raw;
    info_image = fopen("picture.jpg","r");
    int **matriz_image, test;
    int i, j, rows, colums;
    fscanf(info_image,"%i %i",&colums, &rows);
    matriz_image = (int **) malloc (rows*sizeof(int*));
    for(i=0;i<rows;i++)
    {
         matriz_image[i] = (int*) malloc (colums*sizeof(int));
    }
    image_raw = fopen("picture.jpg","r");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colums;j++)
        {
            fscanf(image_raw,"%i",&test);
            *(*(matriz_image+i)+j)=test;
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colums;j++)
        {
            printf("%i ",*(*(matriz_image+i)+j));
        }
        printf("\n");
    getch();
}
}
