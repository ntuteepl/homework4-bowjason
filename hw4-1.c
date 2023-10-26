#include <stdio.h>
int main()
{
int x,y,z,a=0;
scanf("%d",&z);
int b[z];
while(a<z){
scanf("%d",&b[z]);
for(int i=2;i<b[z];i++){
	y=b[z]%i;
	if(y==0){
		printf("NO"); printf(" ");
		i=b[z];
	}
	if(i==b[z]-1){
		printf("YES");printf(" ");
	}
}
if(b[z]==2){
		printf("YES");printf(" ");
		
	}
	a=a+1;
	}
}
