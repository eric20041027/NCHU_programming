#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

bool check_palindrome(char input[],int flag_f,int flag_end){
    bool check = true;
    flag_end--;
    int len = flag_end - flag_f + 1;
    for (int i = 0; i < len / 2; i++) {
        if (input[flag_f + i] != input[flag_end - i]) {
            check = false;
            break;
        }
    }
    //printf("start = %d end = %d check = %s\n",flag_f,flag_end,check ? "true" : "false");
    return check;
}

int main(){
    char input[80] = {0};
    int i = 0,space_counter = 0,len = 0,len_max = 0;
    int flag_f = 0,flag_end = 0;
    scanf("%[^\n]",input);

    while(input[i] != 0){
        //printf("%c",input[i]);

        if(input[i] == ' '){
            space_counter++;
        }
        i++;
    }
    printf("%d\n",space_counter+1);
    i = 0;

    while(input[i] != 0){
        if(input[i] != ' '){
            len++;
            if(len > len_max){
                len_max = len;
            }
        }
        else{
            len = 0;
        }
        i++;
    }
    printf("%d\n",len_max);
    i = 0;

    bool first_print = true;

    while(input[i] != 0){
        if(input[i] == ' '){
            //printf("palindrome check\n");
            if(check_palindrome(input,flag_f,flag_end) == true){
                if(first_print == true){
                    first_print = false;
                }
                else{
                    printf(" ");
                }
                for(int i=flag_f;i<flag_end;i++){
                    printf("%c",input[i]);
                }
            }
            flag_f = flag_end + 1;
        }

        i++;
        flag_end++;
    }
    
    if(check_palindrome(input,flag_f,flag_end) == true){
        if(first_print == true){

        }
        else{
            printf(" ");
        }
        

        for(int i=flag_f;i<flag_end;i++){
            printf("%c",input[i]);
        }
    }
}