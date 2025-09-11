/* Modifies the volume of an audio file

 command line argument to run this code →  ./wav-volume <input file name> <output file name> <factor>
 If (factor > 1.0) → samples are amplified → the audio becomes louder.
 If (0 < factor < 1.0) → samples are reduced → the audio becomes quieter.
 If (factor = 1.0) → samples are unchanged → the output is identical to the input. */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file
    uint8_t b1[HEADER_SIZE];
    fread(&b1, sizeof(uint8_t), HEADER_SIZE, input);
    fwrite(&b1, sizeof(uint8_t), HEADER_SIZE, output);

    // TODO: Read samples from input file and write updated data to output file
    int16_t b2;
    while (fread(&b2, sizeof(int16_t), 1, input) != 0)
    {
        b2 = b2 * factor; // modifies the volume
        fwrite(&b2, sizeof(int16_t), 1, output);
    }

    // Close files
    fclose(input);
    fclose(output);
}




