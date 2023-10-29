#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

char username[65], password[10], user[20];
double balance = 0;
double totalContribution = 0, totalIncome = 0;
int accountNumber;

//Função responsavel por validar o login.
int login () 
{
    int response = 0;
    char userT[20], passwordT[10];

    printf("Digite seu nome de usuario: ");
    fgets(userT,20,stdin);

    printf("Digite sua Senha: ");
    fgets(passwordT,10,stdin);

    //A função strcmp faz parte da biblioteca <string.h> e permite fazer a comparação do conteudo de cada string
    if(strcmp(userT, user) == 0 && strcmp(passwordT, password) == 0)
        response = 1;

    return response;
}


//Função que de fato inicia o programa apos validar o login
void play(int check)
{
    if(check == 0)
    {       
        printf("\nUsuario ou senha incorretos!\n\n");
        //Uso de recurção 
        play(login());        
    } 
    else 
    {
        printf("\n\nBem-vindo a sua conta bancaria, %s\n\n",username);
        accountNumber = rand() % 9000 + 1000;
    }
}


//Função responsavel por criar um novo usuario.
void createUser() 
{
    printf("Ola!\nBem-vindo ao nosso programinha extremamente util.\nPrepare-se para uma experiencia totalmente imersiva e divertia!(confia)\n");

    printf("\nInicialmente, informe seu primeiro e segundo nome: ");
    //A função fgets faz a leitura da minha string sem problemas com espaços em branco.
    fgets(username,65,stdin);
    printf("Para dar continuidade, por favor crie um nome de usuario para que seja feito o login: ");
    fgets(user,20,stdin);
    printf("Perfeito! Agora crie uma senha para que você possa acessar a sua conta: ");
    fgets(password,10,stdin);

    printf("\nShow! Aguarde um momento, o sistema esta iniciando...\n\n");

    //Isso e possivel pois a função login retorna um numero inteiro
    play(login());
}

/*==================================================================================================*/
/*                                               Conversor                                          */




/*Funções de Conversão para compra das Moedas*/

/*================================================================================================*/

/*Conversão de Dólar Americano*/
int usd(){
    double valorconv, dolares;

    printf("Quanto você deseja converter?\n\n\n");
    scanf("%lf", &valorconv);
        if(valorconv<=balance){
            dolares = valorconv/5.03;
        }
        else{
            printf("Quantia excede o Saldo atual, favor solicite outro valor.\n");
        }
        return dolares;
}

/*Conversão de Euro*/
int eur(){
    double valorconv, euros;

    printf("Quanto você deseja converter?\n\n\n");
    scanf("%lf", &valorconv);
        if(valorconv<=balance){
            euros = valorconv/5.28;
        }
        else{
            printf("Quantia excede o Saldo atual, favor solicite outro valor.\n");
        }
        return euros;
}

/*Conversão de Iene Japonês*/
int jpy(){
    double valorconv, ienes;

    printf("Quanto você deseja converter?\n\n\n");
    scanf("%lf", &valorconv);
        if(valorconv<=balance){
            ienes = valorconv/0.33;
        }
        else{
            printf("Quantia excede o Saldo atual, favor solicite outro valor.\n");
        }
        return ienes;
}

/*Conversão de Libra*/
int gbp(){
    double valorconv, libras;

    printf("Quanto você deseja converter?\n\n\n");
    scanf("%lf", &valorconv);
        if(valorconv<=balance){
            libras = valorconv/6.06;
        }
        else{
            printf("Quantia excede o Saldo atual, favor solicite outro valor.\n");
        }
        return libras;
}

/*Conversão de Franco*/
int chf(){
    double valorconv, franco;

    printf("Quanto você deseja converter?\n\n\n");
    scanf("%lf", &valorconv);
        if(valorconv<=balance){
            franco = valorconv/5.58;
        }
        else{
            printf("Quantia excede o Saldo atual, favor solicite outro valor.\n");
        }
        return franco;
}

/*Conversão de Dólar Australiano*/
int aud(){
    double valorconv, dolaust;

    printf("Quanto você deseja converter?\n\n\n");
    scanf("%lf", &valorconv);
        if(valorconv<=balance){
            dolaust = valorconv/3.16;
        }
        else{
            printf("Quantia excede o Saldo atual, favor solicite outro valor.\n");
        }
        return dolaust;
}

/*Conversão de Dólar Canadense*/
int cad(){
    double valorconv, dolcan;

    printf("Quanto você deseja converter?\n\n\n");
    scanf("%lf", &valorconv);
        if(valorconv<=balance){
            dolcan = valorconv/3.63;
        }
        else{
            printf("Quantia excede o Saldo atual, favor solicite outro valor.\n");
        }
        return dolcan;
}

/*=======================================================================================================*/

/*Funções para Venda de Moeda Extrangeira*/

/*Função para a venda de Dólares Americanos*/

int vendausd(){
    double valorvenda, dolares;

    printf("Quanto você deseja converter?\n\n\n");
    scanf("%lf", &dolares);
        if(valorvenda<=10000){
            valorvenda = dolares*5.03;
        }
        else{
            printf("Quantia excede o Saldo atual, favor solicite outro valor.\n");
        }
        return valorvenda;
}

/*Função para a venda de Euros*/

int vendaeur(){
    double valorvenda, euros;

    printf("Quanto você deseja converter?\n\n\n");
    scanf("%lf", &euros);
        if(valorvenda<=10000){
            valorvenda = euros*5.28;
        }
        else{
            printf("Quantia excede o Saldo atual, favor solicite outro valor.\n");
        }
        return valorvenda;
}

/*Função para a venda de Iene Japonês*/

int vendajpy(){
    double valorvenda, ienes;

    printf("Quanto você deseja converter?\n\n\n");
    scanf("%lf", &ienes);
        if(valorvenda<=100000){
            valorvenda = ienes*0.33;
        }
        else{
            printf("Quantia excede o Saldo atual, favor solicite outro valor.\n");
        }
        return valorvenda;
}

/*Função para a venda de Libras*/

int vendagbp(){
    double valorvenda, libras;

    printf("Quanto você deseja converter?\n\n\n");
    scanf("%lf", &libras);
        if(valorvenda<=10000){
            valorvenda = libras*6.06;
        }
        else{
            printf("Quantia excede o Saldo atual, favor solicite outro valor.\n");
        }
        return valorvenda;
}

/*Função para a venda de Francos*/

int vendachf(){
    double valorvenda, franco;

    printf("Quanto você deseja converter?\n\n\n");
    scanf("%lf", &franco);
        if(valorvenda<=10000){
            valorvenda = franco*5.58;
        }
        else{
            printf("Quantia excede o Saldo atual, favor solicite outro valor.\n");
        }
        return valorvenda;
}

/*Função para a venda de Dólares Australianos*/

int vendaaud(){
    double valorvenda, dolaus;

    printf("Quanto você deseja converter?\n\n\n");
    scanf("%lf", &dolaus);
        if(valorvenda<=10000){
            valorvenda = dolaus*3.16;
        }
        else{
            printf("Quantia excede o Saldo atual, favor solicite outro valor.\n");
        }
        return valorvenda;
}

/*Função para a venda de Dólares Australianos*/

int vendacad(){
    double valorvenda, dolcan;

    printf("Quanto você deseja converter?\n\n\n");
    scanf("%lf", &dolcan);
        if(valorvenda<=10000){
            valorvenda = dolcan*3.63;
        }
        else{
            printf("Quantia excede o Saldo atual, favor solicite outro valor.\n");
        }
        return valorvenda;
}


/*Função para a Venda de moeda Extrangeira*/
int venda(){
    int moeda;
    double valorvenda;

    printf("========================================================\n");
    printf("                 Venda de Moeda Extrangeira            \n");
    printf("========================================================\n\n\n");
    printf("Bem vindo! %s!\n\n\n", username);
    printf("Aqui você poderá utilizar o valor do seu saldo para\ncomparar e estimar valores em moedas extrangeiras, confira o nosso catálogo:\n\n\n");    printf("Dólar Americano (USD) - R$ 5,03...............| Digite 1\n");
    printf("Euro (EUR) - R$ 5,28..........................| Digite 2\n");
    printf("Iene Japonês (JPY) - R$ 0,33..................| Digite 3\n");
    printf("Libra Esterlina (GBP) - R$ 6,06...............| Digite 4\n");
    printf("Franco Suíço (CHF) - R$ 5,58..................| Digite 5\n");
    printf("Dólar Australiano (AUD) - R$ 3,16.............| Digite 6\n");
    printf("Dólar Canadense (CAD) - R$ 3,63...............| Digite 7\n\n\n");

    scanf("%d", &moeda);
    
    if(moeda==1){
        valorvenda = vendausd();
        printf("%.2lf\n", valorvenda);
        banco();
    }
    else if(moeda==2){
        valorvenda = vendaeur();
        printf("%.2lf\n", valorvenda);
        banco();
    }
    else if(moeda==3){
        valorvenda = jpy();
        printf("%.2lf\n", valorvenda);
        banco();
    }
    else if(moeda==4){
        valorvenda = vendagbp();
        printf("%.2lf\n", valorvenda);
        banco();
    }
    else if(moeda==5){
        valorvenda = vendachf();
        printf("%.2lf\n", valorvenda);
        banco();
    }
    else if(moeda==6){
        valorvenda = vendaaud();
        printf("%.2lf\n", valorvenda);
        banco();
    }
    else if(moeda==7){
        valorvenda = vendacad();
        printf("%.2lf\n", valorvenda);
        banco();
    }
    else{
        printf("Operação Inválida\n");
    }
}

/*Função para selecionar a Compra de qual Moeda Extrangeira*/
int compra(){
    int moeda;
    double dolares, euros, ienes, libras, franco, dolaus, dolcad;

    printf("========================================================\n");
    printf("                 Compra de Moeda Extrangeira            \n");
    printf("========================================================\n\n\n");
    printf("Bem vindo! %s!\n\n\n", username);
    printf("Aqui você poderá utilizar o valor do seu saldo para\ncomparar e estimar valores em moedas extrangeiras, confira o nosso catálogo:\n\n\n");
    printf("Dólar Americano (USD) - R$ 5,03...............| Digite 1\n");
    printf("Euro (EUR) - R$ 5,28..........................| Digite 2\n");
    printf("Iene Japonês (JPY) - R$ 0,33..................| Digite 3\n");
    printf("Libra Esterlina (GBP) - R$ 6,06...............| Digite 4\n");
    printf("Franco Suíço (CHF) - R$ 5,58..................| Digite 5\n");
    printf("Dólar Australiano (AUD) - R$ 3,16.............| Digite 6\n");
    printf("Dólar Canadense (CAD) - R$ 3,63...............| Digite 7\n\n\n");


    scanf("%d", &moeda);

    if(moeda==1){
        dolares = usd();
        printf("%.2lf\n", dolares);
        banco();
    }
    else if(moeda==2){
        euros = eur();
        printf("%.2lf\n", euros);
        banco();
    }
    else if(moeda==3){
        ienes = jpy();
        printf("%.2lf\n", ienes);
        banco();
    }
    else if(moeda==4){
        libras = gbp();
        printf("%.2lf\n", libras);
        banco();
    }
    else if(moeda==5){
        franco = chf();
        printf("%.2lf\n", franco);
        banco();
    }
    else if(moeda==6){
        dolaus = aud();
        printf("%.2lf\n", dolaus);
        banco();
    }
    else if(moeda==7){
        dolcad = cad();
        printf("%.2lf\n", dolcad);
        banco();
    }
    else{
        printf("Operação Inválida\n");
    }
}


/*Função de Início do Conversor*/
int conversion(){

    int atendimento;

    printf("========================================================\n");
    printf("              Bem Vindo ao Conversor de Moedas          \n");
    printf("               A casa de Câmbio do Banco UFG            \n");
    printf("========================================================\n\n\n");
    printf("Como podemos lhe ajudar hoje?\n\n");
    printf("Saldo: %.lf                                             \n\n\n", balance);
    printf("Compra de Moeda estrangeira - 1\n");
    printf("Venda de Moeda Estrangeira - 2\n\n\n");
    printf("Voltar - 3\n");

    scanf("%d", &atendimento);

    if(atendimento==1){
        compra();
    }
    else if(atendimento==2){
        venda();
    }
    else if(atendimento==3){
        banco();
    }
    else{
        printf("Operação Inválida!\n");
    }
}








/*====================================================================================================*/

//*******************************************    Banco    *******************************************

void investment();
int deposit();
int saque();

//onde vai ficar o layout, scanf e chamar as funcoes
int banco() 
{
	int opcao;

	printf("========================================================");
	printf("\n*                      BANCO UFG                       *\n");
	printf("========================================================\n\n");
    printf("        Nº %d           Usuario: %s",accountNumber ,username);
	printf("________________________________________________________\n\n");
    printf("1. Depósito                   |  Saldo Atual: R$ %.2f  |\n\n",balance);
    printf("2. Investimento\n\n");
    printf("3. Saque\n\n");
    printf("4. Conversor de Moedas\n\n    *\n    *\n    *\n    *\n");
    printf("\n5. Sair\n\n");
    printf("=========================================================\n");

    do {
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

		if(opcao==1) 
        {
            deposit();
        } 
        else if(opcao==2) 
        {
            investment();
		} 
        else if(opcao==3) 
        {
            saque();
		} 
        else if(opcao==4) 
        {
            conversion();
		} 
        else if(opcao==5) 
        {
            break;
        } else 
        {   
            printf("\n\nOpçaõ Invalida!\n\n");
        }

    } while(opcao!=5);
return 0;
}



// DEPOSITO ------------------------------------------------------------



#define MAX_DEPOSIT 1000 // Definindo o valor máximo para depósito

// Função para realizar o depósito
double deposito(double saldo, double valor) {
    saldo += valor;
    return saldo; // Adiciona o valor ao saldo e retorna o novo saldo
}

// Função para gerar um código de verificação aleatório
int gerar_codigo_verificacao() {
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios
    return rand() % 9000 + 1000; // Gera um número aleatório entre 1000 e 9999
}

// Função para imprimir o recibo do depósito
void imprimir_recibo(int numero_conta, double valor, double saldo, int codigo_verificacao) {
    printf("\n\n******************************************\n\n");
    printf("    Comprovante de Depósito\n\n");
    printf("       - Número da Conta: %d\n", numero_conta);
    printf("       - Valor Depositado: %.2f\n", valor);
    printf("       - Saldo Atual: %.2f\n", saldo);
    printf("    ----------------------------------\n");
    printf("        Código de Verificação: %d\n", codigo_verificacao);
    printf("\n__________________________________________\n\n");
}

int deposit() {
    int numero_conta; // Número da conta
    double valor; // Valor a ser depositado
    int indice_conta; // Índice da conta na lista de contas
    int codigo_verificacao; // Código de verificação
    int check = 0;

    printf("\n\n\n-------------------   Depósito   -------------------\n\n");
    printf("Digite o número da conta: ");
    scanf("%d", &numero_conta);

    indice_conta = accountNumber; // recebe o numero da conta

    if (indice_conta == numero_conta) 
    { // Se a conta existir...

        do {
            printf("Digite o valor a ser depositado: ");
            scanf("%lf", &valor);

            if (valor <= MAX_DEPOSIT) 
            { 
                balance += valor;
                codigo_verificacao = gerar_codigo_verificacao();
                imprimir_recibo(numero_conta, valor, balance, codigo_verificacao);
                check = 0;
            } else 
            {
                printf("\n\nO valor informado é maior que o limite máximo de %d reais.\n", MAX_DEPOSIT);
                printf("Por favor, digite outro valor ou divida o depósito em partes menores.\n\n");
                check = 1;
            }
        }while(check == 1);
    } else 
    {
        printf("\n\nA conta informada não existe.\n");
        printf("Por favor, digite outro número ou crie uma nova conta.\n\n");
        deposit();
    }

    banco();
    return 0;
}



// SAQUE --------------------------------------------------------------


void imprimir_recibo_saque(int numero_conta, double valor, double saldo, int codigo_verificacao) {
    printf("\n\n******************************************\n\n");
    printf("    Comprovante de Saque\n\n");
    printf("       - Número da Conta: %d\n", numero_conta);
    printf("       - Valor de Saque: %.2f\n", valor);
    printf("       - Saldo Atual: %.2f\n", saldo);
    printf("    ----------------------------------\n");
    printf("        Código de Verificação: %d\n", codigo_verificacao);
    printf("\n__________________________________________\n\n");
}


int saque()
{
    double quantia;
    printf("\n\n\n-------------------   Saque   -------------------\n\n");
    printf("Informe a quantia desejada para o saque: ");
    scanf("%lf", &quantia);
        
    if(quantia <= 0)
    {
        
        printf("\n\nA quantia deve ser maior que zero!\n\n");
        
    } else if (quantia > balance)
    {
        
          printf("\n\nSaldo insuficiente!\n\n");
    } else
    {
          balance -= quantia;
          imprimir_recibo_saque(0, quantia, balance, gerar_codigo_verificacao());
    }

    banco();    
    return 0;

}





// INVESTIMENTO --------------------------------------------------------



/*------    FUNCTIONS OF CASE ONE  ------
Fução que calcula o valor com juros nominal desconsiderando a inflação*/
double nominalInterest(double time, double value, double contribution, double rate)
{
    double income = 0, amount = 0;
    totalContribution = 0;
    totalIncome = 0;

    for(int i = 1; i <= time; i++)
    {
        income = value*((rate/100)/12);
        amount = value + income + contribution;
        totalIncome += income;
        totalContribution += contribution;
        value = amount;
    }

    return value;
}

//Função que calcula o valor com juros sob efeito da inflação 
double inflationValue(double time, double value, double contribution, double inflation, double rate)
{
    double income = 0, amount = 0, totalInflation = 0;

    for(int i = 1; i <= time; i++)
    {
        income = value*((rate/100)/12);
        totalInflation += value*(inflation/100);
        amount = value + income + contribution;
        value = amount;
    }

    return totalInflation;
}



//-------- CASE ONE --------


void caseOneInvestment()
{
    double time = 0, value = 0, rate = 0, contribution = 0, inflation = 0;
    double nominalValue, realValue, inflationValueMoney;
    
    printf("\n\n\n-------------------   Investimento c/ prazo   -------------------");

    //Validação de inputs
    do {
        printf("\n\nInsira o periodo: ");
        scanf("%lf", &time);
    } while(time <= 0 || time != (int)time);

    do {
        printf("Insira o montante inicial: ");
        scanf("%lf", &value);
    } while(value < 0);

    do {
        printf("Insira o valor de aporte mensal: ");
        scanf("%lf", &contribution);
    } while(contribution < 0);

    do {
        printf("Insira a taxa de juros: ");
        scanf("%lf", &rate);
    } while(rate <= 0);

        printf("Insira a taxa de inflação mensal: ");
        scanf("%lf", &inflation); 

    inflationValueMoney = inflationValue(time,value,contribution, inflation, rate);
    nominalValue =  nominalInterest(time,value,contribution, rate);
    realValue = nominalValue - inflationValueMoney;

    printf("\n\n\n###################   RESULTADOS   #####################\n\n");
    printf("Montante inicial: R$ %.2f", value);
    printf("\nTotal investido: R$ %.2f", totalContribution);
    printf("\nTotal de Rendimentos: R$ %.2f\n\n", totalIncome);
    printf("Montante final: R$ %.2f", nominalValue);
    printf("\nValor reajustado: R$ %.2f\n\n", realValue);
    printf("_________________________________________________________");

}



/*------    FUNCTIONS OF CASE TWO    ------*/

int dreamInvestment(double value, double contribution, double rate)
{
    int time = 0;
    while(balance <= value)
    {
        balance = balance*(1+(rate/100)/12) + contribution;
        time++;
    }

    return time;
}


//-------- CASE TWO --------

void caseTwoInvestment()
{
    double value, rate, contribution, inflation = 0;
    int time, answer;

    printf("\n\n\n-------------------   Investimento sonhador   -------------------");

    printf("\n\n\nInsira o valor voce deseja alcançar: ");
    scanf("%lf",&value);

    printf("Insira o valor que deseja investir: ");
    scanf("%lf",&contribution);

    printf("Insira a taxa de juros: ");
    scanf("%lf",&rate);

    printf("\n\nDeseja calcular a inflação(0/1)? ");
    scanf("%d",&answer);

    if(answer == 0)
    {
        printf("\n\nInforme a taxa da inflação: ");
        scanf("%lf",&inflation);
    }

    double newBalance = balance;

    time = dreamInvestment(value, contribution, rate);
    inflation = balance - inflationValue(time,newBalance,contribution, inflation, rate);
    printf("\n\n\n###################   RESULTADOS   #####################\n\n");
    printf("%d meses seriam necessarios para alcançar a quantia desejada.\n", time);
    printf("Ao final desse periodo você estara com R$ %.2f.\n",balance);
    
    if(answer == 0)
        printf("Ou R$ %.2f ajustando com a inflação.\n", inflation);
    
    printf("\n\n_________________________________________________________");

}





void caseTreeInvestment()
{
    double finalValue = balance;

    printf("\n\n\n-------------------   Investimento generico   -------------------\n\n\n");

    for(int i = 1; i <= 1200; i++)
    {
        finalValue *= 1+ 0.08/12;

        if(i%10 == 0 && i%12 == 0)
        {
            printf("%d anos = R$ %.2f\n",(i/12), finalValue);
        }
    }

    printf("\n\nCom base no seu dinheiro em conta e levando em consideração\na taxa de juros real atualmente '8%% ao ano', esses serão seus\nresultados nos proximos anos.\n");
    printf("\n\n_________________________________________________________");
}





int visit = 0;
void investment() 
{
    int option, back = 0;
  
    if(visit == 0)    
    {
        printf("\n_________________________________________________________\n\n");
        printf("Ola, %s\nEsta e a nossa area de investimento.\nAqui voce podera simular diversos investimentos a depender da sua necessidade.\n\nLogo abaixo estão algumas opções, por favor escolha alguma que te satisfaça.", username);
        visit = 1;
    }
    printf("\n\n\n-------------------   Investimentos   -------------------");

    printf("\n\n\n1 - Investimento c/ prazo.              |  Saldo Atual: R$ %.2f  |\n\n2 - Investimento sonhador.\n\n3 - Investimento generico.\n\n4 - Voltar.\n\n\n",balance);

    do {
        printf("Digite o numero da opção: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1: 
                caseOneInvestment();
                break;
            case 2: 
                caseTwoInvestment();
                break;
            case 3: 
                caseTreeInvestment();
                break;
            case 4: 
                //Volta para o menu inicial
                printf("\nVoltando ao menu inicial...\n\n\n");
                back = 1;
                banco();
                break;
            default: 
                printf("Opção não valida!\n");
                break;
        }
    } while(!(option == 1 || option == 2 || option == 3 || option == 4));

    if(back == 0)
        investment();

}


/*============================================================================================*/




int main()
{
    //Chamando minha função para criar um usuario.
    createUser();
    banco();
    return 0;
}
