#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 	int dizi[3][4]={{24,47,34,86},{23,59,86,47},{62,67,79,46}};
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(dizi[i][j]%2==0){
				printf(" %d",dizi[i][j]);
			}
			else
			printf(" XX");
		}
		printf(" \n");
	}
	return 0;
}