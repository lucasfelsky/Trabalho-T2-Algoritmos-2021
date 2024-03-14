#include <iostream>
#include <locale.h>
#include <time.h>
#include <cstdlib>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int menu, dif=2, difOpc, tentativa=10, contador=1, numDig, dig1=0, dig2=0, dig3=0, dig4=0, dig5=0, numCertos=0, numPosicaoCerta=0, numPosicaoErrada=0, resultado=0, calculo=0;
    bool vitoria;
    char difEsc, encerrar;


    do{
        system("cls");
        cout<< "MENU PRINCIPAL\n\n";
        cout<< "[1] Jogar\n";
        cout<< "[2] Dificuldade\n";
        cout<< "[3] Sobre\n";
        cout<< "[4] Fim\n\n";

        cout<< "Selecione uma opção: \n";
        cin >> menu;

        switch (menu){
            case 1:
                system("cls");
                srand(time(NULL));

                //PARTE FÁCIL
                if(dif==1){
                    int numFacil1 = 0, numFacil2 = 0, numFacil3 = 0; //variáveis do fácil
                    contador=1;

                    cout << "\n[!] DIFICULDADE FÁCIL - 8 TENTATIVAS [!]\n";
                    cout << "\nGerando um código aleatório de 3 dígitos" << "\n\n";

                    do {
                        numFacil1 = rand()%6 + 1;
                        numFacil2 = rand()%6 + 1;
                        numFacil3 = rand()%6 + 1;
                    } while (numFacil1 == numFacil2 or numFacil1 == numFacil3 or numFacil2 == numFacil3);
                    //cout << numFacil1 << numFacil2 << numFacil3 << endl; //código fácil exibe na tela
                    system("pause");

                    //JOGO COMEÇA AQUI
                    do{
                        numCertos=0;
                        numPosicaoCerta=0;
                        numPosicaoErrada=0;
                        vitoria=false;

                        system("cls");
                        cout<< "FAÇA SUA TENTATIVA\n\n";
                        cout<< "Dígito 1: ";
                        cin >> dig1;
                        cout<< "\nDígito 2: ";
                        cin >> dig2;
                        cout<< "\nDígito 3: ";
                        cin >> dig3;

                        //exclusão de números repetidos
                        if(dig1==dig2 or dig1==dig3){
                            dig1=0;
                        }
                        if(dig2==dig1 or dig2==dig3){
                            dig2=0;
                        }
                        if(dig3==dig1 or dig3==dig2){
                            dig3=0;
                        }

                        //verificação dos números corretos
                        if(dig1== numFacil1 or dig1==numFacil2 or dig1==numFacil3){
                            numCertos++;
                        }
                        if(dig2== numFacil1 or dig2==numFacil2 or dig2==numFacil3){
                            numCertos++;
                        }
                        if(dig3== numFacil1 or dig3==numFacil2 or dig3==numFacil3){
                            numCertos++;
                        }

                        //verificação dos números em posições corretas
                        if(dig1==numFacil1){
                            numPosicaoCerta++;
                        }
                         if(dig2==numFacil2){
                            numPosicaoCerta++;
                        }
                         if(dig3==numFacil3){
                            numPosicaoCerta++;
                        }

                        system("cls");
                        calculo= tentativa-contador;
                        numPosicaoErrada= numCertos-numPosicaoCerta;

                        if(numPosicaoCerta>1){
                                cout<< "\nVocê digitou " << numPosicaoCerta << " números corretos e na posição correta\n";
                        } else{
                                cout<< "\nVocê digitou " << numPosicaoCerta << " número correto e na posição correta\n";
                        }
                        if(numPosicaoErrada>1){
                                cout<< "\nVocê digitou " << numPosicaoErrada << " números corretos, mas na posição errada\n";
                        } else{
                                cout<< "\nVocê digitou " << numPosicaoErrada << " número correto, mas na posição errada\n";
                        }
                        if(numPosicaoCerta==3){
                            vitoria= true;
                        }
                        if(vitoria!=true){
                                if(calculo>1){ //só pra deixar a frase certinha conforme o número de tentativas
                            cout << "\n VOCÊ POSSUI " << calculo << " tentativas restantes\n";
                        }else {
                            cout << "\n VOCÊ POSSUI " << calculo << " tentativa restante\n";
                        }
                        }
                        contador++;
                        if(vitoria==true){
                            calculo=0;
                        }
                        system("pause");
                    }while(calculo>=1);

                    system("cls");
                    if(vitoria==true){
                        cout<< "\nPARABÉNS! Você venceu!\n";
                    } else{
                        cout<< "\nQue Pena, você perdeu\n";
                    }
                    system("pause");
                }
                //PARTE MÉDIA (PADRÃO)
                if(dif==2){
                        int numMedio1 = 0, numMedio2 = 0, numMedio3 = 0, numMedio4 = 0; //variáveis do médio
                        contador=1;

                        cout << "\n[!] DIFICULDADE MÉDIA (PADRÃO) - 10 TENTATIVAS [!]\n";
                        cout << "\nGerando um código aleatório de 4 dígitos" << "\n\n";
                          do {
                               numMedio1 = rand()%6 + 1;
                               numMedio2 = rand()%6 + 1;
                               numMedio3 = rand()%6 + 1;
                               numMedio4 = rand()%6 + 1;
                           } while (numMedio1 == numMedio2 or numMedio1 == numMedio3 or numMedio1 == numMedio4 or numMedio2 == numMedio3 or numMedio2 == numMedio4 or numMedio3 == numMedio4);
                           //cout << numMedio1 << numMedio2 << numMedio3 << numMedio4 << endl; //código médio exibe na tela
                          system("pause");

                        //JOGO COMEÇA AQUI
                        do{
                            numCertos=0;
                            numPosicaoCerta=0;
                            numPosicaoErrada=0;
                            vitoria=false;

                            system("cls");
                            cout<< "FAÇA SUA TENTATIVA\n\n";
                            cout<< "Dígito 1: ";
                            cin >> dig1;
                            cout<< "\nDígito 2: ";
                            cin >> dig2;
                            cout<< "\nDígito 3: ";
                            cin >> dig3;
                            cout<< "\nDígito 4: ";
                            cin >> dig4;

                            //exclusão de números repetidos
                            if(dig1==dig2 or dig1==dig3 or dig1==dig4){
                                dig1=0;
                            }
                            if(dig2==dig1 or dig2==dig3 or dig2==dig4){
                                dig2=0;
                            }
                            if(dig3==dig1 or dig3==dig2 or dig3==dig4){
                                dig3=0;
                            }
                            if(dig4==dig1 or dig4==dig2 or dig4==dig3){
                                dig4=0;
                            }

                            //verificação dos números corretos
                            if(dig1== numMedio1 or dig1==numMedio2 or dig1==numMedio3 or dig1==numMedio4){
                                numCertos++;
                            }
                            if(dig2== numMedio1 or dig2==numMedio2 or dig2==numMedio3 or dig2==numMedio4){
                                numCertos++;
                            }
                            if(dig3== numMedio1 or dig3==numMedio2 or dig3==numMedio3 or dig3==numMedio4){
                                numCertos++;
                            }
                            if(dig4== numMedio1 or dig4==numMedio2 or dig4==numMedio3 or dig4==numMedio4){
                                numCertos++;
                            }

                            //verificação dos números em posições corretas
                            if(dig1==numMedio1){
                                numPosicaoCerta++;
                            }
                            if(dig2==numMedio2){
                                numPosicaoCerta++;
                            }
                            if(dig3==numMedio3){
                                numPosicaoCerta++;
                            }
                            if(dig4==numMedio4){
                                numPosicaoCerta++;
                            }

                            system("cls");
                            calculo= tentativa-contador;
                            numPosicaoErrada= numCertos-numPosicaoCerta;

                            if(numPosicaoCerta>1){
                                cout<< "\nVocê digitou " << numPosicaoCerta << " números corretos e na posição correta\n";
                            } else{
                                cout<< "\nVocê digitou " << numPosicaoCerta << " número correto e na posição correta\n";
                            }
                            if(numPosicaoErrada>1){
                                cout<< "\nVocê digitou " << numPosicaoErrada << " números corretos, mas na posição errada\n";
                            } else{
                                cout<< "\nVocê digitou " << numPosicaoErrada << " número correto, mas na posição errada\n";
                            }
                            if(numPosicaoCerta==4){
                                vitoria= true;
                            }
                            if(vitoria!=true){
                                if(calculo>1){ //só pra deixar a frase certinha conforme o número de tentativas
                                cout << "\n VOCÊ POSSUI " << calculo << " tentativas restantes\n";
                                }else {
                                cout << "\n VOCÊ POSSUI " << calculo << " tentativa restante\n";
                            }
                        }
                            contador++;
                            if(vitoria==true){
                                calculo=0;
                            }
                            system("pause");
                        }while(calculo>=1);
                    system("cls");
                    if(vitoria==true){
                        cout<< "\nPARABÉNS! Você venceu!\n";
                    } else{
                        cout<< "\nQue Pena, você perdeu\n";
                    }
                    system("pause");
                }
                //PARTE DIFICÍL
                    if(dif==3){
                        int numDificil1 = 0, numDificil2 = 0, numDificil3 = 0, numDificil4 = 0, numDificil5 = 0; //variáveis do difícil
                        contador=1;

                        cout << "\n[!] DIFICULDADE DIFÍCIL - 12 TENTATIVAS [!]\n";
                        cout << "\nGerando um código aleatório de 5 dígitos" << "\n\n";
                        do {
                            numDificil1 = rand()%6 + 1;
                            numDificil2 = rand()%6 + 1;
                            numDificil3 = rand()%6 + 1;
                            numDificil4 = rand()%6 + 1;
                            numDificil5 = rand()%6 + 1;
                        } while (numDificil1 == numDificil2 or numDificil1 == numDificil3 or numDificil1 == numDificil4 or numDificil1 == numDificil5 or numDificil2 == numDificil3 or numDificil2 == numDificil4 or numDificil2 == numDificil5 or numDificil3 == numDificil4 or numDificil3 == numDificil5 or numDificil4 == numDificil5);
                        //cout << numDificil1 << numDificil2 << numDificil3 << numDificil4 << numDificil5 << endl; //código dificíl exibe na tela
                        system("pause");
                //JOGO COMEÇA AQUI
                        do{
                            numCertos=0;
                            numPosicaoCerta=0;
                            numPosicaoErrada=0;
                            vitoria=false;

                            system("cls");
                            cout<< "FAÇA SUA TENTATIVA\n\n";
                            cout<< "Dígito 1: ";
                            cin >> dig1;
                            cout<< "\nDígito 2: ";
                            cin >> dig2;
                            cout<< "\nDígito 3: ";
                            cin >> dig3;
                            cout<< "\nDígito 4: ";
                            cin >> dig4;
                            cout<< "\nDígito 5: ";
                            cin >> dig5;

                            //exclusão de números repetidos
                            if(dig1==dig2 or dig1==dig3 or dig1==dig4 or dig1==dig5){
                                dig1=0;
                            }
                            if(dig2==dig1 or dig2==dig3 or dig2==dig4 or dig2==dig5){
                                dig2=0;
                            }
                            if(dig3==dig1 or dig3==dig2 or dig3==dig4 or dig3==dig5){
                                dig3=0;
                            }
                            if(dig4==dig1 or dig4==dig2 or dig4==dig3 or dig4==dig5){
                                dig4=0;
                            }
                            if(dig5==dig1 or dig5==dig2 or dig5==dig3 or dig5==dig4){
                                dig5=0;
                            }

                        //verificação dos números corretos
                            if(dig1== numDificil1 or dig1==numDificil2 or dig1==numDificil3 or dig1==numDificil4 or dig1==numDificil5){
                                numCertos++;
                            }
                            if(dig2== numDificil1 or dig2==numDificil2 or dig2==numDificil3 or dig2==numDificil4 or dig2==numDificil5){
                                numCertos++;
                            }
                            if(dig3== numDificil1 or dig3==numDificil2 or dig3==numDificil3 or dig3==numDificil4 or dig3==numDificil5){
                                numCertos++;
                            }
                            if(dig4== numDificil1 or dig4==numDificil2 or dig4==numDificil3 or dig4==numDificil4 or dig4==numDificil5){
                                numCertos++;
                            }
                            if(dig5== numDificil1 or dig5==numDificil2 or dig5==numDificil3 or dig5==numDificil4 or dig5==numDificil5){
                                numCertos++;
                            }

                        //verificação dos números em posições corretas
                            if(dig1==numDificil1){
                                numPosicaoCerta++;
                            }
                            if(dig2==numDificil2){
                                numPosicaoCerta++;
                            }
                            if(dig3==numDificil3){
                                numPosicaoCerta++;
                            }
                            if(dig4==numDificil4){
                                numPosicaoCerta++;
                            }
                            if(dig5==numDificil5){
                                numPosicaoCerta++;
                            }
                            system("cls");
                            calculo= tentativa-contador;
                            numPosicaoErrada= numCertos-numPosicaoCerta;

                            if(numPosicaoCerta>1){
                                cout<< "\nVocê digitou " << numPosicaoCerta << " números corretos e na posição correta\n";
                            } else{
                                cout<< "\nVocê digitou " << numPosicaoCerta << " número correto e na posição correta\n";
                            }
                            if(numPosicaoErrada>1){
                                cout<< "\nVocê digitou " << numPosicaoErrada << " números corretos, mas na posição errada\n";
                            } else{
                                cout<< "\nVocê digitou " << numPosicaoErrada << " número correto, mas na posição errada\n";
                            }
                            if(numPosicaoCerta==5){
                                vitoria= true;
                            }
                            if(vitoria!=true){
                                if(calculo>1){ //só pra deixar a frase certinha conforme o número de tentativas
                                    cout << "\n VOCÊ POSSUI " << calculo << " tentativas restantes\n";
                                }else {
                                    cout << "\n VOCÊ POSSUI " << calculo << " tentativa restante\n";
                                }
                            }
                            contador++;
                            if(vitoria==true){
                                calculo=0;
                            }
                            system("pause");
                        }while(calculo>=1);
                    system("cls");
                    if(vitoria==true){
                        cout<< "\nPARABÉNS! Você venceu!\n";
                    } else{
                        cout<< "\nQue Pena, você perdeu\n";
                    }
                    system("pause");
                }
                    break;
            case 2:
                    system("cls");
                    cout<< "DIFICULDADE\n\n";
                    cout<< "Dificuldade Atual: " << dif << "\n\n";
                    cout<< "Escolha uma dificuldade: \n";
                    cout<< "[1] Fácil\t\t - Códigos de 3 dígitos e 8 tentativas\n";
                    cout<< "[2] Médio\t\t - Códigos de 4 dígitos e 10 tentativas \n";
                    cout<< "[3] Difícil\t\t - Códigos de 5 dígitos e 12 tentativas \n" << endl;
                    cin >> difOpc;
                    do {
                        switch(difOpc){
                            case 1:
                                system("cls");
                                cout<< "A dificuldade escolhida foi: Fácil\n\n";
                                cout<< "Tem certeza que deseja escolher essa dificuldade?(S/n)\n";
                                cin >> difEsc;
                                if(difEsc=='S' or difEsc=='s'){
                                    dif=1;
                                    tentativa=8;
                                    cout<< "Dificuldade Alterada\n";
                                }else{
                                    cout<< "Operação Cancelada\n";
                                }
                                break;
                        case 2:
                                system("cls");
                                cout<< "A dificuldade escolhida foi: Médio\n\n";
                                cout<< "Tem certeza que deseja escolher essa dificuldade?(S/n)\n";
                                cin >> difEsc;
                                if(difEsc=='S' or difEsc=='s'){
                                    dif=2;
                                    tentativa=10;
                                    cout<< "Dificuldade Alterada\n";
                                }else{
                                    cout<< "Operação Cancelada\n";
                                }
                                break;
                        case 3:
                                system("cls");
                                cout<< "A dificuldade escolhida foi: Difícil\n\n";
                                cout<< "Tem certeza que deseja escolher essa dificuldade?(S/n)\n";
                                cin >> difEsc;
                                if(difEsc=='S' or difEsc=='s'){
                                    dif=3;
                                    tentativa=12;
                                    cout<< "Dificuldade Alterada\n";
                                }else{
                                    cout<< "Operação Cancelada\n";
                                }
                                break;
                        default:
                                system("cls");
                                cout<< "\nDIFICULDADE ESCOLHIDA INVÁLIDA\n";
                                difOpc= dif;
                                break;
                        }
                    } while (difOpc>3);
                    system("pause");
                    break;
            case 3:
                    system("cls");
                    cout<< "SOBRE O JOGO\n\n";
                    cout<< "Equipe de Desenvolvimento\n\n";
                    cout<< "Aluno a ser achado\n";
                    cout<< "Caio Cesar Sabino Soares\n";
                    cout<< "Lucas Gabriel Felsky\n\n";
                    cout<< "maio/2021\n\n";
                    cout<< "Professor Rafael Ballottin Martins - Disciplina de Algoritmos e Programação\n\n";
                    system("pause");
                    break;
            case 4:
                    system("cls");
                    cout<<  "\nDESEJA ENCERRAR O PROGRAMA? (S/n)\n";
                    cin >> encerrar;
                    if(encerrar== 'S' or encerrar== 's'){
                        system("cls");
                        menu= 400;
                        cout<< "\nPROGRAMA ENCERRADO\n\n";
                    } else{
                        cout<< "\nOPERAÇÃO CANCELADA\n";
                    }
                    system("pause");
                    break;
            default:
                    system("cls");
                    cout<< "\nOPÇÃO INVÁLIDA\n\n";
                    system("pause");
                    break;
                    }
            }while (menu!=400);
    return 0;
}


