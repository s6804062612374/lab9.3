#include <stdio.h>
#include <string.h>
int checkLogin(char *login, char *passwd, char (*logindb)[64], char (*passdb)[64]); 

int main() {
	char login[5][64]={"user1","user2","user3","user4","user5"};
	char password[5][64]={"pass1","pass2","pass3","pass4","pass5"};
	char user[64];
	char pass[64];
	printf ("Enter username: ");
	scanf ("%s",user);
	printf ("Enter password: ");
	scanf ("%s",pass);


	if (checkLogin(user,pass,login,password)==1){
	    printf ("Welcome");
	}else printf ("Incorrect login or password");
}

int checkLogin(char *login,char *passwd,char (*logindb)[64],char (*passdb)[64]){
    int i;
    for (i=0;i<5;i++){
        if (strcmp(login,logindb[i])==0 && strcmp(passwd,passdb[i])==0){
            return 1;
        }
    }
    return 0;
}
