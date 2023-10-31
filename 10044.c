#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    char input[n],output[n];
    scanf("%s",input);
    for (int i = 0; i < n; i++)
    {
        switch (input[i])
        {
        case 'A':
            output[i] = 'T';
            break;
        case 'T':
            output[i] = 'A';
            break;
        case 'C':
            output[i] = 'G';
            break;
        case 'G':
            output[i] = 'C';
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c",output[i]);
    }
}