int main (int argc, char *argv[])
    {
        int opcao;
        int valor;

        printf ("\nConversor bases numericas \n");
        printf ("1: decimal para hexadecimal\n");
        printf ("2: hexadecimal para decimal\n");
        printf ("\n\nInforme a opcao: ");
        scanf ("%d", &opcao);
        getchar ();

        if(opcao == 1){
            printf ("\nInformar o valor em decimal: ");
            scanf ("%d", &valor);
            getchar();
            printf ("%d em decimal igual a: %x em hexadecimal\n", valor, valor);
        }

        else if(opcao == 2){
            printf ("\nInformar o valor em Hexadecimal: ");
            scanf ("%x", &valor);
            getchar();
            printf ("%x em hexadecimal igual a: %d em decimal\n", valor, valor);
        }
            else printf("\nSua opcao e invalida");
            system("pause");
            return 0;


    }
