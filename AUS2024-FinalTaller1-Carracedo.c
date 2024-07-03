#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define P (5)
#define J (10)
#define K (40)
#define G (60)
#define E (20)
#define F (30)
int jugador1[J]={-1,-1,-1,-1,-1,-1,-1,-1, -1,-1};
int jugador2[J]={-1,-1,-1,-1,-1,-1,-1,-1, -1,-1};
char *juego[J]={"1", "2", "3", "4", "5", "6", "G", "E", "P", "F"};
int lanzada[P];
int puntaje_del_juego[J];
int lanzar_dado(int lanzada[P]){

    srand(time(NULL));
    int i;
    char c;
    for(i=0; i<P; i++){
        lanzada[i]=(rand()%6)+1;

    }
    printf("\n");
    for(i=0; i<P; i++){
        printf(". - . ");
    }
    printf("\n");
    for(i=0; i<P; i++){
        printf("| %d | ", lanzada[i]);
    }
    printf("\n");
    for(i=0; i<P; i++){
        printf(". - . ");
    }
    printf("\n");
    char l;
    int d;
    char e;
    int cont=0;
    int cont1=2;
    while(cont<2){
    cont++;
    printf("> Quiere volver a lanzar dados? S/N\n");
    printf("___________________________________\n");
    scanf(" %c", &l);
    while(l!='S'&&l!='s'&&l!='N'&&l!='n'){
        printf("> Debe ingresar S o N\n");
        printf("_____________________\n");
        scanf(" %c", &l);
    }
    if(l=='S'||l=='s'){
        int lanzada2[P];
            int lanzada3[P];
            for(i=0; i<P; i++){
            lanzada3[i]=lanzada[i];
            }
            for(i=0; i<P; i++){
            lanzada2[i]=lanzada[i];
            }
        do{

        printf("> Cual? 1-2-3-4-5 ---> 0  Para no ingresar mas dados \n");
        printf("____________________________________________________\n");
            cont1--;
            scanf(" %c", &e);
            d=e-'0';
            while(d<0||d>5){
                printf("> Debe ingresar un numero entre el 1 y el 5 o 0 para finalizar \n");
                printf("_____________________________________________________________\n");
                scanf(" %c", &e);
                d=e-'0';
            }
            lanzada3[d-1]=(rand()%6)+1;
            }while(d!=0);
            printf("> Desea confirmar los dados ingresados? S o N\n");
            printf("_____________________________________________\n");
            scanf(" %c", &c);
            while(c!='S'&&c!='s'&&c!='N'&&c!='n'){
            printf("> Debe ingresar S o N\n");
            printf("_____________________\n");
            scanf(" %c", &c);
            }
            if(c=='s'||c=='S'){
                for(i=0; i<P; i++){
                lanzada[i]=lanzada3[i];
                }
            }
            if(c=='n'||c=='N'){
            cont--;
            for(i=0; i<P; i++){
            lanzada[i]=lanzada2[i];
            }
            }
            printf("\n");
    for(i=0; i<P; i++){
        printf(". - . ");
    }
    printf("\n");
    for(i=0; i<P; i++){
        printf("| %d | ", lanzada[i]);
    }
    printf("\n");
    for(i=0; i<P; i++){
        printf(". - . ");
    }
    printf("\n");

            }else if(l=='N'||l=='n'){
        printf("\n");
    for(i=0; i<P; i++){
        printf(". - . ");
    }
    printf("\n");
    for(i=0; i<P; i++){
        printf("| %d | ", lanzada[i]);
    }
    printf("\n");
    for(i=0; i<P; i++){
        printf(". - . ");
    }
    printf("\n");
        }
    }

printf("\n");
return cont1;
    }

int anotar(int lanzar_dado(int lanzada), int puntaje_del_juego[J]){
        int j;
        int i;
        int posicion_juego_anotado;
        char k;
        do{
        printf("> Que juego desea anotar? 1, 2, 3, 4, 5, 6, G para Generala, E para Escalera,  F para Full, P para Poker\n");
        printf("________________________________________________________________________________________________________\n");
        imprimir_puntajes(puntaje_del_juego);
        printf("\n");
        scanf(" %c", &k);
        while((k<49||k>54)&&k!='G'&&k!='g'&&k!='E'&&k!='e'&&k!='F'&&k!='f'&&k!='P'&&k!='p'){
            printf("> Debe ingresar un juego valido\n");
            printf("_______________________________\n");
            scanf(" %c", &k);
        }
        switch(k){
        case '1':

            if(puntaje_del_juego[0]==-1){
            j=1;
            posicion_juego_anotado=0;
            puntaje_del_juego[0]=0;
            for(i=0; i<P; i++){
                if(j==lanzada[i]){
                puntaje_del_juego[0]=puntaje_del_juego[0]+lanzada[i];
            }
         }
        }
        break;
        case '2':

            if(puntaje_del_juego[1]==-1){
            j=2;
            posicion_juego_anotado=1;
         puntaje_del_juego[1]=0;
            for(i=0; i<P; i++){
                if(j==lanzada[i]){
                puntaje_del_juego[1]=puntaje_del_juego[1]+lanzada[i];
            }
         }
            }
            break;

        case '3':
            if(puntaje_del_juego[2]==-1){
            j=3;
            posicion_juego_anotado=2;
            puntaje_del_juego[2]=0;
            for(i=0; i<P; i++){
                if(j==lanzada[i]){
                puntaje_del_juego[2]=puntaje_del_juego[2]+lanzada[i];
            }
         }
            }
            break;
        case '4':
            if(puntaje_del_juego[3]==-1){
            j=4;
            posicion_juego_anotado=3;
            puntaje_del_juego[3]=0;
            for(i=0; i<P; i++){
                if(j==lanzada[i]){
                puntaje_del_juego[3]=puntaje_del_juego[3]+lanzada[i];
            }
         }
            }
            break;

        case '5':
            if(puntaje_del_juego[4]==-1){
            j=5;
            posicion_juego_anotado=4;
            puntaje_del_juego[4]=0;
            for(i=0; i<P; i++){
                if(j==lanzada[i]){
                puntaje_del_juego[4]=puntaje_del_juego[4]+lanzada[i];
            }
         }
            }
            break;
        case '6':
            if(puntaje_del_juego[5]==-1){
            j=6;
            posicion_juego_anotado=5;
            puntaje_del_juego[5]=0;
            for(i=0; i<P; i++){
                if(j==lanzada[i]){
                puntaje_del_juego[5]=puntaje_del_juego[5]+lanzada[i];
            }
         }
            }
            break;
        case 'G':
        case 'g':

            if(puntaje_del_juego[6]==-1){
            posicion_juego_anotado=6;
            puntaje_del_juego[6]=0;
            int es=0;
            for(i=0; i<P; i++){
                    for(j=i+1; j<P; j++){
                if(lanzada[i]!=lanzada[j]){
                es=1;
                }
            }
                }
                if(es==0){
                    puntaje_del_juego[6]=puntaje_del_juego[6]+G;
                if(es==0&&lanzar_dado==2){
                    printf(" ___________________________________________________________");
                    printf("\n");
                    printf("| FIN DEL JUEGO EL JUGADOR SACO GENERALA SERVIDA, HA GANADO | \n");
                    printf(" ___________________________________________________________\n");
                    printf("\n");
                    puntaje_del_juego[6]=1000;
                }
                }else if(es==1){
                    puntaje_del_juego[6]=0;
                }
            }
            break;

        case 'E':
        case 'e':
            if(puntaje_del_juego[7]==-1){
            posicion_juego_anotado=7;
            puntaje_del_juego[7]=0;
            int aux;
            int es=0;
            for(i=0; i<P; i++){
                for(j=i+1; j<P; j++){
                    if(lanzada[i]>lanzada[j]){
                        aux=lanzada[i];
                        lanzada[i]=lanzada[j];
                        lanzada[j]=aux;
                    }
                }
            }
            for(i=0; i<P-1; i++){
                   if((lanzada[i]+1)!=lanzada[i+1]){
                    es=1;
            }
            }
            if(es==0){
                puntaje_del_juego[7]=E;
                if(lanzar_dado==2&&es==0){
                    puntaje_del_juego[7]=puntaje_del_juego[7]+5;
                }
            }
            }
            break;
        case 'P':
        case 'p':
            if(puntaje_del_juego[8]==-1){
                int aux;
                puntaje_del_juego[8]=0;
                posicion_juego_anotado=8;
                for(i=0; i<P; i++){
                for(j=i+1; j<P; j++){
                     if(lanzada[i]>lanzada[j]){
                        aux=lanzada[i];
                        lanzada[i]=lanzada[j];
                        lanzada[j]=aux;
                    }
                }
                }
                int cont=0;
                for(i=0; i<P; i++){
                for(j=i+1; j<P; j++){
                        if(lanzada[i]==lanzada[j]){
                            cont++;
                        }
                }
                }
                if(cont==6){
                    puntaje_del_juego[8]=K;
                    if(cont==6&&lanzar_dado==2){
                        puntaje_del_juego[8]=puntaje_del_juego[8]+5;
                    }
                }
            }
            break;
        case 'F':
        case 'f':
            if(puntaje_del_juego[9]==-1){
                int aux;
                puntaje_del_juego[9]=0;
                posicion_juego_anotado=9;
                for(i=0; i<P; i++){
                for(j=i+1; j<P; j++){
                     if(lanzada[i]>lanzada[j]){
                        aux=lanzada[i];
                        lanzada[i]=lanzada[j];
                        lanzada[j]=aux;

                    }
                }
                }
                int cont=0;
                int cont1=0;
                for(i=0; i<P; i++){
                for(j=i+1; j<P; j++){
                        if(lanzada[i]==lanzada[j]){
                            cont++;
                        }
                }

                }
                for(i=cont; i<P; i++){
                for(j=i+1; j<P; j++){
                        if(lanzada[i]==lanzada[j]){
                            cont1++;
                        }
                }
                }
                if(cont1+cont==4){
                    puntaje_del_juego[9]=F;
                    if(cont+cont1==4&&lanzar_dado==2){
                        puntaje_del_juego[9]=puntaje_del_juego[9]+5;
                    }
                }
            }
            break;
        }
        }while(puntaje_del_juego[posicion_juego_anotado]==-1);
return 0;
}
int imprimir_puntajes(int puntaje_del_juego[J]){
        for(int i=0; i<(J*4); i++){
            printf(" -");
        }
        printf("\n");
        for(int i=0; i<J; i++){
            printf("|");
            printf("%s\t", juego[i]);
        }
        printf("|");
        printf("\n");
        for(int i=0; i<(J*4); i++){
            printf(" -");
        }
        printf("\n");
        for(int j=0; j<J; j++){
            printf("|");
            if(puntaje_del_juego[j]==-1){
                printf("*\t");
            }else{
            printf("%d\t", puntaje_del_juego[j]);
            }
        }
        printf("|");
        printf("\n");
        for(int i=0; i<(J*4); i++){
            printf(" -");
        }
        return 0;
}

int suma_parcial(int puntaje_del_juego[J]){
            int suma=0;
            int longitud_fija=4;
            for(int i=0; i<J; i++){

                if(puntaje_del_juego[i]!=-1){
                        suma=suma+puntaje_del_juego[i];
            }

            }
            printf("========\n");
            printf("||%*d", longitud_fija, suma);
            printf("||\n");
            printf("========\n");
return 0;
}
void quien_gano(int jugador1[J], int jugador2[J]){
        int suma_total_jugador1=0;
        int suma_total_jugador2=0;
        for(int i=0; i<J; i++){

                if(jugador1[i]!=-1){
                        suma_total_jugador1=suma_total_jugador1+jugador1[i];
            }


            }
            for(int i=0; i<J; i++){
                    if(jugador2[i]!=-1){
                        suma_total_jugador2=suma_total_jugador2+jugador2[i];
            }
            }
        if(suma_total_jugador1>suma_total_jugador2){
            printf("EL JUGADOR 1 HA GANADO!!!\n");
            printf("_________________________\n");
        }else{
            printf("EL JUGADOR 2 HA GANADO!!!\n");
            printf("_________________________\n");
        }
}

int main()
{
        int cantidad_jugadores;
        char jugadores;
        printf("> Ingrese la cantidad de jugadores: 1 o 2\n");
        printf("_________________________________________\n");
        scanf(" %c", &jugadores);
        cantidad_jugadores=jugadores-'0';
        while(cantidad_jugadores!=1&&cantidad_jugadores!=2){
            printf("> Debe ingresar 1 o 2\n");
            scanf(" %c", &jugadores);
            cantidad_jugadores=jugadores-'0';
        }
        if(cantidad_jugadores==2){
        for(int i=0; i<J; i++){
            if(jugador1[6]!=1000&&jugador2[6]!=1000){
            printf("TIRO %d DEL JUGADOR 1\n", i+1);
            printf("_____________________\n");
            anotar(lanzar_dado(lanzada), jugador1);
            printf("PUNTAJES DEL JUGADOR 1\n");
            printf("______________________\n");
            imprimir_puntajes(jugador1);
            printf("\n");
            printf("PUNTAJES DEL JUGADOR 2\n");
            printf("______________________\n");
            imprimir_puntajes(jugador2);
            printf("\n");
            printf("PUNTAJE PARCIAL DEL JUGADOR 1\n");
            printf("_____________________________\n");
            printf(suma_parcial(jugador1));
            printf("\n");
            printf("PUNTAJE PARCIAL DEL JUGADOR 2\n");
            printf("_____________________________\n");
            printf(suma_parcial(jugador2));
            printf("\n");
            if(jugador2[6]!=1000&&jugador1[6]!=1000){
            printf("TIRO %d DEL JUGADOR 2\n", i+1);
            printf("_______________________\n");
            anotar(lanzar_dado(lanzada), jugador2);
            printf("\n");
            printf("PUNTAJES DEL JUGADOR 1\n");
            printf("______________________\n");
            imprimir_puntajes(jugador1);
            printf("\n");
            printf("PUNTAJES DEL JUGADOR 2\n");
            printf("______________________\n");
            imprimir_puntajes(jugador2);
            printf("\n");
            printf("\n");
            printf("PUNTAJE PARCIAL DEL JUGADOR 1\n");
            printf("_____________________________\n");
            printf(suma_parcial(jugador1));
            printf("\n");
            printf("PUNTAJE PARCIAL DEL JUGADOR 2\n");
            printf("_____________________________\n");
            printf(suma_parcial(jugador2));
            printf("\n");
            }
        }
        }
        printf(" ._______________________.\n");
        printf(" |°EL JUEGO HA TERMINADO°|\n");
        printf(" ._______________________.\n");
        if(jugador1[6]==1000){
            printf("El jugador 1 ha sacado Generala Servida");
        }else if(jugador2[6]==1000){
            printf("El jugador 2 ha sacado Generala Servida");
        }else{
            printf("PUNTAJE DEL JUGADOR 1\n");
            printf("______________________\n");
            suma_parcial(jugador1);
        printf("PUNTAJE DEL JUGADOR 2\n");
        printf("______________________\n");
        suma_parcial(jugador2);
        quien_gano(jugador1, jugador2);
        }
        }else if(cantidad_jugadores==1){
            for(int i=0; i<J; i++){
            if(jugador1[6]!=1000){
            printf("TIRO %d DEL JUGADOR 1\n", i+1);
            printf("_____________________\n");
            anotar(lanzar_dado(lanzada), jugador1);
            printf("\n");
            printf("PUNTAJES DEL JUGADOR 1\n");
            printf("______________________\n");
            imprimir_puntajes(jugador1);
            printf("\n");
            printf("\n");
            printf("PUNTAJE PARCIAL DEL JUGADOR 1\n");
            printf("_____________________________\n");
            printf(suma_parcial(jugador1));
            printf("\n");
        }
        }
        printf(" ._______________________.\n");
        printf(" |°EL JUEGO HA TERMINADO°|\n");
        printf(" ._______________________.\n");
}
}
