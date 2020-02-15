#include<stdio.h>
#define MAX 100
int top=-1;
int st[MAX];
int val;
void push(int val){
	if(top==MAX-1){
		printf("overflow\n");
	}
	else{
		top++;
		st[top]=val;
	}
}
void pop(){
	if(top==-1)
		printf("\nunderflow");
	else{
		val=st[top];
		top--;
	}
}
int peek(){
	if(top==-1){
		printf("\nunderflow");
		return -1;}
	else{
		val=st[top];
		top--;
		return val;
	}
}
void display(){
	int i;
	if(top==-1)
		printf("underflow");
	for(i=top;i>=0;i--){
		printf("%d ",st[i]);
	}
}
int main(){
	int type,x,q,max,i;
	scanf("%d",&q);
	while(q>0){
	scanf("%d",&type);
	if(type==1){
		scanf("%d",&x);
		push(x);
	}
	else if(type==2){
		pop();
	}
	else if(type=3){
		max=st[top];
		for(i=top-1;i>=0;i--){
			if(st[i]>max){
				max=st[i];
			}
	}
	printf("%d ",max);
	}
	q--;
}
}
