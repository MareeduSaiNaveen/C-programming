#include<stdio.h>
#include<string.h>
int main(){
	int i, j, k, len, len1;
	int str[][2] = {1, 2, 3, 4};
	int str1[][2] = {1, 2, 3, 4};
	int re[2][2];
	len = sizeof(str)/sizeof(str[0]);
	len1 = sizeof(str1)/sizeof(str1[0]);
	for(i = 0; i < len; i++){
		for(j = 0; j < len1; j++){
			re[i][j] = 0;
			for(k = 0; k < len; k++){
				re[i][j] = re[i][j] + (str[i][k]*str1[k][j]);
			}
		}
	}for(i = 0; i < len; i++){
		for(j = 0; j < len; j++){
			printf("%d ",re[i][j]);
		}printf("\n");
	}
}

