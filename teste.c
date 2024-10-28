#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 100
#define MAX_COL_SIZE 50

// Estrutura para representar um registro de aluno
typedef struct {
    int id;
    char nome[MAX_COL_SIZE];
    char curso[MAX_COL_SIZE];
    int idade;
} Aluno;

// Função para gerar um comando SQL de inserção para a tabela Alunos
void generate_insert_sql(const Aluno *aluno) {
    printf("INSERT INTO Alunos (id, nome, curso, idade) VALUES (%d, '%s', '%s', %d);\n",
           aluno->id, aluno->nome, aluno->curso, aluno->idade);
}

// Função para gerar um comando SQL de seleção para a tabela Alunos
void generate_select_sql(int id) {
    printf("SELECT * FROM Alunos WHERE id = %d;\n", id);
}

// Função para gerar um comando SQL de exclusão para a tabela Alunos
void generate_delete_sql(int id) {
    printf("DELETE FROM Alunos WHERE id = %d;\n", id);
}

// Função principal
int main() {
    // Criando um exemplo de aluno
    Aluno aluno1 = {1, "Alice", "Engenharia", 21};
    Aluno aluno2 = {2, "Bob", "Matemática", 25};

    // Gerando o comando SQL para inserção dos alunos
    printf("Comandos SQL de inserção:\n");
    generate_insert_sql(&aluno1);
    generate_insert_sql(&aluno2);

    // Gerando o comando SQL para selecionar um aluno com id 1
    printf("\nComando SQL de seleção para aluno com id 1:\n");
    generate_select_sql(1);

    // Gerando o comando SQL para deletar um aluno com id 2
    printf("\nComando SQL de exclusão para aluno com id 2:\n");
    generate_delete_sql(2);

    return 0;
}
