//Elabora  due metodi minVettore e maxVettore che riceve in ingresso un Array di interi e restituisce il minimo e il massimo degli interi presenti
//nell’Array. Gestire il risultato in un metodo main.   
//Esempio:  v=[1,12,4,2,7] min=1 , max=7

#include <stdio.h>

int main() {
	int num;
	int dim;
	int i;
	int variabili;
    int v[dim];
    int n = sizeof(v) / sizeof(v[0]);
   	
   	printf("Inserire numero valori da comparare:\n");
	scanf("%d", &num);
	
	for(i = 0; i<num; i++)
	{
		printf("Inserire i valori:\n");
		scanf("%d", &variabili);
		v[dim] = num;
	}
	printf("Questo e il valore massimo:%d\n", maxv(v, num));
	printf("Questo e il valore minimo:%d\n", minv(v, num));
}
	
int maxv(int v[], int n) {
	int i;
    int max = v[0];
   
    for (i = 0; i <= n-1; i++) {
		if (v[i] > max) {
        max = v[i];
        }
    }
   
    return max;
}


int minv(int v[], int n) {
	int i;
    int min = v[0];
   
    for (i = 0; i < n-1 ; i++) {
    	if (v[i] < min) {
        min = v[i];
        }
    }
   
    return min; 
}

