#include <stdio.h>

int main(){

char  flag[67]= {71, 68, 83, 67, 123, 67, 48, 110, 103, 82, 52, 116, 115, 95, 85, 95, 109, 52, 100, 51, 95, 85, 114, 95, 102, 49, 114, 53, 116, 95, 66, 52, 98, 121, 95, 115, 116, 51, 112, 115, 95, 49, 110, 116, 48, 95, 114, 51, 118, 51, 114, 115, 51, 95, 101, 110, 103, 49, 110, 101, 101, 114, 105, 110, 103, 125};


char key[67]="";
for (int i = 0; i < 66; i++)
{
    key[i]+=flag[i];
}

printf("%s\n",key);


printf("Did u find the flag?\n Try to submit it here to check : ");

char input[67];
fgets(input,67,stdin);


for (int i=0; i<66;i++)
	if (input[i]!=flag[i]) return 1;

printf("Congratulations you found it!\nGo submit it !\n");
return 0;

}


/*

chall

#include <stdio.h>

int main(){

char  flag[67]= {71, 68, 83, 67, 123, 67, 48, 110, 103, 82, 52, 116, 115, 95, 85, 95, 109, 52, 100, 51, 95, 85, 114, 95, 102, 49, 114, 53, 116, 95, 66, 52, 98, 121, 95, 115, 116, 51, 112, 115, 95, 49, 110, 116, 48, 95, 114, 51, 118, 51, 114, 115, 51, 95, 101, 110, 103, 49, 110, 101, 101, 114, 105, 110, 103, 125};



printf("Did u find the flag?\n Try to submit it here to check : ");

char input[67];
fgets(input,67,stdin);


for (int i=0; i<66;i++)
	if (input[i]!=flag[i]) return 1;

printf("Congratulations you found it!\nGo submit it !\n");
return 0;
}

*/