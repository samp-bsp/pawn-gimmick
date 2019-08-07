#define @MakePlayerFunc:%8(%0) _gmk_p_%8(%0)


@MakePlayerFunc:set(playerid){
    return 0b1;
}

@MakePlayerFunc:getNick(){
    new name[MAX_PLAYER_NAME];
    return name;
}

@MakePlayerFunc:kick(){
    return 1;//Kick(@this->playerId);
}