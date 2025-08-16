#include<string.h>
#include<stdio.h>
int main(){
	int i, j = 0, st, end;
	char str[100], prev = ' ';
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	for(i = 0; str[i]; i++){
		if(str[i] != ' '){
			st = i;
			break;
		}
	}for(i = strlen(str)-1; i >= 0; i--){
		if(str[i] != ' '){
			end = i;
			break;
		}
	}for(i = st; i < end+1; i++){
		if(str[i-1] == ' ' && str[i] == ' '){
			continue;
		}str[j++] = str[i];
	}str[j] = '\0';
	printf("string : %s\n", str);
	return 0;
}

