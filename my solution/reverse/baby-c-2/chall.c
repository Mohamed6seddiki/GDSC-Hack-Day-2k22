#include <stdio.h>
#include <stdlib.h>

int main(){

char  even[17]= {71 ,83 ,123 ,84 ,95 ,117 ,53 ,95 ,118 ,110 ,38 ,48 ,68 ,98 ,116 ,115};
char odd[17]={68 ,67 ,49 ,115 ,74 ,53 ,116 ,51 ,51 ,95 ,95 ,68 ,95 ,121 ,101 ,125};

char flag[34]="";

for (int i = 0; i < 34; i++)
{
	flag[i]+=odd[i]+even[i];
}

printf("%s\n",flag);


printf("Did u find the flag?\n Try to submit it here to check : ");

char input[33];
fgets(input,33,stdin);


for (int i=0; i<32;i++)
	if(i%2==0) {
		if(input[i]!=even[i/2]){
			printf("Wrong flag, hard luck!");
			exit(0);
			}
	}
	else{
		if(input[i]!=odd[i/2]){
                        printf("Wrong flag, hard luck!");
                        exit(0);
		}
	}
printf("Congratulations you found it!\nGo submit it !\n");

}






/*
chall


#include <stdio.h>
#include <stdlib.h>

int main(){

char  even[17]= {71 ,83 ,123 ,84 ,95 ,117 ,53 ,95 ,118 ,110 ,38 ,48 ,68 ,98 ,116 ,115};
char odd[17]={68 ,67 ,49 ,115 ,74 ,53 ,116 ,51 ,51 ,95 ,95 ,68 ,95 ,121 ,101 ,125};

printf("Did u find the flag?\n Try to submit it here to check : ");

char input[33];
fgets(input,33,stdin);


for (int i=0; i<32;i++)
	if(i%2==0) {
		if(input[i]!=even[i/2]){
			printf("Wrong flag, hard luck!");
			exit(0);
			}
	}
	else{
		if(input[i]!=odd[i/2]){
                        printf("Wrong flag, hard luck!");
                        exit(0);
		}
	}
printf("Congratulations you found it!\nGo submit it !\n");

}



*/