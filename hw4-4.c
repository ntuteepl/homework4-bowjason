#include <stdio.h>
int main()
{
int c=0,p=0,x=0,i=0,j=0,y=0;int a[10][10];int b[10][10];

scanf("%d",&p);c=p;



while(i<p){

j=0;
while(j<p){
scanf("%d",&x);
a[i][j]=x;
b[i][j]=x;
j=j+1;
}

 
i=i+1;


}
while(c>0){
int temp=0,temp1=0,temp2=0,max=0,m=0;
while(m<p){

	for(int o=0;o<=p-2;o++){
	
	for (int n = 0; n<p-1; n++){
	
if (b[m][n] < b[m][n+ 1]) {
	 temp = b[m][n];
	b[m][n] = b[m][n + 1];
	b[m][n + 1] = temp;
	
}	 
}}
m=m+1;
}
int n=0;
for(int o=0;o<=p-2;o++){
	
	for (int m = 0; m<p-1; m++){
	
	if (b[m][n] < b[m+1][n]) {
	 temp = b[m][n];
	b[m][n] = b[m+1][n];
	b[m+1][n] = temp;

}}

}temp=b[0][0];

i=0;
while(i<p){

j=0;
while(j<p){
if(a[i][j]==temp){
	temp1=i;
	temp2=j;
	max=1;
}
j=j+1;
}

 
i=i+1;


}

if(max==1){
	for(int o=0;o<p;o++){
		a[temp1][o]=0;
		a[o][temp2]=0;
	}
	max=0;
}

c=c-1;
i=0;
while(i<p){

j=0;
while(j<p){

b[i][j]=a[i][j];

j=j+1;
}

 
i=i+1;


}
printf("boy %d pair with girl %d\n",temp1+1,temp2+1);
}
}



