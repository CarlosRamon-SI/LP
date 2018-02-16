#include <stdio.h>
 
int main() {
     
    double pi = 3.14159,raio,raio3,volume;
    scanf("%lf",&raio);
    raio3 = raio;
    for(int i=0;i < 2;i++)
        raio3 *= raio;
    volume = 4/3.0*pi*raio3;
    printf("VOLUME = %.3lf",volume);
                         
    return 0;
}
