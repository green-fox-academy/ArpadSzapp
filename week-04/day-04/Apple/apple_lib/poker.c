//
// Created by arpad on 2019. 03. 04..
//
#include "poker.h"

int is_stronger (const char *first, const char *second)
{
//"2C 3C 4C 6C QC", "2D 3D 4D 6D KD"
    char *first_player_last_card = &first[12];
    char *second_player_last_card = &second[12];
    char *first_player_first_card = &first[0];
    if (get_card_value(first_player_last_card) > get_card_value(second_player_last_card)) {
        return 1;
    } else if (get_card_value(first_player_first_card) > get_card_value(second_player_last_card)){
        return 1;
    }else
        return-1;
}

// 3H
int get_card_value (const char *card)
{
//(denoted 2, 3, 4, 5, 6, 7, 8, 9, T, J, Q, K, A)
    if (card[0] == 'T') {
        return 10;
    }

    if (card[0] == 'J') {
        return 11;
    }

    if (card[0] == 'Q') {
        return 12;
    }

    if (card[0] == 'A') {
        return 14;
    }

    if (card[0] == 'K') {
        return 13;
    }

    return card[0] - '0';
};

//J<O<K<A