#include<bits/stdc++.h>
using namespace std;

int main(){

	char s[1000];

	gets(s);
	printf("%s\n",s);

	int n=0;
	int i = 0;
	while(s[i] !='\0'){
		if(s[i]==' ')
		n = n+1;
	
		i++;
	}
		
	
	printf("%d",n);
}

