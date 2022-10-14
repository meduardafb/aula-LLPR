#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	
	int idade, dobro, metade;
	
	printf("Sua idade é um número par?\n");
	
	printf("Digite sua Idade: \n");
	scanf("%d",&idade);
	
	dobro=idade*2;
	metade=idade/2;
	
	if(idade%2==0)
	{
		printf("Sua Idade é Par!\n");
		printf("O dobro da sua idade é:%d\n", dobro);
		printf("A metade da sua idade é:%d\n", metade);
	}
	
	if(idade%2!=0){
		printf("Sua Idade não é par!");
	}
	
	return 0;
}
