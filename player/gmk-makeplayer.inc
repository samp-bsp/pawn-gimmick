#define @MakePlayer(%8);\
new _gmk_pvar_%8;       \
stock _@%8(){           \
    VAR_GMK_PLAYERID =  \
    _gmk_pvar_%8;       \
    return 0b1;         \
}


#define @gmk:%7->%8(%0) VAR_GMK_TRASH=_@%7()?_gmk_p_%8(%0):_gmk_p_%8(%0) //return single
#define @@gmk:%7->%8(%0) _@%7()?_gmk_p_%8(%0):_gmk_p_%8(%0)  // return array

#define @@gmk:%7->nick _@%7()?_gmk_p_getNick():_gmk_p_getNick()