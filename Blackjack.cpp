#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<windows.h>

main()
{
setlocale(LC_ALL, "Portuguese_Brazil");

blackjack:
int a,b,c,d,e,a1,b1,c1,d1,e1,opcao,mao,mao1;
system("cls");
printf("BlackJack\n\n");
printf("Pressione ENTER para começar\n");
getch();
printf("\nEntregando cartas...\n");

/* Inicio do jogo*/

player1:
srand(time(NULL));
a = rand()%11;
b = rand()%11;
if( a == 0 || b == 0 || a == b)
{
goto player1;
}
mao = a + b;

Sleep(2000);
pc1:
srand(time(NULL));
a1 = rand()%11;
b1 = rand()%11;
if( a1 == 0 || b1 == 0 || a1 == b1)
{
goto pc1;
}
mao1 = a1 + b1;


printf("\nVC = %d + %d = %d\nPC = X + X = X\n\nDeseja sortear mais um número?\ndigite (1-sim/2-não)\n",a,b,mao);
scanf("%d",&opcao);
if(opcao == 2)
{
goto final1;
}

/*Primeira rodada*/

if(opcao == 1)
{
system("cls");
printf("\nEntregando cartas...\n");

player2:
srand(time(NULL));
c = rand()%11;
if(c == 0 || c == a || c == b)
{
goto player2;
}
mao = mao + c;

Sleep(2000);
pc2:
srand(time(NULL));
c1 = rand()%11;
if (c1 == 0 || c1 == a1 || c1 == b1)
{
goto pc2;
}
mao1 = mao1 + c1;
}

if((mao == 21 & mao == mao1) || (mao > 21 & mao == mao1))
{
goto em1;
}

if(mao > 21 || mao1 > 21)
{
goto d1;
}

if(mao == 21 || mao1 == 21)
{
goto v1;
}

printf("\nVC = %d + %d + %d = %d\nPC = X + X + X = X\n\nDeseja Sortear mais um número?\nDigite (1-sim/2-não)\n",a,b,c,mao);
scanf ("%d", &opcao);
if(opcao == 2)
{
goto final2;
}

/*Segunda rodada*/

if(opcao == 1)
{
system("cls");
printf("\nEntregando cartas...\n");	
player3:
srand(time(NULL));
d = rand()%11;
if(d == 0 || d == a || d == b || d == c)
{
goto player3;
}
mao = mao + d;

Sleep(2000);
pc3:
srand(time(NULL));
d1 = rand()%11;
if(d1 == 0 || d1 == a1 || d1 == b1 || d1 == c1)
{
goto pc3;
}
mao1 = mao1 + d1;
}

if((mao == 21 & mao == mao1) || (mao > 21 & mao == mao1))
{
goto em2;
}

if(mao > 21 || mao1 > 21)
{
goto d2;
}

if (mao == 21 || mao1 == 21)
{
goto v2;
}


printf("\nVC = %d + %d + %d + %d = %d\nPC = X + X + X + X = X\n\nDeseja sortear mais um número?\nDigite (1-sim/2-não)\n",a,b,c,d,mao);
scanf("%d", &opcao);
if(opcao == 2)
{
goto final3;
}

/*Rodada Final*/

if (opcao == 1)
{
system("cls");
printf("\nEntregando cartas...\n");
player4:
srand(time(NULL));
e = rand()%11;
if(e == 0 || e == a || e == b || e == c || e == d)
{
goto player4;
}
mao = mao + e;

Sleep(2000);
pc4:
srand(time(NULL));
e1 = rand()%11;
if(e1 == 0 || e1 == a1 || e1 == b1 || e1 ==c1 || e1 == d1)
{
goto pc4;
}
mao1 = mao1 + e1;
}

if((mao == 21 & mao == mao1) || (mao > 21 & mao == mao1))
{
goto em3;
}

if(mao > 21 || mao1 > 21)
{
goto d3;
}
if(mao == 21 || mao1 == 21)
{
goto v3;
}

printf("\nVC = %d + %d + %d + %d + %d = %d\nPC = X + X + X + X + X = X\n\nPara ver o ganhador\nPressione ENTER\n",a,b,c,d,e,mao);
getch();
goto final4;

/*Decisões finais*/

final1:
if(mao > mao1)
{
printf("\nVC = %d + %d = %d\nPC = %d + %d = %d\nVC ganho!\nVC maior que PC\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,mao,a1,b1,mao1);
}
if(mao1 > mao)
{
printf("\nVC = %d + %d = %d\nPC = %d + %d = %d\nPC ganho!\nPC maior que VC\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,mao,a1,b1,mao1);
}
scanf("%d",&opcao);
if(opcao == 1)
{
goto blackjack;
}
if(opcao == 2)
{
return (0);
}

final2:
if(mao > mao1)
{
printf("\nVC = %d + %d + %d = %d\nPC = %d + %d + %d = %d\nVC ganho!\nVC maior que PC\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,mao,a1,b1,c1,mao1);
}
if(mao1 > mao)
{
printf("\nVC = %d + %d + %d = %d\nPC = %d + %d + %d = %d\nPC ganho!\nPC maior que VC\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,mao,a1,b1,c1,mao1);
}
scanf("%d",&opcao);
if(opcao == 1)
{
goto blackjack;
}
if(opcao == 2)
{
return (0);
}

final3:
if(mao > mao1)
{
printf("\nVC = %d + %d + %d + %d = %d\nPC = %d + %d + %d + %d = %d\nVC ganho!\nVC maior que PC\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,d,mao,a1,b1,c1,d1,mao1);
}
if(mao1 > mao)
{
printf("\nVC = %d + %d + %d + %d = %d\nPC = %d + %d + %d + %d = %d\nPC ganho!\nPC maior que VC\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,d,mao,a1,b1,c1,d1,mao1);
}
scanf("%d",&opcao);
if(opcao == 1)
{
goto blackjack;
}
if(opcao == 2)
{
return (0);
}

final4:
if(mao > mao1)
{
printf("\nVC = %d + %d + %d + %d + %d = %d\nPC = %d + %d + %d + %d + %d = %d\nVC ganho!\nVC maior que PC\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,d,e,mao,a1,b1,c1,d1,e1,mao1);
}
if(mao1 > mao)
{
printf("\nVC = %d + %d + %d + %d + %d = %d\nPC = %d + %d + %d + %d + %d = %d\nPC ganho!\nPC maior que VC\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,d,e,mao,a1,b1,c1,d1,e1,mao1);
}
scanf("%d",&opcao);
if(opcao == 1)
{
goto blackjack;
}
if(opcao == 2)
{
return (0);
}

/*derrotas*/

d1:
if (mao > 21)
{
printf("VC = %d + %d + %d = %d\nVC estourou\nPC venceu\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,mao);
}
if (mao1 > 21)
{
printf("PC = %d + %d + %d = %d\nPC estourou\nVC venceu\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a1,b1,c1,mao1);
}
scanf("%d",&opcao);
if(opcao == 1)
{
goto blackjack;
}
if(opcao == 2)
{ 
return (0);
}


d2:
if (mao > 21)
{
printf("VC = %d + %d + %d + %d = %d\nVC estourou\nPC venceu\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,d,mao);
}
if (mao1 > 21)
{
printf("PC = %d + %d + %d + %d = %d\nPC estourou\nVC venceu\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a1,b1,c1,d1,mao1);
}
scanf("%d",&opcao);
if(opcao == 1)
{
goto blackjack;
}
if(opcao == 2)
{
return (0);
}

d3:
if (mao > 21)
{
printf("VC = %d + %d + %d + %d + %d = %d\nVC estourou\nPC venceu\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,d,e,mao);
}
if (mao1 > 21)
{
printf("PC = %d + %d + %d + %d + %d = %d\nPC estourou\nVC venceu\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a1,b1,c1,d1,e1,mao1);
}
scanf("%d",&opcao);
if(opcao == 1)
{
goto blackjack;
}
if(opcao == 2)
{
return (0);
}

/*Vitorias*/

v1:
if (mao == 21)
{
printf("VC = %d + %d + %d = %d\nVC venceu!\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,mao);
}
if (mao1 == 21)
{
printf("PC = %d + %d + %d = %d\nPC venceu!\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a1,b1,c1,mao1);
}
scanf("%d",&opcao);
if(opcao == 1)
{
goto blackjack;
}
if(opcao == 2)
{ 
return (0);
}


v2:
if (mao == 21)
{
printf("VC = %d + %d + %d + %d = %d\nVC venceu!\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,d,mao);
}
if (mao1 == 21)
{
printf("PC = %d + %d + %d + %d = %d\nVC venceu!\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a1,b1,c1,d1,mao1);
}
scanf("%d",&opcao);
if(opcao == 1)
{
goto blackjack;
}
if(opcao == 2)
{
return (0);
}

v3:
	
if (mao == 21)
{
printf("VC = %d + %d + %d + %d + %d = %d\nVC venceu!\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,d,e,mao);
}
if (mao1 == 21)
{
printf("PC = %d + %d + %d + %d + %d = %d\nPC venceu!\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a1,b1,c1,d1,e1,mao1);
}
scanf("%d",&opcao);
if(opcao == 1)
{
goto blackjack;
}
if(opcao == 2)
{
return (0);
}

/*empates*/

em1:
if(mao == mao1)
{
printf("\nVC = %d + %d + %d = %d\nPC = %d + %d + %d = %d\nEMPATE!\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,mao,a1,b1,c1,mao1);
}
scanf("%d",&opcao);
if(opcao == 1)
{
goto blackjack;
}
if(opcao == 2)
{
return (0);
}

em2:

if(mao1 == mao)
{
printf("\nVC = %d + %d + %d + %d = %d\nPC = %d + %d + %d + %d = %d\nEMPATE!\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,d,mao,a1,b1,c1,d1,mao1);
}
scanf("%d",&opcao);
if(opcao == 1)
{
goto blackjack;
}
if(opcao == 2)
{
return (0);
}

em3:

if(mao1 == mao)
{
printf("\nVC = %d + %d + %d + %d + %d = %d\nPC = %d + %d + %d + %d + %d = %d\nEMPATE!\nDeseja jogar novamente?\ndigite (1-sim/2-não)\n",a,b,c,d,e,mao,a1,b1,c1,d1,e1,mao1);
}
scanf("%d",&opcao);
if(opcao == 1)
{
goto blackjack;
}
if(opcao == 2)
{
return (0);
}


}
