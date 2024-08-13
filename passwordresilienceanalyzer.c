#include <stdio.h>
#include <string.h>
#include <ctype.h>


int haslowercase(const char *password);
int hasuppercase(const char *password);
int hasdigit(const char *password);
int hasspecialchar(const char *password);
int evaluatestrength(int lowerCase, int upperCase, int specialChar, int digit, const char *password);


int main() {
    char password[100];
    while (1) {
    printf("\nPassword Resilience Analyzer\n");
    printf("1. Test a new password\n");
    printf("2. View strength of the last tested password\n");
    printf("3. Exit\n");

    int input;
    printf("Enter your choice: ");
        scanf("%d", &input);
    int score;

    switch (input) {
                case 1:
                    printf("Enter the passowrd:");
                    scanf("%s", password);
                    if(strlen(password) < 8){
                        printf("Please enter password with 8 or more characters\n");
                        break;
                    }
                    int lowerCase = haslowercase(password);
                    int upperCase = hasuppercase(password);
                    int digit = hasdigit(password);
                    int specialChar = hasspecialchar(password);
                    int score = evaluatestrength(lowerCase, upperCase, specialChar, digit, password);
                    if (score <= 2)
                        printf("Password Strength: Weak\n");
                    else if (score == 3 || score == 4)
                        printf("Password Strength: Moderate\n");
                    else if (score == 5)
                        printf("Password Strength: Strong\n");

                    break;
                case 2:
                    if (score <= 2)
                            printf("Password Strength: Weak\n");
                        else if (score >= 3 && score <= 4)
                            printf("Password Strength: Moderate\n");
                        else if (score == 5)
                            printf("Password Strength: Strong\n");

                        break;

                case 3:
                    printf("Exiting...");
                    return 0;
                default:
                        printf("Invalid Response, Try again");
    
                    

}
    }
return 0;

}


int haslowercase(const char *password){
    int lowerCase=0;
    int i;
    for(i=0;i<strlen(password);i++){
        if (islower(password[i]))
        lowerCase=1;
        } 
        return lowerCase;
     

}
int hasuppercase(const char *password){
    int upperCase=0;
    int i;
    for(i=0;i<strlen(password);i++){
        if (isupper(password[i]))
        upperCase=1;
        }
        
    return upperCase;
}

int hasdigit(const char *password){
    int digit = 0;
    int i;
    for(i=0;i<strlen(password);i++){
        if (isdigit(password[i]))
        digit=1;
        }
       return digit;

}
int hasspecialchar(const char *password){
    int specialChar = 0;
    int i;
    for(i=0;i<strlen(password);i++){
        if (!isalnum(password[i]))
        specialChar=1;
        }
        return specialChar;
   

}

int evaluatestrength(int lowerCase, int upperCase, int specialChar, int digit, const char *password) {
    int totalScore = lowerCase + upperCase + specialChar + digit;

    if (strlen(password) >= 12)
        totalScore += 1;

    return totalScore;

}