//validaciones.h
int validaEntero(const char []);
float validaFlotante (const char []);
void validaCadena(const char[],char[],int);
unsigned long long int validaTel(const char mensaje[]);
void usuario();
void contrasenia();

//decorar.h
void portada();
void datos();

//menu.h
void submenu1();
void submenu2();
void submenu3();
void menu(int,int,int,int);
void menuProyecto();
void menumodificar();
void menuconsultar();
void menuconsultar2();
void menumodificar2();
void menuestado();

//estructuras.h
void imprimrEstructura();
entrega agregar();
empleado agregar2();

bool buscarEmpleadoAGREGAR(int);
bool buscarEntregaAGREGAR(int);
bool buscarEntregaAGREGAR2(char[]);
//archivos.h
void crearArchEntrega();
void crearArchEmpleado();
void leerArchEntrega();
void leerArchEmpleado();
void agregarArchEntrega();
void agregarArchEmpleado();
//consultas de empleado
void buscarEmpleadoID();
void buscarEmpleadoTEL();
void buscarEmpleadoCORREO();
void buscarEmpleadoREGISTRA();
void buscarEmpleadoENTREGA();

//consultas de entrega
void buscarEntregaID();
void buscarEntregaACTIVO();
void buscarEntregaPROCESO();
void buscarEntregaENTREGADO();
//buscar id repetidos entrega
int buscarEntregaID2(int);
//modificar de empleado
void modiEmpleadoDIRECCION(int);
void modiEmpleadoTEL(int);
void modiEmpleadoCORREO(int);
void modiEmpleadoREGISTRA(int);
void modiEmpleadoENTREGA(int);
//buscar id repetidos empleados
int buscarEmpleadoID2(int);
//modificar de entrega
void modiEntregaACTIVO(int);
void modiEntregaPROCESO(int);
void modiEntregaENTREGADO(int);

//eliminar de entrega
void eliminarEntrega(int);
//eliminar de empleado
void eliminarEmpleado(int);
