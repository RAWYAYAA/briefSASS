#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
  typedef struct utilisateurs{
        char Nom[20];
        char Prenom[20];
        char CIN[20];
        float Montant;
        int    num;
    }utilisateur;
    
  utilisateur T[2000];  
int cherche();
int Operation();
int creatcompte();
int creatcomptes();
void affichage();
void quitter();
void quittter();
void affichage();
void appquit();
int fidelisation();
int creatcompte(){
  			system("cls");
    		printf("Le nom : ");
            scanf("%s", &T->Nom);
            printf("Le Prenom : ");
            scanf("%s", &T->Prenom);
        	printf("Le CIN : ");
            scanf("%s", &T->CIN);
           	printf("Le Montant : ");
            scanf("%f", &T->Montant);
            printf("Felicitations votre compte a ete bien cree \n");
            srand(time(NULL));
        	T->num=rand();
        	printf("votre numero de compte : %d\n ",T->num);
                    quitter();
        		}
int creatcomptes(){
   // utilisateur utilisateur[2000];
	  int n,i;
            system("cls");
            printf("saisir le nombre de comptes que vous voulez creer : ");
            scanf("%d",&n);
            for(i=1;i<=n;i++){
                printf("Le nom : ");
                scanf("%s", T[i].Nom);
                printf("Le Prenom : ");
                scanf("%s",T[i].Prenom);
                printf("Le CIN : ");
                scanf("%s",T[i].CIN);
                printf("Le Montatnt : ");
                scanf("%s",T[i].Montant);
      	  }
      	   quitter();
      	  }
void quitter(){
      	      int opt;
      	       
      	       printf("choisir une option\n");
               printf("[1]Retour au Menu principal\n [2]Quitter l application\n");
      	       scanf("%d",&opt);
      	      switch(opt){
      	          case 1:
      	          	system("cls");
      	          Menu();
      	          break;
      	          case 2:
                        quittter();
      	          break;
      	          default:
      	          printf("invalide choix");
      	      }
      	  }
void quittter(){
      	     system("cls");
      	     printf("A Bientot");}
int cherche(utilisateur T[]){
    int i,f=0;
char cin[15];
printf("Entrer un CIN");
scanf("%s",&cin);
for( i=0;i<sizeof(T);i++){
      if(strcmp(T[i].CIN,cin) == 0 )
	  {
      printf("c'est la meme cin\n");
      f=1;
    }
    
}
if (f=0)
printf("n existe pas\n");
}
int Operation(){
    char c[20];
 //   utilisateur T[2000];
	int optionx;
	float Md,Mr;
	         system("cls");
	          printf("[1]Depot\n[2]Retrait\n");
	          printf("tapez une option :\n");
	          scanf("%d",&optionx);
           switch(optionx){
            case 1:{
            	cherche(T);  
			system("cls");
	            printf("Tapez le montant que vous voulez deposer :\n");
	            scanf("%f", &Md);
	            printf("le Montant apres depot: ");
	            T->Montant+=Md;
	            printf("operation dépot bien effectué\n");
	           
	            quitter();
				break;
			}
            case 2:{
            	cherche(T);  
			system("cls");
              printf("Tapez le montant que vous voulez retirer :\n");
              scanf("%f",&Mr);
              printf("le Montant apres retrait : ");
            T->Montant-=Mr;
              printf("operation retrait bien effectué\n");
                        quitter();
            break;
			}
            	
            default:
            break;
        }
        return 0;
                        quitter();
}
void appquit(){
    int optt;
    system("cls");
    printf("[1]Quitter l'application\n[2]Naviguer encore dans l'aplication\n");
    scanf("%d",&optt);
    switch(optt){
case 1:
    quittter();
    break;
case 2:
    printf("naviguer dans le menu\n");
    quitter();
    break;
default:
    break;
    }
}

void Menu(){
    int option, optionx;
    system("cls");
    printf("\n\n                                                      # SYSTeME DE GESTION BANCAIRE #                                 \n");
    printf("\n\n                MENU\n\n\n");
    printf("[1] Introduire un compte bancaire\n\n[2] Introduire plusieurs comptes bancaires\n\n[3] Operations\n\n[4] Affichage\n\n[5] Fidelisation\n\n[6] Quitter l application\n\n");
    printf("choisi une option  : ");
    scanf("%d", &option);
    switch(option){
    case 1:
                    creatcompte();

        break;
        case 2:
                    creatcomptes();
        break;
        case 3:     	
                    Operation();
            break;
        case 4:
            printf("test4");
        break;
        case 5:
            printf("blabla5");
        break;
        case 6:
             appquit();
        break;
        	printf("CHOIX INVALIDE !");
        break;
    }
}
    int  main(){
    	 Menu();
    	 return 0;
}
