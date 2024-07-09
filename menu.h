//menu(22,5,1,7) //22 y 5 son las coordenadas en x y y, el 1 y 7 son las opciones del menu
void menuProyecto(){
	setlocale(LC_CTYPE,"Spanish");
	do{
		system("color 02");
		x=25;
		y=5;
		system("cls");
		gotoxy(x,y);
		printf("1. Empleado\n");
		gotoxy(x,++y);
		printf("2. Entrega\n");
		gotoxy(x,++y);
		printf("3. Salir\n");
		menu(22,5,1,3);
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				printf("1. Empleado\n");
				submenu1();
				getch();
				break;
			case OPC2:
				printf("2. Entrega\n");
				submenu2();
				getch();
				break;
			case OPC3:
				printf("Adios ");
				exit(0);			
		}
	}while (opc!=3);
	getch();
}

void menu(int x, int y, int inicio, int fin){
	char tecla= '\0'; //' '
	opc=1; //siempre tener la opcion en 1 para que la flecha empiece desde un inicio
	gotoxy(x,y);
	printf("%c",16);
	do{
		if(kbhit()){
			tecla=getch();
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			gotoxy(x,y);
			printf("%c",16);
			if(opc>inicio&&tecla==72){ //flecha arriba
				y--;
				opc--;
			}
			if (opc<fin && tecla==80){ //flecha abajo
				y++;
				opc++;
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
			gotoxy(x,y);
			printf("%c",16);
		}
	}while(tecla!=13); //13->enter
}

void submenu1(){
	setlocale(LC_CTYPE, "Spanish");
	do{
		system("color 02");
		x=25;
		y=5;
		system ("cls");
		gotoxy(x,y);
		printf("1. Agregar\n");
		gotoxy(x,++y);
		printf("2. Modificar\n");
		gotoxy(x,++y);
		printf("3. Consultar\n");
		gotoxy(x,++y);
		printf("4. Eliminar\n");
		gotoxy(x,++y);
		printf("5. Regresar\n");
		gotoxy(x,++y);
		menu(22,5,1,5);
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				printf("-----------Agregar----------\n");
				printf("Agrega un nuevo empleado:\n");
				agregarArchEmpleado();
				getch();
				break;
			case OPC2:
				printf("----------Modificar---------\n");
				menumodificar();
				getch();
				break;
			case OPC3:
				printf("----------Consultar--------\n");
				menuconsultar();
				getch();
				break;	
			case OPC4:
				printf("---------Eliminar----------\n");
				id=validaEntero("ID de Empleado: ");
				eliminarEmpleado(id);
				getch();
				break;
			case OPC5:
				menuProyecto();
				break;
		}
	}while(opc!=5);
	getch();
}

void submenu2(){
	setlocale(LC_CTYPE, "Spanish");
	do{
		system("color 02");
		x=25;
		y=5;
		system ("cls");
		gotoxy(x,y);
		printf("1. Agregar\n");
		gotoxy(x,++y);
		printf("2. Consultar\n");
		gotoxy(x,++y);
		printf("3. Modificar estado\n");
		gotoxy(x,++y);
		printf("4. Regresar\n");
		gotoxy(x,++y);
		menu(22,5,1,4);
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				printf("-----------Agregar----------\n");
				printf("Agrega una nueva entrega:\n");
				agregarArchEntrega();
				getch();
				break;
			case OPC2:
				printf("----------Consultar---------\n");
				menuconsultar2();
				getch();
				break;
			case OPC3:
				printf("------Modificar estado-----\n");
				menumodificar2();
				getch();
				break;	
			case OPC4:
				menuProyecto();
				break;
		}
	}while(opc!=4);
	getch();
}

void menuconsultar(){
		setlocale(LC_CTYPE, "Spanish");
	do{
		system("color 02");
		x=25;
		y=5;
		system ("cls");
		gotoxy(x,y);
		printf("1. Numero de empleado\n");
		gotoxy(x,++y);
		printf("2. Telefono\n");
		gotoxy(x,++y);
		printf("3. Email\n");
		gotoxy(x,++y);
		printf("4. Rol registra\n");
		gotoxy(x,++y);
		printf("5. Rol entrega\n");
		gotoxy(x,++y);
		printf("6. Regresar\n");
		gotoxy(x,++y);
		menu(22,5,1,6);
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				printf("------Numero de empleado------\n");
				buscarEmpleadoID();
				getch();
				break;
			case OPC2:
				printf("-----------Telefono-----------\n");
				buscarEmpleadoTEL();
				getch();
				break;
			case OPC3:
				printf("------------Email------------\n");
				buscarEmpleadoCORREO();
				getch();
				break;	
			case OPC4:
				printf("---------Rol registra--------\n");
				buscarEmpleadoREGISTRA();
				getch();
				break;
			case OPC5:
				printf("----------Rol entrega--------\n");
				buscarEmpleadoENTREGA();
				getch();
				break;
			case OPC6:
				submenu1();
				break;
		}
	}while(opc!=6);
	getch();
}

void menuconsultar2(){
	setlocale(LC_CTYPE, "Spanish");
	do{
		system("color 02");
		x=25;
		y=5;
		system ("cls");
		gotoxy(x,y);
		printf("1. Numero de entrega\n");
		gotoxy(x,++y);
		printf("2. Estado\n");
		gotoxy(x,++y);
		printf("3. Regresar\n");
		gotoxy(x,++y);
		menu(22,5,1,3);
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				printf("------Numero de entrega------\n");
				buscarEntregaID();
				getch();
				break;
			case OPC2:
				printf("------------Estado-----------\n");
				menuestado();
				getch();
				break;
			case OPC3:
				submenu2();
				break;
		}
	}while(opc!=3);
	getch();
}
void menumodificar(){
	int bandera=0;
	id=validaEntero("ID de Empleado: ");
	setlocale(LC_CTYPE, "Spanish");
	do{
		system("color 02");
		x=25;
		y=10;
		system ("cls");
		bandera=buscarEmpleadoID2(id);
		if (bandera==1){
			printf("\nNo podemos modificar ya que no se encuentra el ID");
			break;
		}else{
		
		gotoxy(x,y);
		printf("1. Direccion\n");
		gotoxy(x,++y);
		printf("2. Telefono\n");
		gotoxy(x,++y);
		printf("3. Email\n");
		gotoxy(x,++y);
		printf("4. Rol registra\n");
		gotoxy(x,++y);
		printf("5. Rol entrega\n");
		gotoxy(x,++y);
		printf("6. Regresar\n");
		gotoxy(x,++y);
		menu(22,10,1,6);
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				printf("-----------Direccion----------\n");
				modiEmpleadoDIRECCION(id);
				getch();
				break;
			case OPC2:
				printf("-----------Telefono-----------\n");
				modiEmpleadoTEL(id);
				getch();
				break;
			case OPC3:
				printf("------------Email------------\n");
				modiEmpleadoCORREO(id);
				getch();
				break;	
			case OPC4:
				printf("---------Rol registra--------\n");
				//id=validaEntero("ID de Empleado");
				modiEmpleadoREGISTRA(id);
				getch();
				break;
			case OPC5:
				printf("----------Rol entrega--------\n");
				//id=validaEntero("ID de Empleado");
				modiEmpleadoENTREGA(id);
				getch();
				break;
			case OPC6:
				submenu1();
				break;
			}
		}
	}while(opc!=6);
	printf("\nDa click para continuar\n");
	getch();
	
}
void menumodificar2(){
	int bandera=0;
	id=validaEntero("ID de Entrega: ");
		setlocale(LC_CTYPE, "Spanish");
		do{
			system("color 02");
			x=25;
			y=10;
			system ("cls");
			bandera=buscarEntregaID2(id);
			if (bandera==1){
			printf("\nNo podemos modificar ya que no se encuentra el ID");
			break;
		}else{
			gotoxy(x,y);
			printf("1. Activo\n");
			gotoxy(x,++y);
			printf("2. En proceso\n");
			gotoxy(x,++y);
			printf("3. Entregados\n");
			gotoxy(x,++y);
			printf("4. Regresar");
			menu(22,10,1,4);
			system("cls");
			gotoxy(10,4);
			switch(opc){
				case OPC1:
					printf("-----------Activo-----------\n");
					modiEntregaACTIVO(id);
					getch();
					break;
				case OPC2:
					printf("--------En Proceso----------\n");
					modiEntregaPROCESO(id);
					getch();
					break;
				case OPC3:
					printf("---------Entregados---------\n");
					modiEntregaENTREGADO(id);
					getch();
				case OPC4:
					submenu2();
					break;
			}
		}
		}while(opc!=4);
	getch();
}

void menuestado(){
		setlocale(LC_CTYPE, "Spanish");
	do{
		system("color 02");
		x=25;
		y=5;
		system ("cls");
		gotoxy(x,y);
		printf("1. Activo\n");
		gotoxy(x,++y);
		printf("2. En proceso\n");
		gotoxy(x,++y);
		printf("3. Entregados\n");
		gotoxy(x,++y);
		printf("4. Regresar");
		menu(22,5,1,4);
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				printf("-----------Activo-----------\n");
				buscarEntregaACTIVO();
				getch();
				break;
			case OPC2:
				printf("--------En Proceso----------\n");
				buscarEntregaPROCESO();
				getch();
				break;
			case OPC3:
				printf("---------Entregados---------\n");
				buscarEntregaENTREGADO();
				getch();
				break;
			case OPC4:
				menuconsultar2();
				break;
		}
	}while(opc!=4);
	getch();
}

