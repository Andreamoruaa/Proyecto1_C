int validaEntero(const char mensaje[]){
	int valida=0;
	int entero=0;
	do{
		printf("%s",mensaje);
		valida=scanf("%d",&entero);
		fflush (stdin);
	}while(valida!=1);
	return entero;
}

float validaFlotante(const char mensaje[]){
	int valida=0;
	float flotante=0;
	do{
		printf("%s",mensaje);
		valida=scanf("%f", &flotante);
		fflush (stdin);
	}while(valida!=1);
	return flotante;
}

void validaCadena(const char mensaje[], char cadena[], int tam){
	SetConsoleCP(12352);
	SetConsoleOutputCP(12352);
	
	printf("%s",mensaje);
	fgets(cadena, tam, stdin);
	strtok(cadena, "\n");
	fflush(stdin);
}
unsigned long long int validaTel(const char mensaje[]){
	int valida=0;
	int telefono=0;
	do{
		printf("%s",mensaje);
		valida=scanf("%llu",&telefono);
		fflush (stdin);
	}while(valida!=1);
	return telefono;
}
void usuario(){
	bool bandera=true;
	char usu[7]=" ";
	while(bandera){
		system("cls");
		printf("\nUsuario: ");
		fgets(usu,7,stdin);
		fflush(stdin);
		if(strcmp(usu,user)==0){
			bandera=false;
		}else{
			printf("Usuario incorrecto: %s \n",user);
			getchar();
		}
	}
}

void contrasenia(){
	bool bandera=true;
	char contra[5]=" ";
	while (bandera){
		system ("cls");
		printf("\nContrase%ca: ",164);
		for(int i=0;i<4;i++){
			contra[i]=getch();
			printf("*");
		}
		system("cls");
		if(strcmp(contra,pass)==0){
			bandera=false;
			system("pause");
		}else{
			printf("\nContrase%ca incorrecta \n",164);
			system ("pause");
		}
	}
}

