#ifndef BAGAGEM_H
#define BAGAGEM_H

#define MAX_COL_SIZE 255

// Estrutura para representar uma bagagem
typedef struct {
    int id_bagagem;                                    // Identificador da bagagem
    char imagem_raio_x[MAX_COL_SIZE];                  // Caminho para imagem de raio-X
    char status_verificacao[MAX_COL_SIZE];             // Status de verificação
    char tipo_ilicito[MAX_COL_SIZE];                   // Tipo de item ilícito (se aplicável)
    char descricao_ilicito[MAX_COL_SIZE];              // Descrição do item ilícito
    int quantidade_ilicito;                            // Quantidade do item ilícito
    char nome_passageiro[MAX_COL_SIZE];                // Nome do passageiro
    char documento_passageiro[MAX_COL_SIZE];           // Documento do passageiro
    char numero_voo[MAX_COL_SIZE];                     // Número do voo
    char data_hora_detecao[MAX_COL_SIZE];              // Data e hora da detecção
    char prioridade_alerta[MAX_COL_SIZE];              // Prioridade do alerta
    char acoes_recomendadas[MAX_COL_SIZE];             // Ações recomendadas
} Bagagem;

#endif // BAGAGEM_H
