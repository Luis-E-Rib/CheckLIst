#include <stdio.h>

int main() 
{
    float suspensao = 100.0;
    float combustivel = 100.0;
    float temperatura_motor = 80.0;

    int volta;

    for (volta = 1; volta <= 100; volta++) 
    {
        // Desgaste por volta
        suspensao -= 2.0;
        combustivel -= 1.5;
        temperatura_motor += 1.0;

        // Penalidade extras
        if (volta % 10 == 0) 
        {
            suspensao -= 3.0;
            temperatura_motor += 5.0;
        }

        // Alerta
        if (suspensao < 20.0) 
        {
            printf("ALERTA: Suspensao critica em %.2f%% na volta %d!\n", suspensao, volta);
        }

        if (temperatura_motor > 115.0) 
        {
            printf("ALERTA: Temperatura do motor elevada: %.2fC na volta %d!\n\n", temperatura_motor, volta);
        }

        // Falha
        if (suspensao <= 0.0) 
        {
            printf("\nFALHA: Suspensao chegou a zero na volta %d. Corrida encerrada.\n\n", volta);
            break;
        }

        if (combustivel <= 0.0) 
        {
            printf("\nFALHA: Combustivel acabou na volta %d. Corrida encerrada.\n\n", volta);
            break;
        }

        // Relatório
        if (volta % 20 == 0) 
        {
            printf("\n--- RELATORIO DE STATUS NA VOLTA %d ---\n", volta);
            printf("Suspensao: %.2f%%\n", suspensao);
            printf("Combustivel: %.2f%%\n", combustivel);
            printf("Temperatura do motor: %.2fC\n", temperatura_motor);
            printf("--------------------------------------\n");
        }
    }

    // Resultado
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Voltas completadas: %d\n", volta);
    printf("Suspensao final: %.2f%%\n", suspensao);
    printf("Combustivel final: %.2f%%\n", combustivel);
    printf("Temperatura final do motor: %.2fC\n", temperatura_motor);
    printf("========================\n");

}
