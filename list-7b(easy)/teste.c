#include<stdio.h>
#include<stdlib.h>

int main(){
    int image_line, image_column, maxValue, column, line, rgb;

    FILE* img = fopen("arara.ppm", "r");
    fscanf(img, "%*s %d %d %d", &image_line, &image_column, &maxValue);

    int image[image_line][image_column][3];
    int image1[image_line][image_column][3];


    // add border to image
    for(column = 0; column < image_column; column++){
        for(line = 0; line < image_line; line++){
            for(rgb = 0; rgb < 3; rgb++){
                fscanf(img, "%d", &image[line][column][rgb]);
            }
        }
    }
    for(column = 0; column < image_column; column++){
        for(line = 0; line < image_line; line++){
            for(rgb = 0; rgb < 3; rgb++){
                image1[line][column][rgb] = image[line][column][rgb];
            }
        }
    }

    for(column = 0; column < image_column; column++){
        for(line = column; line > 0; line--){
            for(rgb = 0; rgb < 3; rgb++){
                image[line][column][rgb] = (int)(image1[line][column][0] + image1[line][column][1] +
                        image1[line][column][2]/3);
            }
        }
    }

    FILE* convolutional_image = fopen("teste.ppm", "w");


    fprintf(convolutional_image, "P3\n");
    fprintf(convolutional_image, "%d %d \n", image_line, image_column);
    fprintf(convolutional_image, "%d \n", maxValue);

    for(column = 0; column < image_column; column++){
        for(line = 0; line < image_line; line++){
            for(rgb = 0; rgb < 3; rgb++){
                fprintf(convolutional_image, "%d ", image[line][column][rgb]);
            }
        }
        fprintf(convolutional_image, "\n");
    }
    fclose(convolutional_image);

    return 0;
}