#include <stdio.h>

int main(){
/* program to take a letter as an input and output the 10th letter after it*/
    char c;
    const int d = 10;
    printf("Enter a character\nto stop program type ~\n");
    scanf("%c", &c);
    if (c >= 'a' && c + d < 'z' || c >= 'A' && c + d < 'Z'){/*checks that the letter is within the alphabets*/
        printf("%c", c + d);
    }
    else if (c + d > 'z'){
        c = ((c + d) % 122)+ 96;/*using the ascii equivalent of the letters for it to stay in the range of the alphabet we want it to be*/
        printf("%c", c);
    }
    else if (c + d > 'Z' < 'a'){
        c = ((c + d) % 90)+64;
        printf("%c", c);
    }
    else if (c == '~'){/*how to end the loop*/
        printf("End Of Program");
        return 0;
    }
}
