#include"cube.h"
#include <stdio.h>
#include <ctype.h>
 int charinput;
FILE *readingf;
FILE *writingf;


int main(){
 char encdec;
 
    char fname[1024];
    char foutname[1024];
    printf("Write e for encode or d for decode\n");
    encdec =getchar();
    printf("Enter file name\n");
    scanf("%s", fname);
    printf("Enter output file name\n");
    scanf("%s", foutname);

readingf =fopen(fname,"r");
writingf =fopen(foutname,"w");
if (readingf == NULL){
    printf("Error! opening file\n");
   return 1;
}
if(encdec == 'e' || encdec == 'E'){
do {
charinput = fgetc(readingf);
encode();
}
while (charinput != EOF);
}
else if (encdec =='d'|| encdec== 'D'){
    do{
charinput =fgetc(readingf);
decode();
    }
    while(charinput != EOF);
}
fclose(readingf);
fclose(writingf);
return 0;

}


