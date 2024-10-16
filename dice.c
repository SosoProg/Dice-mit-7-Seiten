/* Testwell CTC++: Example code for tutorial */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void say_hello(){
    printf("\n");
    printf("===============================\n");
    printf("| Coverage by Dicing - Hello! |\n");
    printf("===============================\n");
}

int roll_dice(){
    return rand() % 6 + 1;
}

void print_dice_face(int dice){
    switch (dice){
        case 1:
            printf("   _______  \n");
            printf("  |       | \n");
            printf("  |   o   | \n");
            printf("  |       | \n");
            printf("  |_______| \n");
            break;
        case 2:
            printf("   _______  \n");
            printf("  | o     | \n");
            printf("  |       | \n");
            printf("  |     o | \n");
            printf("  |_______| \n");
            break;
        case 3:
            printf("   _______  \n");
            printf("  | o     | \n");
            printf("  |   o   | \n");
            printf("  |     o | \n");
            printf("  |_______| \n");
            break;
        case 4:
            printf("   _______  \n");
            printf("  | o   o | \n");
            printf("  |       | \n");
            printf("  | o   o | \n");
            printf("  |_______| \n");
            break;
        case 5:
            printf("   _______  \n");
            printf("  | o   o | \n");
            printf("  |   o   | \n");
            printf("  | o   o | \n");
            printf("  |_______| \n");
            break;
        case 6:
            printf("   _______  \n");
            printf("  | o   o | \n");
            printf("  | o   o | \n");
            printf("  | o   o | \n");
            printf("  |_______| \n");
            break;
        default:
            printf("Unexpected result\n");
            break;
    }
}

void print_evaluation(int dice1, int dice2){
    if ((dice1 == 1 && dice2 == 2) || (dice1 == 2 && dice2 == 1)){
        printf("\n  Mia / Maexle !\n");
    }
    else if (dice1 == dice2){
        printf("\n  Double / Pasch !\n");
    }
}

int main(){
    srand(time(NULL));
    say_hello();

    int dice1=roll_dice();
    int dice2=roll_dice();

    print_dice_face(dice1);
    print_dice_face(dice2);
    print_evaluation(dice1, dice2);

    return 0;
}