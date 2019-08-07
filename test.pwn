#include "pawn-gimmick"

main() {

}



public OnPlayerConnect(playerid){

    @gmk:player->set(playerid);
    
    printf("EXPULSO: %s", @@gmk:player->nick);

    return @gmk:player->kick();
}
