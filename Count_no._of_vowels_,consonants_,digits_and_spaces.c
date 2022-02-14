#include<stdio.h>
int main()
{
	char a[100],ch;
	scanf("%[^
]",a);
	int i,c=0,d=0,v=0,s=0;
//scanf("%s",&ch);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			v+=1;
		}
		else if(a[i]=='b'||a[i]=='c'||a[i]=='d'||a[i]=='f'||a[i]=='g'||a[i]=='h'||a[i]=='j'||a[i]=='k'||a[i]=='l'||a[i]=='m'||a[i]=='n'||a[i]=='p'||a[i]=='q'||a[i]=='r'||a[i]=='s'||a[i]=='t'||a[i]=='z'||a[i]=='v'||a[i]=='w'||a[i]=='x'||a[i]=='y'||a[i]=='D'||a[i]=='B'||a[i]=='C'||a[i]=='F'||a[i]=='G'||a[i]=='H'||a[i]=='J'||a[i]=='K'||a[i]=='L'||a[i]=='M'||a[i]=='N'||a[i]=='P'||a[i]=='Q'||a[i]=='R'||a[i]=='S'||a[i]=='T'||a[i]=='V'||a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='Z')
		{
			c+=1;
			
		}
		if(a[i]>=48&&a[i]<=57)
		{
			d+=1;
		}
		if(a[i]==' ')
		{
			s+=1;
		}
	}
	printf("Vowels: %d
",v);
	printf("Consonants: %d
",c);
	printf("Digits: %d
",d);
	printf("White spaces: %d
",s);

}
