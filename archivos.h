void crearArchEntrega(){
	setlocale(LC_CTYPE, "Spanish");
	FILE *arch=NULL;
	if(!(arch=fopen("entrega.xls","w"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	for(int i=0;i<10;i++){
		fprintf(arch,"%d\t",regEntrega[i].id_entrega);
		fprintf(arch,"%d\t",regEntrega[i].estado);
		fprintf(arch,"%s\t",regEntrega[i].id_paquete);
		fprintf(arch,"%d\n",regEntrega[i].id_empleado);
	}
	fclose(arch);
}

void crearArchEmpleado(){
	setlocale(LC_CTYPE, "Spanish");
	FILE *arch=NULL;
	if(!(arch=fopen("empleado.xls","w"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	for(int i=0;i<10;i++){
		fprintf(arch,"%d\t",regEmpleado[i].id_empleado);
		fprintf(arch,"%s\t",regEmpleado[i].nombre);
		fprintf(arch,"%s\t",regEmpleado[i].direccion);
		fprintf(arch,"%.llu\t",regEmpleado[i].telefono);
		fprintf(arch,"%s\t",regEmpleado[i].correo);
		fprintf(arch,"%d\t",regEmpleado[i].rol_registra);
		fprintf(arch,"%d\n",regEmpleado[i].rol_entrega);
	}
	fclose(arch);
}
void leerArchEntrega(){
	FILE *arch = NULL;
	entrega reg;
	if(!(arch=fopen("entrega.xls","r"))){
		printf("Error al intentar leer archivo");
		exit(1);
	}
	printf("\n\n------------------Registros en el archivo-----------------\n");
	printf("------------------Entrega-----------------\n\n");
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_entrega);
		fscanf(arch,"%d\t",&reg.estado);
		fscanf(arch,"%s\t", reg.id_paquete);
		fscanf(arch,"%d\n",&reg.id_empleado);
		
		printf("%d\t", reg.id_entrega);
		printf("%d\t",reg.estado);
		printf("%s\t",reg.id_paquete);
		printf("%d\n", reg.id_empleado);
	}
	fclose(arch);
}

void leerArchEmpleado(){
	FILE *arch = NULL;
	empleado reg;
	if(!(arch=fopen("empleado.xls","r"))){
		printf("Error al intentar leer archivo");
		exit(1);
	}
	printf("\n\n------------------Registros en el archivo-----------------\n");
	printf("------------------Empleados-----------------\n\n");
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_empleado);
		fscanf(arch,"%[^\t]\t", reg.nombre);
		fscanf(arch,"%[^\t]\t", reg.direccion);
		fscanf(arch,"%llu\t", &reg.telefono);
		fscanf(arch,"%s\t", reg.correo);
		fscanf(arch,"%d\t",&reg.rol_registra);
		fscanf(arch,"%d\n",&reg.rol_entrega);
		
		printf("%d\t", reg.id_empleado);
		printf("%s\t",reg.nombre);
		printf("%s\t",reg.direccion);
		printf("%llu\t",reg.telefono);
		printf("%s\t",reg.correo);
		printf("%d\t", reg.rol_registra);
		printf("%d\n",reg.rol_entrega);
	}
	fclose(arch);
}
bool buscarEmpleadoAGREGAR(int idEmpleado){
	FILE *arch = NULL;
	empleado reg;
	bool bandera=true;
	
	if(!(arch=fopen("empleado.xls","r"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_empleado);
		fscanf(arch,"%[^\t]\t",reg.nombre);
		fscanf(arch,"%[^\t]\t",reg.direccion);
		fscanf(arch,"%llu\t",&reg.telefono);
		fscanf(arch,"%[^\t]\t",reg.correo);
		fscanf(arch,"%d",&reg.rol_registra);
		fscanf(arch,"%d",&reg.rol_entrega);
		
		if(reg.id_empleado== idEmpleado){
			bandera=false;
			break;
		}
	}
	fclose(arch);
	return bandera;
}
bool buscarEntregaAGREGAR(int idEntrega){
	FILE *arch=NULL;
	entrega reg;
	bool bandera=true;
	
	if(!(arch=fopen("entrega.xls","r"))){
		printf("Error al intentar crear archivo de Entrega");
		exit(1);
	}
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_entrega);
		fscanf(arch,"%d\t",&reg.estado);
		fscanf(arch,"%[^\t]\t",reg.id_paquete);
		fscanf(arch,"%d\n",&reg.id_empleado);
		
		if(reg.id_entrega==idEntrega){
			bandera=false;
			break;
		}
		fclose(arch);
		return bandera;
	}
}
bool buscarEntregaAGREGAR2(char idPaquete[]){
	FILE *arch=NULL;
	entrega reg;
	bool bandera=true;
	
	if(!(arch=fopen("entrega.xls","r"))){
		printf("Error al intentar crear archivo de Entrega");
		exit(1);
	}
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_entrega);
		fscanf(arch,"%d\t",&reg.estado);
		fscanf(arch,"%[^\t]\t",reg.id_paquete);
		fscanf(arch,"%d\n",&reg.id_empleado);
		
		if(strcmp(reg.id_paquete,idPaquete)==0){
			bandera=false;
			break;
		}
		fclose(arch);
		return bandera;
	}
}
void agregarArchEntrega(){
	setlocale(LC_CTYPE,"Spanish");
	FILE *arch=NULL;
	entrega reg= agregar();
	
	if(!(arch=fopen("entrega.xls","a+"))){
		printf("Error al intentar agregar reg en archivo");
		exit(1);
	}
		fprintf(arch,"%d\t",reg.id_entrega);
		fprintf(arch,"%d\t",reg.estado);
		fprintf(arch,"%s\t", reg.id_paquete);
		fprintf(arch,"%d\n",reg.id_empleado);
		
		fclose(arch);
}

void agregarArchEmpleado(){
	setlocale(LC_CTYPE,"Spanish");
	FILE *arch=NULL;
	empleado reg= agregar2();
	
	if(!(arch=fopen("empleado.xls","a+"))){
		printf("Error al intentar agregar reg en archivo");
		exit(1);
	}
		fprintf(arch,"%d\t",reg.id_empleado);
		fprintf(arch,"%s\t", reg.nombre);
		fprintf(arch,"%s\t", reg.direccion);
		fprintf(arch,"%llu\t", reg.telefono);
		fprintf(arch,"%s\t", reg.correo);
		fprintf(arch,"%d\t",reg.rol_registra);
		fprintf(arch,"%d\n",reg.rol_entrega);
		
		fclose(arch);
}

//ELIMINAR EMPLEADO
void eliminarEmpleado(int idEmpleado){
	setlocale(LC_CTYPE,"Spanish");
	empleado reg={};
	FILE *arch1=NULL;
	FILE *arch2=NULL;
	bool bandera=false;
	int opcion=2;
	
	if(!(arch1=fopen("empleado.xls","r"))){
		printf("Error al intentar leer archivo");
		exit(1);
	}
	if(!(arch2=fopen("copia2.xls","a+"))){
		printf("Error al intentar leer archivo");
		exit(1);
	}
	
	while(!feof(arch1)){
		fscanf(arch1,"%d\t",&reg.id_empleado);
		fscanf(arch1,"%[^\t]\t", reg.nombre);
		fscanf(arch1,"%[^\t]\t", reg.direccion);
		fscanf(arch1,"%llu\t", &reg.telefono);
		fscanf(arch1,"%s\t", reg.correo);
		fscanf(arch1,"%d\t",&reg.rol_registra);
		fscanf(arch1,"%d\n",&reg.rol_entrega);
		
		if(reg.id_empleado==idEmpleado){
			printf("\nDatos actuales de empleado a eliminar\n\n");
			printf("Id Empleado\tNombre\t\t\tDirección\t\tTelefono\tCorreo\t\t\tRol Registra\tRol Entrega\n");

			printf("%d\t", reg.id_empleado);
			printf("%s\t",reg.nombre);
			printf("%s\t",reg.direccion);
			printf("%llu\t",reg.telefono);
			printf("%s\t",reg.correo);
			printf("%d\t", reg.rol_registra);
			printf("%d\n",reg.rol_entrega);
			
			opcion=validaEntero("¿Seguro que deseas eliminar el registro?\n\t\t1-SI\t\t2-NO\n");
			bandera=true;
		}
		if(opcion!=1){
			fprintf(arch2,"%d\t",reg.id_empleado);
			fprintf(arch2,"%s\t",reg.nombre);
			fprintf(arch2,"%s\t",reg.direccion);
			fprintf(arch2,"%llu\t", reg.telefono);
			fprintf(arch2,"%s\t",reg.correo);
			fprintf(arch2,"%d\t",reg.rol_registra);
			fprintf(arch2,"%d\n",reg.rol_entrega);
			break;
		}else{
			printf("Registro eliminado\n");
			opcion=2;
		}
	}
	if(!bandera) printf("No se encuentra el registro");
	
	fclose(arch1);
	fclose(arch2);
	remove("empleado.xls");
	rename("copia2.xls","empleado.xls");
}
