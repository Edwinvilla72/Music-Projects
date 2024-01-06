//Edwin Gabriel
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{
    time_t t;   //rand stuff
    
    int lowestTempo = 0;    //lowest desired result
    int highestTempo = 0;   //highest desired tempo
    ///both above WILL change during the runtime of this program

    //initializes time
    srand((unsigned) time(&t));
    
    /*======================================================================================*/
    ///user input section
    printf("===================Starting Point Generator===================\n");
    
    //low tempo input
    printf("Please enter the lowest possible tempo: ");
    scanf("%d", &lowestTempo);
    
    //high tempo input
    printf("Please enter the Highest possible tempo: ");
    scanf("%d", &highestTempo);
    
    //calculates tempo that will be generated for the user
    int difference = highestTempo - lowestTempo;
    int newTempo = (rand() % difference) + (lowestTempo + 1);
    
    //prints random tempo for user to see
    printf("\nYour new song's TEMPO should be: %d\n", newTempo);
    /*======================================================================================*/

    //calculates random Key between A and G (using their ascii values)
    int keyVal = (rand() % 12) + 1;
    
    
    ///prints key by letter
    /*======================================================================================*/
    if(keyVal > 0 && keyVal < 8)
    {
        printf("Your new song's KEY should be: %c", keyVal + 64);
    }
    else
    {
        ///sharp: #
        ///flat: ♭

        if(keyVal == 8)
            printf("Your new song's KEY should be: C#");
        
        if(keyVal == 9)
            printf("Your new song's KEY should be: E♭");
        
        if(keyVal == 10)
            printf("Your new song's KEY should be: F#");
        
        if(keyVal == 11)
            printf("Your new song's KEY should be: A♭");
        
        if(keyVal == 12)
            printf("Your new song's KEY should be: B♭");
    }
    /*======================================================================================*/

    ///maj/min
    /*======================================================================================*/
    int majorMinor = (rand() % 2) + 1;

    if(majorMinor == 1)
        printf(" Major\n");
    else
        printf(" Minor\n");
    /*======================================================================================*/
    ///work on genre generator whenever you have time lol
    ///maybe even a chord progression generator when you get good at that?
}
