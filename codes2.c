#include <stdio.h>

int main(){
/* program to take a letter as an input and output the 10th letter after it*/
    char c;
    int loop = 1;
    const int d = 10;
    while(loop==1){
    printf("Enter a character\nto stop program type ~\n");
    scanf(" %c", &c);
    if (c >= 'a' && c + d < 'z' || c >= 'A' && c + d < 'Z'){
        printf("%c\n", c + d);  
    }
    else if (c == '~'){
        printf("End Of Program");
     break;
    }
    else if (c < 'A'|| 'a'>c>'Z'||c>'z'){// making sure the input is within the alphabets
        printf("invalid character\n");
    }
    else if (c + d > 'z'){
        c = ((c + d) % 122)+ 96;/*using the ascii equivalent of the letters for it to stay in the range of the alphabet we want it to be*/
        printf("%c\n", c);
    }
    else if (c + d > 'Z' < 'a'){
        c = ((c + d) % 90)+64;
        printf("%c\n", c);
    }
    }
}
