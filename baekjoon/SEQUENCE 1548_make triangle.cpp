#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 100
#include <string.h>
int* sortnum(int* seq, int len) { //len-1은 인덱스 0~len-1, len은 크기
    int i, j,buf;
    for (j = 0; j <= len; j++) {
        for (i = j + 1; i <= len; i++) {
            if (seq[j] > seq[i]) {
                buf = seq[j];
                seq[j] = seq[i];
                seq[i] = buf;
            }
        }
    }
    return seq;
}

int trinum(int* seq, int len) {
    int i, j, buf;
    for (i = 0; i <= len; i++) {
        buf = seq[i] + seq[i + 1];
        for (j = i + 2; j <= len; j++) {
            if (buf <= seq[j]) {
                seq[i] = -1;
            }

        }
    }
    int a = 0;
    for (i = 0; i <= len; i++) {
        if (seq[i] == -1)
            a++;
    }
    return len-a+1;
}
int main()
{
    int lens;
    printf("배열의 크기 입력:");
    scanf_s("%d", &lens);
    int sequence[MAX_LENGTH]; 
    char seq[MAX_LENGTH];
    int i,j=0,buf=0;
    while (getchar() != '\n');
    printf("입력하세요:");
    scanf_s("%[^\n]s", seq, MAX_LENGTH);
    for (i = 0; i<=lens; i++) {
        if ((seq[i] != ' ')&&(seq[i]!='\0')) {   
            buf = buf * 10 + (seq[i] - '0');
        }
        else{
            sequence[j++] = buf; 
            buf = 0;
        }
        
    }
    /*
    for (i = 0; i <= j-1; i++) { 
        printf("sequence %d : %d\n", i, sequence[i]);
    }
    */
    printf("\n");
    int *seqpoint=sequence;
    int ltri = 0;
    seqpoint = sortnum(sequence, j - 1);
    ltri=trinum(seqpoint, j - 1);
    printf("num:%d\n",ltri);
    return 0;

}
