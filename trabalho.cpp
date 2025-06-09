#include <stdio.h>
#include <string.h>

struct Materia {
    char nome[30];
    double nota;
};

struct Pessoa {
    char nome[50];
    int idade;
    char matricula[30];
    char curso[30];
    char campusOrigem[50];
    struct Materia materia;
};

void media(double nota) {
    if (nota >= 6) {
        printf("Situacao: Aprovado!\n");
    } else if (nota >= 5) {
        printf("Situacao: Nao passou, Fazer prova final.\n");
    } else {
        printf("Situacao: Reprovado.\n");
    }
}

int main() {
    struct Pessoa alunos[3];

    strcpy(alunos[0].nome, "Sergio Luiz");
    alunos[0].idade = 20;
    strcpy(alunos[0].matricula, "202308267949");
    strcpy(alunos[0].curso, "Ciencia da Computacao");
    strcpy(alunos[0].materia.nome, "Estrutura de dados");
    strcpy(alunos[0].campusOrigem, "Campus Niteroi");
    alunos[0].materia.nota = 8.5;

    strcpy(alunos[1].nome, "Maria Clara");
    alunos[1].idade = 22;
    strcpy(alunos[1].matricula, "202309187654");
    strcpy(alunos[1].curso, "Engenharia de Software");
    strcpy(alunos[1].materia.nome, "Programacao Orientada a Objetos");
    strcpy(alunos[1].campusOrigem, "Campus Nova Iguacu");
    alunos[1].materia.nota = 5.5;

    strcpy(alunos[2].nome, "Joao Pedro");
    alunos[2].idade = 19;
    strcpy(alunos[2].matricula, "202310456321");
    strcpy(alunos[2].curso, "Sistemas de Informacao");
    strcpy(alunos[2].materia.nome, "Algoritmos");
    strcpy(alunos[2].campusOrigem, "Campus Cabo Frio");
    alunos[2].materia.nota = 4.3;

    for (int i = 0; i < 3; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Matricula: %s\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
        printf("Campus de origem: %s\n", alunos[i].campusOrigem);
        printf("Materia: %s\n", alunos[i].materia.nome);
        printf("Nota: %.2f\n", alunos[i].materia.nota);
        media(alunos[i].materia.nota);
    }

    return 0;
}
