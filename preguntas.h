#ifndef __PREGUNTAS_H__
#define __PREGUNTAS_H__

#define MAX 0x100
#define OPCIONES 7
struct TPregunta {
    char enunciado[MAX];
    char respuestas[OPCIONES][MAX];
    int solucion;
};
   int pregunta_poco_votada1, 
		pregunta_poco_votada2, 
		pregunta_mas_votada,
		pregunta_poco_votada3;
   int probabilidad_respuesta_1,
       probabilidad_respuesta_2,
       probabilidad_respuesta_3,
       probabilidad_respuesta_4;
   int lo_que_queda;
struct TPregunta concurso[] = {
//Pregunta 1
     {"¿Cual ha sido el principal problema que ha tenido\n\tRocco Siffredi en el rodaje de sus 1300 peliculas porno?\n\n\n",
	{ "Gatillazo", "Maridos celosos", "Picadura de avispa en el pene", "Actrices estrechas", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 3
    }, 
//Pregunta 2
     {
	"¿Que es el punto G?\n\n\n",
	{"Centro de gravedad universal", "Zona femenina muy sensible", "Epicentro de un terremoto", "Boton para activar la bomba H", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 2
    },
//Pregunta 3     
    {
	"Segun el refranero popular, quien avisa...\n\n\n",
	{"...no es traidor", "...es un pregonero", "...es un pardillo", "...llama a los bomberos", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 1
    },
//Pregunta 4    
    {
	"Que seña se utiliza en mus para indicar 'duples'?\n\n\n",
	{"Tocarse el lobulo izquierdo", "Sacar la lengua", "Levantar las dos cejas", "Guiñar el ojo", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 3
    },
//Pregunta 5    
    {
	"En psicologia, ¿que palabra expresa \n\tel placer derivado de las desgracias de otros?\n\n\n",
	{"Pfahlbauten", "Apfelstrudel", "Werkeerstockung", "Schadenfreude", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 4
    },
//Pregunta 6    
    {
	"La persona que practica el deporte del JUDO,\n\trecibe el nombre de...\n\n\n",
	{"Judista", "Judoka", "Judogui", "Judosen", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 2
    },
//Pregunta 7    
    {
	"¿Que edad tenia Drew Barrymore cuando protagonizo\n\tla pelicula 'E.T.'?\n\n\n",
	{"6 años", "7 años", "8 años", "9 años", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 1
    },
//Pregunta 8    
    {
	"¿Como se llama la sensacion mental de que \n\ttu pene se encoge hasta desaparecer?\n\n\n",
	{"Sindrome de Koro", "Sindrome de Frigoli", "Sindrome de Charles", "Sindrome de Cotard", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 1
    },
//Pregunta 9    
    {
	"¿Cual de los siguientes nombres no corresponde \n\ta un navegador de internet?\n\n\n",
	{"Firefox", "Opera", "Facebook", "Chrome", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 3
    },
//Pregunta 10    
    {
	"¿De que fruta se obtiene la copra?\n\n\n",
	{"Piña", "Cereza", "Coco", "Albaricoque", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 3
    },
//Pregunta 11    
    {
	"¿Por que fue detenido y fichado en 1938,  \n\tel actor Frank Sinatra?\n\n\n",
	{"Fue acusado de 'Seduccion'", "Por deudas de juego", "Por colaborar con la mafia", "Por infringir la ley seca", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 1
    },
//Pregunta 12    
    {
	"¿Cual de estos animales no esta extinguido? \n\n\n",
	{"Mamut", "Pterodactilo", "Tiranosaurio", "Hamster", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 4
    },
//Pregunta 13    
    {
	"Si los lados de un cuadrado miden 3 cm, ¿Cuantos \n\tcentimetros cuadrados medira su area? \n\n\n",
	{"3", "6", "9", "12", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 3
    },
//Pregunta 14     
    {
	"Es un baile español: 'paso ...' \n\n\n",
	{"Simple", "Doble", "Cuadruple", "Quintuple", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 2
    },
//Pregunta 15    
{
	"Decimos que una persona no da pie con bola cuando no... \n\n\n",
	{"Duerme", "Acierta", "Se divierte ", "Come", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 2
    },
//Pregunta 16    
{
	"En los baños suelo estar aunque provengo del mar... \n\n\n",
	{"La esponja", "El frigorifico", "El espejo", "La papelera", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 1
    },
//Pregunta 17    
{
	"¿Cual era el nombre de pila del conocido\n\tmafioso Al Capone? \n\n\n",
	{"Alfonso", "Alfredo", "Angelo", "Alessandro", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 1
    },
//Pregunta 18    
{
	"¿Que significa la expresion 'EUREKA!'?\n\n\n",
	{"¡Ya llegue!", "¡Holaa!", "¡Adios!", "¡Lo encontre!", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 4
    },
//Pregunta 19    
{
	"¿A que velocidad maxima pueden correr las gacelas?\n\n\n",
	{"156 KM/H", "97 KM/H", "43 KM/H", "72 KM/H", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 2
    },
//Pregunta 20    
{
	"¿Cuantas personas se calcula que mueren al\n\taño por caida de coco?\n\n\n",
	{"10", "150", "25", "5", "Comodin del 50%", "Comodin del publico", "Comodin de 30 segundos de busqueda"}, 2
    }
};

#endif
