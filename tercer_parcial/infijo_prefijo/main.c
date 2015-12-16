#include <stdio.h>
#include <iostream>

int pila_vacia(int sne)
{
	if(sne==100)
	return 1;
	else
	return 0;
}
void push(char q[100],int *k,char num)
{
	*k=*k-1;
	q[*k]=num;

}
char pop(char c[100],int *kc)
{
	char j;
	j=c[*kc];
	*kc=*kc+1;
	return j;
}
int prioridad(char op)
{
	int prio;
	switch (op){
	case '^': case'%':
	prio=3;
	break;
	case '*': case'/':
	prio=2;
	break;
	case '+': case '-':
	prio=1;
	break;
	case '(':
	prio=0;
	break;
	}
	return prio;
}
main()
{
	char infija[100],posfija[100],pila[100],operador,s;
	int ne=100,i=0,p,pr2,x,j=0,band=0,band2=0;

	printf("Introduce la exprecion infija\t");
	scanf("%s",infija);

	while(infija[i]!= '\0' && band==0)
	{
		if(infija[i]=='('){
			operador=infija[i];
			push(pila,&ne,operador);
		}
		if (infija[i]=='1'||infija[i]=='2'||infija[i]=='3'||infija[i]=='4'||infija[i]=='5'||infija[i]=='6'||infija[i]=='7'||infija[i]=='8'||infija[i]=='9'||infija[i]=='0'){
			posfija[j]=infija[i];
			j++;
		}
		else{
			if (infija[i]=='('){
				operador=infija[i];
				push(pila,&ne,operador);
			}
else{
if (infija[i]=='+'||infija[i]=='-'||infija[i]=='*'||infija[i]=='/'||infija[i]=='%'||infija[i]=='^'){//****6

x=pila_vacia(ne);
if(x==1)
{//****7
operador=infija[i];
//printf("\n%c",operador);
push(pila,&ne,operador);
}//****8

else
{
operador=infija[i];
p=prioridad(operador);
//printf("\nprioridad 1 %d",p);
s=pop(pila,&ne);
pr2=prioridad(s);
//printf("\nprioridad 2 %d",pr2);
if(p>pr2)
{
push(pila,&ne,s);
push(pila,&ne,operador);
}
else
{
if (pr2!=0)
{
posfija[j]=s;
j++;
while(pila_vacia(ne)==0)
{

s=pop(pila,&ne);//hago pop del operador que esta en la pila
pr2=prioridad(s);//saco su prioridad
if(p<=pr2)//si la prioridad de mi operador tenia afuera es mayor o = al del q saq
{
posfija[j]=s;//mando a posfija el operador que saque
j++;
}
}
}

push(pila,&ne,operador);// mando al q tenia afuera a la pila
}//else
}
}
}
}
if (infija[i]==')')
{
if (pila_vacia(ne)==1)
{
printf("La exprecion esta mal");
}
while(infija[i]!='(' && pila_vacia(ne)==0)
{
s=pop(pila,&ne);
posfija[j]=s;
j++;

}
if (infija[i]=='(')
{
s=pop(pila,&ne);
}
else
{
printf("Es incorrecta, falta ( ");
band=0;
}
}
i++;
}
while(pila_vacia(ne)==0 && band2==0)
{
s=pop(pila,&ne);
if (s!='(')
{
posfija[j]=s;
j++;
}
else
{
printf("La exprecion esta mal");
band2=1;
}
}
if(pila_vacia(ne)==1 && band==0 && band2==0)
printf("\nPostfija= %s",posfija);
system("PAUSE");
return 0;

}
