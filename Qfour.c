#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

typedef struct {
    Ponto sup_esq;
    Ponto inf_dir;
} Retangulo;

float calcular_area(Retangulo r) {
    float largura = (r.inf_dir.x - r.sup_esq.x);
    float altura = (r.sup_esq.y - r.inf_dir.y);
    return largura * altura;
}

float calcular_perimetro(Retangulo r) {
    float largura = (r.inf_dir.x - r.sup_esq.x);
    float altura = (r.sup_esq.y - r.inf_dir.y);
    return 2 * (largura + altura);
}

float calcular_diagonal(Retangulo r) {
    float largura = (r.inf_dir.x - r.sup_esq.x);
    float altura = (r.sup_esq.y - r.inf_dir.y);
    return (pow(largura, 2) + pow(altura, 2));
}

int main() {
    Retangulo r;

    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%f %f", &r.sup_esq.x, &r.sup_esq.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &r.inf_dir.x, &r.inf_dir.y);

    printf("Área do retângulo: %.1f\n", calcular_area(r));
    printf("Perímetro do retângulo: %.1f\n", calcular_perimetro(r));
    printf("Diagonal do retângulo: %.1f\n", calcular_diagonal(r));

    return 0;
}
