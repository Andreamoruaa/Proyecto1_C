void portada(){
	int aux=0;
	FILE*archivo=fopen("dibujo.txt","r");
	
	for(int i=0;i<53;i++){
		for(int j=0;j<71;j++){
			fscanf(archivo, "%d\t",&aux);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),aux);
			printf("%c",178);
		}
		printf("\n");
	}
	fclose(archivo);
}

void datos(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	gotoxy(80,10);
	printf("Universidad Politecnica de San Luis Potosi");
	gotoxy(80,11);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	printf("Programacion I Lenguaje C");
	gotoxy(80,12);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	printf("Proyecto Final VENTA DE VINILES");
	gotoxy(80,13);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("Modulo 2");
	gotoxy(80,14);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	printf("Andrea Morua Bravo");
	gotoxy(80,15);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	printf("Matricula: 185548");
	gotoxy(80,16);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),46);
	printf("Cualquier tecla para iniciar...");
	gotoxy(80,17);
}
