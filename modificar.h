//MODIFICAR EMPREADO
void modiEmpleadoDIRECCION(int idEmpleado){
	setlocale(LC_CTYPE, "Spanish");
	empleado reg={};
	FILE *arch1=NULL;
	FILE *arch2=NULL;
	bool bandera=false;
	
	if(!(arch1=fopen("empleado.xls","r"))){
		printf("Error al intentar leer el archivo");
		exit(1);
	}
	if(!(arch2=fopen("copia.xls","a+"))){
		printf("Error al intentar crear archivo");
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
			printf("\nDatos actuales del empleado a modificar\n\n");
			printf("%d\t", reg.id_empleado);
			printf("%s\t",reg.nombre);
			printf("%s\t",reg.direccion);
			printf("%llu\t",reg.telefono);
			printf("%s\t",reg.correo);
			printf("%d\t", reg.rol_registra);
			printf("%d\n",reg.rol_entrega);
			validaCadena("Nueva Direccion: ", reg.direccion, 34);
			
			bandera=true;	
		}
		fprintf(arch2,"%d\t",reg.id_empleado);
		fprintf(arch2,"%s\t",reg.nombre);
		fprintf(arch2,"%s\t",reg.direccion);
		fprintf(arch2,"%llu\t", reg.telefono);
		fprintf(arch2,"%s\t",reg.correo);
		fprintf(arch2,"%d\t",reg.rol_registra);
		fprintf(arch2,"%d\n",reg.rol_entrega);
	}	
	if(!bandera){
		printf("No se encuentra el registro");	
	}else{
		printf("\nDirección actualizada\n");	
	}
	fclose(arch1);
	fclose(arch2);
	remove("empleado.xls");
	rename("copia.xls","empleado.xls");
}

void modiEmpleadoTEL(int idEmpleado){
	setlocale(LC_CTYPE, "Spanish");
	empleado reg={};
	FILE *arch1=NULL;
	FILE *arch2=NULL;
	bool bandera=false;
	
	if(!(arch1=fopen("empleado.xls","r"))){
		printf("Error al intentar leer el archivo");
		exit(1);
	}
	if(!(arch2=fopen("copia.xls","a+"))){
		printf("Error al intentar crear archivo");
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
			printf("\nDatos actuales del empleado a modificar\n\n");
			printf("%d\t", reg.id_empleado);
			printf("%s\t",reg.nombre);
			printf("%s\t",reg.direccion);
			printf("%llu\t",reg.telefono);
			printf("%s\t",reg.correo);
			printf("%d\t", reg.rol_registra);
			printf("%d\n",reg.rol_entrega);
			reg.telefono=validaTel("Nuevo Telefono: ");
			
			bandera=true;	
		}
		fprintf(arch2,"%d\t",reg.id_empleado);
		fprintf(arch2,"%s\t",reg.nombre);
		fprintf(arch2,"%s\t",reg.direccion);
		fprintf(arch2,"%llu\t", reg.telefono);
		fprintf(arch2,"%s\t",reg.correo);
		fprintf(arch2,"%d\t",reg.rol_registra);
		fprintf(arch2,"%d\n",reg.rol_entrega);
	}	
	if(!bandera){
		printf("No se encuentra el registro");	
	}else{
		printf("\nTelefono actualizado\n");	
	}
	fclose(arch1);
	fclose(arch2);
	remove("empleado.xls");
	rename("copia.xls","empleado.xls");
}

void modiEmpleadoCORREO(int idEmpleado){
	setlocale(LC_CTYPE, "Spanish");
	empleado reg={};
	FILE *arch1=NULL;
	FILE *arch2=NULL;
	bool bandera=false;
	
	if(!(arch1=fopen("empleado.xls","r"))){
		printf("Error al intentar leer el archivo");
		exit(1);
	}
	if(!(arch2=fopen("copia.xls","a+"))){
		printf("Error al intentar crear archivo");
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
			printf("\nDatos actuales del empleado a modificar\n\n");
			printf("%d\t", reg.id_empleado);
			printf("%s\t",reg.nombre);
			printf("%s\t",reg.direccion);
			printf("%llu\t",reg.telefono);
			printf("%s\t",reg.correo);
			printf("%d\t", reg.rol_registra);
			printf("%d\n",reg.rol_entrega);
			validaCadena("Nuevo correo: ",reg.correo,30);
			
			bandera=true;	
		}
		fprintf(arch2,"%d\t",reg.id_empleado);
		fprintf(arch2,"%s\t",reg.nombre);
		fprintf(arch2,"%s\t",reg.direccion);
		fprintf(arch2,"%llu\t", reg.telefono);
		fprintf(arch2,"%s\t",reg.correo);
		fprintf(arch2,"%d\t",reg.rol_registra);
		fprintf(arch2,"%d\n",reg.rol_entrega);
	}	
	if(!bandera){
		printf("No se encuentra el registro");	
	}else{
		printf("\nCorreo actualizado\n");	
	}
	fclose(arch1);
	fclose(arch2);
	remove("empleado.xls");
	rename("copia.xls","empleado.xls");
}

void modiEmpleadoREGISTRA(int idEmpleado){
	setlocale(LC_CTYPE, "Spanish");
	empleado reg={};
	FILE *arch1=NULL;
	FILE *arch2=NULL;
	bool bandera=false;
	
	if(!(arch1=fopen("empleado.xls","r"))){
		printf("Error al intentar leer el archivo");
		exit(1);
	}
	if(!(arch2=fopen("copia.xls","a+"))){
		printf("Error al intentar crear archivo");
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
			printf("\nDatos actuales del empleado a modificar\n\n");
			printf("%d\t", reg.id_empleado);
			printf("%s\t",reg.nombre);
			printf("%s\t",reg.direccion);
			printf("%llu\t",reg.telefono);
			printf("%s\t",reg.correo);
			printf("%d\t", reg.rol_registra);
			printf("%d\n",reg.rol_entrega);
			reg.rol_registra=validaEntero("Cambia el rol de registra: ");
			
			bandera=true;	
		}
		fprintf(arch2,"%d\t",reg.id_empleado);
		fprintf(arch2,"%s\t",reg.nombre);
		fprintf(arch2,"%s\t",reg.direccion);
		fprintf(arch2,"%llu\t", reg.telefono);
		fprintf(arch2,"%s\t",reg.correo);
		fprintf(arch2,"%d\t",reg.rol_registra);
		fprintf(arch2,"%d\n",reg.rol_entrega);
	}	
	if(!bandera){
		printf("No se encuentra el registro");	
	}else{
		printf("\nRol Registra actualizado\n");	
	}
	fclose(arch1);
	fclose(arch2);
	remove("empleado.xls");
	rename("copia.xls","empleado.xls");
}

void modiEmpleadoENTREGA(int idEmpleado){
	setlocale(LC_CTYPE, "Spanish");
	empleado reg={};
	FILE *arch1=NULL;
	FILE *arch2=NULL;
	bool bandera=false;
	
	if(!(arch1=fopen("empleado.xls","r"))){
		printf("Error al intentar leer el archivo");
		exit(1);
	}
	if(!(arch2=fopen("copia.xls","a+"))){
		printf("Error al intentar crear archivo");
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
			printf("\nDatos actuales del empleado a modificar\n\n");
			printf("%d\t", reg.id_empleado);
			printf("%s\t",reg.nombre);
			printf("%s\t",reg.direccion);
			printf("%llu\t",reg.telefono);
			printf("%s\t",reg.correo);
			printf("%d\t", reg.rol_registra);
			printf("%d\n",reg.rol_entrega);
			reg.rol_entrega=validaEntero("Cambia el rol de entrega: ");
			
			bandera=true;	
		}
		fprintf(arch2,"%d\t",reg.id_empleado);
		fprintf(arch2,"%s\t",reg.nombre);
		fprintf(arch2,"%s\t",reg.direccion);
		fprintf(arch2,"%llu\t", reg.telefono);
		fprintf(arch2,"%s\t",reg.correo);
		fprintf(arch2,"%d\t",reg.rol_registra);
		fprintf(arch2,"%d\n",reg.rol_entrega);
	}	
	if(!bandera){
		printf("No se encuentra el registro");	
	}else{
		printf("\nRol Entrega actualizado\n");	
	}
	fclose(arch1);
	fclose(arch2);
	remove("empleado.xls");
	rename("copia.xls","empleado.xls");
}
//MODIFICAR ESTADO DE ENTREGA
void modiEntregaACTIVO(int idEntrega){
	setlocale(LC_CTYPE, "Spanish");
	entrega reg={};
	FILE *arch1=NULL;
	FILE *arch2=NULL;
	bool bandera=false;
	char estado[15]=" ";
	if(!(arch1=fopen("entrega.xls","r"))){
		printf("Error al intentar leer el archivo");
		exit(1);
	}
	if(!(arch2=fopen("copia2.xls","a+"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	while(!feof(arch1)){
		fscanf(arch1,"%d\t",&reg.id_entrega);
		fscanf(arch1,"%d\t",&reg.estado);
		fscanf(arch1,"%s\t", reg.id_paquete);
		fscanf(arch1,"%d\n",&reg.id_empleado);
		
		
		if(reg.id_entrega==idEntrega){
			printf("\nDatos actuales del empleado a modificar\n\n");
			printf("ID Entrega:\tEstado:\tID Paquete:\tID Empleado:\n\n");
			if(reg.estado==1){
				strcpy(estado,"ACTIVO");
			}
			if(reg.estado==2){
				strcpy(estado,"EN PROCESO");
			}
			if(reg.estado==3){
				strcpy(estado,"ENTREGADO");
			}
			printf("%d\t\t", reg.id_entrega);
			printf("%s\t", estado);
			printf("%s\t\t",reg.id_paquete);
			printf("%d\n", reg.id_empleado);
			
			reg.estado=1;
			bandera=true;	
		}	
		fprintf(arch2,"%d\t",reg.id_entrega);
		fprintf(arch2,"%d\t",reg.estado);
		fprintf(arch2,"%s\t",reg.id_paquete);
		fprintf(arch2,"%d\n", reg.id_empleado);
	}	
	if(!bandera){
		printf("No se encuentra el registro");	
	}else{
		printf("\nEstado del paquete modificado a ACTIVO\n");	
	}
	fclose(arch1);
	fclose(arch2);
	remove("entrega.xls");
	rename("copia2.xls","entrega.xls");
}

void modiEntregaPROCESO(int idEntrega){
	setlocale(LC_CTYPE, "Spanish");
	entrega reg={};
	FILE *arch1=NULL;
	FILE *arch2=NULL;
	bool bandera=false;
	char estado[15]=" ";
	if(!(arch1=fopen("entrega.xls","r"))){
		printf("Error al intentar leer el archivo");
		exit(1);
	}
	if(!(arch2=fopen("copia2.xls","a+"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	while(!feof(arch1)){
		fscanf(arch1,"%d\t",&reg.id_entrega);
		fscanf(arch1,"%d\t",&reg.estado);
		fscanf(arch1,"%s\t", reg.id_paquete);
		fscanf(arch1,"%d\n",&reg.id_empleado);
		
		
		if(reg.id_entrega==idEntrega){
			printf("\nDatos actuales del empleado a modificar\n\n");
			printf("ID Entrega:\tEstado:\tID Paquete:\tID Empleado:\n\n");
			if(reg.estado==1){
				strcpy(estado,"ACTIVO");
			}
			if(reg.estado==2){
				strcpy(estado,"EN PROCESO");
			}
			if(reg.estado==3){
				strcpy(estado,"ENTREGADO");
			}
			printf("%d\t\t", reg.id_entrega);
			printf("%s\t", estado);
			printf("%s\t\t",reg.id_paquete);
			printf("%d\n", reg.id_empleado);
			
			reg.estado=2;
			bandera=true;	
		}	
		fprintf(arch2,"%d\t",reg.id_entrega);
		fprintf(arch2,"%d\t",reg.estado);
		fprintf(arch2,"%s\t",reg.id_paquete);
		fprintf(arch2,"%d\n", reg.id_empleado);
	}	
	if(!bandera){
		printf("No se encuentra el registro");	
	}else{
		printf("\nEstado del paquete modificado a EN PROCESO\n");	
	}
	fclose(arch1);
	fclose(arch2);
	remove("entrega.xls");
	rename("copia2.xls","entrega.xls");
}

void modiEntregaENTREGADO(int idEntrega){
	setlocale(LC_CTYPE, "Spanish");
	entrega reg={};
	FILE *arch1=NULL;
	FILE *arch2=NULL;
	bool bandera=false;
	char estado[15]=" ";
	if(!(arch1=fopen("entrega.xls","r"))){
		printf("Error al intentar leer el archivo");
		exit(1);
	}
	if(!(arch2=fopen("copia2.xls","a+"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	while(!feof(arch1)){
		fscanf(arch1,"%d\t",&reg.id_entrega);
		fscanf(arch1,"%d\t",&reg.estado);
		fscanf(arch1,"%s\t", reg.id_paquete);
		fscanf(arch1,"%d\n",&reg.id_empleado);
		
		
		if(reg.id_entrega==idEntrega){
			printf("\nDatos actuales del empleado a modificar\n\n");
			printf("ID Entrega:\tEstado:\tID Paquete:\tID Empleado:\n\n");
			if(reg.estado==1){
				strcpy(estado,"ACTIVO");
			}
			if(reg.estado==2){
				strcpy(estado,"EN PROCESO");
			}
			if(reg.estado==3){
				strcpy(estado,"ENTREGADO");
			}
			printf("%d\t\t", reg.id_entrega);
			printf("%s\t", estado);
			printf("%s\t\t",reg.id_paquete);
			printf("%d\n", reg.id_empleado);
			
			reg.estado=3;
			bandera=true;	
		}	
		fprintf(arch2,"%d\t",reg.id_entrega);
		fprintf(arch2,"%d\t",reg.estado);
		fprintf(arch2,"%s\t",reg.id_paquete);
		fprintf(arch2,"%d\n", reg.id_empleado);
	}	
	if(!bandera){
		printf("No se encuentra el registro");	
	}else{
		printf("\nEstado del paquete modificado a ENTREGADO\n");	
	}
	fclose(arch1);
	fclose(arch2);
	remove("entrega.xls");
	rename("copia2.xls","entrega.xls");
}
