#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "preguntas.h"
#include "preguntas50.h"
#include <unistd.h>

#define NMAX 5

int retorno;
int vidas;

void comodin_busqueda(){

    printf("Guarda tus datos de firefox\n");

    system("firefox&");
    printf("¡La cuenta atras comienzaa!\n");

    for(int i = 35 ; i>0; i--){
	printf("Tiempo restante: %i\n", i);
	system("sleep 1");
    }

    system("killall firefox");

    printf("¿Cual es tu respuesta? Te recordamos las opciones\n");	

}
/*   Calcula los porcentajes del 50%   */
void probabilidades_pregunta_comodin_publico(int preguntando){

    if(preguntando == 0 || preguntando == 3 || preguntando == 8 || preguntando == 9 || preguntando == 12 ){
	probabilidad_respuesta_1 = pregunta_poco_votada1;
	probabilidad_respuesta_2 = pregunta_poco_votada2;
	probabilidad_respuesta_3 = pregunta_mas_votada;
	probabilidad_respuesta_4 = lo_que_queda;
    }

    if(preguntando == 1 || preguntando == 5 || preguntando == 13 || preguntando == 14 || preguntando == 18 || preguntando == 19){
	probabilidad_respuesta_1 = pregunta_poco_votada1;
	probabilidad_respuesta_3 = pregunta_poco_votada2;
	probabilidad_respuesta_2 = pregunta_mas_votada;
	probabilidad_respuesta_4 = lo_que_queda;
    }
    if(preguntando == 2 || preguntando == 6 || preguntando == 7 || preguntando == 10 || preguntando == 15|| preguntando == 16){
	probabilidad_respuesta_2 = pregunta_poco_votada1;
	probabilidad_respuesta_3 = pregunta_poco_votada2;
	probabilidad_respuesta_1 = pregunta_mas_votada;
	probabilidad_respuesta_4 = lo_que_queda;
    }
    if(preguntando == 4 || preguntando == 11 || preguntando == 17){
	probabilidad_respuesta_2 = pregunta_poco_votada1;
	probabilidad_respuesta_3 = pregunta_poco_votada2;
	probabilidad_respuesta_4 = pregunta_mas_votada;
	probabilidad_respuesta_1 = lo_que_queda;
    }

}
/*   Calcula los porcentajes del 50%   */
void calcular_comodin_publico(int preguntando){

    pregunta_mas_votada = (rand()% 15 + 35);
    lo_que_queda = 100 - pregunta_mas_votada;
    pregunta_poco_votada1 = (rand()% lo_que_queda + 1);
    lo_que_queda = 100 - (pregunta_mas_votada + pregunta_poco_votada1);
    pregunta_poco_votada2 = (rand()% lo_que_queda + 1);
    lo_que_queda = 100 - (pregunta_mas_votada + pregunta_poco_votada1 + pregunta_poco_votada2);

    probabilidades_pregunta_comodin_publico(preguntando);

}
/*   Calcula los porcentajes del 50%   */
void comodin_publico(int probabilidad_respuesta_1, int probabilidad_respuesta_2, int probabilidad_respuesta_3, int probabilidad_respuesta_4){	    
    system("clear");
    printf("\n\tEl publico está votando...Los resultados se mostraran en el monitor,\n\tcuando el publico haya votado por su respuesta correcta...\n\n\n");

    system("sleep 2");
    printf("\n\n\t...¡Y los resultados son los siguientes!: \n");
    system("sleep 2");
    printf("\n\n\n\tPregunta 1: %i", probabilidad_respuesta_1);
    printf("\tPregunta 2: %i", probabilidad_respuesta_2);
    printf("\tPregunta 3: %i", probabilidad_respuesta_3);
    printf("\tPregunta 4: %i", probabilidad_respuesta_4);
    printf("\n");
    system("sleep 10");
}
/*   Imprime las preguntas sin comodin de 50%    */
    void imprime_pregunta(int n){
	system("clear");
	printf("\tPregunta: %s\n", concurso[n].enunciado);
	printf( "\n");
	for(int op=0; op<OPCIONES; op++){
	    if(op < 4)
		printf("\t\t%i.- %s\n", op + 1, concurso[n].respuestas[op]);
	    else{
		if(op == 4)
		    printf("\n\n\n");
		printf("\t\t%i.- %s\n", op + 1, concurso[n].respuestas[op]);
	    }
	}

    }
/*   Imprime las preguntas del comodin 50%    */ 
    void imprime_pregunta_comodin_50(int n){
	system("clear");
	printf("\tPregunta: %s\n", comodin_50[n].enunciado);
	printf("\tY las dos posibles respuestas son...\n\n");
	printf( "\n");
	for(int op=0; op<OPCIONES_50; op++){
	    if(op < 4)
		printf("\t\t%i.- %s\n", op + 1, comodin_50[n].respuestas[op]);
	    else{
		if(op == 4)
		    printf("\n\n\n");
		if(comodin_50[n].respuestas[op] != " ")
		    printf("\t\t%i.- %s\n", op + 1, comodin_50[n].respuestas[op]);
	    }
	}

    }
/*   Evalua la respuesta    */
    int mira_si_es_correcta(int preguntando){
	int respuesta;
	int he_pasado = 0;
	printf("\n\nRespuesta: ");
	scanf(" %i", &respuesta);

	if (respuesta == concurso[preguntando].solucion){
	    printf("Y la respuesta es...");
	    printf("¡CORRECTAAAAA! Pasamos a la siguiente pregunta...");
	    printf("\n\n");
	    system("sleep 3");
	    retorno = 1;
	}
	if (respuesta == 5){
	    imprime_pregunta_comodin_50(preguntando);
	    mira_si_es_correcta(preguntando);
	}
	if (respuesta == 6){
	    calcular_comodin_publico(preguntando);
	    comodin_publico(probabilidad_respuesta_1, probabilidad_respuesta_2, probabilidad_respuesta_3, probabilidad_respuesta_4);
	    imprime_pregunta(preguntando);
	    mira_si_es_correcta(preguntando);

	}
	if (respuesta == 7){

	    comodin_busqueda();
	    imprime_pregunta(preguntando);
	    mira_si_es_correcta(preguntando);

	}

	if(respuesta != concurso[preguntando].solucion && respuesta != 5 && respuesta != 6 && respuesta != 7){
	    printf("Y la respuesta es...");
	    printf("¡INCORRECTAAAA! La respuesta correcta era: %s\n",    concurso[preguntando].respuestas[concurso[preguntando].solucion-1]);
	    printf("\n\n");
	    system("sleep 4");
	    vidas --;
	    retorno = 0;

	    printf("Al fallar acabas de perder una vida, tu numero de vidas restantes ahora es: %i ", vidas);
	    printf("\n\n");
	    system("sleep 3");
	}
	printf("\n");
    }
/*   Lleva a las funciones para imprimir y mirar evaluar la respuesta    */
    int pregunta(int preguntando){
	imprime_pregunta(preguntando);   
	mira_si_es_correcta(preguntando);
    }
/*   Calcula numeros aleatorios   */
void calcular_numeros(int numero[]){
	int numeros_encontrados = 1;
	bool numero_igual = false;

	numero[1] = 1+(rand()%20);
	for(int n=1; n<=20; n++){

	    do{
		numero_igual = false;
		numero[n] = 1+(rand() % 20);
		for(int c=0; c<numeros_encontrados; c++)
		    if(numero[n] == numero[c])
			numero_igual = true;
		if(!numero_igual)
		    numeros_encontrados++;
	    }while(numero_igual == true);
	}
    }
/*   FUNCION PRINCIPAL   */
    int main(){
	int numero[NMAX];
	int respuesta;
	int preguntando;
	int total_preguntas = sizeof(concurso) / sizeof(struct TPregunta);
	srand(time(NULL));
	calcular_numeros(numero);
	retorno = 1;
	vidas = 3;
	for(int i=1;i <= 19 && vidas>0;i++){
	    for(int b=0;b<19 && vidas>0;b++){
		    preguntando = b;
		if(numero[i] == b)
		    pregunta(preguntando);
	    }
	}
    }
