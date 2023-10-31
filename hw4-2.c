#include <stdio.h>
int main()
{
int x,y,z,b=0,c,d=0;
scanf("%d",&b);
int a[6][2]={{123,456},{456,789},{789,888},{336,558},{775,666},{566,221}};
while(b>0){
	scanf("%d%d",&x,&y);
	for(int i=0;i<6;i++){
		if(a[0][0]==x&&a[0][1]==y&&c!=1){
		printf("%d",9000);c=1;d=1;
		}if(a[1][0]==x&&a[1][1]==y&&c!=1){
		printf("%d",5000);c=1;d=1;
		}if(a[2][0]==x&&a[2][1]==y&&c!=1){
		printf("%d",6000);c=1;d=1;
		}if(a[3][0]==x&&a[3][1]==y&&c!=1){
		printf("%d",10000);c=1;d=1;
		}if(a[4][0]==x&&a[4][1]==y&&c!=1){
		printf("%d",12000);c=1;d=1;
		}if(a[5][0]==x&&a[5][1]==y&&c!=1){
		printf("%d",7000);c=1;d=1;
		}
		
	}
	if(d!=1){
		printf("error");
	}
	c=0;
b=b-1;
}

}


