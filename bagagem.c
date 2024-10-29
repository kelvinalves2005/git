#include <stdio.h>
#include <stdlib.h>
#include "bagagem.h"

int main() {
    // Preenchendo dados da bagagem para inserção
    Bagagem bagagem1 = {
        .id_bagagem = 1,
        .imagem_raio_x = "/imagens/bagagens/12345.jpg",
        .status_verificacao = "Contrabando detectado",
        .tipo_ilicito = "Drogas",
        .descricao_ilicito = "Cocaína em pó",
        .quantidade_ilicito = 2,
        .nome_passageiro = "Carlos Silva",
        .documento_passageiro = "AB123456",
        .numero_voo = "VOO123",
        .data_hora_detecao = "2024-10-28 14:30:00",
        .prioridade_alerta = "Alto",
        .acoes_recomendadas = "Apreensão"
    };

    // Gerando o comando SQL de inserção
    printf("Comando SQL de inserção:\n");
    printf("INSERT INTO Bagagens (imagem_raio_x, status_verificacao, tipo_ilicito, descricao_ilicito, quantidade_ilicito, "
           "nome_passageiro, documento_passageiro, numero_voo, data_hora_detecao, prioridade_alerta, acoes_recomendadas) "
           "VALUES ('%s', '%s', '%s', '%s', %d, '%s', '%s', '%s', '%s', '%s', '%s');\n",
           bagagem1.imagem_raio_x, bagagem1.status_verificacao, bagagem1.tipo_ilicito, bagagem1.descricao_ilicito,
           bagagem1.quantidade_ilicito, bagagem1.nome_passageiro, bagagem1.documento_passageiro, bagagem1.numero_voo,
           bagagem1.data_hora_detecao, bagagem1.prioridade_alerta, bagagem1.acoes_recomendadas);

    return 0;
}
