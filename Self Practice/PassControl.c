#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


bool passwordCheck(char *pass); // to controll paswords doesnt contain capital letters and non alpha numberic letter
void pass(char *passw); // to enter password that its length is less then 20



int main(void){
    char password[30];
    pass(password);
    passwordCheck(password);
    return 0;
}

bool passwordCheck(char *pass){
    
    for(int i=0; pass[i]!='\0';i++){
        
        if(isalnum(pass[i]) == 0){
            printf("Your password contains non-alpha numeric number or(and)capital letter(s)\nPLEASE DO NOT WRITE USE THEM\n");
            return 0;
        }
        if(!islower(pass[i]) && !isdigit(pass[i])){
            printf("Your password contains non-alpha numeric number or(and)capital letter(s)\nPLEASE DO NOT WRITE USE THEM\n");
            return 0;
        }
         
    }
    printf("Your password is correct\n");
    return 1;
}

void pass(char *passw){
    printf("To create password\n");
    printf("Enter a password and ensure it contain all small letters and only numbers and only max 20 letter: ");
    char passCopy[21];
    do{

        gets(passCopy);
        if(strlen(passCopy) <20) // büyük harf veya &% işaretleri kullanırsa diye kontrol edici bir şey daha koy buraya
            break;
        printf("Please enter a password that is all small letters and max 20 length\n");
    }while (1);
    strcpy(passw, passCopy);
}
