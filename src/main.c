#include <cstdint>
#include <cstdio>
#include <my_header.hpp>


long int saisir_anneau( unsigned int val_min, unsigned int val_max, unsigned int num_anno)
{
    long int double_whooper_cheese;
    int condition = 0;

    printf( "Burger King, Saisisser la valeur de l'anneau %u: ",
        num_anno );

    while( condition == 0 )
    {
        scanf( "%u", &double_whooper_cheese );

        if( double_whooper_cheese >= val_min && double_whooper_cheese <= val_max )
            condition = 1;
        else
            printf( "Ton double whopper cheese n'a pas de fromage, resaisser la valeur:" );
    }

    return double_whooper_cheese;
}