#include <iostream>
#include <cmath>
using namespace std;
/*
 * Reto #37
 * LOS LANZAMIENTOS DE "THE LEGEND OF ZELDA"
 * Fecha publicación enunciado: 14/09/22
 * Fecha publicación resolución: 19/09/22
 * Dificultad: MEDIA
 *
 * Enunciado: ¡Han anunciado un nuevo "The Legend of Zelda"! Se llamará "Tears of the Kingdom"
 * y se lanzará el 12 de mayo de 2023.
 * Pero, ¿recuerdas cuánto tiempo ha pasado entre los distintos "The Legend of Zelda" de la historia?
 * Crea un programa que calcule cuántos años y días hay entre 2 juegos de Zelda que tú selecciones.
 * - Debes buscar cada uno de los títulos y su día de lanzamiento (si no encuentras el día exacto
 *   puedes usar el mes, o incluso inventártelo)
 *
 * Información adicional:
 * - Usa el canal de nuestro Discord (https://mouredev.com/discord) "🔁reto-semanal"
 *   para preguntas, dudas o prestar ayuda a la comunidad.
 * - Tienes toda la información sobre los retos semanales en
 *   https://retosdeprogramacion.com/semanales2022.
 *
 */
 
// class Zeldalist{
// 	private:
// 		int dia;
// 		int mes;
// 		int year;
// 	public:
// 		Zeldalist(int dia,int mes,int year){
// 			this->dia=dia;
// 			this->mes=mes;
// 			this->year=year;
// 		}
// 		string Ocarina_of_Time(int dia,int mes,int year){
//		 
// 			dia=21;
// 			mes=11;
// 			year=1998;
// 			return dia, mes, year;
// 	}
// };
// 
 
int main(int argc, char** argv) {
	
	int Ocarina_of_Time[3]={21,11,1998};
	int Majoras_Mask[3]={27,4,2000};	
	int dias = (abs(Ocarina_of_Time[1]-Majoras_Mask[1])*30+abs((Ocarina_of_Time[0]-Majoras_Mask[0])));
	cout<<"los titulos tienen: "<<abs(Ocarina_of_Time[2]-Majoras_Mask[2])<<" anios de diferencia y "<< dias ;
	
	
	
	
	
	
	
	
	return 0;
}
