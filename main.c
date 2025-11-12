#include <stdio.h>
#include <math.h>
#include <termios.h>
#include <unistd.h>

//This code is for the controller
//Joystick Name
//Websockets server 
int main(){
    while (1) {
        /*future code*/
        char ch;
        int distance;
  
        printf("Enter direction(W,A,S,D) left(A) and right(D) will be degrees but not yet");
        ch = getchar();
        printf("Enter a distance(In cm): ");
        scanf("%d",&distance);
        printf("This is the distance in cm with int: %d\n\n",distance );
        
    }
    
  

    
        // printf("Enter a key: ");
        // while ((ch = getchar()) != 'q') {
        //     printf("You are pressing the key %c\n", ch);
        // }

    return 0;
}