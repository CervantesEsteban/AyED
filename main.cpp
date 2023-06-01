#include <stdio.h>
#include <math.h>

int main() {
    double pi = 0;
    int denominador = 1;
    int signo = 1;
    int iteraciones = 0;
    
    while (fabs(pi - 3.141592) > 0.000001) {
        double termino_actual = (4.0 * signo) / denominador;
        pi += termino_actual;
        signo *= -1;
        denominador += 2;
        iteraciones += 1;
        
        if (iteraciones >= 100000) {
            break;
        }
    }
    
    printf("Valor aproximado de pi: %lf\n", pi);
    printf("Número de iteraciones realizadas: %d\n", iteraciones);
    
    return 0;
}
