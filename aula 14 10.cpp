#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	
	int idade, dobro, metade;
	
	printf("Sua idade � um n�mero par?\n");
	
	printf("Digite sua Idade: \n");
	scanf("%d",&idade);
	
	dobro=idade*2;
	metade=idade/2;
	
	if(idade%2==0)
	{
		printf("Sua Idade � Par!\n");
		printf("O dobro da sua idade �:%d\n", dobro);
		printf("A metade da sua idade �:%d\n", metade);
	}
	
	if(idade%2!=0){
		printf("Sua Idade n�o � par!");
	}
	
	return 0;
}
