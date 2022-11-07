#include <stdio.h>
#include "cube.h"
#include <ctype.h>

int encode() {
    const int d = 10;
    if (charinput == ' ' || charinput == '\n')
        { /* space or newline */
        fprintf(writingf, "%c", charinput);
        return 0;
        }
    else if (!isalpha(charinput))
        { /* not an alphabet */
        fprintf(stdout, "input is not an alphabet\n");
        return 0;
        }
    else if (isupper(charinput))
        { /* is upper */
        fprintf(writingf, "%c", ((charinput - 65) + d) % 26 + 65);
        return 0;
        }
    else
        { /* must be lowercase character */
        fprintf(writingf, "%c", ((charinput - 97) + d) % 26 + 97);
        return 0;
        }
    }

int decode(){
    const int d = 10;
    const int ch= 16;
    if (charinput == ' ' || charinput == '\n')
        { /* space or newline */
        fprintf(writingf, "%c", charinput);
        return 0;
        }
    else if (!isalpha(charinput))
        { /* not an alphabet */
        fprintf(stdout, "input is not an alphabet\n");
        return 0;
        }
    else if (isupper(charinput))
        { /* is upper */
        fprintf(writingf, "%c", ((charinput - 65) + ch) % 26 + 65);
        return 0;
        }
    else
        { /* must be lowercase character */
        fprintf(writingf, "%c", ((charinput - 97) + ch) % 26 + 97);
        return 0;
        }
    }


    
    