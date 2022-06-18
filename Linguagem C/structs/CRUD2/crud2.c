#include <stdio.h>
#include <conio.h>

// structs
struct cadastro_pet // structs pets
{
    int ID_dono;
    int ID_pet;
    int anoPet;
    int diaPet;
    int mesPet;
    char nome[20];
    char porte[10];
    char castrado[15];
    int petAtivo;
    int qtdPetCad;
};
struct cadastro_pet pet[100];
struct cadastro_usuario // struct usuario
{
    int ID;
    char nome[20];
    int diaNasc;
    int mesNasc;
    int anoNasc;
    int ativo;
    ;
};
struct cadastro_usuario usuario[100];

// prototipos das funções principais
int menu();        // funcao dos menus
void inclusao();   // funcao de novo usuario
void alterar();    // funcao de alteracao de usuario existente
void exclusao();   // funcao de exclusao de dado
void listar();     // funcao de listagem de dados
void incluirPet(); // funcao para incluir pet

// prototipo das funcoes auxiliares
int redundancia(int n1);  // funcao de analise de redundancias
int uInativo();           // fucao encontrar usuario inativo
void desativar();         // desativar todas as posições
int localizar(int n1);    // localizar usuario
int print(int n1);        // função de impressao de dados
int pInativo();           // funcao para encontrar pet inativo
int localizarPet(int n1); // localizar pet
int verificacao(int n1);  // verificar se existe pet ativo no usuario
int printPet(int n1);     // funcao impressao dados de pet

// variaveis globais
int posPet;
int pos;
int qtdCad = 0;
int qtdPet = 0;
int main(void) // programa principal
{
    if (qtdCad == 0)
    {
        desativar();
    }
    int fun;
    do
    {
        fun = menu();
        switch (fun)
        {
        case 0:
            printf("\nSair\n");
            break;

        case 1:
            printf("\n***NOVO CADASTRO***");
            inclusao();
            break;
        case 2:
            printf("\n***ALTERAR DADOS***\n");
            alterar();
            break;

        case 3:
            printf("\n***EXCLUIR***\n");
            excluir();
            break;
        case 4:
            printf("\nLISTAR USUARIOS CADASTRADOS***\n");
            listar();
            break;
        case 5:
            printf("\n***CADASTRAR PET's***\n");
            incluirPet();
            break;
        }
    } while (fun != 0);
}

// declaração das funções
int menu(void) // funcao menu
{
    int fun;
    printf("\n***MENU PRINCIPAL***");
    printf("\n0 - Sair\n");
    printf("1 - Inclusao de novo usuario\n");
    printf("2 - Editar cadastro\n");
    printf("3 - Excluir cadastro\n");
    printf("4 - Listar usuarios cadastrados\n");
    printf("5 - Incluir novo pet\n");
    printf("Digite sua opcao: ");
    scanf("%i", &fun);
    if (fun < 0 || fun > 6)
    {
        printf("OPCAO INVALIDA\n\7");
    }
    while (fun < 0 || fun > 4)
    {
        return fun;
    }
}
void inclusao() // funcao de novo cadastro
{
    int aux;

    uInativo();                       // encontrar usuario inativo
    printf("\nDigite seu novo ID: "); // pedindo novo id de usuario
    scanf("%i", &aux);
    if (redundancia(aux) == 0)
    {
        return inclusao();
    }
    usuario[pos].ID = aux;                  // definir ID em posição de vetor
    printf("Digite seu nome de usuario: "); // pedir nome usuario
    setbuf(stdin, NULL);
    gets(usuario[pos].nome);
    printf("Digite seu dia de nascimento: "); // pedir dia nascimento
    scanf("%i", &usuario[pos].diaNasc);
    printf("Digite seu mes de nascimento: "); // pedir mes nascimento
    scanf("%i", &usuario[pos].mesNasc);
    printf("Digite seu ano de nascimento: "); // pedir ano nascimento
    scanf("%i", &usuario[pos].anoNasc);
    usuario[pos].ativo = 1; // ativando vetor de posicao de usuario
    qtdCad = qtdCad + 1;
    printf("\n***CADASTRO REALIZADO COM SUCESSO!!!***\n"); // cadastro efetuado com sucesso
    printf("ID de usuario: %i\n", usuario[pos].ID);
    printf("Nome de usuario: %s\n", usuario[pos].nome);
    printf("Data de nascimento: %i - %i - %i\n", usuario[pos].diaNasc, usuario[pos].mesNasc, usuario[pos].anoNasc);
}
void incluirPet() // funcao adicionar pet
{
    int aux;

    pInativo();
    printf("Digite o ID de usuario: ");
    scanf("%i", &aux);
    if (localizar(aux) == 0)
    {
        return menu;
    }
    pet[posPet].ID_pet = posPet;
    pet[posPet].ID_dono = aux;
    printf("Digite o nome do pet: ");
    setbuf(stdin, NULL);
    gets(pet[posPet].nome);
    printf("Digite o dia de nascimento do pet: ");
    scanf("%i", &pet[posPet].diaPet);
    printf("Digite o mes de nascimento do pet: ");
    scanf("%i", &pet[posPet].mesPet);
    printf("Digite o ano de nascimento do pet: ");
    scanf("%i", &pet[posPet].anoPet);
    printf("O pet e castrado? (Sim) (Nao)\nDigite: ");
    setbuf(stdin, NULL);
    gets(pet[posPet].castrado);
    printf("Porte: (Pequeno) (Medio) (Grande)\nDigite: ");
    setbuf(stdin, NULL);
    gets(pet[posPet].porte);
    pet[posPet].petAtivo = 1;

    printf("\n\n***PET CADASTRADO COM SUCESSO!!!***\n");
    printPet(posPet);
    qtdPet = qtdPet + 1;
    pet[posPet].qtdPetCad++;
}
void listar() // funcao listar
{
    int auxID;
    int auxL;
    printf("\n***LISTAR USUARIOS CADASTRADOS***\n");

    printf("O que deseja listar?\n1 - Pets ou 2 - Usuarios?\nEscolha: ");
    scanf("%i", &auxL);
    switch (auxL)
    {
    case 2:
        printf("Quantidade de usuarios cadastrados no sistema: %i\n\n", qtdCad);
        for (int x = 0; x < 101; x++)
        {
            if (usuario[x].ativo == 1)
            {
                printf("ID de usuario: %i\n", usuario[x].ID);
                printf("Nome de usuario: %s\n", usuario[x].nome);
                printf("Data de nascimento: %i - %i - %i\n\n", usuario[x].diaNasc, usuario[x].mesNasc, usuario[x].anoNasc);
            }
        }
        break;
    case 1:
        printf("\nDigite o ID de usuario do pet: ");
        scanf("%i", &auxID);
        for (int x = 0; x < 101; x++)
        {
            if (pet[x].ID_dono == auxID && pet[x].petAtivo == 1)
            {
                printf("\nID dono: %i", pet[x].ID_dono);
                printf("\nId do pet: %i", pet[x].ID_pet);
                printf("\nNome do pet: %s", pet[x].nome);
                printf("\nData de nascimento do pet: %i - %i - %i", pet[x].diaPet, pet[x].mesPet, pet[x].anoPet);
                printf("\nCastrado: %s", pet[x].castrado);
                printf("\nPorte: %s\n\n", pet[x].porte);
            }
        }
        break;
    default:
        printf("\nOpcao invalida!!!\n\7");
        break;
    }
}
void excluir() // excluir dado
{
    int aux;
    int confirm;

    printf("O que deseja excluir?\n1 - Pet\n2 - Usuario\nEscolha: ");
    scanf("%i", &aux);

    switch (aux)
    {
    case 1:
        printf("Digite o Id do pet: ");
        scanf("%i", &aux);
        if (localizarPet(aux) == 0)
        {
            return menu;
        }
        else

            printPet(aux);
        printf("\nDeseja realmente excluir o dado?\n1 - sim\n2 - nao");
        scanf("%i", &confirm);
        if (confirm == 1)
        {
            pet[posPet].petAtivo = 0;
            qtdPet--;
            printf("Pet excluido com sucesso\n");
        }
        else
        {
            return menu;
        }
        break;

    case 2:
        printf("\nDigite o ID de usuario que deseja excluir: ");
        scanf("%i", &aux);
        if (verificacao(aux) == 0)
        {
            return menu;
        }
        if (localizar(aux) == 0)
        {
            return menu;
        }
        print(pos);
        printf("\nEXCLUIR DADOS PERMANENTEMENTE?:\n1 - Sim\n2 - Nao\nEscolha: ");
        scanf("%i", &confirm);
        if (confirm == 1)
        {
            usuario[pos].ativo = 0;
            printf("Usuario excluido com sucesso!!!\n");
            qtdCad = qtdCad - 1;
            print(pos);
        }
        else
            return menu;
        break;

    default:
        break;
    }
}
void alterar() // função editar usuario
{
    int aux;

    printf("Qual dados deseja alterar?\n1 - PET\n2 - Usuario\nEscolha: ");
    scanf("%i", &aux);

    switch (aux)
    {
    case 1:
        printf("Digite o ID do pet que deseja alterar: ");
        scanf("%i", &aux);
        if (localizarPet(aux) == 0)
        {
            printf("Pet nao localizado!!!\n\n");
            return menu;
        }
        else
            printPet(posPet);
        printf("\nQual dado do pet deseja alterar?\n1 - ID de usuario\n2 - Nome do pet\n3 - Data de nascimento\n4 - Castrado\n5 - Porte\nEscolha: ");
        scanf("%i", &aux);

        switch (aux)
        {
        case 1:
            printf("Digite o ID do novo proprietario: ");
            scanf("%i", &aux);
            if (localizar(aux) == 0)
            {
                printf("USUARIO NAO LOCALIZADO\n");
                return alterar();
            }
            else
                pet[posPet].ID_dono = aux;
            printPet(posPet);
            break;
        case 2:
            printf("Qual o novo nome do pet?: ");
            setbuf(stdin, NULL);
            gets(pet[posPet].nome);
            printf("\n");
            printPet(posPet);
            break;
        case 3:
            printf("Digite o dia de nascimento do pet: \n");
            scanf("%i", &pet[posPet].diaPet);
            printf("Digite o mes de nascimento do pet: \n");
            scanf("%i", &pet[posPet].mesPet);
            printf("Digite o ano de nascimento do pet: \n");
            scanf("%i", &pet[posPet].anoPet);
            printPet(posPet);
            break;
        case 4:
            printf("O pet e castrado?\nSim\nNao ");
            setbuf(stdin, NULL);
            gets(pet[posPet].castrado);
            printf(posPet);
            break;
        case 5:
            printf("Qual o porte do pet?(Pequeno) (Medio) (Grande)");
            setbuf(stdin, NULL);
            fflush(stdin);
            gets(pet[posPet].porte);
            printPet(posPet);
            break;

        default:
            printf("Opcao invalida!!!\n\7");
            break;
        }
        break;
    case 2:
        printf("\nDigite o ID do usuario que deseja editar: ");
        scanf("%i", &aux);
        if (localizar(aux) == 0)
        {
            return menu;
        }
        else
            print(pos);
        int repet = 0;
        while (repet != 1)
        {
            printf("Qual dado deseja alterar?\n1 - Nome\n2 - Data de nascimento\nEscolha: ");
            scanf("%i", &aux);
            switch (aux)
            {
            case 1:
                printf("Digite o novo nome: ");
                fflush(stdin);
                gets(usuario[pos].nome);
                print(pos);
                repet = 1;
                break;
            case 2:
                printf("Digite seu dia de nascimento: ");
                scanf("%i", &usuario[pos].diaNasc);
                printf("Digite seu mes de nascimento: ");
                scanf("%i", &usuario[pos].mesNasc);
                printf("Digite seu ano de nascimento: ");
                scanf("%i", &usuario[pos].anoNasc);
                print(pos);
                repet = 1;
                break;
            default:
                printf("Opcao invalida\n\7");
                break;
            }
        }
    default:
        printf("Opcao invalida\n\7");
        break;
    }
}

// funções auxiliares
int print(int n1) // função de impressão de dados
{
    if (usuario[n1].ativo == 1)
    {
        printf("\nNumero de ID de usuario: %i\n", usuario[n1].ID);
        printf("Nome de usuario: %s\n", usuario[n1].nome);
        printf("Data de nascimento: %i - %i - %i\n", usuario[n1].diaNasc, usuario[n1].mesNasc, usuario[n1].anoNasc);
    }
    else
    {
        printf("USUARIO NAO LOCALIZADO!!!\n");
        return;
    }
}
int localizarPet(int n1) // função localizar usuario
{
    int aux;
    int x = 0;
    for (x = 0; pet[x].ID_pet != n1; x++)
    {
        if (x > 100)
        {
            printf("Pet inexistente no sistema!!!\n\n");
            return 0;
        }
    }
    posPet = x;
    return 1;
}
int localizar(int n1) // função localizar usuario
{
    int aux;
    int x = 0;
    for (x = 0; usuario[x].ID != n1; x++)
    {
        if (x > 100)
        {
            printf("Usuario inexistente no sistema!!!\n");
            return 0;
        }
    }
    pos = x;
    return 1;
}
int redundancia(int n1) //  funcao de analise de redundancia
{
    for (int x = 0; x <= qtdCad; x++)
    {
        if (usuario[x].ID == n1 && usuario[x].ativo == 1)
        {
            printf("ID ja utilizado!!!\n");
            return 0;
            return inclusao;
        }
    }
    return 1;
}
int uInativo() // encontrar usuario inativo
{
    int x = 0;
    for (x = 0; usuario[x].ID != 0; x++)
    {
        if (x > 100)
        {
            printf("SEM USUARIOS PARA NOVOS CADASTROS!!!\n");
            return menu();
        }
    }
    pos = x;
    return;
}
int pInativo() // funcao para encontrar pet inativo
{
    int x;
    if (qtdPet > 100)
    {
        printf("Sem espaco para novos cadastros!!!\n");
        return menu;
    }
    else
        for (x = 0; pet[x].petAtivo != 0; x++)
        {
        }
    posPet = x;
}
void desativar() // desativar todas as posições de pet e usuario
{
    for (int x = 0; x < 101; x++)
    {
        usuario[x].ativo = 0;
        pet[x].petAtivo = 0;
    }
    return;
}
int printPet(int n1) // imprimir dados pet

{
    if (pet[n1].petAtivo == 1)
    {
        printf("ID do dono: %i\n", pet[posPet].ID_dono);
        printf("ID do Pet: %i\n", pet[posPet].ID_pet);
        printf("Nome do pet: %s\n", pet[posPet].nome);
        printf("Data de nascimento: %i - %i - %i\n", pet[posPet].diaPet, pet[posPet].mesPet, pet[posPet].anoPet);
        printf("Castrado: %s\n", pet[posPet].castrado);
        printf("Porte: %s\n", pet[posPet].porte);
    }
}
int verificacao(int n1) // verificar usuario com pet ativo
{
    for (int x = 0; x < 101; x++)
    {
        if (pet[x].ID_dono == n1 && pet[x].petAtivo == 1)
        {
            printf("Voce nao pode excluir seu usario com pets ativo no sistema\nExclua seus pets e tente novamente\n");
            return 0;
        }
    }
    return 1;
}