#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
void gotoxy (int x, int y){
	HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dWPos;
	dWPos.X =x;
	dWPos.Y= y;
	SetConsoleCursorPosition(hcon,dWPos);
}

enum MENU{OPC1=1, OPC2,OPC3, OPC4, OPC5, OPC6 };
int opc=0, x=0, y=0;
const char user[]="Andrea";
const char pass[]="1234";
const char mensaje[]="";
int id;

typedef struct{
		int id_entrega;
		int id_empleado;
		int estado;
		char id_paquete [7];
	}entrega;
	
	typedef struct{
		int id_empleado;
		int rol_registra;
		int rol_entrega;
		char nombre[30];
		char correo[30];
		char direccion[34];
		unsigned long long int telefono;
	}empleado;
	
entrega regEntrega[]={ 
		//ID ENTREGA//ID EMPLEADO//ESTADO//ID PAQUETE
						{12345, 854, 1, "PAQ123"},
						{45868,788,2,"PAQ456"},
						{75894,367,1,"PAQ789"},
						{53217,942,3,"PAQ963"},
						{78964,230,2,"PAQ258"},
						{66250,996,1,"PAQ147"},
						{99544,751,3,"PAQ753"},
						{36512,134,2,"PAQ951"},
						{63521,515,3,"PAQ026"},
						{42138,766,1,"PAQ428"}
					};

empleado regEmpleado[] = {
    {854, 1, 0, "Irving Yael", "irving@gmail.com", "Rosa Azul 113", 444186531},
    {788, 1, 1, "Andrea Morua", "moruaa@gmail.com", "1 de mayo 150", 44756964},
    {367, 0, 1, "Alma Bravo", "almita@gmail.com", "Rosedal 75", 444896584},
    {942, 1, 0, "Mateo Garcia", "mateog@gmail.com", "Allende 762", 4441238947},
    {230, 0, 1, "Alvaro Diaz", "alvaritoo@gmail.com", "Zaragoza 123", 444467120},
    {996, 1, 0, "Fernando Zavala", "ferxxo@gmail.com", "5 de mayo 73", 444153267},
    {751, 0, 1, "Jocelyn Reyes", "reyjoce@gmail.com", "Heraclito 46", 444632018},
    {134, 0, 1, "Erika Zamudio", "zamudio75@gmail.com", "Galeana 39", 444824671},
    {515, 1, 0, "Alejandra Lopez", "lopeale8@gmail.com", "Galilei 812", 444423554},
    {766, 1, 0, "Diego Jasso", "jassito@gmail.com", "Puerto Rico 756", 444456318}
};	
#include "prototipos.h"
#include "estructuras.h"
#include "archivos.h"
#include "validaciones.h"
#include "menu.h"
#include "decorar.h"
#include "buscar.h"
#include "modificar.h"
