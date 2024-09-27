#include<stdio.h>

int main(){
	//programme en C qui va permettre d'afficher vos informations personnelles : nom, prénom, âge, sexe, et adresse email. 
	int age ;
	char nom[30] ,prenom [30],sexe[9],email[50];

	printf ("veuillez sasir votre nom  :");
	scanf("%s",nom);
		printf ("veuillez sasir votre prenom");
	scanf("%s",prenom);
	printf ("veuillez sasir votre age");
	scanf("%d",&age);
	printf ("veuillez sasir votre sexe");
	scanf("%s",sexe);
		printf ("veuillez sasir votre adresse email");
	scanf("%s",email);
	  printf("\n Informations Personnelles \n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d\n", age);
    printf("Sexe : %s\n", sexe);
    printf("Email : %s\n", email);
	 return 0;
}
