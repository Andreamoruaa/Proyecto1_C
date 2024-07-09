void imprimirEstructura(){
	setlocale(LC_CTYPE, "Spanish");
	
	printf("\n\n-----------------Registros en Entrega----------------\n\n");
	printf("Id Entrega\tEstado\t\tId Paquete\tId Empleado\n");
	for(int i=0;i<10;i++){
		printf("%d\t\t",regEntrega[i].id_entrega);
		printf("%d\t\t",regEntrega[i].estado);
		printf("%s\t\t",regEntrega[i].id_paquete);
		printf("%d\t\n",regEntrega[i].id_empleado);
	}
	
	printf("\n\n-----------------Registros en Empleado----------------\n\n");
	printf("Id Empleado\tNombre\t\t\tDirección\t\tTelefono\tCorreo\t\t\tRol Registra\tRol Entrega\n");
	for(int i=0;i<10;i++){
		printf("%d\t\t",regEmpleado[i].id_empleado);
		printf("%s\t\t",regEmpleado[i].nombre);
		printf("%s\t\t",regEmpleado[i].direccion);
		printf("%llu\t",regEmpleado[i].telefono);
		printf("%s\t\t",regEmpleado[i].correo);
		printf("%d\t",regEmpleado[i].rol_registra);
		printf("%d\t\n",regEmpleado[i].rol_entrega);
	}
}

entrega agregar(){
	entrega reg;
	bool bandera=true;
	bool bandera2=true;
	bool bandera3=true;
	srand (time(NULL));
	char cadena[7]="";
	do{
		reg.id_entrega = rand() % (200 - 100 + 1) + 100;
		bandera=buscarEntregaAGREGAR(reg.id_entrega);
	}while(!bandera);
	printf("ID de Entrega: %d\n",reg.id_entrega);
	reg.estado= validaEntero("Estado:\n1-Activo\n2-En proceso\n3-Entregado\n");
	validaCadena("ID Paquete: ",reg.id_paquete,7);
	//do{
	//	sprintf(cadena,"PAQ%d",rand()%(999-100+1)+100);
	//	bandera=buscarEntregaAGREGAR2(reg.id_paquete);
	//}while(!bandera2);
	reg.id_empleado= validaEntero("ID de empleado: ");
	
	return reg;
}

empleado agregar2(){
	empleado reg;
	bool bandera=true;
	srand (time(NULL));
	do{
		reg.id_empleado= rand()%(20000-10000+1)+10000;
		bandera=buscarEmpleadoAGREGAR(reg.id_empleado);
	}while(!bandera);
	
	printf("ID de Empleado: %d\n",reg.id_empleado);
	validaCadena("Nombre: ",reg.nombre,30);
	validaCadena("Direccion: ",reg.direccion,34);
	reg.telefono=validaTel("Telefono: ");
	validaCadena("Correo electronico: ",reg.correo,30);
	reg.rol_registra=validaEntero("Rol registra: ");
	reg.rol_entrega=validaEntero("Rol entrega: ");
	
	return reg;
}
