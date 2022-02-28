#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<Windows.h>
int exit();
int play();


	//variable Global
	char name[100];
	int e,g,f,start,pilih;


int main(){
	char m[100] = "     W E L C O M E";
	char n[100] = "          T O";
	char o[100] = "  T A M A G O T C H I";

	
	system("start "" nircmd mediaplay 375600 Sung.mp3");// untuk memainkan lagu
	printf("<=====================>\n");
	for(int i=0; i<strlen(m); i++){
			printf("%c", m[i]);
			usleep(100000);
		}
		sleep(2);
		printf("\n");
		for(int i=0; i<strlen(n); i++){
			printf("%c", n[i]);
			usleep(100000);
		}
		sleep(3);
		printf("\n");
		for(int i=0; i<strlen(o); i++){
			printf("%c", o[i]);
			usleep(100000);
		}
	printf("\n<=====================>");
	printf("\n\n      START GAME");
	printf("\n        1. YES");
	printf("\n        2. NO");
	printf("\n        >>");
	scanf("%d",&start);fflush(stdin);
	switch(start){
		case 1:
			system("cls"); // untuk membersihkan layar system("cls")
			play();
			break;
		case 2:
			system("cls");
			return exit();
			break;
	}
return 0;
}


int play(){ //function untuk memberi nama peliharaan dan mengarah ke pet

	srand(time(NULL));// fungsi untuk menetapkan titik awal untuk menghasilkan serangkaian bilangan bulat pseudo-acak
	int pet=rand()%5+1; //untuk memilih secara acak petnya
	int a=rand()%70+20; //memilih acak jumlah dari hunger
	int b=rand()%70+20; //memilih acak jumlah dari happiness
	int c=rand()%70+20; //memilih acak jumlah dari health
		printf("Name for your pet :");
	scanf("%[^\n]", *&name);fflush(stdin);



status : // tag status untuk menghubungkan kondisi dari tag action
	system("cls");
	printf("\nYour pet is a ");
	if(pet==1){
		printf("Lion\n\n");
			printf("      *           *");
		printf("\n     ***         ***");
		printf("\n    *****       *****");
		printf("\n   **###############**");
		printf("\n  **##0###########0##**");
		printf("\n **###################**");
		printf("\n **#########^#########**");
		printf("\n  **#################**");
		printf("\n   **####VVVVVVV####**");
		printf("\n    **###       ###**");
		printf("\n         ^^^^^^^     ");
	}else if(pet==2){
		printf("Wolf\n\n");
		printf("      *           *");
		printf("\n     *^*         *^*");
		printf("\n    *^^^*       *^^^*");
		printf("\n   *******************");
		printf("\n  ****@***********@****");
		printf("\n ***********************");
		printf("\n ***********T***********");
		printf("\n  *********************");
		printf("\n   ******VVVVVVV******");
		printf("\n    *****       *****");
		printf("\n         ^^^^^^^     ");
		}else if(pet==3){
		printf("Cat\n\n");
		f=3;
		for(e=1; e<=f; e++){
			for(g=1; g<=f; g++){
				printf(" ");
			}
			for(g=e; g<=f; g++){
				printf(" ");
			}
			for(g=1; g<=e; g++){
				printf("*");
			}
			for(g=1; g<=e-1; g++){
				printf("*");
			}
			for(g=e; g<=f+3; g++){
				printf(" ");
			}
			for(g=e; g<=f+3-1; g++){
				printf(" ");
			}
			for(g=1; g<=e; g++){
				printf("*");
			}
			for(g=1; g<=e-1; g++){
				printf("*");
			}
			printf("\n");
		}
		printf("   *******************");
		printf("\n  ****0***********0****");
		printf("\n ***********************");
		printf("\n ***********^***********");
		printf("\n  *********************");
		printf("\n   *****--*****--*****");
		printf("\n    *****_______*****");
	}else if(pet==4){
		printf("Dog\n\n");
		printf("      *           *");
		printf("\n     *^*         *^*");
		printf("\n    *^^^*       *^^^*");
		printf("\n   *******************");
		printf("\n  ****@***********@****");
		printf("\n ***********************");
		printf("\n ***********T***********");
		printf("\n  *********************");
		printf("\n   *****---------*****");
		printf("\n    *****UUUUUUU*****");
		printf("\n  ********UUUUU********");
		printf("\n  **********UU*********");
	}else if(pet==5){
		printf("Rabbit\n\n");
		f=3;
		for(e=1; e<=f; e++){
			for(g=1; g<=f; g++){
				printf(" ");
			}
			for(g=e; g<=f; g++){
				printf(" ");
			}
			for(g=1; g<=e; g++){
				printf("*");
			}
			for(g=1; g<=e-1; g++){
				printf("*");
			}
			for(g=e; g<=f+3; g++){
				printf(" ");
			}
			for(g=e; g<=f+3-1; g++){
				printf(" ");
			}
			for(g=1; g<=e; g++){
				printf("*");
			}
			for(g=1; g<=e-1; g++){
				printf("*");
			}
			printf("\n");
		}
		for(e=1; e<=f; e++){
			for(g=1; g<=f+1; g++){
				printf(" ");
			}
			for(g=1; g<=f+2; g++){
				printf("*");
			}
			for(g=1; g<=f+4; g++){
				printf(" ");
			}
			for(g=1; g<=f+2; g++){
				printf("*");
			}
			printf("\n");
		}
		printf("   *******************");
		printf("\n  ****0***********0****");
		printf("\n ***********************");
		printf("\n ***********V***********");
		printf("\n  *********************");
		printf("\n   ********YYY********");
		printf("\n    ********Y********");
	}
	printf("\n");
	printf("Name: %s",name);


	printf("\n\nYour pet status");
	printf("\nHunger\t\t: ");
	if(a>=1 && a<101){
	printf("%d",a);
	}else if(a>=100){
		a=100;
		printf("%d",a);
	}else if(a<=0){
		return exit();
	}
	printf("\nHappiness\t: ");
	if(b>=1 && b<101){
	printf("%d",b);
	}else if(b>=100){
		b=100;
		printf("%d",b);
	}else if(b<=0){
		return exit();
	}
	printf("\nHealth\t\t: ");
	if(c>=1 && c<101){
	printf("%d",c);
	}else if(c>=100){
		c=100;
		printf("%d",c);
	}else if(c<=0){
		return exit();
	}

action : // tag action sebagai penanda
	printf("\n\nChoose action :");
	printf("\n1. Eat");
	printf("\n2. Play");
	printf("\n3. Sleep");
	printf("\n4. Exit");
	
	do{	
	printf("\n\n>>");
	scanf("%d",&pilih);fflush(stdin);
	switch(pilih){
		case 1:
			a+=rand()%15+1;
			c-=rand()%15+1;
		goto status;// agar hunger dan health pada status berubah
			break;
		case 2:
			b+=rand()%15+1;
			a-=rand()%15+1;
		goto status;// happiness bertambah dan hunger berkurang
			break;
		case 3:
			c+=rand()%15+1;
			b-=rand()%15+1;
		goto status;// health bertambah dan happiness berkurang
			break;
		case 4:
		return exit();// untuk mengakhiri permainan
	}
	}while (pilih<1 || pilih>4);
	return 0;
}
	

int exit(){
	system("cls");
	printf("============================================================================\n");
	printf("			G A M E  O V E R  -__-\n\n			G O O D  B Y E :)");
	printf("\n============================================================================");
	printf("\n");
	system("taskkill /IM nircmd.exe /F"); // untuk memberhentikan lagu
}
