//CONSULTAS DE EMPLEADOS
void buscarEmpleadoID(){
	FILE *arch=NULL;
	empleado reg;
	bool bandera= true;
	int id;
	if(!(arch=fopen("empleado.xls","r"))){
		printf("Error al intentar buscar en Empleados");
		exit(1);
	}
	id=validaEntero("Id de Empleado: ");
	printf("\n\n--------------Registros en el archivo-----------\n\n");
	
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_empleado);
		fscanf(arch,"%[^\t]\t", reg.nombre);
		fscanf(arch,"%[^\t]\t", reg.direccion);
		fscanf(arch,"%llu\t", &reg.telefono);
		fscanf(arch,"%s\t", reg.correo);
		fscanf(arch,"%d\t",&reg.rol_registra);
		fscanf(arch,"%d\n",&reg.rol_entrega);
	
		if(reg.id_empleado == id){
			printf("ID Empleado:\tNombre:\t\t\tDireccion:\tTelefono:\tCorreo:\t\tRol Registra:  Rol Entrega:\n\n");
			printf("%d\t\t", reg.id_empleado);
			printf("%s\t\t",reg.nombre);
			printf("%s\t",reg.direccion);
			printf("%llu\t",reg.telefono);
			printf("%s\t",reg.correo);
			printf("%d\t", reg.rol_registra);
			printf("%d\n",reg.rol_entrega);
			bandera=false;
			break;
		}
	}
	if(bandera) printf("El registro NO existe!!");
	fclose(arch);
}

int buscarEmpleadoID2(int id){
	FILE *arch=NULL;
	empleado reg;
	bool bandera= true;
	if(!(arch=fopen("empleado.xls","r"))){
		printf("Error al intentar buscar en Empleados");
		exit(1);
	}
	printf("\n\n--------------Registros en el archivo-----------\n\n");
	
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_empleado);
		fscanf(arch,"%[^\t]\t", reg.nombre);
		fscanf(arch,"%[^\t]\t", reg.direccion);
		fscanf(arch,"%llu\t", &reg.telefono);
		fscanf(arch,"%s\t", reg.correo);
		fscanf(arch,"%d\t",&reg.rol_registra);
		fscanf(arch,"%d\n",&reg.rol_entrega);
	
		if(reg.id_empleado == id){
			printf("ID Empleado:\tNombre:\t\t\tDireccion:\tTelefono:\tCorreo:\t\tRol Registra:  Rol Entrega:\n\n");
			printf("%d\t\t", reg.id_empleado);
			printf("%s\t\t",reg.nombre);
			printf("%s\t",reg.direccion);
			printf("%llu\t",reg.telefono);
			printf("%s\t",reg.correo);
			printf("%d\t", reg.rol_registra);
			printf("%d\n",reg.rol_entrega);
			bandera=false;
			break;
		}
	}
	if(bandera) {
		printf("El registro NO existe!!");
		return 1;
	}
	fclose(arch);
	return 0;
}
void buscarEmpleadoTEL(){
	FILE *arch=NULL;
	empleado reg;
	bool bandera= true;
	int tel;
	if(!(arch=fopen("empleado.xls","r"))){
		printf("Error al intentar buscar en Empleados");
		exit(1);
	}
	tel=validaTel("Telefono: ");
	printf("\n\n--------------Registros en el archivo-----------\n\n");
	
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_empleado);
		fscanf(arch,"%[^\t]\t", reg.nombre);
		fscanf(arch,"%[^\t]\t", reg.direccion);
		fscanf(arch,"%llu\t", &reg.telefono);
		fscanf(arch,"%s\t", reg.correo);
		fscanf(arch,"%d\t",&reg.rol_registra);
		fscanf(arch,"%d\n",&reg.rol_entrega);
	
		if(reg.telefono == tel){
			printf("ID Empleado:\tNombre:\t\t\tDireccion:\tTelefono:\tCorreo:\t\tRol Registra:  Rol Entrega:\n\n");
			printf("%d\t\t", reg.id_empleado);
			printf("%s\t\t",reg.nombre);
			printf("%s\t",reg.direccion);
			printf("%llu\t",reg.telefono);
			printf("%s\t",reg.correo);
			printf("%d\t", reg.rol_registra);
			printf("%d\n",reg.rol_entrega);
			bandera=false;
			break;
		}
	}
	if(bandera) printf("El registro NO existe!!");
	fclose(arch);
}

void buscarEmpleadoCORREO(){
	FILE *arch=NULL;
	empleado reg;
	bool bandera= true;
	char correo[30];
	if(!(arch=fopen("empleado.xls","r"))){
		printf("Error al intentar buscar en Empleados");
		exit(1);
	}
	validaCadena("Email: ",correo,30);
	printf("\n\n--------------Registros en el archivo-----------\n\n");
	
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_empleado);
		fscanf(arch,"%[^\t]\t", reg.nombre);
		fscanf(arch,"%[^\t]\t", reg.direccion);
		fscanf(arch,"%llu\t", &reg.telefono);
		fscanf(arch,"%s\t", reg.correo);
		fscanf(arch,"%d\t",&reg.rol_registra);
		fscanf(arch,"%d\n",&reg.rol_entrega);
	
		if(strcmp(reg.correo,correo)==0){
			printf("ID Empleado:\tNombre:\t\t\tDireccion:\tTelefono:\tCorreo:\t\tRol Registra:  Rol Entrega:\n\n");
			printf("%d\t\t", reg.id_empleado);
			printf("%s\t\t",reg.nombre);
			printf("%s\t",reg.direccion);
			printf("%llu\t",reg.telefono);
			printf("%s\t",reg.correo);
			printf("%d\t", reg.rol_registra);
			printf("%d\n",reg.rol_entrega);
			bandera=false;
			break;
		}
	}
	if(bandera) printf("El registro NO existe!!");
	fclose(arch);
}
void buscarEmpleadoREGISTRA(){
	FILE *arch=NULL;
	empleado reg;
	bool bandera= true;
	int registra,acum=0;
	if(!(arch=fopen("empleado.xls","r"))){
		printf("Error al intentar buscar en Empleados");
		exit(1);
	}
	registra=validaEntero("Rol Registra: ");
	printf("\n\n--------------Registros en el archivo-----------\n\n");
	
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_empleado);
		fscanf(arch,"%[^\t]\t", reg.nombre);
		fscanf(arch,"%[^\t]\t", reg.direccion);
		fscanf(arch,"%llu\t", &reg.telefono);
		fscanf(arch,"%s\t", reg.correo);
		fscanf(arch,"%d\t",&reg.rol_registra);
		fscanf(arch,"%d\n",&reg.rol_entrega);
		
		if((reg.rol_registra==registra)and acum==0){
			printf("ID Empleado:\tNombre:\t\t\tDireccion:\tTelefono:\tCorreo:\t\tRol Registra:  Rol Entrega:\n\n");
			acum=+1;
		}	
		if(reg.rol_registra== registra){
			printf("%d\t\t", reg.id_empleado);
			printf("%s\t\t",reg.nombre);
			printf("%s\t",reg.direccion);
			printf("%llu\t",reg.telefono);
			printf("%s\t",reg.correo);
			printf("%d\t", reg.rol_registra);
			printf("%d\n",reg.rol_entrega);
			bandera=false;
		}
	}
	if(bandera) printf("El registro NO existe!!");
	fclose(arch);
}

void buscarEmpleadoENTREGA(){
	FILE *arch=NULL;
	empleado reg;
	bool bandera= true;
	int entrega,acum=0;
	if(!(arch=fopen("empleado.xls","r"))){
		printf("Error al intentar buscar en Empleados");
		exit(1);
	}
	entrega=validaEntero("Rol Entrega: ");
	printf("\n\n--------------Registros en el archivo-----------\n\n");
	
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_empleado);
		fscanf(arch,"%[^\t]\t", reg.nombre);
		fscanf(arch,"%[^\t]\t", reg.direccion);
		fscanf(arch,"%llu\t", &reg.telefono);
		fscanf(arch,"%s\t", reg.correo);
		fscanf(arch,"%d\t",&reg.rol_registra);
		fscanf(arch,"%d\n",&reg.rol_entrega);
		
		if((reg.rol_entrega==entrega)and acum==0){
			printf("ID Empleado:\tNombre:\t\t\tDireccion:\tTelefono:\tCorreo:\t\tRol Registra:  Rol Entrega:\n\n");
			acum=+1;
		}	
		if(reg.rol_entrega== entrega){
			printf("%d\t\t", reg.id_empleado);
			printf("%s\t\t",reg.nombre);
			printf("%s\t",reg.direccion);
			printf("%llu\t",reg.telefono);
			printf("%s\t",reg.correo);
			printf("%d\t", reg.rol_registra);
			printf("%d\n",reg.rol_entrega);
			bandera=false;
			break;
		}
	}
	if(bandera) printf("El registro NO existe!!");
	fclose(arch);
}

//CONSULTAS DE ENTREGA
int buscarEntregaID2(int id){
	FILE *arch=NULL;
	entrega reg;
	bool bandera= true;
	char estado[15]=" ";
	if(!(arch=fopen("entrega.xls","r"))){
		printf("Error al intentar buscar en Entrega");
		exit(1);
	}
	printf("\n\n--------------Registros en el archivo-----------\n\n");
	
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_entrega);
		fscanf(arch,"%d\t",&reg.estado);
		fscanf(arch,"%s\t", reg.id_paquete);
		fscanf(arch,"%d\n",&reg.id_empleado);
		
		if(reg.estado==1) {
			strcpy(estado,"ACTIVO");
		}
		if(reg.estado==2){
			strcpy(estado,"EN PROCESO");	
		} 
		if(reg.estado==3){
			strcpy(estado,"ENTREGADO");
		} 
		if(reg.id_entrega == id){
			printf("ID Entrega:\tEstado:\tID Paquete:\tID Empleado:\n\n");
			printf("%d\t\t", reg.id_entrega);
			printf("%s\t", estado);
			printf("%s\t\t",reg.id_paquete);
			printf("%d\n", reg.id_empleado);
			getch();
			bandera=false;
			break;
		}
	}
	if(bandera) {
		printf("El registro NO existe!!");
		return 1;
	}
	fclose(arch);
	return 0;
}
void buscarEntregaID(){
	FILE *arch=NULL;
	entrega reg;
	bool bandera= true;
	char estado[15]=" ";
	if(!(arch=fopen("entrega.xls","r"))){
		printf("Error al intentar buscar en Entrega");
		exit(1);
	}
	printf("\n\n--------------Registros en el archivo-----------\n\n");
	
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_entrega);
		fscanf(arch,"%d\t",&reg.estado);
		fscanf(arch,"%s\t", reg.id_paquete);
		fscanf(arch,"%d\n",&reg.id_empleado);
		
		if(reg.estado==1) {
			strcpy(estado,"ACTIVO");
		}
		if(reg.estado==2){
			strcpy(estado,"EN PROCESO");	
		} 
		if(reg.estado==3){
			strcpy(estado,"ENTREGADO");
		} 
		if(reg.id_entrega == id){
			printf("ID Entrega:\tEstado:\tID Paquete:\tID Empleado:\n\n");
			printf("%d\t\t", reg.id_entrega);
			printf("%s\t", estado);
			printf("%s\t\t",reg.id_paquete);
			printf("%d\n", reg.id_empleado);
			getch();
			bandera=false;
			break;
		}
	}
	if(bandera) {
		printf("El registro NO existe!!");
	}
	fclose(arch);
}
void buscarEntregaACTIVO(){
	FILE *arch=NULL;
	entrega reg;
	bool bandera= true;
	int id,acum=0;
	char estado[15]=" ";
	if(!(arch=fopen("entrega.xls","r"))){
		printf("Error al intentar buscar en Entrega");
		exit(1);
	}
	printf("\n\n--------------Registros en el archivo-----------\n\n");
	
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_entrega);
		fscanf(arch,"%d\t",&reg.estado);
		fscanf(arch,"%s\t", reg.id_paquete);
		fscanf(arch,"%d\n",&reg.id_empleado);
		
		if((reg.estado==1)and acum==0){
			printf("ID Entrega:\tEstado:\tID Paquete:\tID Empleado:\n\n");
			acum=+1;
		}
		if(reg.estado==1) {
			strcpy(estado,"ACTIVO");
				printf("%d\t\t", reg.id_entrega);
				printf("%s\t", estado);
				printf("%s\t\t",reg.id_paquete);
				printf("%d\n", reg.id_empleado);
				bandera=false;
				break;
		}
	}
	if(bandera) printf("El registro NO existe!!");
	fclose(arch);
}

void buscarEntregaPROCESO(){
	FILE *arch=NULL;
	entrega reg;
	bool bandera= true;
	int id,acum=0;
	char estado[15]=" ";
	if(!(arch=fopen("entrega.xls","r"))){
		printf("Error al intentar buscar en Entrega");
		exit(1);
	}
	printf("\n\n--------------Registros en el archivo-----------\n\n");
	
	while(!feof(arch)){
		fscanf(arch,"%d\t",&reg.id_entrega);
		fscanf(arch,"%d\t",&reg.estado);
		fscanf(arch,"%s\t", reg.id_paquete);
		fscanf(arch,"%d\n",&reg.id_empleado);
		
		if((reg.estado==2)and acum==0){
			printf("ID Entrega:\tEstado:\t\tID Paquete:\tID Empleado:\n\n");
			acum=+1;
		}
		if(reg.estado==2) {
			strcpy(estado,"EN PROCESO");
				printf("%d\t\t", reg.id_entrega);
				printf("%s\t", estado);
				printf("%s\t\t",reg.id_paquete);
				printf("%d\n", reg.id_empleado);
				bandera=false;
				break;
		}
	}
	if(bandera) printf("El registro NO existe!!");
	fclose(arch);
}

void buscarEntregaENTREGADO(){
	FILE *arch=NULL;
	entrega reg;
	bool bandera= true;
	int id,acum=0;
	char estado[15]=" ";
	if(!(arch=fopen("entrega.xls","r"))){
		printf("Error al intentar buscar en Entrega");
		exit(1);
	}
	printf("\n\n--------------Registros en el archivo-----------\n\n");
	
	while(!feof(arch)){ //feof final del archivo
		fscanf(arch,"%d\t",&reg.id_entrega);
		fscanf(arch,"%d\t",&reg.estado);
		fscanf(arch,"%s\t", reg.id_paquete);
		fscanf(arch,"%d\n",&reg.id_empleado);
		
		if((reg.estado==3)and acum==0){
			printf("ID Entrega:\tEstado:\t\tID Paquete:\tID Empleado:\n\n");
			acum=+1;
		}
		if(reg.estado==3) {
			strcpy(estado,"ENTREGADO");
				printf("%d\t\t", reg.id_entrega);
				printf("%s\t", estado);
				printf("%s\t\t",reg.id_paquete);
				printf("%d\n", reg.id_empleado);
				bandera=false;
				break;
		}
	}
	if(bandera) printf("El registro NO existe!!");
	fclose(arch);
}
