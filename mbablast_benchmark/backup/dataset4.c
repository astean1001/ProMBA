#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

uint64_t target_0(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*((a&b)^~(a^(~b|c)))+2*(a^(b&c))+1*(a^(b|c))+2*~(a|(~b|c))+1*~(~a|(~b|c))-1*(~a&(~b&c))-3*(~a&(b&c));
}

uint64_t target_1(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*x+5*~y+2*~(x|~y)-7*(x&~y);
}

uint64_t target_2(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(x^y)+7*~(x^y)+2*~x+5*~(x&y)-14*~(x|y)+3*~(x|~y)+5*(x&~y);
}

uint64_t target_3(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*y+1*~y-1*~(x&~x)-7*~(x&~y)-6*(x|y)+2*x+16*~(x|~y)+3*(x&~y)+15*(x&y);
}

uint64_t target_4(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(x&~y)-1*x-11*(x^y)+11*~y-7*(x|~y)-6*~(x|y)+6*(x&y);
}

uint64_t target_5(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(d|~f)+5*((d&e)^(d^(~e|f)))+2*(~d&(e^f))-6*~(d|(e&f))+1*(e^~(~d&(~e|f)))-3*((d|~e)&(e^f))-5*(f^(~d&(~e|f)))-11*((d&f)^~(d^(e&f)))-1*((d|e)&~(e^f))-2*~(d&~e)+3*~(e|f)+7*(d^e)-1*(d|(~e|f))+1*(~(d^e)|~(d^f))-3*(~(d|e)|~(d^(e^f)))-7*((d&f)^~(d^(~e&f)))-1*(e&~(d&f))+2*~(e&~f)-3*(e^(d&f))+3*(e^~(~d&(e|f)))-7*~(d&e)-2*(e&f)+3*(f^(d|(~e&f)))+1*(~d&(e|f))-11*~e+4*~(d&(e^f))-2*~(~d&(~e&f))-1*(d^(~e|f))-1*(e|~(d|~f))+1*~(d|~e)-11*(f^~(~d|(e&f)))-7*((d|~e)&(d^(e^f)))+5*~(~d&(~e|f))-2*~(d|(e^f))+4*(f&~(d&e))+11*(f^(d|e))+7*(~(d&e)&(d^(e^f)))+1*(~(d|e)|(e^f))+1*~(~d|(e&f))+1*~(~d&(e&f))+4*(f|(d&e))-2*((d&e)|~(e^f))+3*(f^~(d|~e))+3*(~(d|~e)|(d^(e^f)))-7*(e^~(d&(e^f)))+47*~(d|(e|f))-17*~(d|(~e|f))+5*~(~d|(~e|f))+23*(~d&(~e&f))+7*(~d&(e&f))+13*(d&(~e&f))+15*(d&(e&f));
}

uint64_t target_6(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*((a&~b)|(a^(b^c)))+4*(a&~b)+5*~(a|(b^c))-5*~(a|(b|c))+2*~(a|(~b|c))-2*~(~a|(b|c))+2*(~a&(~b&c))-5*(~a&(b&c))+2*(a&(b&c));
}

uint64_t target_7(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*~(b|~c)-6*((a&c)^~(b&~c))+5*(~b&(a^c))+2*~(a|(~b&c))-2*(c^(a|(b|c)))+1*(a|(b^c))+1*(~(a&~b)&(b^c))+7*~(~a|(b&c))-6*((b&~c)^(~a|(b^c)))+9*~(a|(b|c))-2*~(a|(~b|c))-8*~(~a|(~b|c))-7*(~a&(~b&c))+9*(~a&(b&c))-14*(a&(~b&c))-1*(a&(b&c));
}

uint64_t target_8(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(z|~t)-1*z+4*(z^t)-2*(z|t)-2*~z+2*~(z&t)+1*~(z|t)-3*~(z|~t)-2*(z&~t)+3*(z&t);
}

uint64_t target_9(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*~(a&~a)-2*((a|~b)&(b^c))-11*~(a^b)+1*(b^~(~a&(b^c)))-3*(c^~(a|b))+2*~(a^(~b|c))-3*(a|b)+2*(~(a^b)&(a^c))-7*(~a&(b^c))+1*(~c&~(a^b))+1*~(a&(b|c))+4*~(a|~b)-2*(b^~(~a|(b&c)))+11*(c^~(a|(b&c)))+4*((a&c)^~(a^(b&c)))+5*(~b&(a^c))+11*(c^~(~a&(~b|c)))+7*(b^(~a|(b|c)))+7*(a&~c)-1*(~(a&~b)&~(a^(b^c)))+2*~(a&(~b&c))-1*(c&~(a^b))-1*~(b|c)-7*(b^~(~a|(b^c)))+2*~(~a&(~b|c))-1*~(~a&(b^c))-6*(b&c)-6*(b^(a|(b&c)))+4*(c^~(~a|(~b&c)))-11*(b^~(~a&(~b&c)))+11*~(a^(b&c))+7*((b&~c)^(~a|(b^c)))-2*(~a|(b&c))-2*~a-2*~(~a&(b&c))+4*(~(a|~b)|(a^(b^c)))-14*~(a|(b|c))-25*~(a|(~b|c))-9*~(~a|(b|c))+2*~(~a|(~b|c))-27*(~a&(~b&c))-13*(~a&(b&c))-4*(a&(~b&c))-4*(a&(b&c));
}

uint64_t target_10(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*z+5*(z|~t)-1*~z-2*~(z&t)+2*~(z&~t)+5*~(z&~z)+4*~(z^t)-13*~(z|t)-7*(z&~t)-15*(z&t);
}

uint64_t target_11(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*y-7*~(x&y)+7*~x+7*(x&~y)-1*(x&y);
}

uint64_t target_12(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(z|~t)+2*~(z&~z)-1*~z+7*~(z|t)-1*~(z|~t)-1*(z&~t)+6*(z&t);
}

uint64_t target_13(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(f^~(~d|(e&f)))+11*(e^(~d|(e&f)))+2*(f^~(d&e))+4*(f^~(~d&(~e&f)))-2*((d&e)^(e|f))+1*((d&e)|~(e^f))+2*(~(d^e)&(d^f))+2*(e^(d&f))+1*(f&~(d^e))-5*(f&(d^e))-1*(~d|(e|f))-1*(e^(d&(e^f)))-2*(e^(~d&(~e|f)))+5*(e^(d|(e^f)))+1*(f^~(d&(e&f)))+11*(e^~(d|(~e&f)))+7*~(d^(e^f))-1*(f^(~d&(~e|f)))+2*(d&(~e|f))-1*((d&~e)|~(e^f))-1*(~(d&e)&(d^(e^f)))-3*~(e^f)+1*(~d&(~e|f))-5*(~(d|e)|~(d^(e^f)))+3*(e^(d|(e|f)))+1*~(d&(e^f))+1*((d&f)|~(e|f))-7*(f&(d|e))+2*(~d|(e&f))+3*(e^~(~d|(e^f)))-7*((d|~e)&~(d^(e^f)))-2*((d|e)&(d^(e^f)))+1*~(~d|(~e&f))+2*(~f|~(d^e))-2*((d|e)&(e^f))+2*(f^(~d|(~e|f)))-1*((d&e)|~(e|f))-5*((e&~f)|~(~d|(~e&f)))-6*(d^(~e|f))+3*~(e&~f)+1*(d&(e|f))-1*(f^(d|(e&f)))-6*(d|~e)-11*((d^e)|(d^f))-1*~(d&f)-2*(f^~(d|~e))-3*~(~d&(e&f))+11*~(d|f)-2*~(d&~f)-1*((d&e)^(e|~f))+1*(f^(d|(~e|f)))+11*(f|~(d|~e))-1*((e&f)^~(~d&(e^f)))-7*(~d|(~e&f))-2*((d&f)^(e|f))+1*(f^~(d|(e&f)))+2*(f^(d|e))+4*(d|(~e|f))-11*(f^(d&~e))+1*(f^(~d&(e|f)))-5*(d|(~e&f))-7*((d&e)|~(d^(e^f)))+7*(e^(d&~f))-11*~(d|(e|f))+4*~(d|(~e|f))+20*~(~d|(e|f))+25*~(~d|(~e|f))+17*(~d&(~e&f))+26*(~d&(e&f))+46*(d&(~e&f))+8*(d&(e&f));
}

uint64_t target_14(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*(a&(b|c))+5*((a&c)^~(a^(b&c)))-6*(~b&(a^c))+1*(~(a|b)|(b^c))-5*(c^~(a&b))+3*(~(a^b)|~(a^c))-1*(c^~(~a&(b&c)))+1*(b^(~a&(b^c)))+1*(c^(a&b))+7*(b^(~a|(b|c)))-1*(~a|(~b&c))+2*(c&(a|b))+7*(b^~(a&(~b|c)))-6*~(a|(b&c))+2*(b|~(a|c))-6*((a^b)|(a^c))+3*((a&b)|~(b|c))-1*((a|b)&~(b^c))-2*((a&~b)|~(b^c))+5*(b|(a^c))+1*(b^(a&(b^c)))-2*(a|~c)+2*(c^(~a|(~b&c)))+1*((a&c)|(b&~c))+2*(~c|~(a^b))-1*((b&~c)|~(~a|(~b&c)))+1*((b&~c)^(a|(b^c)))+3*(b&~c)+4*(c^(~a|(b&c)))+1*(a^(b^c))+11*(a|~b)+1*~(a|~b)-2*(a^(~b&c))-3*(b&(a^c))-1*(b^~(~a|(b&c)))-2*~(a&b)+5*(c^(a|b))+2*((a&b)^(b|~c))+4*((a&b)|~(a^(b^c)))-7*(b^~(~a&(b&c)))-2*~(a&(~b&c))+2*((b&c)^~(~a&(b^c)))-3*((a|b)&(b^c))+1*(b^~(a&(~b&c)))-5*~(~a|(b^c))-2*(~(a|b)|~(b^c))-24*~(a|(b|c))-3*~(a|(~b|c))+9*~(~a|(b|c))-11*~(~a|(~b|c))-17*(~a&(~b&c))+6*(~a&(b&c))-8*(a&(~b&c))-15*(a&(b&c));
}

uint64_t target_15(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*z-5*(z^t)+11*~(z^t)+1*~(z&t)+7*~(z&~t)-6*~z-11*~(z|t)+3*~(z|~t)+7*(z&~t)-15*(z&t);
}

uint64_t target_16(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*((a&c)|(b&~c))+1*(b^~(a&(b|c)))+1*((a&c)|~(b|c))+3*((a|b)&~(b^c))+5*(c|(a&~b))+11*(c^(~a|(b|c)))-10*~(a|(~b|c))-10*~(~a|(b|c))-11*~(~a|(~b|c))-6*(~a&(~b&c))-8*(~a&(b&c))-5*(a&(~b&c))-9*(a&(b&c));
}

uint64_t target_17(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*z+3*t+1*~z-3*~(z&t)+1*~(z&~z)-3*~t-1*~(z^t)-2*~(z|~t)+11*(z&~t)+3*(z&t);
}

uint64_t target_18(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*((d&f)|(e&~f))-1*(~(d^e)&~(d^f))-1*(e&f)-5*(~(d|e)|~(d^(e^f)))-6*(f^(d|(~e|f)))-3*(f^~(d|~e))+2*~d+5*(e^~(d&~f))+2*((d&e)^~(d^(e&f)))-2*((e&f)|(d&(e|f)))+11*(e^(~d|(e|f)))+2*(~e&~(d^f))-6*(e^~(d|(e^f)))+4*((d^e)&~(d^f))-7*(f&~(d&e))-3*(e^~(d|f))+4*((d&f)|~(e|f))+5*(e^(~d|(e^f)))+11*((d&e)|~(d^(e^f)))+5*(e|(d^f))+7*(f^~(~d|(~e&f)))+4*(~(d&~e)&~(d^(e^f)))+2*(e&~(d&f))-2*d-5*(e&~f)-5*~(d^(~e&f))+1*(e|(d&~f))-11*(~(d|~e)|(e^f))-5*((d&e)^~(d^(~e|f)))+11*((d&~e)|(d^(e^f)))+1*(e^~(d&f))+2*(f^~(d|(e&f)))+5*~(~d&(~e&f))+1*((d&e)|~(e^f))-3*(e^(d&(e|f)))-6*((d&f)^(e|f))-5*(~d|(~e&f))-2*~(d&(e^f))-2*(e^(~d|(~e&f)))-1*(e&~(d^f))-3*~(d^(e|f))-11*(e^~(~d&(e^f)))-1*(f^(d&(e|f)))-2*(~d|(e&f))-2*(e^~(~d|(~e&f)))+1*(f^~(d|e))+1*~f-6*(e^~(d&(~e&f)))+4*(~(d|~e)|~(e^f))-1*(e&(d^f))-1*(d&(e|f))-7*(d^e)+2*(d&(~e|f))+7*~(e^f)+3*((e&~f)^(~d|(e^f)))-11*(d|~f)+5*(f^(~d|(e&f)))+2*(d^(~e|f))+7*(~e|~(d^f))+11*~(d|(e^f))-1*(e&~(d&~f))-1*~(~d|(e&f))-35*~(d|(e|f))+27*~(d|(~e|f))-3*~(~d|(e|f))+17*~(~d|(~e|f))-18*(~d&(~e&f))-4*(~d&(e&f))-9*(d&(~e&f))-27*(d&(e&f));
}

uint64_t target_19(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(~e|~(d^f))-7*(f&(d|e))-1*~(d^(e|f))+2*(~(d|~e)|(d^(e^f)))-3*((d&e)|~(d^(e^f)))+2*(~e&(d^f))+1*(~(d&e)&~(d^(e^f)))+11*(~f&(d^e))+1*(f|(d&~e))-2*~(d&~f)-7*(e&~(d^f))-3*(~(d^e)|~(d^f))-2*d-7*~(d&(e&f))-1*(~d&(~e|f))-2*~(~d&(e&f))+5*((e&f)|(d&(e|f)))+1*(~(d&e)&(d^(e^f)))-2*~(d&e)+1*(e^~(d&(e|f)))+2*(~e&~(d^f))+2*((d^e)|~(d^f))-1*(f|~(d|e))-5*(e^(d|(~e|f)))-6*~(e&~f)+1*(f^(d|(e|f)))-1*(e^(~d&(e|f)))-6*((d&f)^~(d^(~e&f)))-1*~(e&f)+1*(f&~(d^e))+4*((e&f)|(~d&(e|f)))-1*(e^~(~d&(e&f)))-2*(e^~(d|(e^f)))-1*(e|~(d^f))+1*~(d|e)+1*(~f&~(d^e))-11*(d|(~e|f))-11*(~(d^e)&~(d^f))-6*(e^(d|(~e&f)))+2*(e^(d&f))-11*(f^(d|(~e|f)))+2*(d|(e&f))-11*(f^~(~d&(e|f)))+4*(d|(e|f))-7*(e^(d|~f))-7*~(d|~f)-5*(e^(~d&(~e|f)))-3*(e^(~d|(~e&f)))+2*(e&(d|f))+3*(~(d&~e)&~(e^f))-2*(f^~(~d&(e&f)))-3*(e^~(~d&(e^f)))+7*(~f|~(d^e))-2*(e|~(d|~f))+1*((d|~e)&~(d^(e^f)))-6*(e^(~d&(e^f)))+82*~(d|(e|f))+13*~(d|(~e|f))+30*~(~d|(e|f))+46*~(~d|(~e|f))+46*(~d&(~e&f))+59*(~d&(e&f))+41*(d&(~e&f))+37*(d&(e&f));
}

uint64_t target_20(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(b|~(a|c))-5*(a^(~b|c))-6*(b^~(a&(b|c)))+4*(c&(a|b))+2*((a&~b)|(a^(b^c)))-6*(b^(a|c))-6*(a&c)-11*(c^(a|(b&c)))-6*(c^~(~a&(~b|c)))+2*~(a&(b|c))-1*(~b|(a^c))-7*((a&c)|~(b|c))-2*(c^(a&b))-1*(~c&(a^b))-11*(~c&~(a^b))+2*(~(a&~b)&~(b^c))+4*(a|(b^c))+3*(b^(a|(b^c)))-1*~(a|(b&c))+5*(b^~(a|~c))+11*(~(a&b)&~(b^c))-1*(c^~(~a&(~b&c)))+11*(~(a^b)|(a^c))+7*(b^~(a|c))+2*~(a^(b|c))-2*(b^~(~a|(b&c)))+2*~(a&~c)-1*(b^(~a|(b|c)))+1*((a&b)|(a^(b^c)))+1*~(a&(~b&c))-2*(b^~(a&c))-5*~(a|(b|c))-2*~(a|(~b|c))+7*~(~a|(b|c))+9*~(~a|(~b|c))+11*(~a&(~b&c))-29*(~a&(b&c))+8*(a&(~b&c))-21*(a&(b&c));
}

uint64_t target_21(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(c^(~a&(~b|c)))-1*~(~a|(b&c))+5*(c^(a|(~b|c)))-2*(c|~(a^b))+11*(~a&(b|c))+2*((a|~b)&~(b^c))+2*((b&~c)|~(~a|(~b&c)))-6*(b^~(~a|(b&c)))-2*(b|c)-1*((a&b)|~(b|~c))+11*(a|(~b|c))-6*(~(a|b)|~(b^c))+3*((a&c)^(a^(~b&c)))-3*~(a^c)-3*(b&~c)-11*(b^(~a|(b^c)))-2*~(a^(b^c))-2*~(~a&(b|c))+1*((a&b)^(a^(~b|c)))+5*~(a|(b|c))+1*~(a|(~b|c))-8*~(~a|(b|c))-3*~(~a|(~b|c))-4*(~a&(~b&c))-5*(~a&(b&c))+10*(a&(b&c));
}

uint64_t target_22(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*((d&e)^(e|f))+5*((d&e)^~(d^(e&f)))-3*(~(d^e)&(d^f))-6*(~(d&e)&(d^(e^f)))+2*(e^(d|(e^f)))+1*(~e|~(d^f))-5*((e&~f)^(d|(e^f)))+7*~(e&~f)+2*~(d^(e&f))-1*(~d&(e|f))-5*((e&f)^~(d&(e^f)))+4*(~(d|e)|(d^(e^f)))-2*(d|(e^f))-1*(f&~(d^e))+2*~(d^(~e&f))+3*(d^(e|f))-5*(e^(~d|(e^f)))-11*((d&~e)|(e^f))+4*((d&f)^(d^(~e&f)))-1*(~(d^e)|(d^f))-3*~(d&~f)+2*(e^(d&f))+1*((d|e)&(e^f))+11*~(d^(~e|f))-1*~(d|(e^f))-6*(e^~(~d|(e^f)))+3*((d|e)&~(d^(e^f)))-6*~(d|(e|f))+5*~(d|(~e|f))+3*~(~d|(~e|f))+16*(~d&(~e&f))-6*(~d&(e&f))-1*(d&(~e&f))-12*(d&(e&f));
}

uint64_t target_23(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*((a&b)|(b^c))-7*(b&(a|~c))+1*(b^(a|c))-1*(c&(a^b))+4*(b&(a^c))-1*~(a^c)-1*(a^(b&c))-6*(b^~(a|(~b&c)))+7*~(a&(b^c))+3*~(a&(b&c))-1*(c&~(a&~b))-2*((a&c)^~(b&~c))+2*~(a|~c)-5*(b^(a&~c))+11*((a|b)&(b^c))+1*~(a&~b)-1*(c&(a|~b))-2*((a&c)^~(a^(~b&c)))+4*(b&~(a^c))-7*(b^~(~a&(b^c)))-6*~(a^(~b&c))+1*(b^~(~a&(b|c)))+23*~(a|(b|c))+12*~(a|(~b|c))+2*~(~a|(b|c))+7*~(~a|(~b|c))+2*(~a&(~b&c))+1*(a&(~b&c))+22*(a&(b&c));
}

uint64_t target_24(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*~(z&~t)-1*~(z&~z)-2*(z|t)+3*(z&~t);
}

uint64_t target_25(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(e^~(~d&(e^f)))-2*(~(d^e)&(d^f))+3*((d&e)|(d^(e^f)))-1*(f|~(d|e))+7*(f|~(d^e))-1*((d&f)^~(e&~f))-5*~(d^(e|f))-6*(e|~f)+3*((e&f)|(~d&(e|f)))+5*((d|e)&~(d^(e^f)))+5*(d|(e^f))+1*(f^~(~d|(~e&f)))-1*(d&~f)+2*~(~d&(e^f))-7*~(d^(~e|f))-3*(d^e)-3*(e^(~d|(e^f)))-1*~(d|f)-3*(e^(d|f))-11*(e^(~d&(e^f)))+1*(e^~(d&(~e|f)))+11*(~d&(e^f))-6*(f^~(d|e))+4*(~(d|e)|~(d^(e^f)))-5*(f&~(d&e))-7*((e&~f)^(~d|(e^f)))+1*(f|(d&e))-1*(~(d&~e)&(d^(e^f)))-6*((d&e)|~(e|~f))+3*(f|~(d|~e))-1*(f^(~d|(~e|f)))-1*(f^(d&(e|f)))-3*(e^(~d|(e|f)))+2*~(d&~e)-2*(f&(d|~e))+2*(e^(d&(e^f)))+1*~d+7*(~f|(d^e))+1*~(e&~f)+5*~(d|(~e&f))+5*~(d&(~e&f))-2*(~(d|e)|(d^(e^f)))-11*(~(d|~e)|~(e^f))+1*~(d&e)-7*(~d|(e&f))-1*~(~d&(~e&f))+1*(e^~(~d|(e^f)))+1*(~(d&e)&~(e^f))-11*(d^(e^f))+4*((d^e)&(d^f))+2*(d&(e^f))-6*(~d|(e^f))+11*(f^~(d&e))+11*(e^~(d|~f))+2*(~d&(~e|f))+4*(d&(~e|f))+1*(~(d&~e)&(e^f))+2*(e^~(d|(e&f)))-2*~(d|(e^f))-7*(f^(d&(~e|f)))+4*(e&~(d&f))+7*((d&e)^~(d^(e&f)))-6*(d|(~e&f))-1*(e&f)-2*~(d^f)-7*(e^(d|(~e&f)))-1*~(d|(e|f))-24*~(d|(~e|f))+9*~(~d|(e|f))-27*~(~d|(~e|f))+15*(~d&(~e&f))+19*(~d&(e&f))+16*(d&(~e&f))+23*(d&(e&f));
}

uint64_t target_26(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*y-11*~y+9*~(x|y)-7*~(x|~y)+8*(x&~y)-12*(x&y);
}

uint64_t target_27(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*y-3*~(x&~y)+5*(x^y)+1*~x-6*~(x&~x)-1*(x|y)+4*~(x|y)-7*~(x|~y)-2*(x&~y)-1*(x&y);
}

uint64_t target_28(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(z|~t)+3*~t-1*(z|t)-6*~(z&~z)-2*t-5*(z^t)+2*~(z&t)+12*~(z|~t)+5*(z&~t)+8*(z&t);
}

uint64_t target_29(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(z^t)+4*~(z&t)-2*~(z&~t)-3*t+1*~(z|t)+3*~(z|~t)-4*(z&~t)+6*(z&t);
}

uint64_t target_30(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(x^y)+3*y-11*~(x&~y)+2*~(x&y)+7*(x|y)-3*x+2*~y-5*~x+8*~(x|y)+5*~(x|~y)-11*(x&~y);
}

uint64_t target_31(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*((a|b)&~(b^c))-1*(b^(a&~c))+7*~(b&c)-1*((a&b)^(b|~c))-1*~(a&~b)-1*(~(a|~b)|(a^(b^c)))+3*((a&c)^(a^(~b&c)))+3*(b&~(a&~c))+1*(b&~(a^c))-6*(~(a&~b)&~(a^(b^c)))-2*~(a|~c)-1*~(~a&(~b&c))+1*(~a&(~b|c))+11*(a&b)+7*~(a|b)-2*(a^(b^c))+7*(a|(b&c))-3*~(~a&(b&c))+3*(c^(~a|(~b|c)))+4*(a|b)+11*((a&~b)|~(b^c))-5*(b^~(a|(~b&c)))+1*~(a&(~b|c))-13*~(a|(b|c))-13*~(a|(~b|c))-32*~(~a|(b|c))-17*~(~a|(~b|c))-14*(~a&(~b&c))-16*(~a&(b&c))-32*(a&(~b&c))-25*(a&(b&c));
}

uint64_t target_32(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*~(e^f)-1*~(e|~f)+4*((d&e)^~(d^(e&f)))-1*((e&f)^~(d&(e^f)))+1*~(~d|(e^f))-1*(e^~(d|~f))+1*(f^(d|(~e|f)))-6*~(d&~f)-3*~(d^e)-3*(~d|(e&f))-11*(e^~(d|f))-2*(f|~(d|e))+2*(e^(~d&(e^f)))+3*(f^~(~d|(~e&f)))+2*(e^~(~d|(e&f)))-2*f+11*((d&e)|~(e|~f))-11*(f^(d|(e&f)))+2*((e&f)^~(~d&(e^f)))+7*(d&(e|f))-2*(f^(d&(~e|f)))+3*~(d^(e^f))-2*(d|(e|f))+2*(f^~(d|(e&f)))-3*(f^(d&e))-1*(e&f)-5*(d^(e&f))+4*e+1*((e&~f)^(d|(e^f)))+4*(f^~(~d&(~e|f)))+1*~(d&~e)-1*((d&~e)|(e^f))+1*((d^e)|~(d^f))-11*((d&e)|~(d^(e^f)))-11*((e&f)|(d&(e|f)))+2*(e^(~d|(~e&f)))+5*(~e|(d^f))+2*(e|(d^f))-7*(e^~(~d&(e^f)))-5*(d|(~e|f))-2*((d&~e)|~(e^f))-11*~(e|f)+3*(e^(d|(~e|f)))+30*~(d|(e|f))-3*~(d|(~e|f))+14*~(~d|(e|f))+12*~(~d|(~e|f))+1*(~d&(~e&f))+29*(~d&(e&f))+12*(d&(~e&f))+9*(d&(e&f));
}

uint64_t target_33(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(b&c)-2*~(a&(~b|c))+7*(b^~(~a|(~b&c)))+2*((a|~b)&(b^c))+2*~b+7*(~(a|~b)|~(a^(b^c)))-2*~(b|c)-4*~(a|(b|c))-11*~(a|(~b|c))-6*~(~a|(b|c))-6*~(~a|(~b|c))-1*(~a&(~b&c))-10*(a&(~b&c));
}

uint64_t target_34(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(z&~t)+1*~(z&~z)+1*(z|t)-5*(z|~t)+1*~(z|~t)+5*(z&~t)+4*(z&t);
}

uint64_t target_35(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*((e&f)|(~d&(e|f)))-3*(e&~(d&f))-1*((d&f)^~(d^(~e&f)))+2*~(d|(~e&f))-1*~(~d&(e^f))-5*(~d|(~e|f))+3*(d^f)+11*~d+1*(~(d&e)&(e^f))+3*(e&~(d&~f))+1*((d&~e)|~(d^(e^f)))+7*~(d^(e&f))+4*((d^e)&(d^f))-3*(~d|(~e&f))-2*~(d&~e)-1*(~(d^e)|(d^f))-2*(e^(d&~f))+11*(f^~(d&(e&f)))-1*(e|~(d^f))+2*d-5*(~(d|~e)|(d^(e^f)))-7*~(~d&(e|f))-3*(e^~(d&(e^f)))-1*(e^~(~d|(e&f)))+4*(f^(d|(e|f)))-1*((d&e)^(e|f))-11*(e^(d|f))-1*(~e&(d^f))+2*(f^~(~d&(~e&f)))-5*(~(d|e)|(e^f))-7*(f^(~d|(e&f)))+2*((d|~e)&~(e^f))-2*(f|~(d|~e))+2*(e^~(~d&(e&f)))+3*~(d|~f)+1*~(d|e)-1*(~e|~(d^f))+5*(f^(d|~e))+1*(f^(d|(e&f)))+7*((d|~e)&(d^(e^f)))-2*((e&~f)|~(d|(~e&f)))+2*((d&~e)|(d^(e^f)))-5*(f^~(d|~e))-7*((d|e)&~(d^(e^f)))-1*(f|~(d^e))+1*~(e&~f)+2*(d|~e)-11*((d&e)|~(e|f))+4*~(d|(e|f))+7*~(d|(~e|f))+2*~(~d|(e|f))+15*~(~d|(~e|f))-4*(~d&(~e&f))-2*(~d&(e&f))+47*(d&(~e&f))+4*(d&(e&f));
}

uint64_t target_36(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(d^e)+3*(e^~(d&~f))-1*(~(d&~e)&(e^f))-7*(e^~(~d&(e^f)))+3*(f|~(d^e))+4*(f^(d&(~e|f)))+1*(~(d|e)|(e^f))+2*(~(d&e)&(d^(e^f)))+2*((d|~e)&~(d^(e^f)))-6*(f^~(d|(~e&f)))+3*(d&(e|f))-7*((d&e)|(d^(e^f)))+3*(e^(~d|(~e|f)))-7*((d|e)&~(e^f))-1*(~d&(e|f))-11*~f+1*(~f&(d^e))+5*((d|~e)&(e^f))-3*~(d&(~e&f))-7*((d&f)^(e|f))-2*(e^~(~d&(e&f)))-6*(e^(d&(~e|f)))+7*(d|e)-11*~(e&f)+4*((d^e)&(d^f))+11*(f^~(~d&(~e&f)))+2*((d&e)|~(e^f))+2*(~(d^e)|~(d^f))-2*(~e|(d^f))-5*(~(d^e)|(d^f))+1*(f|~(d|~e))-2*~(d|(e^f))+1*(f^(d|(~e&f)))+1*(d&~e)-1*(e|(d&~f))+1*(~(d&~e)&(d^(e^f)))-1*(e|(d&f))+2*(e|f)+1*(e^(d|f))-5*((d|e)&~(d^(e^f)))-11*(~d|(e^f))+1*~(d|~f)-1*(d^(e|f))-5*(f^~(d&(~e|f)))+5*(f&(d^e))+1*(e&(d|f))+11*(~f|(d^e))+4*(~d|(~e&f))+3*(d^e)-3*(f^(d|(~e|f)))-1*(e^(d|(e^f)))-1*((d&~e)|~(e^f))+11*(e^~(d|~f))-6*(f|~(d|e))-1*(f^~(d&(~e&f)))-11*(e&~(d&~f))-3*((e&~f)|~(d|(~e&f)))-2*~(~d|(e^f))+11*(e^(~d&(~e|f)))-1*((e&f)^~(d&(e^f)))-1*(e^(~d|(e^f)))+1*((d&~e)|~(d^(e^f)))-2*~(~d|(e&f))+5*(e^(d&~f))+1*(e^~(d|(e^f)))-2*~d+30*~(d|(e|f))+19*~(d|(~e|f))+17*~(~d|(e|f))+3*~(~d|(~e|f))+4*(~d&(~e&f))+20*(~d&(e&f))+10*(d&(~e&f))+5*(d&(e&f));
}

uint64_t target_37(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*~(a&c)-1*(~(a^b)|(a^c))-2*(b^~(a&(b|c)))+11*((a&c)^(a^(~b&c)))+1*(b&~c)-6*((a&c)^(b|c))-11*((b&c)|(a&(b|c)))+2*((a|b)&(a^(b^c)))-1*(b^(~a|(~b&c)))+11*(b^~(~a|(~b&c)))+7*~(a^b)-11*(b&(a|~c))+7*~(b&c)-7*((a&c)^(a^(b&c)))+5*((a^b)|(a^c))-5*(b^(a|~c))-2*(a|(~b&c))-1*((a&~b)|(a^(b^c)))+1*(a&~b)-12*~(a|(b|c))-15*~(a|(~b|c))-23*~(~a|(b|c))+6*~(~a|(~b|c))-21*(~a&(~b&c))+7*(~a&(b&c))-4*(a&(~b&c))+27*(a&(b&c));
}

uint64_t target_38(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*(z|t)+2*(z^t)+3*t-2*~(z^t)+4*~(z&~z)+11*~t+1*z+1*(z|~t)-6*~(z|~t)-16*(z&~t);
}

uint64_t target_39(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*(z|t)-1*~(z^t)-2*(z|~t)+3*~(z|t)+7*(z&~t);
}

uint64_t target_40(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(z|~t)-7*~z+2*(z|t)+2*~(z&~z)+2*~(z&t)-7*t+2*~(z&~t)-11*z+2*~(z|t)+13*(z&t);
}

uint64_t target_41(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(x&y)+2*~x+7*~(x&~y)-5*(x|~y)-11*x-7*~(x|~y)+20*(x&~y)+9*(x&y);
}

uint64_t target_42(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(f|(d&~e))+11*(e|~(d|~f))+2*(e^(d|f))+1*~(~d|(e^f))+7*(~(d&e)&~(e^f))-1*~(d&(~e&f))-7*(f^(d|(e&f)))-7*(e^~(d&~f))+3*(f^(d&(e|f)))-1*(e&(d|~f))-6*(d^e)+2*~(~d&(e&f))+5*(e^~(~d&(e^f)))+11*~(d&e)+4*(e|~(d|f))+4*(f^~(~d&(~e&f)))+2*((d&~e)|(d^(e^f)))+1*~(~d&(e|f))-1*~(d&(e|f))+3*(e^~(d&(~e&f)))-5*((d&f)^~(e&~f))-3*((d&e)^~(d^(e&f)))+1*~(~d|(e&f))-5*(e^~(~d|(~e&f)))-1*(~(d&e)&(d^(e^f)))-11*((d|~e)&(d^(e^f)))+4*(e&~(d&f))-7*~(d|(e^f))+1*(d&(e^f))-1*((e&f)|(~d&(e|f)))-1*(~(d|~e)|~(e^f))-1*(~(d&e)&(e^f))+1*(e^~(~d&(~e|f)))-2*~(d|~f)+2*(f^~(d|~e))-7*~e-2*(d|(e^f))+7*(e^(d|(~e&f)))-2*((d^e)|(d^f))+1*(e^~(d&(~e|f)))+7*(f^~(d&(e&f)))+5*~(d^(e^f))+11*(~d&(~e|f))+2*(e&(d^f))+1*(f^~(~d|(~e&f)))+1*(~d&(e|f))+1*(f|~(d|~e))+1*(d&e)-5*(d^(e&f))+1*(e^f)-1*~(e|~f)-6*((d|~e)&~(d^(e^f)))+1*(e^(d&(e^f)))-1*(e^~(d&(e&f)))-5*((d&f)^(e|f))+1*(e|(d&~f))+1*~(d&(e^f))-3*(f^(d&~e))-5*(e^(~d|(e&f)))+2*(~d|(~e|f))-20*~(d|(e|f))-39*~(d|(~e|f))+1*(~d&(~e&f))-29*(~d&(e&f))-7*(d&(~e&f))-16*(d&(e&f));
}

uint64_t target_43(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(e^~(~d&(e|f)))-5*(d|~f)+1*((d^e)&(d^f))+7*~(d&~f)+11*~(d&(e&f))-1*(e&~(d&f))+7*(e^f)-1*(f|~(d^e))+1*(f^(d&e))+5*(f^~(~d&(e&f)))-2*(f^(d&~e))-1*(f^(d&(~e|f)))-11*((d&e)|~(d^(e^f)))+1*(d&~f)-7*(~f&~(d^e))+2*(e^(d|(e|f)))+1*((e&~f)^(~d|(e^f)))+1*(d|(~e&f))+1*(e&(d|~f))+2*(f^~(~d&(~e|f)))+1*~(e|f)-6*((d&~e)|~(d^(e^f)))-1*(~(d&~e)&(d^(e^f)))+5*~(d|~f)+3*~(d^(e^f))-1*(f^~(d|e))-1*~(d^(e&f))-11*(f|(d&~e))+2*(~e&(d^f))-5*((d&f)^(d^(e&f)))-2*((e&~f)|~(~d|(~e&f)))-1*~(~d&(e^f))-1*(~(d&e)&~(e^f))-11*(~(d|~e)|~(d^(e^f)))+2*(e^(~d|(~e&f)))-1*(e^(~d&(~e|f)))-3*(e^(~d&(e|f)))+4*(e^~(d&(~e&f)))+1*(e^(d&(~e|f)))+7*((d&~e)|(e^f))+1*(f^~(~d|(~e&f)))-6*(f^~(d&(e|f)))+19*~(d|(e|f))-11*~(d|(~e|f))+3*~(~d|(e|f))+12*~(~d|(~e|f))-31*(~d&(~e&f))+16*(~d&(e&f))+11*(d&(~e&f))+41*(d&(e&f));
}

uint64_t target_44(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*y+4*(x|~y)+2*~y+3*~(x&~y)+1*x+1*(x^y)-9*~(x|y)-10*(x&~y)-14*(x&y);
}

uint64_t target_45(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(e^~(d&(~e|f)))+2*(e&~(d&f))-1*(f^(d&e))+1*(f^(d|(~e|f)))+4*(f^(~d|(e&f)))-5*(f^~(d|(~e&f)))+1*(~e&~(d^f))+1*(~f|~(d^e))-5*~(~d|(~e&f))-7*(f^(~d&(~e|f)))+1*((d&e)^~(d^(~e|f)))+4*((d&~e)|(e^f))+2*e+5*(~f&(d^e))-1*(e^(d&(~e|f)))-2*(e^(~d|(e&f)))+11*(f^~(d&(~e&f)))+3*~(d^(e^f))-3*((d|e)&(e^f))+11*(d&~e)+1*(f^~(d&~e))-6*(d^(e^f))-5*(~f&~(d^e))+1*(e|(d^f))+2*~(d|(~e&f))-6*(f^(~d|(~e|f)))+2*(e^(d|f))+1*((e&~f)^(~d|(e^f)))-1*(~(d^e)|(d^f))+3*(e^(d&f))-3*~(d^(~e|f))-1*(d&~f)+2*((d&e)|~(e|f))-8*~(d|(e|f))-20*~(d|(~e|f))-16*~(~d|(e|f))-16*~(~d|(~e|f))+1*(~d&(~e&f))-11*(~d&(e&f))-20*(d&(~e&f))+16*(d&(e&f));
}

uint64_t target_46(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*x-6*~y+1*~(x&y)+1*~x+1*~(x|~y)+3*(x&~y)-2*(x&y);
}

uint64_t target_47(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(f^(~d|(e|f)))+2*(~(d|e)|~(d^(e^f)))+3*(e^(d&(~e|f)))-11*~(~d&(~e&f))-3*(e&~(d^f))-2*((d&f)^(e|f))-7*((d|e)&(e^f))-6*(f^~(~d|(~e&f)))-2*(e^~(~d|(e^f)))+7*(~(d|e)|(d^(e^f)))-1*((d&e)^(d^(~e|f)))+11*~(d|e)+1*(~(d|~e)|~(e^f))+1*(e^~(~d&(e|f)))-6*(d|(~e|f))+2*~f+2*(~d&(e|f))-1*(~d|(e&f))+1*(f^(~d&(~e|f)))-3*(d^f)-7*(d&(e|f))-1*(d|(e|f))-1*(e^(d|(e|f)))+3*(e^(~d&(e|f)))+1*(e^~(d&(e|f)))+4*(e^(~d|(e|f)))-9*~(d|(e|f))+13*~(d|(~e|f))+15*~(~d|(e|f))+36*~(~d|(~e|f))-8*(~d&(~e&f))+25*(~d&(e&f))+29*(d&(~e&f))+18*(d&(e&f));
}

uint64_t target_48(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(z&t)-2*t+7*(z|~t)+2*~(z^t)-1*~(z&~t)+1*~t-2*(z^t)-7*~(z|t)+7*~(z|~t)-4*(z&~t);
}

uint64_t target_49(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*(x|y)-1*~(x&~x)-3*y-2*~x+5*~(x&~y)+2*~(x&y)-5*~(x|y)-6*~(x|~y)-7*(x&y);
}

uint64_t target_50(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(c^~(~a&(b&c)))-5*~(b&~c)-1*(~b&(a^c))+11*(b&~c)-6*((a&b)^(a^(b&c)))-6*(c|(a&b))+4*(a|(b|c))+11*((a|~b)&~(a^(b^c)))-7*(c&(a|~b))+2*~(~a&(~b&c))-1*(b|c)+2*(a^(b^c))+1*~(a|c)-2*((a&b)^~(a^(b&c)))+7*~(a&(~b|c))+11*(~b&~(a^c))-1*((a^b)|~(a^c))+2*(a&(~b|c))+3*((a|~b)&~(b^c))+1*(b^~(~a&(b&c)))+4*(~a&(b^c))+1*((b&c)|(a&(b|c)))-3*(~(a&b)&~(a^(b^c)))-7*((a&c)^~(a^(b&c)))+7*(c&(a^b))-7*(~(a|b)|(b^c))-5*(b&~(a^c))-6*(b^(~a|(~b|c)))+3*((a&b)^(b|~c))+11*(c|~(a^b))-11*~(a^(b&c))+3*(c^(a|(~b|c)))+7*(c^~(~a&(~b&c)))-2*~(a^(~b|c))-1*((a&~b)|~(a^(b^c)))+5*(b^~(a&(b^c)))-1*(c^(a|(~b&c)))-1*(a&~c)+1*(a^b)+1*((a&c)|~(b|c))+2*(c^~(a|b))-2*(b|~(a|c))-2*~(a&~c)-2*((b&c)^~(~a&(b^c)))-20*~(a|(b|c))-6*~(~a|(b|c))-34*~(~a|(~b|c))+11*(~a&(~b&c))-9*(~a&(b&c))+2*(a&(~b&c))+20*(a&(b&c));
}

uint64_t target_51(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(x|~y)+2*x-11*~(x&y)+7*(x|y)-7*~x+19*~(x|y)+10*~(x|~y)+3*(x&~y)-9*(x&y);
}

uint64_t target_52(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(e^(d|~f))-1*((d|~e)&~(d^(e^f)))-1*(~f&(d^e))-6*(e|~f)+5*((d^e)|(d^f))+1*(e^(d|(e&f)))-11*((d&f)^(e|f))-3*(~(d|e)|(d^(e^f)))-2*(d&(e|f))-1*(e^(d&(e|f)))-1*~(d&~e)-5*(e^(d&(e^f)))-6*(f^(d&e))+4*(f^(~d|(~e|f)))-1*~e+4*((d&f)|(e&~f))+2*((e&f)^~(d&(e^f)))+3*(e^~(~d&(~e|f)))+11*~(d&(~e&f))-5*~(e&~f)+5*(f^~(d|~e))-2*~(~d|(e&f))-7*(e^(~d&(e|f)))+1*(~e|~(d^f))+2*(~(d&e)&(d^(e^f)))-5*(f&(d^e))-3*((d&e)|~(e^f))+3*(e&~(d&~f))-7*((d|~e)&(e^f))+1*(e^(d&~f))+7*(f&(d|e))+3*(d&~f)+1*(e|~(d|f))-1*(d|f)-1*((d&f)^~(d^(~e&f)))-1*(f^~(d|e))-2*((d|e)&~(e^f))-1*(d|(e&f))-3*(d&f)+5*(f&~(d^e))+2*(e^(d&(~e|f)))+2*(e|f)+3*(f^~(d|(e&f)))-1*(e^~(d&(~e&f)))-1*(e^(d|(e^f)))-3*e+3*(f^~(d|(~e&f)))-7*(d&(e^f))-4*~(d|(e|f))-19*~(d|(~e|f))-10*~(~d|(e|f))+29*~(~d|(~e|f))+7*(~d&(~e&f))+13*(~d&(e&f))+12*(d&(~e&f))-2*(d&(e&f));
}

uint64_t target_53(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(z^t)+2*~(z^t)-3*~(z&t)+11*~(z&~t)-1*(z|t)-13*~(z|t)-12*~(z|~t)+4*(z&~t)-11*(z&t);
}

uint64_t target_54(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*~(x&y)+14*~(x|y)+9*~(x|~y)+16*(x&~y);
}

uint64_t target_55(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*(b^(a|~c))-2*(b^(~a&(b^c)))-3*~(~a&(b|c))+2*(b|~(a|~c))-2*(b^(a|(~b&c)))-1*(b&~(a&~c))-1*(a|(b&c))-2*(a^(b&c))+5*(b^~(a|~c))-3*~(a&(b|c))+3*(c^(~a&(b|c)))-5*(a^(b|c))+5*(b|(a^c))-1*(c&(a|b))-3*(a&b)+7*(b^(~a|(b^c)))+2*((b&c)|(a&(b|c)))+1*~(b&~c)+1*(b^(a&~c))+2*~(a&(b&c))+2*(b^~(a&c))+7*(b^~(a&(b^c)))+3*(~a|(~b|c))-5*((a|b)&(a^(b^c)))+2*((a^b)&~(a^c))+1*(~a&(b^c))+1*(b^~(a&(~b&c)))+1*(b^~(~a&(b^c)))-3*(b^~(a&(b|c)))+1*((a&c)^(b|c))+2*~(a&c)-1*(c^~(a|(~b&c)))-7*(~(a|~b)|(a^(b^c)))-1*(b&c)-8*~(a|(b|c))-4*~(a|(~b|c))+14*~(~a|(b|c))-9*~(~a|(~b|c))-16*(~a&(~b&c))+11*(~a&(b&c))-6*(a&(~b&c));
}

uint64_t target_56(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*((a&c)^~(a^(~b&c)))+3*(c^~(a&(b|c)))+11*~(~a&(b^c))+5*(~a|(~b|c))+1*~(~a&(~b&c))-7*~(a^c)-1*~(~a|(~b&c))+4*(~(a&~b)&~(a^(b^c)))+5*(b|~(a|~c))-6*~(~a&(~b|c))-5*(~(a&~b)&(b^c))-1*((a|b)&~(b^c))+7*(c&~(a&b))+1*(b^(~a&(b|c)))-1*(b^~(~a&(b&c)))-2*((a^b)&~(a^c))-6*(b^(~a|(b^c)))+2*(~c&(a^b))+11*(b^(~a|(~b&c)))+11*(c&(a^b))-32*~(a|(b|c))-7*~(a|(~b|c))-13*~(~a|(b|c))-21*~(~a|(~b|c))-17*(~a&(~b&c))-53*(~a&(b&c))-27*(a&(b&c));
}

uint64_t target_57(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~(z&t)-2*(z^t)+2*z+6*~(z|t)+6*(z&~t)-2*(z&t);
}

uint64_t target_58(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*z+3*~z+1*(z|t)-3*t-1*(z^t)-1*~(z&t)+11*~(z|t)+7*~(z|~t)+3*(z&~t)+4*(z&t);
}

uint64_t target_59(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*(f|~(d^e))+3*~(~d&(e^f))+1*(e^(~d|(e|f)))-3*(f|(d&~e))-5*(~(d&e)&~(d^(e^f)))+7*~(e&f)+2*(e^~(d|~f))-6*(e^(~d|(~e|f)))-5*~(~d&(e&f))-3*(e^(d|(e^f)))-2*(f^~(d|(~e&f)))+4*(d|(e^f))-5*(f^~(~d&(e&f)))+1*((d&e)|(d^(e^f)))+1*(~f&~(d^e))+5*(f^~(~d&(~e|f)))+1*(~d|(~e&f))+7*~(d|~e)-1*(f^(d|(e|f)))+2*(~f&(d^e))-1*(~(d|e)|(d^(e^f)))-1*((d&~e)|~(e^f))-5*(e|(d&~f))+4*~(~d&(~e&f))-7*(e^~(d&f))-2*(f^(~d|(e&f)))-2*(~d|(e&f))-11*(e&(d|f))+1*(e^~(d|f))-5*(f^~(~d|(~e&f)))-2*~(d^(e|f))+7*~(d|e)+11*~(~d|(e&f))+1*((d^e)|(d^f))+7*(f|~(d|e))+4*~(e^f)+1*(d|(e|f))+2*(f^(d|(e&f)))-1*(d^(~e|f))-1*(~d|(e|f))+2*((d|e)&~(e^f))-5*(d^(~e&f))-11*(~(d^e)&(d^f))-2*(e^f)-3*((d&e)^(e|f))-3*((d&f)^(d^(~e&f)))+1*(d&f)+1*((e&f)^~(d&(e^f)))+11*(~(d^e)|(d^f))-6*~(d&(~e|f))-11*(e^~(~d|(e^f)))+5*(~e&(d^f))-11*(e&(d|~f))-1*(~(d|~e)|(e^f))-6*~(d&(~e&f))+6*~(d|(e|f))+27*~(d|(~e|f))+2*~(~d|(e|f))+46*~(~d|(~e|f))+20*(~d&(~e&f))+6*(d&(~e&f))+23*(d&(e&f));
}

uint64_t target_60(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*t+2*~(z&~t)-4*~(z|t)-2*(z&~t)-1*(z&t);
}

uint64_t target_61(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*~(x&y)-2*~(x^y)+2*~y+2*(x|y)-1*(x|~y)-17*~(x|y)-20*~(x|~y)-24*(x&~y)-13*(x&y);
}

uint64_t target_62(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*(b&(a|~c))-2*(b^~(~a&(b|c)))-1*((b&c)^~(a&(b^c)))-1*(~(a^b)|~(a^c))+1*(a|(b&c))+3*(b|~(a^c))+11*(a^(b^c))-6*~(a^b)+3*(b^~(~a&(~b&c)))+4*(b^~(a&c))-2*(b^~(a|(~b&c)))+1*(c^~(a&(~b&c)))-2*~(a^(~b|c))-2*~(a&~c)-1*(a|b)-1*(b^(~a&(b^c)))+11*(~(a&b)&(b^c))-2*(a^(b&c))+3*((a&b)|(b^c))-1*(c^(~a&(~b|c)))-1*(a^(~b&c))+2*~(a|(b^c))-1*((a&~b)|~(a^(b^c)))-1*~(a|c)-1*~b-1*(~c&~(a^b))-3*(c^~(a&(b&c)))+1*(c^(~a|(b&c)))-2*(c^(a|b))-11*(b^~(~a|(b^c)))+7*~(a&~b)+1*(b^~(a&(~b|c)))+1*(c&(a|~b))+4*~(a&b)-7*(b^~(a|(b^c)))-2*(~b&~(a^c))+2*(b^c)-3*(c^~(a&b))+11*((b&~c)^(a|(b^c)))-11*(a&c)+8*~(a|(b|c))+4*~(a|(~b|c))-3*~(~a|(b|c))+22*~(~a|(~b|c))-40*(~a&(~b&c))+5*(~a&(b&c))-13*(a&(~b&c))-1*(a&(b&c));
}

uint64_t target_63(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*z-3*~(z&t)-7*~t+11*~z+11*~(z&~z)-1*(z|~t)-10*~(z|t)-19*~(z|~t)+1*(z&~t)-8*(z&t);
}

uint64_t target_64(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*(b^~(a|(b^c)))+1*(b&~c)+2*((a^b)&(a^c))+4*(~(a^b)&(a^c))+1*(b&(a|~c))+4*(b^~(a&~c))+2*(~c|~(a^b))+2*(b^(a|~c))+1*(c^~(a&(~b&c)))-6*(b^~(~a&(b&c)))-1*~(~a|(b^c))-11*~(a^(~b&c))-2*~(a^b)-2*((a|~b)&(a^(b^c)))-5*((b&c)^~(~a&(b^c)))-11*(~b|(a^c))-1*(~a&(b^c))-11*~(a|(b^c))+53*~(a|(b|c))+18*~(a|(~b|c))+17*~(~a|(b|c))+21*~(~a|(~b|c))+12*(~a&(~b&c))+34*(~a&(b&c))+25*(a&(~b&c))+13*(a&(b&c));
}

uint64_t target_65(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*y+1*~(x^y)+1*(x|y)-1*~(x&y)-7*~x+5*~(x|~y)-4*(x&y);
}

uint64_t target_66(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*~(z^t)-2*z+1*t-11*(z|t)-4*~(z|t)+10*~(z|~t)+8*(z&t);
}

uint64_t target_67(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(z^t)-1*~t+4*t+4*~(z&~t)-1*~(z|t)-11*~(z|~t)-2*(z&~t);
}

uint64_t target_68(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(e^(d|(e|f)))+1*~(d^(~e|f))-6*(f^(d&e))-1*(f&(d|~e))+2*(f^(d|~e))-5*((d&e)|~(e|f))-11*(~e|(d^f))+11*~(d|(e&f))-5*(d^(~e&f))+1*(e^(d|f))+1*(e^(d&(e|f)))-2*((d&f)^~(e&~f))-5*(d&~e)+4*(f^(d|(e&f)))+4*(d|(~e|f))+4*((d&~e)|~(d^(e^f)))-6*((d|e)&(e^f))+7*~(d&(~e&f))+3*(~f&~(d^e))+5*(f&(d^e))+11*(d&(e^f))+3*(f^~(d&(e&f)))+5*(e^(~d&(e|f)))-11*(f^~(d&~e))-1*(e^~(d&(e&f)))+2*(f^(~d|(~e|f)))-1*((d|e)&(d^(e^f)))+1*(e^~(~d|(~e&f)))-2*(e&(d|f))-3*((d&f)^~(d^(~e&f)))-1*(f^~(d&(~e|f)))-5*((d^e)|~(d^f))+3*~(d|(e|f))+1*~(d|(~e|f))+5*~(~d|(e|f))+5*~(~d|(~e|f))-7*(~d&(~e&f))+6*(~d&(e&f))+20*(d&(~e&f))+4*(d&(e&f));
}

uint64_t target_69(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*(z|~t)-1*~z+1*~(z&t)+11*~t-3*~(z^t)-10*~(z|t)+2*~(z|~t)-14*(z&~t)+1*(z&t);
}

uint64_t target_70(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*~(x^y)-5*~(x&~y)+7*(x|y)+5*(x|~y)+18*~(x|y)+5*~(x|~y)-5*(x&~y)+4*(x&y);
}

uint64_t target_71(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*(d^(~e&f))+7*(f^(d&e))+11*(~(d|e)|~(e^f))+3*(e^(d&~f))+5*(e^~(d|(~e&f)))-7*(e^(d|(~e&f)))+1*((d|e)&~(d^(e^f)))-1*~(d&~d)-1*~f+1*(f^(~d|(e|f)))+1*~(d|(e&f))-11*(~(d&e)&~(d^(e^f)))+11*(~(d&~e)&~(e^f))+4*~(e&~f)-2*(~d&(e^f))+3*(e^(d&(~e|f)))-7*(d|(~e|f))-6*(f^(d&(~e|f)))-3*~(d&(~e&f))-3*((d&e)|(d^(e^f)))-2*(~(d&e)&(d^(e^f)))+2*(f^(~d|(~e&f)))+11*(~d&(~e|f))+11*(f^~(~d&(e|f)))+1*(d&e)+1*((d&f)|(e&~f))+1*(~(d|e)|~(d^(e^f)))-7*(~(d|~e)|(d^(e^f)))+1*(e^(~d|(e&f)))+3*(e&~(d&~f))-6*(e^(~d&(e|f)))+2*((e&~f)|~(d|(~e&f)))-1*((e&f)|(d&(e|f)))-1*~(~d|(~e&f))+1*((d&e)^(d^(~e|f)))+11*((d|~e)&(d^(e^f)))-5*(f^~(~d&(~e&f)))-34*~(d|(e|f))+17*~(d|(~e|f))+13*~(~d|(e|f))+5*~(~d|(~e|f))+3*(~d&(~e&f))-24*(~d&(e&f))+12*(d&(~e&f))-11*(d&(e&f));
}

uint64_t target_72(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*a-5*~(~a&(b|c))-1*(b^(~a&(~b|c)))-6*(b^~(~a|(b&c)))+7*(c^~(a|b))+1*(~(a|b)|~(a^(b^c)))+1*(~a&(b^c))-7*(~(a&~b)&(b^c))-2*~(a^c)+2*((b&c)^~(~a&(b^c)))+5*~(a&~c)-6*~(a|~c)-1*(~b&(a^c))+2*((b&c)|(~a&(b|c)))+1*(c^~(~a&(~b&c)))-2*((b&~c)^(~a|(b^c)))-7*~(a|(b^c))+11*(c^(a|b))+11*~(a&(b&c))+1*(c^~(a&(b&c)))+1*~a-5*(~c|(a^b))-11*~(a&~a)+1*(b^~(a&(b&c)))-7*~(b&c)+4*~(a&(~b|c))+5*(~(a&b)&(b^c))+1*(c^(a|(b|c)))+11*(~(a&b)&~(b^c))+3*(~(a^b)|~(a^c))-7*(~a|(b&c))-1*(c^~(a|(~b&c)))-1*(b^(a&(b^c)))+3*(a|~c)-2*((a&~b)|~(b^c))+5*((b&c)^~(a&(b^c)))+5*(b^~(a&(~b&c)))+4*(b^(a|(b|c)))-11*(~(a^b)|(a^c))-3*(c^(~a|(~b|c)))+3*(c^(a&b))-5*(b|~(a|c))+7*((a&b)^(a^(b&c)))-11*((a&b)^~(a^(~b|c)))-7*((a&b)|(a^(b^c)))+11*((a|b)&(a^(b^c)))+11*(b^(~a|(b&c)))-3*~(a|(b|c))-12*~(~a|(b|c))+11*~(~a|(~b|c))-13*(~a&(~b&c))+11*(~a&(b&c))-6*(a&(~b&c))+12*(a&(b&c));
}

uint64_t target_73(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*(e^(d|(~e|f)))-1*~(e^f)+11*(~d|(e&f))-3*(f&~(d&e))+3*((d&e)^(e|~f))-2*~(d&(e&f))+1*(f|~(d^e))-2*(e^~(~d&(e&f)))-6*(f^(d|(e|f)))+4*(e^~(d|(e^f)))+4*~(~d&(e&f))+1*((e&f)|(~d&(e|f)))+5*((d&~e)|~(d^(e^f)))-2*(~(d&e)&(e^f))+2*(f^(d|(~e|f)))-5*(~d|(~e&f))-3*((d&e)^~(d^(~e|f)))+2*((e&~f)^(d|(e^f)))+11*~(~d|(e^f))+7*(e|~(d^f))+3*((d|e)&~(e^f))+11*(e^~(d&f))-1*(f^(~d|(~e&f)))+1*((e&f)^~(~d&(e^f)))-1*(f^~(~d&(~e|f)))-2*(f^~(~d&(e&f)))-7*((e&~f)^(~d|(e^f)))-41*~(d|(e|f))-19*~(d|(~e|f))-37*~(~d|(e|f))-11*~(~d|(~e|f))-19*(~d&(~e&f))-8*(~d&(e&f))-7*(d&(~e&f))-54*(d&(e&f));
}

uint64_t target_74(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*(c&(a|~b))+7*(~(a&b)&(a^(b^c)))-1*((a&b)|~(b^c))+11*~(a^(~b&c))-6*(b&~(a&~c))-1*((a|b)&~(b^c))+4*(b^~(~a&(b^c)))+1*(b^(a&(b^c)))+3*((b&~c)|~(a|(~b&c)))+1*(b^~(a&(~b|c)))+2*(~(a&b)&~(b^c))+2*(~a|(b^c))-11*(~(a|~b)|(a^(b^c)))-1*(a|(~b&c))+2*~(b|~c)-1*(b^~(a|(~b&c)))+4*(c^(a&(~b|c)))-7*(b^(~a|(b|c)))-2*(~(a^b)&(a^c))+2*(c|(a^b))+7*(c|(a&b))-1*(~a|(~b&c))+4*(b^(~a|(b&c)))-1*(b^c)-2*(c&~(a&~b))+5*(~(a^b)|~(a^c))+1*c-11*(a|(b|c))+11*((a|~b)&(b^c))+3*((a&c)|~(b|c))+2*(b^(a&(b|c)))+1*(a^(~b&c))-1*(a^(b|c))+1*((a&c)|(b&~c))-2*(c^(a|(b|c)))+5*(c^(a&(b|c)))-30*~(a|(b|c))-5*~(a|(~b|c))-25*~(~a|(~b|c))-24*(~a&(~b&c))-6*(~a&(b&c))-40*(a&(~b&c))+8*(a&(b&c));
}

uint64_t target_75(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(z&t)+11*(z|t)-11*z-2*~(z|t)-10*~(z|~t)+1*(z&~t);
}

uint64_t target_76(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*(x^y)-2*~(x&~x)-11*y-2*~(x&~y)+3*~y+8*~(x|y)+32*~(x|~y)+16*(x&~y)+22*(x&y);
}

uint64_t target_77(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*t+7*~z+5*(z^t)-2*~(z&~t)-5*~(z|t)-5*(z&~t)-1*(z&t);
}

uint64_t target_78(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*((a^b)|(a^c))-6*~(a|~c)-11*(~(a|b)|(a^(b^c)))+11*(b^(a&(~b|c)))+5*(a&~c)-1*(c^~(a|~b))+4*(~b&~(a^c))+11*(~c|(a^b))-1*(~(a&b)&~(a^(b^c)))-7*((a&b)^~(a^(~b|c)))-3*(c&~(a&~b))-11*(c^(a|(b|c)))-1*~(a&~c)-2*(c&~(a&b))-1*((a&b)^(a^(~b|c)))-1*(c^(~a|(b|c)))+1*~b+2*((a&c)^~(a^(b&c)))-5*(c|~(a|~b))+1*~(a^(b|c))+7*(c|(a&~b))+4*(b^~(a|c))-11*((a&c)^(b|c))-8*~(a|(b|c))+22*~(a|(~b|c))-8*~(~a|(b|c))-4*~(~a|(~b|c))+29*(~a&(~b&c))-22*(a&(~b&c))+10*(a&(b&c));
}

uint64_t target_79(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*(c^(a|b))+2*(c^~(~a&(~b&c)))-1*~(b|c)+1*(~a|(b|c))+1*(b^(a|c))-7*~(a^b)-2*((a&b)|(a^(b^c)))-5*(b^(a|~c))+2*(c^(a|(~b&c)))-11*(b^(~a|(~b|c)))-1*((a&b)|~(b|~c))-6*((a&b)|(b^c))+1*~(a|(~b&c))+4*(b|~(a|c))-1*((b&c)|(~a&(b|c)))+11*(b&(a|c))+11*(~(a|~b)|~(a^(b^c)))+2*(~b|(a^c))+4*(c&(a|b))+2*(b^(~a|(b&c)))+2*(b^~(a&(b|c)))-7*((a&b)^(b|~c))+3*(~c&(a^b))-2*(c^(a&b))+11*(a|~c)-1*(c^(~a|(~b|c)))+1*(c^~(a&(b&c)))-5*(b^~(~a|(b&c)))-7*(b^~(a&c))+2*~(a|(b|c))-10*~(a|(~b|c))+18*~(~a|(b|c))-14*~(~a|(~b|c))+30*(~a&(~b&c))-16*(~a&(b&c))+3*(a&(~b&c))-2*(a&(b&c));
}

uint64_t target_80(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*(z|t)+2*~(z&~z)+3*~(z&t)+1*~t+11*~z-5*~(z&~t)-4*~(z|~t)-4*(z&~t)+5*(z&t);
}

uint64_t target_81(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(z|~t)-2*~t+2*~(z&~z)+1*~(z&~t)-7*~(z^t)+1*~(z&t)-3*t+7*~(z|t)+1*(z&~t)+9*(z&t);
}

uint64_t target_82(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(x^y)+1*~(x^y)+4*~x-6*(x|y)-1*(x|~y)-4*~(x|y)+8*(x&~y)+6*(x&y);
}

uint64_t target_83(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(x|y)-1*(x^y)+2*~(x^y)-1*x+7*y-7*~(x|~y)-9*(x&y);
}

uint64_t target_84(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(z&~t)+1*t-5*(z^t)+2*~z-6*~(z|t)-3*(z&~t)-8*(z&t);
}

uint64_t target_85(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*((a^b)|(a^c))+2*(~(a^b)|~(a^c))-2*(c^(a|(~b&c)))-6*(b^~(~a|(b&c)))+4*(b^(~a|(~b|c)))+1*(c^~(~a&(~b&c)))+4*((a&c)|~(b|c))+1*(~(a|b)|~(a^(b^c)))-12*~(a|(b|c))+5*~(a|(~b|c))+2*~(~a|(b|c))-3*~(~a|(~b|c))-6*(~a&(~b&c))+10*(~a&(b&c))-1*(a&(~b&c))+1*(a&(b&c));
}

uint64_t target_86(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*z+4*~t+3*~(z^t)+2*~(z&~z)+5*(z|~t)+1*~z+1*~(z&t)-16*~(z|t)-15*~(z|~t)-11*(z&~t)-20*(z&t);
}

uint64_t target_87(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*((a&b)^(a^(~b|c)))-2*(c^(a|(b&c)))-1*~(a^(b^c))-1*(~(a|~b)|(b^c))+3*(c^~(a&(~b&c)))+2*(c|~(a^b))-1*((a&~b)|(a^(b^c)))+2*((a|~b)&~(a^(b^c)))+2*(a^(b&c))-2*(b^(a|~c))+1*(c^~(a|(b&c)))+7*((a&b)|(a^(b^c)))-1*(~(a|b)|(b^c))-1*(c|~(a|b))-2*(~c|~(a^b))-5*~(a|(~b&c))+6*~(a|(b|c))-2*~(a|(~b|c))-6*~(~a|(b|c))-10*~(~a|(~b|c))-4*(a&(~b&c))-4*(a&(b&c));
}

uint64_t target_88(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*(f^(d&e))+11*(~e&~(d^f))+4*(e^~(d|(~e&f)))-1*(e|~(d|f))+2*(f^~(~d|(~e&f)))+2*(f^~(d&e))+2*~(d^e)+3*(e^~(~d|(~e&f)))-1*(f^(d|(e&f)))-3*~(~d&(e&f))+3*(f^~(~d&(~e&f)))+1*(e|~f)+1*(e^~(~d|(e&f)))-5*(d&(e^f))-11*(~d|(e^f))-6*e+1*(f^(~d|(~e&f)))+2*(~(d|e)|~(d^(e^f)))-11*(e^~(~d&(~e|f)))+3*(e|(d^f))+4*((d^e)|(d^f))+11*(d|e)+1*(d|(e^f))-11*(~(d&~e)&~(e^f))+11*~(d&(e^f))-11*(e&~(d&f))-18*~(d|(e|f))-9*~(d|(~e|f))-34*~(~d|(e|f))-7*~(~d|(~e|f))-18*(~d&(~e&f))+1*(~d&(e&f))-7*(d&(~e&f))-23*(d&(e&f));
}

uint64_t target_89(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*~a+1*(c^(a|~b))-1*(b&(a|~c))-11*((a&b)^(a^(~b|c)))-1*(b^(a|(~b&c)))+4*(~a|(~b&c))+7*~(b|~c)+3*(c^~(a|~b))+11*(~(a|~b)|~(b^c))-1*(c^~(a&(~b&c)))-3*(~(a|b)|(a^(b^c)))+1*(b^~(a&(b^c)))-5*(a^b)-2*(b^(~a&(b|c)))-6*(a|(b^c))+2*~(a|(b&c))-7*~(a|(b|c))-6*~(a|(~b|c))+3*~(~a|(b|c))+8*~(~a|(~b|c))+3*(~a&(~b&c))-2*(~a&(b&c))+9*(a&(b&c));
}

uint64_t target_90(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*(~(d^e)|~(d^f))+1*(f^(~d|(~e&f)))+1*~(~d&(e|f))+1*((d&e)^(d^(~e|f)))-11*(e|(d&~f))+3*(e^~(d|(e^f)))+1*~(d|(e^f))+3*~f-3*(e^~(d&(e^f)))+1*(e&f)-11*((d&e)^~(d^(~e|f)))-7*(~d&(e|f))+1*(f&(d^e))-1*(e^~(~d&(e|f)))-3*((d&e)^(d^(e&f)))+3*(~d&(~e|f))+2*(d^f)+11*((d&f)^~(d^(e&f)))-5*(~f|~(d^e))-1*(d|f)+7*~(d^(~e|f))-1*(e^(~d&(e^f)))-3*(e^(d|(~e&f)))-2*(e^~(~d&(~e&f)))-2*~(d&f)+4*(e^~(d|~f))+1*(f^(~d&(~e|f)))+3*(d&(e^f))-4*~(d|(e|f))+19*~(d|(~e|f))+29*~(~d|(e|f))+26*~(~d|(~e|f))+8*(~d&(~e&f))+21*(~d&(e&f))+5*(d&(~e&f))+9*(d&(e&f));
}

uint64_t target_91(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*(z^t)-7*~z+5*t+7*~(z|t)+4*~(z|~t)+2*(z&~t);
}

uint64_t target_92(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(e^(d&(e|f)))+5*(~d&(~e|f))+1*~(d|e)-1*(~e&(d^f))-1*(~(d|~e)|~(d^(e^f)))-2*(f&~(d&e))-3*(e^(~d|(e|f)))+5*(e^~(~d&(e&f)))+7*~(d|~e)+11*(d^(e^f))+4*~(d&e)+3*(d^e)-1*(e|~(d|~f))-5*((d&f)^~(d^(~e&f)))+2*(~(d|~e)|~(e^f))+2*(f^~(~d&(e|f)))-7*(e^(d|(e^f)))+5*(f^(~d|(~e&f)))-1*((d|~e)&(d^(e^f)))-6*((d&f)^~(d^(e&f)))+11*(e^~(~d|(e^f)))-2*((d&~e)|(e^f))+2*(f^~(d&~e))+2*(e^(~d|(e&f)))+2*(~(d|e)|~(d^(e^f)))-2*~(d&(e^f))+11*(d^(~e|f))+4*((d&~e)|~(e^f))+5*(f^(~d|(e&f)))+1*(~d|(e^f))+7*~(e^f)-3*(f|(d&~e))-2*(f&(d|e))-2*(~f&(d^e))-1*(f^(~d&(e|f)))+11*~(d^(e|f))+3*(~(d&e)&~(e^f))-11*~(d^(e&f))-2*~(d&(e&f))-1*(d|(~e&f))-11*(d&(e^f))-42*~(d|(e|f))-19*~(d|(~e|f))-31*~(~d|(e|f))-24*~(~d|(~e|f))-2*(~d&(~e&f))-43*(~d&(e&f))+3*(d&(~e&f));
}

uint64_t target_93(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*z+7*~(z^t)-2*(z|t)+2*~t+4*~(z&t)-13*~(z|t)-3*~(z|~t)-5*(z&~t)-7*(z&t);
}

uint64_t target_94(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(b^(a&(b^c)))+3*(b&~(a&c))-7*(c^~(a|(~b&c)))+2*~b-3*(~(a&~b)&(a^(b^c)))-6*(c|(a&b))-7*~(a&(b|c))+11*(b|~(a|~c))+11*(~c&~(a^b))-2*(~(a^b)&~(a^c))+4*(b&~(a^c))+5*(~c&(a^b))+4*(~(a|~b)|~(b^c))-1*(~(a&b)&(a^(b^c)))-1*(~b|~(a^c))+1*((a&b)|~(b^c))+2*(c^(a&b))-2*~(a|(b^c))+5*(b&~c)-1*(c&(a^b))+2*(b^~(a&(b^c)))+1*((a&b)|~(b|c))-11*(b&(a|c))+4*(c^~(a&b))+1*~(a|(b&c))+1*~(a&b)-1*((a&c)^~(b&~c))-1*(~(a&~b)&(b^c))+1*((b&c)^~(~a&(b^c)))-7*(c^(a|b))+3*(b^~(a|(b^c)))-2*(c|(a&~b))+1*(b^(~a|(~b&c)))+1*~(~a|(b&c))+2*(b^~(~a&(~b&c)))-2*(c^~(a&(~b|c)))+1*(b^~(~a&(b&c)))-6*(b^~(a&(~b&c)))-3*(a&~b)-7*~(a|(b|c))-14*~(a|(~b|c))+2*~(~a|(b|c))-16*~(~a|(~b|c))+21*(~a&(~b&c))+6*(~a&(b&c))+9*(a&(~b&c))+4*(a&(b&c));
}

uint64_t target_95(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(c|~(a|b))-2*~(b|~c)+7*(~(a|b)|(a^(b^c)))+5*(~b|~(a^c))+3*(~b|(a^c))+4*(a&~c)+2*(b^~(~a|(~b&c)))-2*((a^b)|(a^c))-2*(b^~(a&~c))-18*~(a|(b|c))-19*~(a|(~b|c))-19*~(~a|(b|c))-3*~(~a|(~b|c))-14*(~a&(~b&c))-8*(~a&(b&c))-10*(a&(b&c));
}

uint64_t target_96(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(z^t)+4*z-3*~(z&t)+4*~z+2*(z^t)-6*~t+6*~(z|t)-3*~(z|~t)+6*(z&~t)-3*(z&t);
}

uint64_t target_97(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*(x|~y)+4*~x+7*~(x&~y)-2*~(x&y)+1*y+2*~(x|y)-13*~(x|~y)+10*(x&~y);
}

uint64_t target_98(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*~(z^t)+11*~(z&~t)-5*~z-6*~(z|~t)-14*(z&t);
}

uint64_t target_99(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*~(z&t)-7*~t+3*(z|~t)-11*~(z^t)-15*~(z|~t)-11*(z&~t)+4*(z&t);
}

uint64_t target_100(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~t-2*~(z&~z)+5*~(z^t)+11*z+4*(z^t)-7*~(z&t)+10*~(z|t)+16*~(z|~t)-11*(z&~t)-14*(z&t);
}

uint64_t target_101(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*((d^e)&(d^f))+3*(~(d&e)&(e^f))+1*(e^~(d|~f))+5*(~f&~(d^e))+1*((d&e)|~(e^f))-7*(e^f)-1*((e&f)|(d&(e|f)))+11*(f^~(d|~e))-6*(f^(d|(e&f)))+2*(~d|(e^f))-6*(~e&(d^f))+7*(e&~f)-11*((e&f)|(~d&(e|f)))-3*~(d|(e^f))+11*(d^(e&f))+3*(f^~(d|(~e&f)))-2*(e^~(d|(~e&f)))+1*(e&(d|~f))+1*(e^~(~d&(e|f)))+1*(e^~(d|(e&f)))-1*((d&e)|~(e|~f))-1*((e&~f)|~(d|(~e&f)))+2*(e^(d&f))-7*(e^(~d|(~e|f)))+2*(~d&(e^f))+1*(e^(~d|(e&f)))+7*~(d^(e^f))+5*(e^~(~d&(e&f)))-6*(e^~(~d|(e^f)))-2*(~(d|e)|~(e^f))-1*((e&~f)^(d|(e^f)))-2*(~e&~(d^f))-2*~(d^(e|f))+5*(e^(~d&(e^f)))-1*~(~d&(~e|f))+1*(f^~(d&(e&f)))-7*(~(d|~e)|~(e^f))+2*(e|~f)-5*(~(d^e)|~(d^f))-3*(e|~(d|~f))-1*(f&~(d^e))-5*~(d|(e|f))-2*~(d|(~e|f))+13*~(~d|(e|f))-12*~(~d|(~e|f))+9*(~d&(~e&f))+2*(~d&(e&f))-25*(d&(~e&f))+4*(d&(e&f));
}

uint64_t target_102(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(~(d|e)|(e^f))+2*((d|~e)&(e^f))+1*(~(d|e)|~(e^f))-2*(e^(d&(e^f)))-2*(f^(d&(e|f)))-2*~(d^e)-3*(e^(d|(e^f)))+11*(~f|~(d^e))+2*~(d|(~e&f))-3*(d^f)-7*(e^~(d|f))-1*(e^~(d&(e^f)))-2*(d|(e|f))+1*~(~d&(e^f))+1*(e^~(d&(e|f)))+1*(f^~(~d&(~e|f)))-7*(f^~(d&e))+1*((d&~e)|(d^(e^f)))-7*(d^(e&f))-1*(f^(~d|(e&f)))+5*((d&~e)|(e^f))-1*((d|~e)&~(d^(e^f)))+4*(d^e)+7*((e&~f)^(d|(e^f)))-7*(~(d&~e)&(d^(e^f)))+2*(f^~(~d|(~e&f)))-6*((d&e)^~(d^(~e|f)))-3*(f^(~d&(~e|f)))-6*(f|(d&~e))+2*~(~d&(~e&f))-1*~(d&~f)+3*(e^~(d|(e^f)))-2*((d&e)^(d^(e&f)))-3*e+2*(e^~(~d&(e&f)))-1*((d&e)^(e|f))+2*(~(d^e)&(d^f))+3*((d|~e)&(d^(e^f)))-11*(~e&~(d^f))+11*~(d|(e^f))+1*(f&(d^e))-5*(~(d^e)&~(d^f))+3*((e&f)^~(~d&(e^f)))+4*(f^~(d&(~e|f)))+2*~(~d|(e&f))+5*(e^(d|(e|f)))-2*(e|(d&f))+2*(e^~(d|~f))+11*(e&~(d&~f))+2*f+7*(f^~(d|e))+11*(f^~(d&(e|f)))+1*(f^(d&~e))-1*(e^(~d|(~e|f)))-1*~(d&(e&f))+4*(f^~(d|~e))+1*(~e&(d^f))-11*(e|~(d|f))-2*(d^(e|f))-1*(f^(d|(~e&f)))-2*(e^(d|(e&f)))-8*~(d|(e|f))-13*~(d|(~e|f))-20*~(~d|(e|f))+9*~(~d|(~e|f))-21*(~d&(~e&f))+9*(~d&(e&f))-14*(d&(~e&f))-11*(d&(e&f));
}

uint64_t target_103(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*z+2*(z|t)+2*~t-3*~(z&t)+1*~(z&~z);
}

uint64_t target_104(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~(z&~t)+1*~z+11*~t+1*(z|t)-16*~(z|t)-7*~(z|~t)-11*(z&~t)-5*(z&t);
}

uint64_t target_105(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(~(a^b)&(a^c))-6*(c|(a^b))+1*~(~a&(~b&c))+1*(~(a^b)&~(a^c))-2*((b&c)^~(a&(b^c)))-11*(c^~(~a|(b&c)))-6*((b&c)|(a&(b|c)))-1*(~a&(~b|c))+4*~(~a&(b|c))-1*(a^b)+1*(c^(a|(~b&c)))-5*(a&c)-1*(b^~(a|~c))-2*(b^~(~a&(b^c)))+4*(c^~(a|b))+3*(~(a|~b)|(a^(b^c)))+2*((a^b)|(a^c))+1*(c^~(~a&(~b|c)))-11*((a&b)^(a^(b&c)))+1*((a^b)&~(a^c))-5*(b^(a&(b^c)))+4*((a&~b)|~(a^(b^c)))+1*(b^(~a&(b|c)))-1*~a+4*~(b|c)-1*~(a^(b^c))-3*~(a^(b|c))-2*(b^(~a|(~b&c)))-7*(c^(a&b))+3*(c^~(~a&(b&c)))-1*~(a|b)+2*(b^(a|~c))+1*(a^(b|c))-3*((a&~b)|(b^c))-1*((a|b)&~(a^(b^c)))-5*(c|~(a|~b))-3*(b^(~a|(b^c)))+7*(a^(b^c))+1*(~a|(b|c))+7*(~(a|~b)|(b^c))-8*~(a|(b|c))-1*~(a|(~b|c))+3*~(~a|(b|c))+8*~(~a|(~b|c))+18*(~a&(~b&c))+26*(~a&(b&c))+36*(a&(b&c));
}

uint64_t target_106(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(x^y)-3*y-5*(x^y)-7*~x+4*~(x|y)+13*~(x|~y)+3*(x&~y)-1*(x&y);
}

uint64_t target_107(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(f&~(d&e))+1*((d&f)|~(e|f))+3*(~(d|~e)|~(d^(e^f)))-3*~(d&(~e&f))-7*(f^(d|(~e|f)))-1*~(d&(e^f))-1*(e^~(d|(e&f)))+1*~(e&~f)-1*~(d^(e&f))+1*(f^~(~d&(~e&f)))-2*((e&~f)^(d|(e^f)))-5*((d|~e)&(d^(e^f)))+11*(e^~(~d|(e^f)))+2*(e|~(d|~f))-1*(~(d&e)&~(d^(e^f)))-1*(d&(e^f))+5*(d&f)-2*((d&e)|~(e|f))-1*((d&~e)|(d^(e^f)))+2*((e&f)|(~d&(e|f)))+5*((d^e)&~(d^f))-5*(e^~(d|(~e&f)))+11*(~f|~(d^e))-11*(f^(d&~e))-1*(f^~(d|~e))-5*(d^(e&f))+1*((d|~e)&(e^f))-2*(~(d|e)|(d^(e^f)))-6*(e^~(d&(~e|f)))+2*~(~d&(~e|f))+2*(f^~(d&(e&f)))-3*(~(d^e)|~(d^f))+2*(~(d^e)|(d^f))+11*(e&f)-11*~(d&(~e|f))-1*(~f|(d^e))+1*(e^(d|(e&f)))-3*(e^(~d|(e^f)))+1*(~e&(d^f))+4*((d|~e)&~(d^(e^f)))+5*((d&e)|~(e^f))+5*(e&~(d&~f))+1*((d&f)^(e|f))-1*(e&~(d^f))-6*(f^~(~d&(~e|f)))-6*(d^f)-3*e+6*~(d|(e|f))-12*~(d|(~e|f))+14*~(~d|(e|f))-2*~(~d|(~e|f))+39*(~d&(~e&f))+4*(~d&(e&f))-18*(d&(~e&f))-9*(d&(e&f));
}

uint64_t target_108(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*(e|(d&f))-1*((d&e)|(d^(e^f)))-3*(f&(d|e))-6*(e&(d|f))+3*(f^(d|(~e&f)))+7*(~f|~(d^e))+1*((e&f)^~(d&(e^f)))-1*(f^(d|(e|f)))+1*~(d|f)-7*((d|~e)&~(e^f))-1*((d&e)^(d^(~e|f)))-1*(f^(d|(e&f)))-1*(e^(~d&(e|f)))-2*(e|~(d^f))+1*(~(d|~e)|(e^f))+1*(d|~e)+4*((d^e)|~(d^f))+1*(f^(~d|(e&f)))+5*(e^(~d|(e&f)))+11*(e^~(~d&(~e|f)))+2*(~e|(d^f))+1*(e^~(d&(~e&f)))+5*(d|~f)-1*(e^(d&(e|f)))-5*~(e|f)-7*(d|(~e&f))+7*((d&f)^(d^(~e&f)))+5*(e&~(d^f))+2*(f^~(d|~e))-11*~(d&(e|f))+3*(f^(d|~e))-7*~(~d&(~e|f))+11*(d&(e|f))+3*~e-11*(f|(d^e))-5*(~(d&~e)&(e^f))-6*~(d&(~e&f))+1*(d^(~e|f))-14*~(d|(e|f))+12*~(d|(~e|f))-2*~(~d|(e|f))-15*~(~d|(~e|f))+2*(~d&(~e&f))+21*(~d&(e&f))-23*(d&(~e&f))+11*(d&(e&f));
}

uint64_t target_109(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*((d|e)&~(e^f))-1*(f^~(d&(~e&f)))+7*(f^(~d|(~e|f)))-11*(~f&(d^e))+4*~(e^f)+2*(f^(d&(e|f)))-2*(e^(~d|(e&f)))-7*(~d|(e^f))+3*((d&e)|~(d^(e^f)))+1*((d&f)^(d^(~e&f)))+5*~(d^f)+11*(e&~(d^f))+11*(f^(~d|(e|f)))+3*(~e|(d^f))+1*(e^(d&(~e|f)))+2*(f^(d|(~e&f)))+7*(f^~(d|e))-1*(~(d^e)&(d^f))-7*(e^~(d|(e&f)))-1*(e|(d&~f))+1*(e^(~d|(e^f)))-1*(e|f)+1*((d&f)|~(e|f))-1*(d^(e&f))-3*((d&e)|~(e|~f))+1*~(~d&(~e&f))+1*(e^(~d&(~e|f)))+5*(e^~(d&(~e|f)))+3*(f^(~d|(e&f)))-6*(e^~(d&f))+4*(f^~(d|(~e&f)))+1*(~d&(e^f))+1*~(d&e)+4*~f+1*(~f&~(d^e))-11*(e^~(~d&(~e|f)))+1*(e^~(~d&(~e&f)))-5*((d|~e)&(e^f))-3*(~(d&e)&(d^(e^f)))+1*~(~d|(e&f))+7*(f&(d^e))-43*~(d|(e|f))-28*~(d|(~e|f))+7*~(~d|(e|f))-2*~(~d|(~e|f))+17*(~d&(~e&f))-4*(~d&(e&f))-10*(d&(~e&f))-25*(d&(e&f));
}

uint64_t target_110(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~(z&t)+4*(z|~t)+5*(z|t)+2*(z^t)+11*~(z&~t)-1*~z-8*~(z|t)-5*(z&~t)-20*(z&t);
}

uint64_t target_111(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*(~c|~(a^b))-7*~(a&~c)-2*((a&~b)|~(b^c))-2*(c&~(a^b))+4*(c^(a|(~b|c)))+1*(b&~(a&~c))-3*(b^~(a&(b^c)))+1*(b^~(a&c))+2*(c^(~a&(~b|c)))+2*(a^(~b&c))+1*~(b|~c)-1*(b^(a&~c))+4*~(~a&(~b|c))+1*(c^~(~a&(~b|c)))-1*(~b|(a^c))+5*(b^(a|~c))+1*(b^(a&(b^c)))-2*((a|b)&(a^(b^c)))-1*~(a&(~b|c))-11*(a^b)+1*~(~a|(b^c))+2*((a&b)^(b|c))+3*((a&b)^(a^(~b|c)))+2*(~c|(a^b))+7*(~(a&~b)&(b^c))-1*~(a&~b)+5*~(~a&(b|c))+1*c-6*(~a|(~b|c))-3*(c^~(~a&(b|c)))+1*(~a|(b^c))-7*(c^~(~a|(~b&c)))+5*(b|~(a|~c))+2*(~(a|~b)|(a^(b^c)))+11*(c^(a|(~b&c)))-5*~(a|c)-3*(a&c)-7*~(a|(~b&c))+20*~(a|(b|c))+25*~(a|(~b|c))+8*~(~a|(b|c))-16*~(~a|(~b|c))+15*(~a&(~b&c))+19*(~a&(b&c))+18*(a&(~b&c))+3*(a&(b&c));
}

uint64_t target_112(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(x^y)+5*y-2*~x-6*(x|y)-1*x+2*(x|~y)-3*~(x|y)+5*(x&~y)-3*(x&y);
}

uint64_t target_113(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*~(x^y)+2*(x^y)-2*(x|~y)+1*y-1*~(x&y)-4*~(x|y)-2*~(x|~y)-6*(x&y);
}

uint64_t target_114(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(c^~(a&b))-2*(b^~(a&~c))-1*((b&c)^~(~a&(b^c)))+2*(b^(a&(~b|c)))-2*~(~a&(~b&c))-1*(b^(a|(b&c)))+2*(c^(a&b))+1*(c^~(~a&(~b|c)))+2*((a^b)|(a^c))+5*((a&b)^~(a^(~b|c)))-3*(c^(a|(b&c)))-2*~(a|(b|c))-15*~(~a|(b|c))-4*~(~a|(~b|c))-10*(~a&(b&c))-5*(a&(~b&c))-5*(a&(b&c));
}

uint64_t target_115(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*(f^~(~d&(e&f)))+2*((d|~e)&~(d^(e^f)))-1*((d&e)^(d^(~e|f)))-1*(f^(~d|(e|f)))-5*(f^~(d&(~e&f)))+1*(f^(~d|(~e&f)))-11*~(d^(~e&f))+7*(e^~(d&(e^f)))-6*(d|(e|f))+3*((d&e)^~(d^(e&f)))+11*(~(d&e)&~(e^f))-2*(~d|(e|f))-6*~(d|(e^f))+1*(f^(d|(e&f)))+11*(~f|(d^e))-1*(f^~(~d|(~e&f)))+5*(f^~(~d&(~e|f)))+5*(f&~(d&e))+1*((d&~e)|(e^f))-2*(f^(~d|(~e|f)))-2*(f|(d&e))+2*(e|~(d|~f))-2*(~e|~(d^f))+1*(d^(~e|f))+2*~(d|e)+2*~(d^f)+5*(f|~(d^e))+7*(e^~(~d|(~e&f)))-7*~(d|(~e&f))-7*((d|e)&~(d^(e^f)))+11*(e^(d&(~e|f)))-3*(~(d|e)|(e^f))+4*((d&e)^(e|f))+2*(e^(~d|(e&f)))-3*((d^e)|(d^f))+3*~d-1*((d&f)^~(d^(e&f)))-1*~(~d&(~e&f))-1*(f^~(d|e))-1*(f|(d^e))-1*(e^~(d|f))-6*(f^(~d|(e&f)))+1*(f^(d|(~e|f)))+2*((d^e)&~(d^f))-1*(f^(d&e))-5*(f&(d^e))+5*(e^~(d&(e|f)))+1*~(d|(e|f))+3*~(d|(~e|f))-35*~(~d|(e|f))-17*~(~d|(~e|f))-26*(~d&(~e&f))-2*(~d&(e&f))+12*(d&(~e&f))-1*(d&(e&f));
}

uint64_t target_116(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(z|t)+7*z+1*~z+7*(z|~t)-13*(z&~t)-13*(z&t);
}

uint64_t target_117(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*z-1*~(z&~z)-1*(z|~t)+1*~(z|~t)+3*(z&t);
}

uint64_t target_118(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*(x^y)-5*x+2*~(x&~x)-1*(x|y)-2*~(x|y)+6*~(x|~y);
}

uint64_t target_119(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(x&~y)-11*x+3*y-1*~(x&y)+2*(x|~y)-7*~(x|y)-8*~(x|~y)+10*(x&~y)+4*(x&y);
}

uint64_t target_120(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(z|~t)-7*~t-1*(z|t)-2*(z^t)+1*~(z&~t)+4*~(z|t)+2*~(z|~t)+9*(z&t);
}

uint64_t target_121(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(z&~z)+1*z+3*~(z^t)+4*t-1*~t-1*~(z&t)+3*~(z|t)-16*~(z|~t)-6*(z&~t)-15*(z&t);
}

uint64_t target_122(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(z^t)+1*~(z&~z)-5*(z^t)+4*(z&~t)-3*(z&t);
}

uint64_t target_123(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(x&~x)+2*y-11*(x|y)+1*~(x&y)-6*~(x&~y)-2*~x+1*(x|~y)-5*~(x^y)+12*~(x|y)+17*~(x|~y);
}

uint64_t target_124(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*(d&~e)+1*(d&e)+1*~(d&f)-2*(e&~(d^f))+3*(d|(~e&f))-2*(d^(e&f))+11*(~d|(e|f))+3*(d&~f)-5*~(d|(~e&f))-3*((d&f)^~(e&~f))-1*(f^~(d&(e&f)))-1*(d^f)+7*(f^(d|~e))+3*(e^~(d|(e^f)))+1*(e^f)-11*~(d&(e&f))-1*(f^~(~d|(e&f)))+11*(e^~(d|~f))-7*e-3*(~(d|~e)|~(d^(e^f)))+11*f+1*(d^(e^f))-5*(f^~(~d|(~e&f)))+2*(~d|(e^f))-2*(~(d|e)|~(e^f))-7*(~f|~(d^e))-1*~(d|~f)-2*(e&~(d&~f))+1*(~(d&~e)&(e^f))-7*(f^(d|(e|f)))+1*((d&e)^(d^(e&f)))+11*(d&(~e|f))+2*~(~d&(~e|f))+5*(e^~(~d&(~e&f)))+1*(~(d|e)|~(d^(e^f)))-2*(f^~(~d&(~e|f)))+1*(~e|~(d^f))+11*(d|(~e|f))-5*(f^(d&(~e|f)))-11*(~(d&~e)&~(d^(e^f)))-2*(e&~f)+2*((d|e)&~(d^(e^f)))+7*~(~d|(~e&f))-6*~(~d|(e&f))-11*((d&e)|~(d^(e^f)))+2*(~d&(e^f))+5*~d-3*((d&~e)|~(e^f))-11*(f^(~d&(e|f)))-1*(d|f)-1*~f+4*(e|(d&f))-1*(f^(d&(e|f)))-3*(f^~(~d&(e|f)))+2*(e^~(d|(e&f)))+13*~(d|(e|f))+27*~(d|(~e|f))+14*~(~d|(e|f))+10*~(~d|(~e|f))-20*(~d&(~e&f))+33*(~d&(e&f))-7*(d&(~e&f))-20*(d&(e&f));
}

uint64_t target_125(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*((a&~b)|~(b^c))-1*(c^~(a&b))-6*(c&(a|b))-11*(c^(~a|(~b|c)))-1*(b^~(a|(b^c)))-3*(b^~(a&(~b|c)))-1*(b&~c)-2*(c^~(a&(b&c)))+5*((b&~c)|~(a|(~b&c)))-6*((b&c)|(~a&(b|c)))+11*(b^(a|c))+4*(~(a&~b)&~(b^c))-7*((b&c)|(a&(b|c)))-1*(a|(b|c))+7*(a^b)+7*((a&b)|(a^(b^c)))-1*(a|(b&c))+3*~(a|~c)+4*(c^(a|~b))-1*(b^(a|(~b&c)))+7*((a&b)^(b|~c))+11*(c^~(a|(b&c)))+3*(~(a^b)&~(a^c))+1*(b&(a^c))-7*(~(a&b)&(b^c))-6*((b&~c)^(a|(b^c)))+2*(~b&(a^c))+2*(c&~(a&b))-2*((a&~b)|(b^c))+1*((a&c)^~(b&~c))-7*(c^(a|b))-1*(b^~(~a&(~b&c)))+3*(~a|(b&c))+2*((a|b)&~(a^(b^c)))+1*(~a&(b|c))-11*(b^~(~a|(b&c)))-6*(c^~(a|(~b&c)))+2*((a&b)^(a^(b&c)))-7*(~a&(~b|c))-3*(c^(a&b))-2*~(a&~c)-7*~(a|(b|c))+3*~(a|(~b|c))+6*~(~a|(~b|c))+17*(~a&(~b&c))-11*(~a&(b&c))+20*(a&(~b&c))+24*(a&(b&c));
}

uint64_t target_126(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*~z+2*t-2*(z|t)-2*~(z&~z)+2*z+7*~(z|t)+7*~(z|~t);
}

uint64_t target_127(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(z^t)+1*~t-3*z-5*~(z&~z)+6*~(z|t)+7*(z&~t)+10*(z&t);
}

uint64_t target_128(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(z^t)+1*t+7*(z|t)-2*~z+7*~(z&~t)-12*~(z|~t)-15*(z&t);
}

uint64_t target_129(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(a|~b)-1*(~(a&b)&(a^(b^c)))+2*~(~a&(~b&c))-6*((a&b)|~(b|c))-7*(c^(a|b))-3*(b^(a|c))+1*(c&(a^b))-7*(c^~(a&~b))+2*(a|~c)-5*(b^(a|(b|c)))+2*~(~a|(b&c))+4*((a|~b)&(a^(b^c)))+4*~(a&(b&c))+4*~(a&~b)-1*~(~a&(~b|c))-7*(b^(~a&(b|c)))+1*(c^(~a|(b|c)))+1*(~a|(b^c))-2*(b|~(a|~c))-1*~(a&(b|c))-5*~(a^(b|c))+2*(a^(~b|c))+4*(~b&~(a^c))+11*((a&b)|(a^(b^c)))-11*((a&c)^~(a^(b&c)))-6*((a&b)|~(a^(b^c)))+5*b+3*~a-1*(b^(a|(~b&c)))+1*(~(a|b)|(a^(b^c)))-1*(c&(a|b))-2*((a|~b)&~(b^c))-3*(b^(a|(b&c)))+2*(b^(~a&(b^c)))-5*(~c|(a^b))-3*a+2*~(~a|(~b&c))+1*(~(a|~b)|~(a^(b^c)))+5*(a&c)+7*(~c&(a^b))+2*(c^~(~a&(~b&c)))-7*(b^~(a|(~b&c)))-3*~(a&(b^c))+7*~(b|~c)+1*(c^~(~a|(b&c)))+3*(b^(a|~c))+2*(~(a|~b)|(a^(b^c)))+11*(b^~(a&(~b|c)))-5*(c^~(a|b))+1*(a&~c)+5*~(a|(b|c))-3*~(a|(~b|c))-14*~(~a|(b|c))+1*~(~a|(~b|c))-26*(~a&(~b&c))-20*(~a&(b&c))+12*(a&(~b&c))-5*(a&(b&c));
}

uint64_t target_130(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(z&~t)+2*z+5*~(z&t)+7*(z^t)-1*(z|t)-5*(z|~t)-1*~z-11*~(z|~t)-8*(z&~t)+4*(z&t);
}

uint64_t target_131(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*y+2*(x^y)+2*(x|y)-1*~(x&~x)+2*~(x&~y)-2*~(x&y)+3*~(x|y)+3*~(x|~y)+1*(x&~y)+3*(x&y);
}

uint64_t target_132(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*((a&b)|~(b^c))-11*~(a^(b|c))-1*(b^(~a|(b&c)))+7*(b^~(a&c))-7*~(~a&(b&c))-1*(c^~(~a&(~b&c)))-1*(~(a&~b)&~(a^(b^c)))-11*(~a|(b^c))-2*(c^~(a&~b))+1*a-1*(c&~(a&b))-1*((a&b)^(a^(~b|c)))-2*(c&(a|~b))-5*((a&b)|~(b|c))+4*(c|~(a^b))-6*(c^~(a&(b&c)))-2*((b&c)^~(a&(b^c)))+2*(~a&(b^c))-1*~(a&(b^c))-2*(a&c)-7*(~(a|b)|~(b^c))+2*(b^(a|(~b|c)))+3*(b^~(a&(~b|c)))+2*(b^~(a&(b&c)))-11*(b^(a&(~b|c)))+2*((a&c)^~(b&~c))+1*((a&b)|(a^(b^c)))+3*(b|~(a|c))-3*(~(a&b)&(b^c))+2*(~(a|~b)|~(b^c))+5*((a&~b)|(b^c))+2*(c^(~a&(b|c)))+1*(c^~(~a|(b&c)))-5*(b&~(a&~c))+52*~(a|(b|c))+43*~(a|(~b|c))+27*~(~a|(b|c))+63*~(~a|(~b|c))+8*(~a&(~b&c))+47*(~a&(b&c))+44*(a&(~b&c))+43*(a&(b&c));
}

uint64_t target_133(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(e|~f)-6*(f^~(~d&(~e&f)))-1*(~(d^e)&~(d^f))-2*(f^~(~d|(e&f)))-5*(f^(~d|(e|f)))+1*(e^~(~d&(e^f)))-2*(f^(~d&(e|f)))+2*(e^~(d&(~e&f)))-3*(f^~(~d|(~e&f)))+7*~(d^e)+1*(~(d|~e)|~(d^(e^f)))+1*(f&~(d&~e))-1*(e^(d|(e&f)))-1*~(d^(~e|f))+11*(f&~(d^e))-1*(d&(~e|f))+1*(e^~(~d&(~e|f)))+7*((d&f)|~(e|f))+4*(f&(d|e))+4*(~d&(e|f))+3*((d&e)^(d^(e&f)))-7*(~(d&e)&~(e^f))-11*(e^(~d&(e^f)))-6*(~f|(d^e))+1*(d^(e|f))-7*(e^~(~d&(e&f)))-1*(e^~(d|~f))+1*((d&f)^(d^(e&f)))-2*(f^~(~d&(~e|f)))+1*(d|(e|f))-1*(e^~(~d|(e&f)))-2*((e&f)|(d&(e|f)))-1*(~f&(d^e))-1*(~(d&~e)&~(e^f))-1*(f&(d|~e))+5*d+2*(~e&~(d^f))-11*(~d&(~e|f))-6*((d&e)|~(e^f))+32*~(d|(e|f))+22*~(d|(~e|f))+26*~(~d|(e|f))+33*~(~d|(~e|f))+17*(~d&(~e&f))+44*(~d&(e&f))-6*(d&(e&f));
}

uint64_t target_134(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*~(x&y)+1*(x|~y)+5*~(x^y)-2*(x^y)-11*~y-1*~(x|~y)+11*(x&~y)-4*(x&y);
}

uint64_t target_135(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*~(d^(~e|f))+2*(d&(~e|f))-11*((d&e)^(e|~f))-2*(f|(d&e))+1*(~(d&e)&~(e^f))-5*~(~d|(e&f))-6*(e^~(~d|(e^f)))+5*(d^f)-2*(~d|(~e&f))-3*(~d&(e^f))-6*((d&f)^~(d^(~e&f)))+1*~d-1*((d&e)|~(e|f))+2*(e^(~d&(e^f)))-1*(~(d^e)&(d^f))-7*~e-2*(e^~(d&(e^f)))+1*(f^~(d|(e&f)))+3*(e^~(~d|(~e&f)))-1*(d|(~e&f))+4*(e&f)-6*(~(d|e)|~(d^(e^f)))-6*(e&~(d^f))-1*(~(d^e)|~(d^f))-1*((d&~e)|~(e^f))+2*(~(d|~e)|~(d^(e^f)))+11*(e^~(d&~f))-2*(e^(d|(~e&f)))-2*(e^~(d&f))+4*(f&(d|~e))+2*(f^(d&(~e|f)))-2*(f&~(d^e))+4*~(d&(~e&f))-3*(~(d|~e)|(e^f))+1*((d&e)^(e|f))+1*(f^(~d&(e|f)))-7*(d^e)-7*(e^(~d|(~e&f)))+1*((d|e)&(e^f))+1*(e&~f)+1*(~d|(e&f))-5*(e^(d|(~e|f)))+19*~(d|(e|f))+47*~(d|(~e|f))+44*~(~d|(e|f))-2*~(~d|(~e|f))+4*(~d&(~e&f))+19*(~d&(e&f))+37*(d&(~e&f))+10*(d&(e&f));
}

uint64_t target_136(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(x&~y)+1*(x|~y)+5*~(x^y)-2*y+2*(x^y)+1*x-9*~(x|y)-3*~(x|~y)-5*(x&~y)-7*(x&y);
}

uint64_t target_137(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*~t-3*~(z^t)+1*~z-6*~(z&t)-1*t-2*~(z&~t)-2*z+4*(z^t)+7*~(z|t)+9*~(z|~t)+6*(z&~t);
}

uint64_t target_138(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*((a|~b)&~(b^c))-2*(c^~(a&(b|c)))+5*((b&~c)^(~a|(b^c)))-2*((a&c)^~(b&~c))-3*(a|~c)-6*(c&(a|b))-6*(b&c)-7*(b^(~a&(~b|c)))+2*(b|~(a|c))-1*(c^(a|(~b|c)))+2*(a&b)+4*(~b|(a^c))+4*(b^(a&~c))-1*~(~a&(~b&c))+3*~(a|(b|c))+7*~(a|(~b|c))-1*~(~a|(b|c))-3*~(~a|(~b|c))-7*(~a&(b&c))+22*(a&(b&c));
}

uint64_t target_139(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*(b^~(a|~c))-2*(c&(a|~b))+11*(b^~(a&(b&c)))+5*((a&b)^(a^(b&c)))+5*(~c|~(a^b))-1*(a|(b^c))-3*(c^~(a|(b&c)))+2*((a&b)|~(b|c))+11*(b^(a|~c))+7*~(a|c)-2*~(a^(b|c))+2*((a&b)^~(a^(b&c)))-7*((a&b)|(b^c))-2*(c|~(a|b))-28*~(a|(b|c))+8*~(a|(~b|c))-33*~(~a|(b|c))+8*(~a&(~b&c))-8*(~a&(b&c))-7*(a&(~b&c))+5*(a&(b&c));
}

uint64_t target_140(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*z+1*~(z&t)+2*~t+1*~(z&~t)-4*~(z|t)-1*~(z|~t)+9*(z&~t)+11*(z&t);
}

uint64_t target_141(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*~(x&y)+4*~(x&~y)+11*(x^y)+12*~(x|y)-4*(x&y);
}

uint64_t target_142(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(z&~t)-7*~(z^t)+1*z-2*(z^t)+2*~(z&t)+3*~(z|t)-2*~(z|~t)+4*(z&t);
}

uint64_t target_143(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*((d&f)^(d^(e&f)))-1*(~(d&~e)&~(d^(e^f)))+4*(~e&~(d^f))-3*(~(d&e)&(e^f))+4*(e^~(d|~f))+7*~(d&(e&f))+2*(~(d&~e)&(e^f))+5*((d|~e)&~(e^f))+2*(e^(d|f))-11*((d&e)^(e|f))-1*~(e|f)-7*~(d^e)-3*(f&~(d&~e))-1*(f^(d&(~e|f)))-5*((d|e)&~(d^(e^f)))-2*(e|~(d|f))+4*((d&e)^(e|~f))-1*~(e^f)+2*(~d|(~e|f))+2*(f^(d&~e))-3*((d&e)^~(d^(~e|f)))+11*(e&~(d&f))-6*~(d&(e^f))-1*(e^(d|~f))+1*~(d|(e^f))+1*~(d&f)+1*(e|(d&f))-1*~(~d|(e^f))-2*(f^(~d|(e|f)))-1*(f|~(d|~e))+1*(e|~f)-1*(~(d|~e)|(d^(e^f)))-1*(d|e)-11*(e^~(~d&(~e|f)))-6*(d|(e^f))-6*((d&e)|~(d^(e^f)))+1*(e^f)+7*(e^(~d|(e^f)))-2*(e^~(d&f))-1*(e^~(d&(e^f)))-3*d+7*~(d|~f)-1*(~f&~(d^e))-1*(d|~f)-5*(e|(d^f))+1*(e^~(d|f))-7*(f|~(d|e))-6*(d^f)+2*(e^(d&f))+1*(d^(~e&f))+1*(e^(d|(e|f)))+5*(f^~(d&(~e&f)))+1*~(d|(e|f))+23*~(~d|(e|f))+16*~(~d|(~e|f))+23*(~d&(~e&f))+32*(~d&(e&f))+27*(d&(~e&f))+32*(d&(e&f));
}

uint64_t target_144(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~x+11*~y+2*~(x&~y)+7*~(x&~x)-3*(x^y)+1*(x|y)-22*~(x|y)-14*(x&~y)-8*(x&y);
}

uint64_t target_145(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~(z&~t)-6*~z-1*~(z&~z)-1*~t-7*(z|t)+3*~(z|t)+15*~(z|~t)+9*(z&t);
}

uint64_t target_146(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*(x^y)-1*x-1*(x|y)-11*~(x^y)-2*~(x&y)+1*y-11*(x|~y)+8*~(x|~y)+32*(x&~y)+23*(x&y);
}

uint64_t target_147(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*~(x&~y)-1*~(x&~x)-1*(x|y)+4*(x^y)-3*x+2*~x-2*~(x|y)-1*~(x|~y)-3*(x&~y);
}

uint64_t target_148(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(z|~t)-2*z+1*~t+2*~(z^t)-7*(z^t)+2*(z|t)-5*~(z&~z)-11*~(z&t)+21*~(z|~t)+4*(z&t);
}

uint64_t target_149(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(~e|(d^f))+2*(~(d|~e)|~(e^f))+3*(e^~(d&f))-1*(e|~(d|f))+1*((e&~f)^(~d|(e^f)))-6*~e+5*(f^~(~d|(e&f)))-6*((d&f)^~(d^(~e&f)))-6*(d^(~e|f))+7*(e|~(d^f))-5*(f&(d|e))-3*(e^~(~d|(e&f)))+5*~(d&(e|f))+7*(~e&(d^f))+2*(~(d&~e)&(e^f))+11*(e^~(d&~f))+4*~(e&f)+7*(~(d^e)&(d^f))-2*(e^(d&(e^f)))+1*~(~d&(~e&f))+2*((d^e)&(d^f))-1*(e^~(d|(~e&f)))+2*(~d|(e^f))+2*(f^~(d&(~e|f)))+11*(~(d|e)|~(d^(e^f)))+1*(f^(d&(~e|f)))-3*(f|(d&~e))-1*(~(d&e)&(d^(e^f)))+2*(~d|(e|f))+7*(d&f)+3*(e&(d|f))-2*(e^(d|(e^f)))+4*(f^~(d&~e))-1*~(e|f)+11*(f^(d&~e))-3*~(d|~f)+1*(d&(e|f))+1*((d&e)|~(e^f))+2*(f&~(d&~e))-5*~(d&(~e|f))+11*(e^(~d|(~e&f)))+2*(~f&(d^e))-7*(e^~(~d&(e|f)))-11*(e^~(d|f))-1*~(~d|(e&f))+7*(e^(d|~f))+1*(f^~(d&(~e&f)))+3*(~(d^e)&~(d^f))-2*~(d|e)-34*~(d|(e|f))-11*~(d|(~e|f))-30*~(~d|(e|f))-54*~(~d|(~e|f))-61*(~d&(~e&f))-13*(~d&(e&f))-47*(d&(~e&f))-29*(d&(e&f));
}

uint64_t target_150(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*~(d|(e^f))+2*~(d&e)-2*~(d^f)-7*(d|f)-6*(d^e)-7*((d&e)|~(e|~f))-1*(d&(~e|f))+1*(e^(d|f))-2*(~(d&~e)&~(e^f))-5*(~(d|e)|(d^(e^f)))-1*(e&(d|~f))+4*(f&~(d^e))-7*((d&e)|~(e|f))+2*((d|~e)&~(d^(e^f)))-3*(~f|(d^e))-1*(~f&~(d^e))-1*(e^(d|(e&f)))+1*((d&e)^~(d^(e&f)))+3*((d&f)^~(e&~f))+1*(e^(d&~f))+1*(f&(d^e))-3*(d|~f)-1*(e^(~d|(e&f)))+7*(~(d&e)&~(d^(e^f)))+3*(f^~(~d&(e|f)))+1*((d&f)^(d^(~e&f)))-2*(e^(~d|(e|f)))+1*(d|(e^f))+1*(e^(d|(e^f)))+2*(e|(d^f))+3*(f^~(d|e))-5*(e&(d^f))+5*((d&~e)|~(d^(e^f)))-1*~(d|~e)+1*((d&f)^(d^(e&f)))-1*(d&e)-2*((d^e)&~(d^f))-5*(f^(~d|(~e&f)))+1*(e^~(~d&(~e|f)))+4*(e^~(~d|(e&f)))-2*((e&~f)|~(d|(~e&f)))-2*((d&e)|~(d^(e^f)))+1*(f^(~d|(~e|f)))-1*(e|(d&f))+11*(f^~(d&(e|f)))+5*(f^~(d&(~e&f)))-3*(~(d|~e)|~(e^f))-3*(~(d&e)&(e^f))-6*(f&(d|~e))-5*((d^e)|~(d^f))+2*~(d&(e^f))-1*(e^(~d&(e^f)))+2*(~(d^e)|~(d^f))+1*~(d&f)+2*(~(d^e)|(d^f))-11*(e|~(d|~f))-1*((d|~e)&(e^f))+5*(d&~e)+1*(d&(e|f))+3*(f^(~d&(~e|f)))+1*(~d&(e^f))-1*~(d|f)-1*~(~d|(e&f))-2*~(d&~d)+2*(f|(d^e))-6*(f^(~d|(e&f)))-11*(e&~(d&f))-7*((d|e)&(d^(e^f)))+7*(e^~(~d&(e|f)))-11*(f^(~d|(e|f)))+1*e+7*~(~d|(~e&f))+8*~(d|(e|f))+31*~(d|(~e|f))-34*~(~d|(e|f))+33*~(~d|(~e|f))+17*(~d&(~e&f))+18*(~d&(e&f))-15*(d&(~e&f))+32*(d&(e&f));
}

uint64_t target_151(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*t-2*(z|~t)+11*~z+1*~(z&~t)-1*~t-2*z-9*~(z|t)-17*~(z|~t)+1*(z&~t);
}

uint64_t target_152(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(d|e)-7*~(d^(~e|f))+5*((d&f)^(e|f))-7*(f|~(d^e))-11*(f^~(d|~e))+3*((d&~e)|~(e^f))-2*(f|(d&~e))+2*((d&e)|~(e^f))+1*(e^~(~d&(e^f)))+1*(d&~f)-3*(~(d^e)&~(d^f))+2*((d|~e)&(d^(e^f)))+3*~(d|~e)-5*(e^~(~d|(e&f)))-11*(e^(~d|(e^f)))+2*((e&f)|(d&(e|f)))+1*(f^~(d|e))+1*~f+1*((d&e)|(e^f))+2*~(d&(~e&f))-5*(d^e)-1*(~(d|~e)|(e^f))-11*(d&(~e|f))+1*~(d&~e)-1*(~d|(e&f))-2*(e^~(~d|(e^f)))-1*((d&f)|~(e|f))-11*(~d&(e|f))+1*(e^(d&(~e|f)))+4*(~(d|~e)|(d^(e^f)))+1*(f^(d&~e))-7*(~(d&e)&~(d^(e^f)))+11*~(~d|(e^f))-1*((d|e)&(d^(e^f)))-3*(~e&(d^f))+11*(d^(e&f))+1*(f^~(d&(~e|f)))+4*(f^(d|(e&f)))+4*(e^(~d&(e^f)))-1*(~(d&e)&(e^f))-1*(~d|(~e&f))-2*(e^~(d&(~e|f)))-1*(f^~(d&~e))-1*(e&~(d^f))-2*(d|(e&f))+5*((e&~f)|~(~d|(~e&f)))-2*(e^(d|(~e&f)))-2*(~(d|~e)|~(d^(e^f)))-5*~(d&f)+7*~(e^f)+2*~(d&(e&f))-3*(~(d|e)|~(d^(e^f)))-6*~(d&(e^f))+1*~(~d&(e&f))+1*(e|(d^f))-2*(d|(e|f))-3*~(d^(~e&f))+3*(d^f)+33*~(d|(e|f))+39*~(d|(~e|f))-9*~(~d|(e|f))-34*~(~d|(~e|f))+41*(~d&(~e&f))+14*(~d&(e&f))+51*(d&(~e&f))+13*(d&(e&f));
}

uint64_t target_153(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(a|c)+11*((a&b)|~(b|~c))+4*~(a&(~b|c))-1*((a|~b)&(a^(b^c)))+4*(~(a&~b)&(a^(b^c)))+7*~(a&~a)+2*(b^~(~a|(b&c)))-1*(c^~(a&(b|c)))+1*(a^(~b&c))-7*~(b|~c)+11*(c&~(a^b))-5*((a&c)^~(b&~c))-11*(c^(a|(b|c)))+1*~(a^(~b|c))-5*~(a&c)+1*((a&c)|~(b|c))+5*(b^~(~a&(b|c)))-8*~(a|(b|c))-7*~(a|(~b|c))+7*~(~a|(b|c))-6*~(~a|(~b|c))-19*(~a&(~b&c))-7*(~a&(b&c))-18*(a&(~b&c))-35*(a&(b&c));
}

uint64_t target_154(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*(f^~(d&e))+1*(e&(d|~f))-2*((d&f)^(d^(e&f)))+2*(e^~(~d|(e^f)))-1*(f^~(~d|(e&f)))+7*(f&(d|e))-1*((e&~f)|~(d|(~e&f)))+5*~(d&~e)-1*(~(d|~e)|~(e^f))-2*(f^(d&e))+1*(e^~(d&(e|f)))-11*((d&f)^(d^(~e&f)))-1*(~d&(e|f))+4*(~d|(~e|f))+3*((d&e)|(d^(e^f)))-7*(e^(~d&(~e|f)))+5*((d&~e)|(d^(e^f)))+1*(e^~(~d|(~e&f)))-3*(d&e)+1*((d^e)|(d^f))-11*(f^~(~d|(~e&f)))-1*(~(d|e)|(d^(e^f)))-11*(e&f)+1*(e^~(d&(e^f)))-7*(d&~e)+7*(d|~e)+4*(f|~(d|~e))-5*(e^(d&(e|f)))+7*(f^(d|(~e&f)))-1*(~f&(d^e))-2*(d^f)+4*~(d&(~e&f))+1*(f^~(~d&(e&f)))+11*(~(d&e)&(d^(e^f)))+1*((d&e)|~(e|~f))+5*(~f|(d^e))+1*(e&~(d^f))+1*~(d&~d)-11*~f-1*(f^~(d|(~e&f)))+3*(d|(~e|f))-11*(f^~(d&(~e&f)))+5*e+11*~(d|(e|f))-4*~(d|(~e|f))+12*~(~d|(e|f))+17*~(~d|(~e|f))-11*(~d&(~e&f))-13*(~d&(e&f))+13*(d&(~e&f))-18*(d&(e&f));
}

uint64_t target_155(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(z&~t)-7*~(z&~z)+2*z+7*~(z&t)+1*~t-11*(z^t)-3*~(z|t)+13*(z&~t)+8*(z&t);
}

uint64_t target_156(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*((d&f)^~(d^(~e&f)))+1*(~d|(~e|f))+1*(~(d&e)&(d^(e^f)))-1*(d&~e)-1*(e^(~d|(~e&f)))-7*(~(d&~e)&(e^f))-1*(f|(d&e))-2*((d&e)|~(e|~f))+11*(e^~(~d|(e^f)))-1*(d&(e^f))-1*(~(d&~e)&(d^(e^f)))+2*~(d^e)-6*(e|~(d^f))+3*(d|~f)-3*~(d|f)+1*~(d&e)-6*(e&~(d&~f))-5*(d|(e|f))+2*(f^~(d&(e|f)))+5*(d&f)-1*((d&f)^~(e&~f))-1*(~d&(e^f))-2*(e|~(d|~f))+3*(e^(~d|(e^f)))+1*(d|(e&f))+7*((d&e)|~(e^f))+5*~(d&(~e|f))+1*(f^~(d&(~e&f)))-1*(e^~(d|~f))+11*~(d&f)+11*~(d|~f)+2*((e&~f)|~(~d|(~e&f)))+5*(e^(d|f))-1*(e^~(~d&(~e|f)))+2*((d&e)^~(d^(e&f)))+1*((d|~e)&(d^(e^f)))+1*((e&f)^~(d&(e^f)))-11*(e^~(~d&(e|f)))+11*(e^(~d&(~e|f)))+1*~(d|e)-2*f+1*((d&f)|~(e|f))+2*(e&(d|f))+4*(d|(~e&f))-11*(f^(d&(~e|f)))-2*((e&~f)^(d|(e^f)))-19*~(d|(~e|f))-23*~(~d|(e|f))-36*~(~d|(~e|f))-23*(~d&(~e&f))-11*(~d&(e&f))+6*(d&(~e&f))-21*(d&(e&f));
}

uint64_t target_157(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(~e&~(d^f))-7*((d&f)|~(e|f))+7*((d^e)&(d^f))+4*(f|(d&~e))+4*(f&~(d&~e))+1*(e^~(~d|(~e&f)))+2*(d^(e&f))+1*(e|(d&~f))+2*(e|f)-2*(e^~(d|(e^f)))+2*(f&~(d&e))-2*~(d|(~e&f))-6*((d&e)^(e|f))-7*(e^~(d&~f))-5*(d|(e^f))+1*~(d|e)+1*(~(d|~e)|~(e^f))-11*(e^(d&(e|f)))+1*(f|~(d^e))-5*(e&~f)-1*(d&~e)-3*((d&e)|~(e|f))+7*(e^(~d&(~e|f)))+1*(f^(~d&(e|f)))-3*(~(d^e)&(d^f))+11*(f^(d|~e))+2*~(d&(e^f))-1*~(d|(e|f))-15*~(~d|(e|f))+1*~(~d|(~e|f))-4*(~d&(~e&f))-19*(~d&(e&f))+24*(d&(~e&f))-6*(d&(e&f));
}

uint64_t target_158(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(z^t)-5*~(z&~z)-5*~(z&~t)+4*~t-2*t-2*~(z^t)+8*~(z|t)+11*~(z|~t)+2*(z&~t)+16*(z&t);
}

uint64_t target_159(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(z|~t)-1*(z^t)+3*~(z&t)-7*~z-1*~t-3*z+3*t-2*~(z^t)+3*~(z|t)-2*(z&t);
}

uint64_t target_160(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(x&~x)-1*~(x&y)-2*~(x&~y)-7*(x|y)+7*x+4*~(x|y)+10*~(x|~y)+2*(x&y);
}

uint64_t target_161(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(e^~(d&(e&f)))-2*~(d^(e|f))-1*(d^f)-7*(d|(e&f))+5*(e^~(~d&(e|f)))+11*~(d|(~e&f))-7*~d+4*(e^~(d&f))+1*((d|~e)&~(d^(e^f)))+3*(~d&(e^f))+1*(~(d&~e)&~(d^(e^f)))-11*(~(d|e)|(d^(e^f)))-1*(f^(d|(~e|f)))-2*((d&e)|~(e|~f))-2*((d^e)|~(d^f))-3*(f^~(d|e))+4*~(d|~f)-3*(f^~(~d&(e|f)))-1*~f-2*~(d&~e)+5*(f^(~d|(~e|f)))-2*(e^(~d|(e&f)))-5*(~(d|~e)|~(d^(e^f)))-2*(e^(d|~f))-7*(e^(d&(e^f)))-2*(e^~(d&(e|f)))+5*(e^(d|(e^f)))+1*~(d^e)+5*~(d&(~e|f))+7*(d&(~e|f))+2*(f^(~d&(e|f)))-1*(d&(e|f))+2*(e&f)+7*(e^~(d&~f))-6*(f^(d&~e))+1*(e^(d|(~e|f)))-11*(e^(~d|(~e|f)))+3*((e&~f)|~(d|(~e&f)))+3*(~e|(d^f))-3*(f|~(d^e))-3*~(d|f)+5*~(d|(e|f))+2*~(d|(~e|f))+10*~(~d|(e|f))+21*~(~d|(~e|f))+9*(~d&(~e&f))+9*(~d&(e&f))+7*(d&(~e&f))+24*(d&(e&f));
}

uint64_t target_162(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*~y-3*~(x&~y)+5*(x|~y)+9*~(x|y)+6*(x&~y)-2*(x&y);
}

uint64_t target_163(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*(d&~e)-2*((d&e)|~(d^(e^f)))+1*(d&e)+4*(e^~(d&~f))+5*(f&~(d&~e))+11*(~d&(e|f))-1*~(d^e)+11*~(d&~d)-7*~(d&e)-2*(e|(d^f))+2*(e&~(d&~f))-2*((d&f)|~(e|f))+3*(e^~(~d&(~e&f)))-7*~(~d|(~e&f))+5*(~(d&~e)&(e^f))-1*((d&e)^(d^(~e|f)))-11*~(d&f)+2*(~d|(~e|f))+3*(e^(~d|(~e|f)))-6*((e&f)^~(~d&(e^f)))+11*(e^(~d|(e^f)))-2*(e^(d&(~e|f)))+4*(e&(d|~f))+1*(f|(d&e))-3*((e&f)|(d&(e|f)))-11*~(d&(e|f))+1*~(~d&(~e|f))-7*(e^f)-7*(d|e)-1*(f^(d&~e))-2*((d&e)|~(e|~f))+11*(~d|(e&f))-5*((d|e)&~(d^(e^f)))-7*(e^(~d|(e&f)))-2*(e|(d&~f))+3*(~(d&e)&~(e^f))-3*(e^(d|~f))+9*~(d|(e|f))+1*~(d|(~e|f))+40*~(~d|(e|f))+40*~(~d|(~e|f))-15*(~d&(~e&f))+11*(~d&(e&f))+12*(d&(~e&f))-12*(d&(e&f));
}

uint64_t target_164(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(x^y)-1*(x|~y)-11*~(x&~x)+11*~(x|~y)+18*(x&~y)+14*(x&y);
}

uint64_t target_165(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(z|~t)-6*(z|t)-1*z-6*~(z&~z)-1*~(z|t)+6*(z&~t);
}

uint64_t target_166(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(~b&~(a^c))+2*(~(a&~b)&~(a^(b^c)))-6*~(a&(b^c))+1*(a|(b&c))-1*(b^~(~a&(~b&c)))+1*(b|(a&c))+5*(b^~(a&~c))+1*(~(a&b)&(b^c))-3*(c^~(a&b))-1*(c^~(a|b))-1*(c&~(a&~b))+11*(~a&(~b|c))+2*(b|c)-2*(c|(a&b))+2*((a&b)|~(b|~c))+1*~(a|c)-1*(c^(a&~b))-11*(a|~c)+5*(b&(a|~c))-3*(~c&(a^b))-5*(~(a&b)&(a^(b^c)))-2*((a|~b)&(b^c))+3*~(a&(b&c))+5*(b^(a&(b|c)))-2*(~a|(b&c))-2*(a^(b&c))+11*~(a&(~b|c))+7*(~(a^b)&~(a^c))+11*(b|(a^c))-2*(a^(b^c))+11*(~b&(a^c))+1*(b^~(a&(~b|c)))-11*~(b|~c)+7*(c&(a|b))-7*(c^~(a&(~b|c)))+1*(~(a|b)|(a^(b^c)))-2*(c^~(a&(~b&c)))-1*(b^(~a|(~b&c)))-7*(a^(~b&c))-1*(c&(a|~b))-3*(b^~(~a|(~b&c)))-6*~(b&~c)+4*((a|~b)&~(b^c))+1*((a&~b)|(a^(b^c)))-2*(b^~(~a&(b&c)))+5*(a|b)-11*(~a|(b|c))-1*(c^~(a|(~b&c)))+5*((a|b)&~(b^c))+1*(b|(a&~c))+8*~(a|(~b|c))+11*~(~a|(b|c))-4*~(~a|(~b|c))+1*(~a&(~b&c))-28*(~a&(b&c))+9*(a&(b&c));
}

uint64_t target_167(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(z|t)-7*~(z&~t)-5*~t+4*~(z&t)-1*(z^t)+7*(z|~t)+1*z+1*~(z|t)-3*~(z|~t);
}

uint64_t target_168(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~x-1*~(x&~x)-7*(x|y)+4*~(x&y)+11*y+2*~(x&~y)+1*(x|~y)-8*~(x|y)-8*~(x|~y)+3*(x&~y)-9*(x&y);
}

uint64_t target_169(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(f^(d&(e|f)))+3*~(d^(e^f))+1*(f^~(~d&(e&f)))-2*(~f|(d^e))+1*(d^e)-2*(d|(e|f))-1*~e+1*(e|(d^f))+11*~(d&~e)-6*~(d&~d)+1*(e^~(d|(~e&f)))-1*(e^(d|(~e&f)))+3*((d|e)&~(d^(e^f)))-7*~(e|f)+1*(e^(d|(e^f)))+2*((d&~e)|~(d^(e^f)))+1*(f^(d&~e))-3*((d^e)&(d^f))+2*(e^(~d&(~e|f)))-7*~(d&f)-2*(~(d^e)&~(d^f))-5*~(d&e)-1*((d&~e)|(e^f))+2*(~(d|e)|(d^(e^f)))+3*~(d|~e)+2*~(~d&(~e&f))+7*(f^(d&(~e|f)))+3*(f|~(d|e))-1*(e^(d|(~e|f)))-1*(~d|(e^f))+11*(~(d|~e)|(d^(e^f)))+1*(f^(d|(~e|f)))-3*(e^~(d|(e^f)))-1*~(e^f)-11*(e^(~d|(~e|f)))+4*(d|(e&f))-3*(~(d|~e)|~(e^f))-1*((d|~e)&~(d^(e^f)))-5*(e|~(d|~f))-5*(e^(d|~f))+1*(f|~(d^e))-7*((d&f)^(d^(~e&f)))-1*(f&~(d&~e))+7*(f^~(d|~e))+3*(~(d|~e)|(e^f))-6*((d|e)&(e^f))-2*(e^~(d|~f))+1*(e^~(~d|(e^f)))-5*((d&~e)|~(e^f))+5*(d^(~e|f))+4*((e&~f)|~(d|(~e&f)))+5*(e&(d|~f))-3*(e^~(d&(e|f)))+7*(~d|(e|f))+2*(~d|(~e&f))-11*(~d&(e|f))-3*(f^(~d|(~e|f)))-1*(d|e)+7*(d^(e^f))+7*(f^~(d|(~e&f)))-7*(d|f)+10*~(d|(e|f))-20*~(d|(~e|f))+40*~(~d|(e|f))+7*~(~d|(~e|f))-7*(~d&(~e&f))-15*(~d&(e&f))+17*(d&(~e&f))-34*(d&(e&f));
}

uint64_t target_170(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*~y-1*y-5*(x^y)-1*(x|y)-5*~(x&~x)+11*~(x|y)+12*~(x|~y)+17*(x&~y)+6*(x&y);
}

uint64_t target_171(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*(e^~(d|~f))+1*~(d|(~e&f))+5*(f^~(~d|(~e&f)))+5*((d|~e)&~(d^(e^f)))-1*(~(d|~e)|~(e^f))-11*(e^(~d|(e&f)))-2*(d|e)+1*~(e|f)+11*(e|(d^f))-5*(d^(~e|f))-1*(e&~f)+1*(d^f)-2*((d&e)|~(d^(e^f)))+1*(e^(d&~f))-1*(e^~(d&f))-3*(~e|~(d^f))+2*(f^(d&~e))+1*((d&f)^(d^(~e&f)))+4*(d|(e&f))+4*(e|f)-3*((d&e)^(d^(~e|f)))-6*((d|e)&~(d^(e^f)))+1*(e^(d|(e&f)))-2*(~(d|e)|~(e^f))+2*(e^~(d&(e&f)))-3*(~(d^e)&(d^f))+3*~(d^(e|f))-3*(e^(~d|(~e|f)))-5*(e^~(~d|(~e&f)))-7*(f&~(d&~e))-2*((e&f)|(d&(e|f)))+3*(e^(~d|(e^f)))-7*(~f&~(d^e))-2*((e&~f)|~(~d|(~e&f)))+2*(e^(d|(~e&f)))-1*(f^(d|(e|f)))+5*(d^(e^f))+29*~(d|(e|f))-10*~(~d|(e|f))+16*~(~d|(~e|f))+13*(~d&(~e&f))+10*(~d&(e&f))-12*(d&(~e&f))-5*(d&(e&f));
}

uint64_t target_172(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*(d&~e)+1*(f&~(d&~e))-3*((d&e)|~(e^f))+5*((d|e)&(e^f))+1*((d&e)|(e^f))-1*~(~d&(e|f))-7*(e^(d|f))-1*(~(d^e)&~(d^f))-1*(e|f)+1*(f^~(d&(~e&f)))+7*(e^(d|(e&f)))+3*(e^~(d|(~e&f)))-5*(e|~(d|~f))+1*(e^(~d&(~e|f)))+11*~d-2*(e^(d|~f))+1*~(d&(~e&f))-7*e-6*~(d^(e^f))-11*(e&(d|~f))-2*~(d|e)+1*~(d&~e)+4*~(e&f)-1*(d^(e^f))+3*(f^~(d&(~e|f)))-6*(e^f)+1*((d|~e)&(e^f))+2*(e&~(d&~f))+1*(~d&(~e|f))-3*(e^~(d|f))-11*((e&f)^~(~d&(e^f)))+1*(e^(~d|(~e|f)))+11*((d&e)|~(e|~f))-1*(e|(d^f))+5*((d^e)&(d^f))+1*(~e|~(d^f))-2*((d|~e)&~(d^(e^f)))+2*((d&f)|~(e|f))+7*((d^e)&~(d^f))-3*((d&~e)|~(e^f))+7*(~(d&~e)&(e^f))-1*(e|(d&~f))-1*((d&e)|(d^(e^f)))+2*(~(d&e)&(e^f))-5*((d|~e)&~(e^f))-6*(d|f)-2*~(d|(~e&f))+4*(e|~(d^f))-1*(e^~(d&(e&f)))-11*(f&~(d&e))+5*((d&e)^(d^(e&f)))-11*(f^(d&e))+3*((d&e)^(e|~f))+1*(e^(d&(e|f)))-5*(e^(d&f))+1*(f|(d^e))-1*(d&(e|f))-2*(f&(d|~e))-2*~(d&(e&f))+3*(f|~(d|e))+2*(d^(e&f))+1*(f^(d&~e))-1*(d|(e&f))+7*(~(d|e)|(e^f))+4*~(d&~f)-1*(e^(d|(~e&f)))-6*~(d|(e|f))-16*~(d|(~e|f))+17*~(~d|(e|f))+33*~(~d|(~e|f))-2*(~d&(~e&f))+32*(~d&(e&f))+11*(d&(~e&f))+11*(d&(e&f));
}

uint64_t target_173(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*~(z&~t)-5*~(z&t)+5*~(z|t)+12*~(z|~t)+5*(z&~t);
}

uint64_t target_174(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(e^(~d|(e^f)))+7*(e^(~d|(~e|f)))+1*((d^e)|~(d^f))+1*(f^(d&(~e|f)))-6*(e|~(d|~f))+2*e+7*(f^~(d|~e))-1*(e^f)-3*~(d&~e)-2*(f^~(d|(~e&f)))+4*(f^~(d|e))+2*(f^(d|(e|f)))+3*(e^(~d|(~e&f)))+2*(d|(~e|f))+7*~(e&f)+11*~(~d&(~e&f))-3*(e&(d^f))-1*~(~d&(e|f))+7*~(d^(e|f))-1*(e^~(d|f))+5*~(d&~d)+7*(d&(~e|f))+1*((d&f)^(e|f))+3*(~(d^e)&(d^f))-2*~(~d&(~e|f))+5*(e^(d|~f))-5*(~(d|~e)|~(d^(e^f)))+1*~(d^f)+2*(d^(e^f))+1*~(d^e)+5*(e^(d&(~e|f)))+1*~(d&(~e&f))-1*(e|(d&f))-1*(e^(d|(e^f)))+11*~(e&~f)+3*(f^(d|(~e&f)))+4*(e^(d|(e|f)))-1*(f&~(d^e))+1*~(~d&(e^f))-5*((d&e)|~(d^(e^f)))+4*(f^~(d&(e&f)))+3*(e|~(d^f))+1*(~f&(d^e))-5*(f^(d&~e))+1*((d&e)^(e|~f))-7*~(d&(e^f))+1*~(~d|(e&f))+7*((e&~f)|~(~d|(~e&f)))+1*((d|e)&~(e^f))-2*(e^(d|(~e|f)))-5*(~(d&~e)&(e^f))-1*(f^~(~d|(~e&f)))+2*(e^~(d|(~e&f)))+11*((d&e)^(e|f))-2*((d&f)^~(d^(e&f)))-11*(e^~(d&(~e|f)))-11*~(d&f)+5*((d|~e)&~(e^f))-2*(d^(~e|f))-7*((e&~f)|~(d|(~e&f)))-2*(e^(d|(e&f)))+1*~(d|(e&f))-1*(e^(d&f))+11*~(d&(e|f))-7*(~(d|e)|(e^f))-3*(e^~(d|~f))-2*(d&~e)-1*(f|~(d|e))-25*~(d|(e|f))-16*~(d|(~e|f))-71*~(~d|(e|f))-4*(~d&(~e&f))-19*(~d&(e&f))-64*(d&(~e&f))-36*(d&(e&f));
}

uint64_t target_175(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~(x&~x)+5*~(x&y)-5*~y+1*~(x^y)-1*~(x&~y)+1*~(x|~y)+5*(x&~y)+5*(x&y);
}

uint64_t target_176(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*(b^(a&c))-1*(a|c)-1*(a^(~b&c))+11*~(a|(~b&c))-7*(~(a|b)|~(b^c))-2*((a&c)^~(b&~c))-2*(b^~(~a&(b|c)))-5*((a&b)^(b|~c))+5*((a&~b)|~(b^c))-1*(c^~(a|~b))+5*(~(a&b)&~(b^c))-2*((a&c)|~(b|c))+4*(b&(a^c))-3*~(a|(b|c))-7*~(a|(~b|c))+11*~(~a|(b|c))-6*~(~a|(~b|c))+13*(~a&(~b&c))-12*(~a&(b&c))-2*(a&(~b&c))+7*(a&(b&c));
}

uint64_t target_177(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(x|~y)-11*(x|y)+11*~(x&y)-6*y+1*x-12*~(x|y)+15*(x&y);
}

uint64_t target_178(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*~(x&~y)-11*x+11*(x&~y)+11*(x&y);
}

uint64_t target_179(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*y-1*(x|y)-7*~(x|y)-5*~(x|~y)+1*(x&~y);
}

uint64_t target_180(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*(f^~(d|e))-1*(f|(d^e))-2*(e^~(d|(~e&f)))-5*(f&~(d&e))-3*(~(d|e)|~(d^(e^f)))-11*~(e&~f)+7*(e|~(d|f))+5*(e^~(d&(e^f)))+7*((d|e)&(d^(e^f)))+1*(f^~(d|(~e&f)))-1*(f^~(d|(e&f)))+4*(d|(e&f))+11*(e|(d&f))+4*(d&(e|f))+1*~(e&f)-1*(e^~(~d&(e&f)))-6*(~(d^e)|(d^f))-1*(e^~(d&f))-6*(e^~(~d&(~e&f)))+5*~(d^f)-2*((e&~f)^(~d|(e^f)))+1*(~d&(e|f))-5*e-1*((d|~e)&(d^(e^f)))+1*(~(d|e)|~(e^f))+1*(f^~(d&(e|f)))+7*(d&(~e|f))-11*~(d&(e^f))+3*(d^e)+5*(~(d&e)&(d^(e^f)))+2*~(d|~e)-1*(e&(d^f))+2*(f^(d&(e|f)))-2*~(d&e)+7*((d&e)^(d^(e&f)))-1*~f+3*(e^~(d|(e^f)))+11*(e^~(d|f))+3*(f&~(d^e))-6*(~(d^e)&(d^f))+1*(f^~(~d&(~e&f)))-2*((d&f)|~(e|f))-2*(~d|(~e|f))-3*(e^~(~d|(e&f)))-2*(d|(e^f))-5*((d&e)^~(d^(~e|f)))+1*(f^(~d|(~e|f)))+7*(f^~(d&(~e&f)))-11*((d&e)|(e^f))-7*~(~d|(e^f))-1*(e&~f)+11*((d&~e)|~(d^(e^f)))+2*(e|f)-7*(~f|(d^e))+5*(e^~(d&(~e&f)))+2*(e&(d|~f))-1*((e&f)|(d&(e|f)))+2*((d|~e)&~(d^(e^f)))-1*(f^~(d&e))-2*~(d|(e|f))-2*~(d|(~e|f))+4*~(~d|(e|f))-17*~(~d|(~e|f))+43*(~d&(~e&f))-4*(~d&(e&f))-5*(d&(~e&f))-12*(d&(e&f));
}

uint64_t target_181(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~(z^t)+5*t+2*~z-11*~(z&~z)+11*(z|t)-6*(z^t)-7*(z|~t)-1*~(z|~t)+18*(z&~t)+13*(z&t);
}

uint64_t target_182(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*z-1*(z|~t)+7*~(z^t)-1*~z-11*(z^t)-9*~(z|t)+8*~(z|~t)+6*(z&~t)-13*(z&t);
}

uint64_t target_183(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~x-5*~(x&~y)+2*~(x&y)+1*(x|~y)+3*~(x|y)+2*~(x|~y)-5*(x&~y)+4*(x&y);
}

uint64_t target_184(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(x^y)+2*~x+1*(x^y)-5*~(x&~y)-2*(x|~y)+2*~(x&~x)+5*~(x|y)+1*~(x|~y);
}

uint64_t target_185(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*~(z&~z)-1*(z^t)+1*~(z&t)-7*~t-11*(z|t)+1*~(z|t)+14*(z&~t)+6*(z&t);
}

uint64_t target_186(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(x&~x)-2*~(x&y)+1*~(x&~y)+5*(x|~y)-2*x-7*y-11*~(x^y)+10*~(x|~y)+1*(x&~y)+16*(x&y);
}

uint64_t target_187(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(x^y)+7*~(x^y)+1*~(x&y)+11*~(x&~x)-3*y-7*~(x|~y)-10*(x&~y)-15*(x&y);
}

uint64_t target_188(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~x-2*(x|y)-6*~y+7*(x^y)-3*~(x^y)+10*~(x|y)+1*(x&~y)+5*(x&y);
}

uint64_t target_189(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*((a&b)|~(b|c))+2*(b^(~a&(b|c)))+1*(a^(b|c))-2*(b&~(a^c))-1*(c^(~a|(b&c)))-1*(~b&~(a^c))+2*(c^~(a|(~b&c)))+1*~(a&(~b&c))-6*~(~a&(b|c))+2*~(a^(b&c))+5*(b^(~a|(~b|c)))+3*~(a|(b|c))-10*~(a|(~b|c))-3*~(~a|(b|c))+3*~(~a|(~b|c))-13*(~a&(~b&c))-9*(~a&(b&c))+1*(a&(~b&c))+6*(a&(b&c));
}

uint64_t target_190(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(e^~(d&(e|f)))+3*((e&~f)|~(d|(~e&f)))+7*~(d|(~e&f))+4*(~e&(d^f))-6*((d&f)^~(d^(e&f)))+2*(~(d|e)|(d^(e^f)))-6*(e^~(~d&(~e&f)))-1*((e&f)|(d&(e|f)))-2*(~(d&~e)&~(d^(e^f)))-1*(e^~(~d|(e&f)))+5*(f|~(d|~e))-3*(e^~(d|(e&f)))+3*((d|e)&(e^f))+5*(~d|(~e&f))-3*(~(d|~e)|(e^f))+1*(f|(d^e))-5*(f^~(~d&(~e&f)))-11*(~e&~(d^f))-7*(f^(~d|(e&f)))+5*((d&e)^(d^(e&f)))+1*(e|~(d|f))+1*(e|(d&~f))+1*((d^e)&~(d^f))+1*(e^(~d&(e|f)))+4*(d&e)-1*~(d|f)+1*(e^(d&(e|f)))+3*((d|~e)&(e^f))-3*(e^f)-2*(f^~(d&(~e&f)))+1*(d^f)-2*((e&~f)^(~d|(e^f)))-11*(e^(d|(e&f)))+7*(e|f)+11*(~d|(e^f))-6*(f^~(~d|(~e&f)))-6*~(d^(~e|f))+2*(f^~(~d&(e&f)))-1*(f^~(d|~e))-1*(f^~(~d&(e|f)))+2*(~f|~(d^e))-2*~(d^f)+1*(e^~(~d&(e^f)))-7*(~d&(e^f))-11*(~(d|~e)|~(d^(e^f)))+3*(e^~(~d&(~e|f)))-5*(~(d&~e)&(d^(e^f)))+3*(e^(d&(e^f)))-2*f-5*(e^(d|f))+1*(~d&(~e|f))-1*(e&~(d&~f))+7*(d^(~e&f))-11*(f^(d|(e&f)))+4*(~e|(d^f))-5*~(d^(e&f))+1*(~(d&e)&~(d^(e^f)))+3*(e|(d^f))-3*(d|e)+7*~(e&~f)+2*(e^~(d&f))+11*(d|(e|f))-7*(~d&(e|f))+2*(f^(d|(~e&f)))-3*((d&f)^~(e&~f))-1*(~e|~(d^f))+7*(e^(d|(e|f)))+2*e-1*(f&~(d&e))+1*(e^~(d&(e&f)))+19*~(d|(e|f))+21*~(d|(~e|f))-15*~(~d|(e|f))-27*~(~d|(~e|f))-7*(~d&(~e&f))-51*(~d&(e&f))-44*(d&(e&f));
}

uint64_t target_191(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(z^t)+7*t-7*~(z&~t)+4*(z|~t)+11*(z|t)-1*~(z&~z)+2*~(z|t)-18*(z&~t)-14*(z&t);
}

uint64_t target_192(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*y+1*(x|y)+1*(x|~y)-1*~(x|y)-9*~(x|~y)-13*(x&~y)+1*(x&y);
}

uint64_t target_193(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*((d&e)^(d^(~e|f)))+11*(f^(d|(e&f)))+3*(d&(~e|f))+2*(d^(e&f))-11*~(d|~e)-2*((d&e)|(e^f))-5*(e^(d&(e|f)))-1*(~e|(d^f))+2*(e&~(d&f))-7*(f^~(~d&(~e|f)))+5*(d|e)-2*d+2*(e^(~d|(~e&f)))+2*(e^(d|(~e|f)))+3*e-1*(e|~(d|~f))+1*(e|(d&~f))-7*(e^~(d&~f))-11*(f^(d|e))-7*(~d&(~e|f))+1*(e^(d&(~e|f)))-5*(e^~(~d&(~e&f)))-3*(f^(d&e))-2*(f&(d^e))+11*(e^(d&f))-1*f-6*(e^(d|(e&f)))+1*(e^~(d&(~e|f)))+4*~(d&~e)+1*(~(d&e)&(e^f))-6*((d&e)^(e|~f))+2*(e|~(d|f))+1*((d&f)^~(d^(~e&f)))+7*((e&~f)^(~d|(e^f)))+1*~(d^(e|f))+1*~(e^f)+3*(e^~(~d&(~e|f)))-11*(e&~(d^f))-6*(f^(~d|(~e|f)))+1*(d^(~e|f))+1*(~(d&~e)&~(e^f))-11*(~(d^e)&(d^f))+1*(f^~(d|(e&f)))+13*~(d|(e|f))+34*~(d|(~e|f))+20*~(~d|(e|f))-1*~(~d|(~e|f))+30*(~d&(~e&f))+3*(~d&(e&f))+2*(d&(~e&f))-1*(d&(e&f));
}

uint64_t target_194(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(a|(~b&c))+2*(c^~(a&~b))-3*((a|b)&(a^(b^c)))+2*(b|(a&~c))-3*~(~a&(b^c))+7*~(a^(~b|c))+3*(b^~(a&(b&c)))-1*~(a^(b^c))+1*(~b|~(a^c))+1*~(a|c)+7*(c^~(a&(~b|c)))-7*(c^(~a|(b&c)))+1*(~(a^b)&(a^c))+11*(~(a&b)&~(a^(b^c)))+5*(~(a^b)&~(a^c))+5*((a&c)^~(a^(~b&c)))-1*(~b|(a^c))-11*((a&c)^(a^(~b&c)))+2*(b^~(a&(~b|c)))+2*~(a^(b|c))+1*(b^~(a&(b^c)))-31*~(a|(b|c))-18*~(a|(~b|c))+4*~(~a|(b|c))-1*~(~a|(~b|c))+2*(~a&(~b&c))-14*(~a&(b&c))-12*(a&(~b&c))-30*(a&(b&c));
}

uint64_t target_195(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*~(z^t)+5*(z|t)-3*~(z&~z)-2*t-7*z+11*~z+6*~(z|t)-9*~(z|~t)+7*(z&~t)+18*(z&t);
}

uint64_t target_196(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~(z&~t)-5*~t+1*t+2*(z|t)-1*~(z|t)-9*~(z|~t)+2*(z&~t)-8*(z&t);
}

uint64_t target_197(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*y-7*(x^y)+1*~(x&y)+11*~y-12*~(x|y)-5*(x&~y)-1*(x&y);
}

uint64_t target_198(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~x-5*~y-2*y+11*~(x&y)-1*x-7*(x|y)+1*~(x^y)-7*~(x|y)+3*(x&~y)+8*(x&y);
}

uint64_t target_199(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*(f^(d&(~e|f)))-2*(~e|(d^f))-6*(e^~(d&(~e|f)))-3*(f&(d|~e))-11*(e^(d|~f))-2*(e|~(d|f))+2*(f^(d&e))-1*(f^(d|(~e|f)))-5*(~d&(~e|f))-5*(~(d|~e)|~(e^f))-7*(d^(~e&f))+1*~(e|f)+3*(e&~(d&f))+1*~(d&~d)-2*(d^f)+1*(f^~(~d|(~e&f)))-7*~(d&(e&f))+7*(e^(d|(e|f)))+1*(e^~(~d&(~e&f)))-1*~(d|~f)-6*((e&~f)|~(d|(~e&f)))-1*((d&e)^(d^(e&f)))-1*((d|~e)&~(d^(e^f)))+7*~(d&e)+3*(f&~(d&e))-5*(f^(d|(~e&f)))-2*(e&(d|f))+1*((e&~f)^(~d|(e^f)))-6*(e|~(d^f))+5*(d&(e^f))+3*(e^(d|(~e&f)))-1*(e^~(~d&(e&f)))+5*(f^(d|~e))+1*(~(d|e)|~(e^f))+5*~(d&(e|f))+2*((d^e)&~(d^f))-6*(d^(e&f))-1*(~e&(d^f))+1*(~(d|~e)|~(d^(e^f)))-1*~(d^(~e&f))-1*((d|e)&(e^f))-3*(f^~(d&(e&f)))-2*(e^~(~d|(e&f)))-1*(f&(d|e))-5*(f^~(~d&(~e|f)))+1*~(d^e)+2*~(e|~f)+7*e-1*~(d|f)-3*(e^(~d|(~e|f)))+37*~(d|(e|f))+10*~(d|(~e|f))+19*~(~d|(e|f))+33*~(~d|(~e|f))-2*(~d&(~e&f))+20*(~d&(e&f))+10*(d&(~e&f));
}

uint64_t target_200(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~x+3*y-2*~y-7*~(x&y)-1*~(x^y)-1*x+9*~(x|y)+4*~(x|~y)+11*(x&~y)-1*(x&y);
}

uint64_t target_201(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*((d&e)^(e|~f))+1*((d&~e)|~(d^(e^f)))+1*(f&~(d^e))-1*((e&~f)^(~d|(e^f)))+1*(e&(d|f))+1*(~d|(e^f))-1*(d|f)-1*(f^~(d|(e&f)))+2*(e^~(d&f))+4*(e^~(d&(e|f)))-6*(~f|~(d^e))-2*(e^~(~d&(e|f)))-2*(e^~(d&(e&f)))+1*(e^~(d|~f))-11*(e^(d&~f))-1*~(~d&(~e|f))+1*(f^~(~d&(~e&f)))+3*((d|e)&~(e^f))+5*(f&~(d&e))-7*~(d|~e)-2*(e^(~d|(e^f)))+1*(~(d^e)&~(d^f))-2*(f&(d^e))+11*(e|f)+1*((d^e)|(d^f))-1*(f|(d&~e))+11*(e^(~d|(~e|f)))-2*(~(d|~e)|(d^(e^f)))+2*((d&e)^~(d^(e&f)))+2*(f^~(d&e))+5*(e|~(d|~f))-11*((d^e)|~(d^f))-11*(~d&(~e|f))-3*((d|~e)&(e^f))-7*((d&~e)|(d^(e^f)))+2*(e^(d|(e^f)))-3*(e^~(d&~f))+1*(e^~(d|(~e&f)))+1*(f^(~d|(e&f)))-1*~(d&(e&f))-1*((e&f)|(d&(e|f)))+4*(d^(e|f))+1*(e|(d&f))+22*~(d|(e|f))+28*~(d|(~e|f))+17*~(~d|(e|f))-25*~(~d|(~e|f))-5*(~d&(~e&f))+26*(~d&(e&f))+11*(d&(~e&f))+19*(d&(e&f));
}

uint64_t target_202(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(e&~(d&~f))-2*((d&f)|~(e|f))+2*((e&f)|(~d&(e|f)))-5*(d&~e)+2*(~(d|~e)|~(e^f))+2*(d^e)-11*~(d^(~e|f))-6*(f^~(d|(e&f)))-2*~(d&f)-11*((d|~e)&(e^f))-2*(d|e)-3*(~(d^e)&~(d^f))+2*((d|~e)&~(d^(e^f)))+1*(f^(~d|(e|f)))+11*(f^~(~d&(e&f)))-1*(e^(d|(e|f)))+1*(~(d|~e)|(d^(e^f)))-7*(f^~(~d&(~e|f)))+1*(f^(~d|(~e|f)))+2*(e^~(d|~f))-1*(d|(e^f))-2*(e|(d&~f))-3*(f^~(d|(~e&f)))-1*(f|(d^e))+1*((d|e)&~(e^f))-11*(e^(d|(~e&f)))-5*(f^(~d&(~e|f)))+5*(e^~(~d&(e^f)))+2*(e^(~d|(e&f)))+1*(~(d&e)&(e^f))-1*(~(d&~e)&(e^f))+1*((e&~f)^(d|(e^f)))+7*(~(d|~e)|~(d^(e^f)))-1*(f^(~d&(e|f)))-2*(e^(~d|(~e&f)))+1*(~(d^e)|~(d^f))+4*~(d&e)+5*(e^(~d|(e|f)))+2*~(e&~f)+3*(e^(d|f))-11*((d&e)|(d^(e^f)))+2*(~d|(~e|f))-2*((d&e)^(d^(~e|f)))+4*(~f|(d^e))-2*~(d^e)-7*((d&f)^~(d^(e&f)))-6*(f^~(d&(e|f)))+7*(f^~(d&e))+3*(e^~(d|f))+5*~(d|(e&f))+1*((d&f)^~(e&~f))-7*~(~d&(e&f))+1*~(d^(e^f))+1*~(d&(~e|f))-1*~(d^(e&f))-1*(d^f)-19*~(d|(e|f))+11*~(d|(~e|f))+23*~(~d|(e|f))+25*~(~d|(~e|f))+49*(~d&(~e&f))-17*(~d&(e&f))+42*(d&(~e&f))+48*(d&(e&f));
}

uint64_t target_203(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*~(~a&(~b|c))+1*((b&~c)^(~a|(b^c)))-5*(b^(a|(b&c)))-2*(b^~(~a&(b&c)))-1*(b&(a^c))+1*~(a^(~b|c))+11*(b^~(a&(~b&c)))-1*(a&(b^c))+7*((a&b)|(a^(b^c)))+5*(a^(b&c))-1*((a|~b)&~(a^(b^c)))-6*((a^b)|(a^c))-6*(b^(a|c))-2*(a&c)+1*(~(a|~b)|~(a^(b^c)))-1*~(a&~a)-11*(b&~(a&c))+7*(c^~(~a&(~b&c)))-16*~(a|(b|c))+16*~(a|(~b|c))-9*~(~a|(b|c))+3*~(~a|(~b|c))-11*(~a&(~b&c))+13*(~a&(b&c))+18*(a&(~b&c))-3*(a&(b&c));
}

uint64_t target_204(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~y+1*~(x&~y)+3*~x-11*x-12*~(x|y)-4*~(x|~y)+3*(x&y);
}

uint64_t target_205(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(c^~(a&b))-3*(~(a|b)|~(b^c))-1*((a&b)|~(b^c))+1*(~(a&~b)&~(b^c))+7*((a|b)&~(a^(b^c)))+7*(c^(a&(b|c)))-1*(c&~(a^b))+7*(a&~c)+2*(a&~b)+1*((a|~b)&(b^c))+5*(~(a&~b)&(a^(b^c)))+1*(~(a&~b)&~(a^(b^c)))-2*(b^c)-6*(~a&(b^c))+1*(c^~(a|(~b&c)))+4*(~(a&b)&(b^c))-1*((b&c)|(a&(b|c)))+2*((a&b)|(a^(b^c)))-2*(c^(a&b))+11*(b^~(a&(~b&c)))+2*(c|(a^b))-5*(b|~(a^c))-5*(c^~(~a&(~b|c)))+2*(b^(~a&(b|c)))-1*(b^~(~a&(~b&c)))-11*(b^~(a&~c))-1*((a&b)|(b^c))-1*(c^(a&~b))+11*(~b&(a^c))-2*((b&c)|(~a&(b|c)))+3*((a&c)^(a^(b&c)))+5*(~a|(~b|c))-2*(a|b)+11*~(a^(~b&c))-1*((a&~b)|(a^(b^c)))+4*(a^b)-6*(c^~(a|b))-11*(b|~(a|~c))+5*~(~a|(b&c))+11*(c^~(a&(~b|c)))+5*(~(a^b)&~(a^c))-2*~(a&(~b&c))-1*(b^(~a|(b|c)))-2*(a|(b|c))+4*(c^(a|(~b&c)))+1*((a&~b)|(b^c))-7*(~c&~(a^b))+3*(b^(a|(~b|c)))-7*~(a^b)-4*~(a|(b|c))-11*~(a|(~b|c))-43*~(~a|(b|c))+8*~(~a|(~b|c))+1*(~a&(~b&c))-4*(~a&(b&c))-22*(a&(~b&c))+8*(a&(b&c));
}

uint64_t target_206(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(e^~(d&(~e|f)))+11*((d|e)&~(d^(e^f)))-1*~(d&~d)-1*(~(d|e)|~(e^f))+7*(d^f)-1*(f^~(d&(e&f)))+1*(d|e)+1*((e&f)^~(~d&(e^f)))-1*(d|~f)+11*~(d&e)-2*(e|(d^f))-6*~(~d&(e^f))-6*(f^~(d&(e|f)))+2*(~(d&e)&(e^f))+11*(e^~(d&(~e&f)))-2*(d^(e|f))-1*(e|(d&~f))-1*(e^(d|(e|f)))+2*(e^~(~d&(~e&f)))+4*(~(d&e)&~(d^(e^f)))+3*(e|(d&f))-6*(~(d&~e)&(d^(e^f)))-2*(~e|(d^f))-2*(f^(~d&(e|f)))-2*(d&f)+5*((d&~e)|(e^f))-1*(e^(d|(~e&f)))-1*(e^(~d|(e|f)))+3*~(d&~e)-5*(e|f)-2*(e^(d|~f))-5*(d&(e^f))+4*~e-2*((d&~e)|~(d^(e^f)))-7*(~d&(~e|f))-5*(d|(e|f))-11*~(d&(e&f))+11*~(d|(e|f))+3*~(~d|(e|f))+16*~(~d|(~e|f))+8*(~d&(~e&f))+8*(~d&(e&f))+9*(d&(~e&f))+33*(d&(e&f));
}

uint64_t target_207(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(x^y)+2*x-11*~(x&~x)+1*~y-2*(x|y)-1*(x|~y)+2*y+11*~(x|y)+13*~(x|~y)+10*(x&y);
}

uint64_t target_208(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*((e&~f)|~(d|(~e&f)))+3*(f^(d&(e|f)))-7*(e^~(~d&(~e&f)))-6*((d|~e)&~(e^f))-7*((d&e)^(e|~f))+5*(d|~f)+7*(f|~(d^e))-7*(e^~(d|~f))+2*(d^(~e|f))-1*((d&f)|~(e|f))+3*~(d|(e&f))+2*~(~d|(e&f))+3*(f|~(d|~e))-2*(e^(~d&(e|f)))-1*(e^(d&(e^f)))-7*((d|e)&(e^f))+11*((e&f)^~(d&(e^f)))+11*((e&~f)^(~d|(e^f)))-1*~(~d&(e&f))-5*(~e&(d^f))+1*((d&e)|~(e|f))+2*(f&(d^e))+3*~(d|~e)-1*(e^(d|f))+11*(d&(e|f))+5*((d&f)^~(e&~f))+2*(f^~(d&~e))+1*~(d^e)-6*(~f&(d^e))-3*(e|~(d|f))+5*((d&f)^~(d^(~e&f)))+5*(~(d|e)|~(e^f))+11*(e&(d^f))+1*(f^(d&(~e|f)))+4*~(d&~d)-1*~(~d|(~e&f))+2*d-6*((d|e)&~(d^(e^f)))+11*(f^(~d|(e&f)))-2*(e^~(~d&(~e|f)))-48*~(d|(e|f))-14*~(d|(~e|f))+1*~(~d|(e|f))-24*~(~d|(~e|f))-40*(~d&(~e&f))-43*(~d&(e&f))-33*(d&(~e&f))-21*(d&(e&f));
}

uint64_t target_209(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(x|~y)+3*~y-3*~x-6*~(x^y)+2*~(x|y)-2*~(x|~y)-7*(x&~y)+7*(x&y);
}

uint64_t target_210(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(~(a&b)&~(a^(b^c)))-3*(b^~(~a|(b&c)))+11*(a^(b|c))+1*(~(a|b)|(a^(b^c)))-1*(~c|~(a^b))+1*(c^~(~a|(b&c)))-1*(c^~(a&(~b|c)))-6*(b^~(~a&(b&c)))+11*(c^~(a|b))+1*((a^b)|~(a^c))-3*(~(a&b)&(b^c))-5*(b&(a|~c))+7*(b^c)+5*(a|(b^c))+5*(c^~(a&(~b&c)))+1*(c^(a|(b|c)))-7*(~(a&b)&~(b^c))-2*(c^(~a&(~b|c)))-2*(c^(a|b))-3*((a|b)&(a^(b^c)))-7*((a&c)^(b|c))-2*~(~a|(b&c))-11*((a|~b)&~(b^c))+2*b-1*(b^~(a&c))-2*~(a&(b&c))+10*~(a|(b|c))-6*~(a|(~b|c))+13*~(~a|(b|c))-3*~(~a|(~b|c))-5*(~a&(~b&c))-2*(~a&(b&c))-13*(a&(~b&c))+4*(a&(b&c));
}

uint64_t target_211(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*(d^(e|f))+1*((d^e)|(d^f))+2*((d|e)&(d^(e^f)))+1*(~d&(e|f))+1*(e|(d^f))+2*(d^(~e&f))+11*(~(d&~e)&~(d^(e^f)))+7*(d|e)-1*(e&~(d&~f))+7*(e^(~d&(e|f)))-11*((d&e)|~(e|~f))+5*(d&~f)+1*(~(d^e)&~(d^f))-1*(e^(~d|(~e&f)))+5*(f^(d&(e|f)))+1*(d|(~e&f))+11*((d&e)^(d^(~e|f)))+1*(e&f)+1*((d&e)|~(e^f))-7*(f^(~d&(e|f)))-1*(e^~(d&(e&f)))+3*((d&e)|(d^(e^f)))-2*((d&f)|~(e|f))-3*(f^(d&(~e|f)))+4*(d&(~e|f))-11*(e^(~d&(~e|f)))+1*((d&e)|~(d^(e^f)))+3*(f|(d^e))+4*(e^~(d&(~e&f)))+2*(~(d&~e)&(d^(e^f)))-7*(~d&(~e|f))-1*((d&e)^(e|~f))-1*(d&(e^f))-2*(f^(d|(e|f)))-6*~(d^(~e|f))-6*(~(d|~e)|(e^f))+1*((e&~f)|~(~d|(~e&f)))+4*(~(d|~e)|~(d^(e^f)))-1*(f&(d|e))+2*~(d^(e&f))+2*(~(d&e)&(e^f))+1*((e&~f)^(~d|(e^f)))+2*(~e&~(d^f))+4*((d&f)^(e|f))-1*((d^e)|~(d^f))-2*(f^(d&e))+1*~(d|~f)-14*~(d|(e|f))+15*~(d|(~e|f))-6*~(~d|(e|f))-13*~(~d|(~e|f))-18*(~d&(e&f))+13*(d&(~e&f))-8*(d&(e&f));
}

uint64_t target_212(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(x&~x)-6*x-9*~(x|~y)+8*(x&~y)+8*(x&y);
}

uint64_t target_213(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(~b&(a^c))+5*((a&~b)|~(a^(b^c)))-3*(a^(~b&c))-7*((a|b)&(a^(b^c)))-1*(b^~(a&(b|c)))+1*~(a|~c)-1*(b^~(a|(~b&c)))+1*(~(a|b)|(b^c))+1*(c|~(a^b))-1*~(a&(b|c))-4*~(a|(b|c))+8*~(a|(~b|c))+6*~(~a|(b|c))+1*(~a&(~b&c))-6*(~a&(b&c))-7*(a&(~b&c))+11*(a&(b&c));
}

uint64_t target_214(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*((a&b)^(b|~c))+1*((a&c)^~(a^(b&c)))+3*~(~a&(~b|c))-5*(~(a&b)&(b^c))+3*~(a^c)-8*~(a|(b|c))-6*~(a|(~b|c))-7*~(~a|(b|c))-10*~(~a|(~b|c))-3*(~a&(~b&c))-2*(a&(~b&c))-13*(a&(b&c));
}

uint64_t target_215(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(x|~y)-1*y+2*~(x&~y)-2*~(x^y)+1*(x^y)-8*~(x|y)-9*(x&~y)-7*(x&y);
}

uint64_t target_216(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*~x-11*~(x^y)+2*~(x&~x)+14*~(x|y)-2*(x&~y)+9*(x&y);
}

uint64_t target_217(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*(b^(~a|(b&c)))-6*(b^(a|(b&c)))+1*(b^~(a&(~b|c)))-11*(b^(~a&(b^c)))+5*(a|(b|c))+6*~(a|(b|c))-1*~(a|(~b|c))-1*~(~a|(b|c))+11*~(~a|(~b|c))+12*(~a&(~b&c))+6*(~a&(b&c))-1*(a&(~b&c))+3*(a&(b&c));
}

uint64_t target_218(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(z|~t)+5*~z-6*~t+3*~(z|t)-4*~(z|~t)+9*(z&~t)+2*(z&t);
}

uint64_t target_219(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*((a&~b)|(b^c))-2*(b^(~a|(b^c)))-1*((b&~c)|~(a|(~b&c)))-2*(b^(a&(~b|c)))-6*(a^(b|c))+4*(~(a|b)|~(b^c))-1*(c&(a|~b))-1*(a|(~b|c))+1*(b|c)-11*~(a&(b^c))-11*~(~a|(b^c))+4*((a&b)|~(b^c))-11*~(a^b)-2*(a^(~b&c))-1*~(a|b)+2*(c^(a|(~b|c)))-6*(b^~(a|(b^c)))+7*((a&c)|(b&~c))+5*(c^~(~a&(b|c)))+11*~(a^(b&c))+1*(~(a^b)&~(a^c))+2*(c|~(a|b))-5*((a|b)&~(a^(b^c)))-6*~(~a&(~b&c))-11*((a&b)^(a^(~b|c)))-3*(b|(a^c))+5*~(a&~a)-7*(b|(a&~c))-5*(~(a|~b)|~(b^c))+1*(c^~(~a|(b&c)))+3*(c^~(~a|(~b&c)))-5*(~(a|b)|(a^(b^c)))+1*(c&(a|b))-1*(b^~(a&(b|c)))-6*~(a^(b^c))+1*~(~a&(b|c))+5*((a&c)^(a^(~b&c)))-6*(b^(a|(~b&c)))-3*(~(a|b)|(b^c))-2*(c^~(~a&(~b|c)))-2*((a&c)^(b|c))-11*(c^(~a|(b&c)))-5*((a&~b)|(a^(b^c)))-6*(~a|(b|c))-5*((a|~b)&(a^(b^c)))+2*~(a&~b)+3*(c^~(a|~b))-1*(a&(b^c))-2*(~(a|b)|~(a^(b^c)))-7*((a^b)&(a^c))+48*~(a|(b|c))+69*~(a|(~b|c))+66*~(~a|(b|c))+42*~(~a|(~b|c))+55*(~a&(~b&c))+57*(~a&(b&c))+40*(a&(~b&c))+56*(a&(b&c));
}

uint64_t target_220(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*~(z&t)+3*(z^t)+4*(z|~t)-7*z+2*~t+1*~(z|t)+2*~(z|~t)+3*(z&~t)+1*(z&t);
}

uint64_t target_221(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(c|(a^b))-1*(c^(a|(~b&c)))+4*(c&~(a&b))-6*~c-1*(b|(a&~c))-6*~(~a|(b&c))+11*~(a|(b|c))+11*~(a|(~b|c))+13*~(~a|(b|c))+14*~(~a|(~b|c))+1*(a&(~b&c));
}

uint64_t target_222(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*x-2*(x|y)+2*~(x&~x)+5*y-3*~(x|~y)+1*(x&~y)-6*(x&y);
}

uint64_t target_223(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*~x+2*(x|~y)-2*(x^y)+1*~(x^y)-2*~(x&~x)-5*~(x|y)+3*~(x|~y)+5*(x&~y);
}

uint64_t target_224(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*t-7*~(z&~z)+13*~(z|t)+7*~(z|~t)+15*(z&~t)+7*(z&t);
}

uint64_t target_225(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*z-1*~(z&~t)+2*~(z&t)+5*(z|~t)+4*~z-4*~(z|t)-5*~(z|~t)-9*(z&~t);
}

uint64_t target_226(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(z^t)-7*(z|t)-6*t+2*~t+1*~(z^t)+7*(z|~t)-5*~(z|t)+20*~(z|~t)+10*(z&t);
}

uint64_t target_227(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~z-8*~(z|t)-7*~(z|~t)-2*(z&~t)-1*(z&t);
}

uint64_t target_228(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*~y+2*y+5*(x^y)-2*~x-6*(x|~y)-5*~(x&~x)+2*~(x|y)+9*(x&y);
}

uint64_t target_229(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(b^~(a|(b&c)))-6*(b^~(a|c))-6*(c|~(a|b))+7*(~b&(a^c))+2*(c&(a^b))-1*(b^~(~a&(~b|c)))+1*(~a|(b|c))+5*(a|~c)+7*(~(a|~b)|~(a^(b^c)))+7*((b&~c)^(a|(b^c)))-11*(b^~(a&(~b|c)))+1*~(a^(~b&c))+7*~(a|c)+2*(b&c)-5*(c^(a|b))-1*(b^~(a&c))-1*~(~a&(b&c))-1*(~(a|b)|(a^(b^c)))-7*(~(a|~b)|(b^c))-5*(~c&(a^b))-6*(c|~(a|~b))-2*(c|(a&~b))+7*(c^~(~a&(b|c)))+2*(~c|(a^b))+3*(c^(a&(b|c)))+3*(a^c)-1*(c^(~a|(b|c)))-3*(a^b)+1*(~b|~(a^c))+1*((a&b)|~(b^c))-6*~(~a&(b^c))+1*(b^(~a|(b&c)))-6*((a&b)|~(b|c))-7*(~(a^b)&~(a^c))-2*((a&b)|(b^c))-1*(a|(b^c))+2*~(a&c)+2*((a&b)^(b|c))+2*(~(a&b)&(b^c))-11*(b^~(~a&(~b&c)))-1*(c^~(~a&(~b&c)))+5*(b^~(a&(b&c)))+7*(~(a|b)|~(b^c))-5*(b^(a&~c))+4*(c^~(a|(b&c)))-3*(~(a&~b)&~(b^c))+3*(c&~(a&~b))+9*~(a|(b|c))+11*~(a|(~b|c))+13*~(~a|(b|c))-1*~(~a|(~b|c))+3*(~a&(~b&c))+8*(~a&(b&c))+7*(a&(~b&c))+34*(a&(b&c));
}

uint64_t target_230(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(f|~(d|e))-11*((d|e)&(d^(e^f)))+11*(e|(d^f))-1*(d|f)+3*(e^(d|(~e|f)))-3*((d|e)&~(d^(e^f)))-2*((d|~e)&(d^(e^f)))+7*((d&f)^(e|f))+2*(~(d&~e)&~(d^(e^f)))-5*(f^(~d|(~e|f)))+1*(e^f)-1*((e&f)^~(d&(e^f)))+11*(f^(d&e))-1*(~(d|e)|~(d^(e^f)))+2*(d&(e|f))+1*(d&e)-5*(f|~(d|~e))+4*(f^(~d|(~e&f)))+7*(e^~(d&~f))+2*(e^(d&(~e|f)))+3*((d&f)^~(d^(~e&f)))+1*(e^~(d&(~e|f)))+5*~(d|(e^f))+5*((d&e)^~(d^(~e|f)))-1*(d^(~e|f))-2*~(d|(e&f))+11*(f|(d^e))-1*(~(d|e)|~(e^f))+1*(~d&(e^f))+4*(e|(d&f))+1*(d&(e^f))-1*(~f|(d^e))-1*~(e&~f)-7*~(d&(e^f))-3*~(d|(~e&f))+11*((d|~e)&(e^f))+3*(d^f)-2*(e^(~d&(~e|f)))+3*(d|(e^f))-11*(e|~(d|f))+5*~e+2*(e&(d|~f))-2*((d|e)&(e^f))+3*(e^~(~d&(e|f)))+2*((d&e)|~(e|~f))+1*(f^(d&(e|f)))-1*(f^~(d|~e))-2*~(~d&(e^f))-1*~(~d&(~e&f))+1*((d&e)^(e|f))+7*(~(d|e)|(e^f))+1*((e&f)|(~d&(e|f)))-6*((d&e)|~(e|f))-2*(f^~(d&(e|f)))+1*(e^(d&(e|f)))+3*(~(d&e)&~(d^(e^f)))-5*(f^(~d&(e|f)))-1*((d&e)^(d^(e&f)))+7*(~(d|~e)|~(d^(e^f)))+1*((e&f)|(d&(e|f)))+2*(f&(d^e))-10*~(d|(e|f))-23*~(d|(~e|f))-4*~(~d|(e|f))-65*~(~d|(~e|f))-74*(~d&(~e&f))-52*(~d&(e&f))-76*(d&(~e&f))-1*(d&(e&f));
}

uint64_t target_231(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*(e^(d&~f))+11*~e+4*(~d&(e^f))+11*(f^(d|(~e&f)))-7*(f^~(d&(e|f)))+3*(d^(e&f))-1*(~(d&e)&(d^(e^f)))-1*(~e|(d^f))-2*(e^~(~d|(~e&f)))-7*((d&e)^(e|f))-1*(~(d&e)&~(e^f))-11*~(d|f)+2*(e^~(d&(~e|f)))+4*(~d&(~e|f))-1*(e&f)+1*~(d&(~e|f))+2*((d&e)^~(d^(~e|f)))+1*(d^(~e&f))+1*~(d&~e)+11*(d|(e|f))-1*(e&(d|~f))-6*~(d|(e^f))+7*(e^(d|~f))+1*(d^(e^f))+3*f+7*((d&e)|~(e|f))-2*((d&f)^~(d^(~e&f)))+1*(d^(~e|f))+3*~(d|(e&f))-1*(~d|(~e|f))-1*~(d&f)+2*~(~d&(e&f))-1*~(~d&(~e|f))-2*(~(d|~e)|(d^(e^f)))+5*~(e|~f)-2*(~f|~(d^e))-5*~(d|~f)-5*d-2*(e^(~d|(~e&f)))-1*(f^~(~d|(~e&f)))-1*((d|e)&~(d^(e^f)))+4*~(d|~e)-1*(f^(~d&(e|f)))-2*(f&(d^e))-6*((e&~f)|~(~d|(~e&f)))-5*~(~d&(~e&f))+1*((d&~e)|(d^(e^f)))+26*~(d|(~e|f))-15*~(~d|(e|f))-19*~(~d|(~e|f))-33*(~d&(~e&f))-2*(~d&(e&f))-16*(d&(~e&f))+18*(d&(e&f));
}

uint64_t target_232(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*(z|~t)-6*~t-6*t-1*~(z&~z)-11*(z^t)+18*~(z|~t)+24*(z&~t)+13*(z&t);
}

uint64_t target_233(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(f&~(d&~e))-1*(~(d|~e)|~(d^(e^f)))+3*(d&e)+1*(f&(d^e))-11*(~(d|e)|(d^(e^f)))+2*(f^(~d|(~e|f)))+5*~(d|~e)+4*((d&e)^(e|~f))-3*(f^(d|(~e&f)))-2*~d-5*((d&~e)|(d^(e^f)))+1*(d|(~e|f))-1*(f^~(~d&(e|f)))-7*(e^~(d&(e|f)))-7*(f^~(~d|(~e&f)))+1*(~(d&~e)&~(d^(e^f)))+11*(e^(~d|(~e&f)))+4*(f^(d|e))+1*(e^~(d&(~e|f)))+3*(f^(d|(e|f)))-11*(f^(d&e))+11*((d&e)|~(d^(e^f)))-7*(e^~(~d&(~e|f)))+2*(f^(d&(~e|f)))+5*~(~d&(e&f))-11*(e^~(~d&(e^f)))+4*(d&(e|f))-11*((e&f)^~(~d&(e^f)))-1*e+7*~(d^(e&f))+1*(f|~(d^e))+5*((d&e)^~(d^(~e|f)))+2*~(~d&(e^f))-1*((d|e)&~(e^f))+2*(d|~e)-6*(d&(e^f))-2*((d&f)|(e&~f))-3*(e^~(d|(~e&f)))+1*~(d&~e)+11*(~(d|~e)|(d^(e^f)))+2*~(d&(~e|f))-3*~(d|~f)-3*~(d|(e|f))-16*~(d|(~e|f))+24*~(~d|(e|f))-2*~(~d|(~e|f))+1*(~d&(~e&f))-3*(~d&(e&f))+18*(d&(~e&f));
}

uint64_t target_234(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(x^y)-1*y+11*~(x&~y)+11*~(x&y)+2*~y-25*~(x|y)-23*~(x|~y)-8*(x&~y)-6*(x&y);
}

uint64_t target_235(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*c-11*~(a&(~b&c))+2*(~(a&~b)&~(b^c))-1*(a|(~b&c))-11*~(~a|(b^c))+11*(~(a|~b)|(b^c))+1*(b^(~a&(b|c)))+1*(c&(a|~b))-1*(~a&(~b|c))-7*(b^~(a&(~b&c)))-2*~(a^c)+1*(a&c)-6*((a&c)^(a^(b&c)))+2*(c^(a&~b))+20*~(a|(b|c))+2*~(a|(~b|c))+35*~(~a|(b|c))+7*~(~a|(~b|c))+5*(~a&(~b&c))+2*(~a&(b&c))-11*(a&(~b&c))+24*(a&(b&c));
}

uint64_t target_236(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*((e&~f)|~(~d|(~e&f)))-7*(d^(e|f))+7*~(d|e)+3*(f^(~d&(e|f)))+5*(e^(~d&(~e|f)))+4*(e^(~d|(~e|f)))+1*(d|(e|f))-1*~(d&e)+7*(~(d|~e)|~(e^f))-6*(~d|(~e&f))+1*~(~d|(e^f))+11*~(d&(~e|f))+2*((d&e)|~(e^f))-2*(f&(d|e))-1*~(d&(~e&f))+2*(e&~f)-11*(e^(d&f))-3*((d&e)^(d^(~e|f)))-2*e+2*(~(d|~e)|(e^f))+1*((d|~e)&~(e^f))+7*(~(d&~e)&~(d^(e^f)))-2*(e^(~d&(e|f)))-5*(~f|~(d^e))+1*(f^(~d|(e|f)))-2*((d|~e)&(d^(e^f)))-1*~(d|(e^f))+3*(e^~(~d&(~e|f)))-2*(f^~(d&~e))+5*(e^(d|(e&f)))+11*~(e&f)-3*(f|~(d|~e))-35*~(d|(e|f))-5*~(d|(~e|f))-14*~(~d|(e|f))-19*~(~d|(~e|f))-10*(~d&(~e&f))+5*(~d&(e&f))-3*(d&(~e&f))+4*(d&(e&f));
}

uint64_t target_237(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*z-2*~(z&t)+11*~t+3*t-4*~(z|t)-1*~(z|~t)-6*(z&~t)+5*(z&t);
}

uint64_t target_238(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*x-3*~(x&~x)+3*~(x|y)+1*~(x|~y)-2*(x&~y)-4*(x&y);
}

uint64_t target_239(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(x|~y)+2*~y-3*~x-2*(x|y)-2*~(x&~x)+2*~(x^y)+3*~(x&y)+1*~(x|~y)-2*(x&~y)+4*(x&y);
}

uint64_t target_240(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*~x+3*~y+5*~(x^y)-1*(x^y)-5*~(x&~y)+1*~(x&y)+2*(x|~y)-16*~(x|y)-5*~(x|~y)-8*(x&~y);
}

uint64_t target_241(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(z^t)+2*~t+2*~(z&t)-4*~(z|t)-4*~(z|~t)-6*(z&~t);
}

uint64_t target_242(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*~(d&(e|f))+2*(f^(d&(~e|f)))-2*(f^(d&(e|f)))+2*(f&(d^e))-1*(f^(~d&(e|f)))+1*(d|f)-5*(e^~(~d&(e&f)))-2*(d^(e^f))+2*(~(d&e)&~(d^(e^f)))-1*(~(d&~e)&(d^(e^f)))+5*((d|e)&~(e^f))+11*(e^~(d&(~e|f)))-11*((d^e)&(d^f))+1*((d^e)&~(d^f))+4*(f^~(d|~e))+3*(e|(d&~f))+1*(e^~(d&(e|f)))+2*(f^(d|(~e|f)))+4*~(d^(~e&f))-5*(d|(e^f))-3*(e^~(~d&(~e|f)))+2*(d&(~e|f))+1*~(d|(e^f))-7*(f&~(d^e))-7*(f^(d|e))-2*(e&~(d&~f))+7*~f+1*(~e&~(d^f))-5*((e&f)|(d&(e|f)))-6*(~e|(d^f))+7*(e^~(~d&(e|f)))-1*(d^(~e|f))+1*~(d^(e|f))-6*(~(d&~e)&~(e^f))+11*((e&f)|(~d&(e|f)))-1*(~e|~(d^f))-1*(~(d&~e)&~(d^(e^f)))+4*(f^~(d&(~e&f)))-2*~(~d&(e|f))+3*((d&f)^~(d^(e&f)))+1*(e^(~d&(~e|f)))+7*((e&~f)^(d|(e^f)))+5*(d&~e)+7*(e^(d&(e^f)))-1*(~(d|e)|(d^(e^f)))+2*(~(d&e)&~(e^f))-1*(e|(d&f))-11*(e^~(d&f))+5*(f^(d|~e))+1*((d&~e)|~(d^(e^f)))+1*(d|e)-16*~(d|(e|f))-22*~(d|(~e|f))+2*~(~d|(e|f))+10*~(~d|(~e|f))+11*(~d&(~e&f))-8*(~d&(e&f))-17*(d&(~e&f))-10*(d&(e&f));
}

uint64_t target_243(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(a&(b|c))+1*(b^~(a&~c))-2*~b+1*~(~a|(b^c))-6*(a&(b|c))+4*(a^(b|c))-1*(c^~(a&b))-6*(b^(a&(b|c)))+1*~(a|(b&c))+11*(~b&~(a^c))-11*(c^(~a&(~b|c)))+7*((a&~b)|~(a^(b^c)))-2*~(a&~a)-11*(b^(~a|(~b&c)))+11*(b^(a&~c))+7*(c^~(a|(b&c)))-1*((b&~c)|~(~a|(~b&c)))+11*(b&~c)+1*((a&b)|~(b|c))-1*((a&b)^~(a^(b&c)))+2*~(b|~c)+1*(b^~(a|(b^c)))-2*(~(a&b)&(a^(b^c)))-2*(a|b)+1*~(a^b)-2*(b^~(~a&(b^c)))-3*(b^~(a&(b^c)))+1*(~a|(~b&c))-2*((a&c)^(a^(b&c)))-7*(c&(a^b))+2*(a|(~b&c))-5*~a+2*(~b|(a^c))+5*(a&b)+2*(b^~(a&(~b&c)))+7*(~a&(b|c))+3*((a&b)^(a^(~b|c)))+5*(b^~(a&(~b|c)))+1*(a^c)-1*(b|~(a|c))-2*((a&~b)|~(b^c))+1*(c^~(a&~b))+2*(c^~(~a&(~b|c)))-1*(b|(a&~c))+3*(c^~(~a|(b&c)))-7*(c^~(a&(b|c)))+4*((a&~b)|(b^c))-2*(b|~(a^c))-6*(a&(~b|c))-1*(b^(a&(b^c)))-2*~(a^(~b|c))+6*~(a|(b|c))-13*~(a|(~b|c))-5*~(~a|(b|c))-11*~(~a|(~b|c))-15*(~a&(~b&c))-16*(~a&(b&c))+30*(a&(~b&c))+18*(a&(b&c));
}

uint64_t target_244(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*~(z&~z)+2*~(z^t)-1*(z|t)-9*~(z|t)-6*~(z|~t)-6*(z&~t);
}

uint64_t target_245(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*~(z^t)+5*~z-1*z-5*~(z|~t)+1*(z&~t)+8*(z&t);
}

uint64_t target_246(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*x-11*~x-1*y-1*~(x&~x)+12*~(x|y)+13*~(x|~y)+3*(x&y);
}

uint64_t target_247(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*(~(a^b)&~(a^c))-3*(~c|(a^b))+3*((a|b)&~(a^(b^c)))-2*(b^(~a&(b^c)))+11*(~(a|~b)|(b^c))+11*(b^~(~a&(~b&c)))-1*(~a|(~b|c))+1*(b&~(a^c))-2*(a|(b&c))+7*(c|(a&b))-8*~(a|(~b|c))-5*~(~a|(b|c))-9*~(~a|(~b|c))-15*(~a&(~b&c))-13*(~a&(b&c))-26*(a&(~b&c))+2*(a&(b&c));
}

uint64_t target_248(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*(c^~(a&(~b&c)))+1*(~(a&b)&(a^(b^c)))+1*(b|~c)-3*((a&c)^(b|c))+7*(b^(a&c))+7*(b^(a&(b^c)))-1*~(~a&(b^c))+1*((b&c)^~(~a&(b^c)))-5*(c^(a|(b&c)))+2*(a&~b)+5*(b^(~a&(b^c)))+4*(c^(~a|(b&c)))-5*a+7*((a&b)^(b|c))-5*(c|(a^b))-3*(a|c)+1*(a^(~b&c))+2*(~a|(~b&c))+4*(b^(a&(~b|c)))-2*~a-2*(a|(b&c))-2*~(a|(b|c))-27*~(a|(~b|c))+7*~(~a|(b|c))-4*~(~a|(~b|c))+9*(~a&(~b&c))-17*(~a&(b&c))-22*(a&(~b&c))+9*(a&(b&c));
}

uint64_t target_249(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*~(z&~z)+7*~(z&t)-1*(z|~t)-5*z+1*(z^t)-11*(z|t)+1*~(z|t)+10*~(z|~t)+16*(z&~t);
}

uint64_t target_250(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*z-2*~(z&~z)-3*(z|t)-11*~t+2*~(z&t)+11*~(z|t)-8*~(z|~t)+2*(z&t);
}

uint64_t target_251(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(a&~a)+5*(b^~(~a&(~b&c)))-3*(b^~(a&(b|c)))+7*(~a&(b|c))-3*~(a&~b)+1*(a|c)-3*(b|~(a^c))-1*(b^(~a&(b|c)))-1*(c^(a|(b|c)))+2*~(b&c)-2*(a^(~b|c))-7*(~(a&b)&~(a^(b^c)))+3*(b^~(a&(b&c)))-6*(c|~(a^b))+5*(~a|(~b|c))+4*(a|b)+5*(b^~(~a&(~b|c)))-1*(c|~(a|b))-5*~(a^(~b|c))-6*(~c&(a^b))+1*(b^(~a|(b^c)))-1*(b^~(a&~c))-11*(b^(a&(b^c)))-7*(~(a^b)|~(a^c))+1*(b&~(a^c))+1*~(a|(b^c))+1*(a^(b^c))-11*(c^~(a|(b&c)))+2*(~(a&~b)&(b^c))+3*(b^~(~a&(b&c)))+1*~(a&b)+1*~(~a|(~b&c))-6*((a|b)&~(b^c))+11*~(a|b)-1*(b^(~a|(b&c)))-7*((a&c)|(b&~c))-3*~(a^b)+11*(a&b)+1*((a&b)|~(b^c))+1*((a&b)^(a^(~b|c)))+1*(b^(a|(b^c)))-2*((a&b)|(b^c))-7*((a&c)^(a^(~b&c)))+7*(~(a^b)&(a^c))-1*(b&~(a&~c))+1*(b^c)-2*(~c&~(a^b))+17*~(a|(b|c))+34*~(a|(~b|c))-4*~(~a|(b|c))+16*~(~a|(~b|c))-9*(~a&(~b&c))+22*(~a&(b&c))+33*(a&(~b&c))+37*(a&(b&c));
}

uint64_t target_252(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(c^~(a&(~b|c)))+1*(c^(~a&(b|c)))-1*(c^~(a&(b|c)))-6*(~b&(a^c))-2*((a&c)|(b&~c))-6*~(a^(~b|c))-1*~(a|c)-7*(a|~c)-1*~(b&c)+4*((a^b)|(a^c))-7*b+2*~(b^c)+11*((a|b)&~(a^(b^c)))+1*(c^~(~a|(b&c)))+3*(c^~(a&~b))+4*(b^~(a&c))+4*(c^~(a|(b&c)))-6*(~b&~(a^c))+2*c-3*(~(a&b)&~(a^(b^c)))+2*(~c|(a^b))+5*~(a&~c)-2*(b^~(a|c))+2*((a|~b)&(b^c))+11*(c^(a&b))+5*((a|b)&(b^c))-1*((a|~b)&~(b^c))-11*~(a&~b)+4*(~(a^b)&(a^c))-3*((a^b)&(a^c))+11*(a|(~b|c))-11*(~(a|~b)|(b^c))-7*((a&c)^~(a^(b&c)))-1*((a^b)&~(a^c))+2*(c^~(a|~b))+1*(b^(a|(b|c)))-1*~(a^(b|c))-5*(~a|(b|c))-3*(c^~(~a&(b&c)))+4*(a&(b|c))+3*((a&b)|~(b|~c))+7*(~c&(a^b))+19*~(a|(b|c))+31*~(a|(~b|c))-4*~(~a|(b|c))-10*~(~a|(~b|c))-10*(~a&(b&c))-21*(a&(~b&c))+16*(a&(b&c));
}

uint64_t target_253(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*((d&e)^(d^(~e|f)))+2*(d&(e^f))-1*(e^(d&(~e|f)))-5*(e|~(d|f))+11*(f^~(d|~e))+3*(~(d|e)|(e^f))+3*(d^e)-11*~(~d&(e&f))-2*(d|(e|f))+3*(f^~(d&(~e|f)))+1*~(d^f)-11*~(d|~e)-3*(e^~(~d&(e&f)))-6*~d-1*((d&~e)|(d^(e^f)))+1*(~(d&e)&~(d^(e^f)))+3*~(e|f)-1*((d&e)^(e|f))-7*(f|(d&~e))-3*((d&~e)|(e^f))+3*(e^(~d|(e&f)))-3*(d|(~e|f))+5*(e^(d|~f))-1*(~f|(d^e))-7*(f^(d|(e&f)))-2*~(~d|(e^f))-1*(~(d&e)&~(e^f))-3*(e^(~d|(e^f)))-1*(e&~(d&~f))-2*~e-7*((d&e)^~(d^(~e|f)))+2*(f^(~d&(~e|f)))-5*((d^e)|(d^f))-6*(e|(d&f))+5*(e^(d|(e&f)))+11*((d&e)^(e|~f))-6*((d&f)^(d^(~e&f)))+11*(~f|~(d^e))+4*(~(d^e)|(d^f))+1*(e^~(d&(e^f)))-15*~(d|(e|f))+14*~(d|(~e|f))+31*~(~d|(~e|f))+26*(~d&(~e&f))+27*(~d&(e&f))+26*(d&(~e&f))+8*(d&(e&f));
}

uint64_t target_254(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*(x^y)-6*~(x^y)+11*~(x&y)+1*x+5*~(x|y)-11*~(x|~y)-24*(x&~y)+16*(x&y);
}

uint64_t target_255(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(z&t)+4*t-7*~(z|t)-11*~(z|~t)-2*(z&~t)-9*(z&t);
}

uint64_t target_256(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(x^y)+2*~y+7*y-1*~x-7*~(x&y)+1*(x|~y)-1*~(x&~y)+6*~(x|y)+2*(x&~y);
}

uint64_t target_257(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*((a&b)^~(a^(~b|c)))-6*~b+4*~(a&~b)+7*(b^~(~a&(~b|c)))+5*(b^(a&(~b|c)))+7*((b&c)|(a&(b|c)))-2*(a|~b)+5*(b|~(a|~c))+7*~(a&c)+2*(b^(~a&(~b|c)))+1*~(a&b)+1*(~(a^b)|(a^c))+4*~(b&c)+5*~(b|~c)+1*((a&b)|~(b^c))-2*(~(a|b)|(b^c))-1*(b|(a^c))-11*(a&(b^c))+11*~(a&(b&c))-7*(b^(~a|(b^c)))+2*(b^(a&~c))+3*(b^~(~a|(b&c)))-11*(c^~(a&(~b|c)))-11*(c^(a|~b))-2*(c&~(a&b))+4*(~b&~(a^c))-2*(~a&(b|c))-3*(a|(b&c))-7*(b^(a&c))-1*~(a^(b^c))+2*(c^~(a|(~b&c)))+11*(b^(~a&(b|c)))+1*((a&c)^(a^(b&c)))-2*((a|~b)&~(b^c))+2*(c^(~a|(~b|c)))-7*(a&c)-1*((a|~b)&(a^(b^c)))+4*(b^(a&(b|c)))+1*(a&(b|c))+3*~(a|(b|c))-21*~(a|(~b|c))-11*~(~a|(b|c))-4*~(~a|(~b|c))-30*(~a&(~b&c))-32*(~a&(b&c))+13*(a&(~b&c));
}

uint64_t target_258(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*~(z&~t)+4*~t+1*t-2*~(z^t)-6*~(z|t)-5*~(z|~t)-6*(z&~t);
}

uint64_t target_259(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*~(z&~z)+1*(z|t)-5*~t+2*~z-8*~(z|t)-7*(z&~t);
}

uint64_t target_260(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~x+11*(x^y)-11*(x|~y)-2*~(x|y)-13*~(x|~y)-12*(x&~y)+11*(x&y);
}

uint64_t target_261(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*~(x^y)-11*~(x&~y)-1*(x|~y)+11*(x^y)+5*~(x&y)+4*y+18*~(x|y)-9*~(x|~y)-13*(x&~y)+21*(x&y);
}

uint64_t target_262(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(z&~t)-2*z-5*~(z&t)+5*~(z|~t)+2*(z&~t);
}

uint64_t target_263(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*(~(a|~b)|~(a^(b^c)))+2*(~a|(b|c))+7*(c^(a|(~b|c)))-14*~(a|(b|c))-6*~(a|(~b|c))-6*~(~a|(b|c))-14*~(~a|(~b|c))-2*(~a&(~b&c))-7*(~a&(b&c))-6*(a&(~b&c))-1*(a&(b&c));
}

uint64_t target_264(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*(x^y)-3*(x|y)+3*~x-3*~y-11*~(x&~x)-2*x+11*~(x|y)+26*(x&~y)+16*(x&y);
}

uint64_t target_265(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*y-1*~(x&~x)-6*~(x&~y)+1*~x+11*(x|~y)-11*x-5*~(x|y)+1*(x&~y)+9*(x&y);
}

uint64_t target_266(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*~z+1*(z^t)+5*~t-11*z-11*t-3*(z|t)+1*~(z^t)-1*(z|~t)-18*~(z|t)+9*(z&~t)+23*(z&t);
}

uint64_t target_267(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(~(a|~b)|(b^c))+2*((a&b)|~(a^(b^c)))+11*(b^(a&(~b|c)))-1*~(b^c)+2*~(a&~a)+1*(~(a^b)|(a^c))-6*(b^~(~a|(~b&c)))-6*(~(a&b)&~(a^(b^c)))-11*~(~a&(b|c))-2*b+1*(a|(b&c))-7*(a&(b|c))+1*(b^(~a|(b|c)))-11*(c|~(a^b))-1*((b&c)|(a&(b|c)))-3*(c&~(a&~b))-1*(c^~(~a&(b|c)))-2*(c&~(a^b))+22*~(a|(b|c))-8*~(a|(~b|c))+4*~(~a|(b|c))+15*~(~a|(~b|c))+12*(~a&(~b&c))+17*(~a&(b&c))+22*(a&(~b&c))+32*(a&(b&c));
}

uint64_t target_268(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(e^(d|f))-6*(f^~(~d&(e&f)))-3*(f^~(d&(e&f)))-5*(e&(d|f))-7*(e^(~d|(~e&f)))+7*~(~d&(~e|f))+11*~(d^(e&f))-1*(e^(d|(e|f)))+7*f-11*(~(d^e)&(d^f))+11*(e|(d&~f))-11*(~e|~(d^f))+1*((d&f)^(d^(~e&f)))+1*(f^~(~d|(e&f)))-2*(f^~(~d&(~e|f)))-1*(e^~(d&f))-3*(f^~(d&(~e&f)))+2*(d^(e^f))-1*~(e^f)+11*((d&f)^~(e&~f))+1*(~(d|e)|(e^f))+3*~(d|~f)-6*(d|(~e&f))+11*(~d|(~e|f))+5*(f^(~d|(e&f)))-11*((d&e)|(d^(e^f)))+2*((d&f)^(d^(e&f)))-1*(~(d|e)|~(e^f))-1*(f|(d&e))+1*d+5*(f^~(d|(e&f)))-11*(f^~(d&(~e|f)))-5*((d&~e)|(e^f))-2*(f|~(d|e))+1*(f&(d^e))+3*(~(d&e)&~(d^(e^f)))-5*(e|f)+11*(d|(e^f))+2*(f^(~d&(~e|f)))-5*(e^~(~d&(~e|f)))-7*(f^(~d&(e|f)))+4*~(~d&(e|f))-1*(e^~(d&~f))+1*~(d&e)+4*(e^(~d&(e^f)))-2*~(~d|(e^f))-2*(~d&(e^f))-1*~(e|f)+2*(e&(d^f))+3*(f^~(d|~e))+4*~(d|f)+2*(f|(d^e))-6*((d|e)&(d^(e^f)))-1*~(d^f)-6*(f^~(d&e))-2*(f^~(~d|(~e&f)))-1*(e^(~d|(e&f)))-5*(~(d|~e)|~(d^(e^f)))-2*((d&e)^(d^(e&f)))-1*(~(d&~e)&(e^f))-2*((d|e)&~(e^f))+1*((d&e)|~(e|~f))+7*((d&f)^(e|f))+4*~(d|(e|f))+7*~(d|(~e|f))+14*~(~d|(e|f))+34*~(~d|(~e|f))-4*(~d&(~e&f))-31*(~d&(e&f))+11*(d&(~e&f))+7*(d&(e&f));
}

uint64_t target_269(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*t+2*~(z&t)-3*~(z|t)-10*~(z|~t)-8*(z&t);
}

uint64_t target_270(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~x+2*(x|~y)-3*x+2*(x|y)-10*~(x|y)-10*~(x|~y)-4*(x&~y)-15*(x&y);
}

uint64_t target_271(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~z-11*(z|t)-6*~(z&~z)-1*~(z&~t)-5*~t+2*z+7*~(z|t)+20*~(z|~t)+27*(z&~t);
}

uint64_t target_272(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*(z^t)-1*~(z^t)-6*~(z&~t)+1*~t+2*(z&~t)+7*(z&t);
}

uint64_t target_273(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*(b^~(a&(~b|c)))+3*~(a&(b&c))+11*((a&~b)|(a^(b^c)))+5*(c^(~a|(b&c)))-7*(b|~c)+1*((a&b)|~(b|~c))-7*~(a^(~b|c))-3*(~a&(b|c))-7*(b|c)+1*(a^b)-1*(b^(a|c))-1*(c^~(~a&(b&c)))-11*(a|b)-1*(a|(~b|c))+4*(c^~(a&(b&c)))+7*(b^(a|(b&c)))+11*(b^(~a&(~b|c)))+2*(b|(a^c))+1*(c&~(a^b))+11*(c^(a&(~b|c)))+1*(~a|(b|c))-2*(c^~(a&~b))+1*(a|(b|c))-2*(c^(a|(~b|c)))+3*(~b&~(a^c))+4*(b^(~a|(~b|c)))+2*~(b|~c)-1*(a^c)+1*~(b&c)+3*(c&~(a&b))-3*(b^~(a&(~b&c)))-1*(a^(b&c))-6*~(a|c)-1*((a&b)^~(a^(~b|c)))-11*(b^(~a&(b|c)))+1*((a|~b)&~(a^(b^c)))-2*((a&b)^(b|~c))-7*(a|~c)-3*(c&(a^b))+11*~(a&c)-2*((a&c)^(a^(b&c)))+2*(c|~(a|~b))-13*~(a|(b|c))-5*~(a|(~b|c))-9*~(~a|(b|c))+27*~(~a|(~b|c))-36*(~a&(~b&c))+6*(~a&(b&c))-5*(a&(~b&c))+8*(a&(b&c));
}

uint64_t target_274(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(d|e)+5*((d&e)^~(d^(e&f)))+1*(e^~(d&(e|f)))+11*((d&~e)|(e^f))+7*~(e|~f)-11*((d&~e)|~(e^f))+1*(e^(d|(e|f)))-6*~(d&~d)+1*(e^f)-11*(e^(d&f))+4*(d|~f)-11*(e|~(d^f))-11*((d&f)|~(e|f))-1*(~f&~(d^e))+2*(f^~(~d&(e|f)))+7*((d|~e)&~(e^f))+4*(e^(d|(~e&f)))-5*(e^~(d&f))+1*((d&e)|~(e|f))-1*~(d&(e^f))+3*(~(d^e)&~(d^f))+5*((d&e)^(d^(e&f)))+1*((d|e)&~(d^(e^f)))+3*(e|(d&~f))-7*((d^e)&~(d^f))+1*~(~d&(e|f))-11*~(e|f)+1*(~(d|e)|(e^f))-1*(e&f)+34*~(d|(e|f))+3*~(d|(~e|f))-2*~(~d|(e|f))-2*~(~d|(~e|f))-19*(~d&(~e&f))+29*(~d&(e&f))+14*(d&(~e&f))+14*(d&(e&f));
}

uint64_t target_275(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*(b^(~a|(b^c)))-7*(a^b)+1*(c^~(~a&(b|c)))-1*(~a|(b|c))-2*(~(a&~b)&(a^(b^c)))+1*(~c|~(a^b))+1*(b^~(a&(b^c)))+3*~(a&(b|c))-2*(~(a&b)&~(a^(b^c)))-5*~(~a&(~b|c))+1*((a&c)^~(a^(b&c)))+7*(a|~b)+5*(b^~(a&~c))-3*(~(a|b)|(b^c))+11*(~c|(a^b))-1*((a&~b)|(b^c))-11*~(a&(b&c))+14*~(a|(~b|c))-5*~(~a|(~b|c))-12*(~a&(~b&c))+6*(~a&(b&c))-5*(a&(~b&c))-11*(a&(b&c));
}

uint64_t target_276(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(x&~x)-2*x+4*~(x^y)-2*(x^y)+7*~y+7*~(x&y)-5*~(x|y)+8*~(x|~y)-8*(x&~y)+11*(x&y);
}

uint64_t target_277(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*x+1*~y+1*~(x&y)-1*(x|~y)-7*~(x^y)+2*(x^y)-2*(x|y)+6*~(x|y);
}

uint64_t target_278(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*(e^(~d|(e^f)))-5*~(~d&(~e&f))+2*~(d&~f)+1*(e^(d&(e|f)))+4*(~(d&e)&(e^f))+4*((d&f)^(d^(e&f)))+1*((d&e)|~(e^f))+11*(~e&(d^f))-6*(d^(~e|f))+11*~(d^e)+1*(d&(e|f))-7*~e-6*(e^(d|~f))-2*(f^(~d|(~e|f)))-1*~(e^f)+7*(f^(d|(~e|f)))+7*(f^~(~d|(e&f)))+1*(f^~(~d|(~e&f)))+5*(e^(d|(e^f)))+7*(d|(e^f))-1*~f-3*(~(d&e)&~(d^(e^f)))-2*((d^e)|~(d^f))+4*(f&(d|e))-2*(~e|(d^f))+3*f+11*~(e|f)-2*(f^(d&e))-1*(f^(d&(e|f)))+1*(~e|~(d^f))+3*(f|(d&e))+2*(f&(d|~e))-7*~(d^f)+1*((d&e)^(e|f))+2*(e^f)-5*(f^(d|(e|f)))+1*(~f&~(d^e))-1*(f^(~d&(~e|f)))-1*((d&e)|(e^f))+1*((e&f)|(~d&(e|f)))-3*(e^~(d|f))+2*(~(d&~e)&(e^f))+2*(e^~(d&(~e&f)))+1*((e&f)^~(~d&(e^f)))+2*(f^~(d|(~e&f)))+3*(e&~(d&~f))-4*~(d|(e|f))-3*~(d|(~e|f))-27*~(~d|(e|f))-22*~(~d|(~e|f))-59*(~d&(~e&f))-5*(~d&(e&f))-15*(d&(~e&f));
}

uint64_t target_279(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*~(d|(~e&f))-3*(f^~(d|(e&f)))-1*(e^~(d|(e&f)))+1*(f^~(~d|(~e&f)))-2*(d&~e)+1*(e^(d&~f))+5*((d|e)&(d^(e^f)))-5*~(d^(~e|f))+4*(e^(d|(e^f)))-1*(d&(~e|f))-11*~(e|~f)-2*(e^~(~d&(~e|f)))-2*((d&e)|~(e|f))+1*(f^~(d|~e))-3*((d|e)&(e^f))+2*~e+7*~(~d&(~e&f))-6*(d|e)+2*~(d&(e|f))-6*((d&e)|(e^f))+2*(e^(d|(~e|f)))-2*(f^~(d&~e))+3*(e^~(d&(e&f)))-3*(f&~(d^e))+2*(~(d&~e)&~(d^(e^f)))-6*((d&f)^(e|f))-1*(e^(~d|(~e&f)))-1*d-5*((d&f)^~(e&~f))-7*(d|(e&f))-1*(f^(d|(e|f)))-1*(e^(~d|(e|f)))+3*(e|(d&~f))-1*~(d|(e|f))+13*~(d|(~e|f))+2*~(~d|(e|f))+18*~(~d|(~e|f))+14*(~d&(~e&f))+17*(~d&(e&f))+31*(d&(~e&f))+16*(d&(e&f));
}

uint64_t target_280(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*(e^(d|f))-6*(d|(e|f))-11*(e^~(d|(~e&f)))+11*(d|(~e|f))+11*(f^(d&e))+1*~(d^(e^f))-1*(e^(d&~f))+5*~(d&~e)+2*(d&~f)+1*((d&f)^(d^(e&f)))-11*((d|e)&(d^(e^f)))+4*(f^~(d|~e))-6*(~(d|~e)|~(d^(e^f)))+4*((d|e)&~(e^f))-1*((e&~f)|~(~d|(~e&f)))+2*(f^(d&~e))+4*~(e|~f)+1*(e^~(~d&(~e&f)))-7*(f&(d|e))-1*(f^(~d|(~e&f)))-2*((d|~e)&(e^f))-1*(e^~(~d&(~e|f)))+1*(d^(~e|f))-7*((d^e)&(d^f))+2*~(e&f)+1*~e+7*(e^~(~d|(e&f)))-1*~(~d|(~e&f))-1*(~f|(d^e))-6*(f^~(d&(e&f)))+3*(d^f)+5*(e^~(d&f))+1*(e^(d|(~e&f)))+7*~(d&~d)-2*((e&~f)^(~d|(e^f)))+4*e+7*(e^~(~d&(e^f)))-1*(e^(d|(e^f)))-7*((d&e)^(e|f))-2*(f|(d^e))-7*(d|(e&f))-2*(e&f)+1*(e|(d^f))-2*(d&~e)-3*(f&~(d&~e))-1*(f^(~d|(~e|f)))+2*(e^(~d&(e^f)))-7*(f|(d&~e))-2*f+1*((e&~f)|~(d|(~e&f)))-2*(f^(~d&(e|f)))-11*(~f&~(d^e))-11*(f^(d&(e|f)))+3*(f^~(d|(~e&f)))-1*(e^~(d&(~e&f)))-3*((d^e)&~(d^f))-1*(~d|(e&f))-4*~(d|(e|f))+3*~(d|(~e|f))+11*~(~d|(~e|f))-22*(~d&(~e&f))+12*(~d&(e&f))-6*(d&(~e&f));
}

uint64_t target_281(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(b^~(~a&(b&c)))+3*(c&(a|b))-1*~c+4*(b^~(a&(~b|c)))-1*~(b&c)+1*(c^(a&(b|c)))-5*((a^b)|(a^c))+2*((a&b)^~(a^(~b|c)))-7*((a&~b)|(a^(b^c)))-3*(b^~(a|(b&c)))+3*(b^(~a&(b|c)))+12*~(a|(~b|c))+11*~(~a|(b|c))+4*~(~a|(~b|c))+7*(~a&(~b&c))+7*(a&(~b&c));
}

uint64_t target_282(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*(d&(e^f))-1*(e^(d&(e^f)))-7*(~f|~(d^e))-1*(~(d|e)|~(e^f))-3*(d^(e&f))-1*(~(d^e)&(d^f))-7*(~(d&e)&~(d^(e^f)))+2*(f^(d|~e))+4*(f^~(d&~e))+1*((d^e)&~(d^f))-1*(e|(d^f))+5*(f^~(d&(e&f)))+2*(f^(~d|(~e&f)))-2*(~(d&e)&(e^f))+3*~(d&~f)-1*~(d&(~e|f))+11*(f&(d^e))-1*((d&e)|(d^(e^f)))+2*(~(d&~e)&~(e^f))-11*(~d|(e^f))+1*(d^(~e&f))-2*(d|(~e|f))+4*(e&~f)-2*(e^~(d|~f))-6*((d&~e)|(d^(e^f)))-5*(e&~(d&f))+1*(f^(d&~e))-5*~(~d|(e&f))+1*(e^~(d|(e&f)))-6*~(~d&(~e|f))-2*(d&e)+2*~(d|(e^f))-1*(e&~(d^f))-1*(e^(~d|(e^f)))+2*~(d|(e&f))+1*(f^(d&e))-3*(f^(d|(~e|f)))+7*(e^(d|(e&f)))+9*~(d|(e|f))+16*~(d|(~e|f))+17*~(~d|(e|f))+27*~(~d|(~e|f))+24*(~d&(~e&f))+6*(~d&(e&f))+14*(d&(~e&f))+14*(d&(e&f));
}

uint64_t target_283(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*~x+5*(x|y)+4*~(x^y)+7*~(x|y)+6*~(x|~y)-9*(x&y);
}

uint64_t target_284(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~x-3*~(x^y)-2*(x|y)-6*x+5*~(x|y)+4*~(x|~y)+11*(x&y);
}

uint64_t target_285(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(a^b)+5*((a&b)^(a^(b&c)))+1*((a&c)^~(a^(b&c)))-5*(~a|(b|c))+11*(c^~(a&b))+1*(a|(b&c))+1*(~(a&b)&(b^c))+5*(~(a|b)|~(a^(b^c)))+4*(b^(~a&(~b|c)))+2*(a^(b&c))-5*(b^~(a|(b&c)))-6*(b^(a|~c))-2*(c^(a|(b|c)))-2*(b^~(a|(b^c)))+1*(c^(a|(~b|c)))-6*~(b&c)+1*(~(a^b)&(a^c))-6*(c^(~a&(b|c)))+1*(b^~(a&(~b|c)))+5*(c^~(~a&(b&c)))-7*((b&c)|(a&(b|c)))-1*(a|b)+11*(b^(a&(~b|c)))+7*~(~a&(~b&c))-2*((a&~b)|(a^(b^c)))+3*(~(a&b)&(a^(b^c)))+3*~(a^(b^c))+4*(a|(~b|c))-7*(a|c)+7*(c^(a|b))-1*((a&b)|(b^c))+1*~(a|~c)+1*(c|(a&~b))+3*(b^(a|(b&c)))+11*(c&(a^b))-2*((a^b)|~(a^c))-2*~(b|c)-3*(b^~(~a|(b^c)))+1*(~a|(b^c))+11*~(b&~c)-11*(b^~(a&(~b&c)))+1*((a&c)^(a^(b&c)))-1*(a&(~b|c))-7*(a&(b|c))+7*~(b^c)+1*(a&~b)-6*(b^~(~a&(b|c)))-11*(~a&(~b|c))-5*(~(a^b)|(a^c))+1*~(a|(b|c))-20*~(a|(~b|c))-31*~(~a|(b|c))-1*~(~a|(~b|c))+11*(~a&(~b&c))-19*(~a&(b&c))-15*(a&(~b&c))-2*(a&(b&c));
}

uint64_t target_286(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(d&f)-1*~(d^(e|f))-1*(~(d&e)&(d^(e^f)))-6*(f^~(d|(~e&f)))+11*(e^~(~d&(e^f)))+1*(~(d&e)&~(e^f))-1*(f^~(d&(e&f)))-1*(~(d|e)|(e^f))+1*(~e|~(d^f))-5*(e^~(~d|(~e&f)))+11*(f^~(~d&(e|f)))+7*(f&~(d^e))-11*~(~d&(e^f))-1*(~(d|e)|(d^(e^f)))-2*(e&~(d&f))+2*(e^(~d|(e^f)))+7*(e&(d|~f))+7*(e^~(d|(e^f)))-3*~(d|~e)-7*((e&f)|(~d&(e|f)))+5*(f^~(d&e))-1*((d^e)&(d^f))-2*~(d^f)+3*(f^(~d&(~e|f)))-3*(e^~(d|(~e&f)))+7*(e^(d|(~e|f)))+1*(~(d|~e)|~(d^(e^f)))+1*(e&f)-3*(f^(d|(e&f)))+2*(e|~f)-1*~(d|(~e&f))+1*((d^e)|(d^f))+11*~(d^(~e&f))+1*(d|(~e&f))-2*d+2*(f^(~d&(e|f)))-1*~(d&~d)+3*(e^~(d&~f))+2*(~(d|~e)|~(e^f))-6*((d&e)^~(d^(~e|f)))+4*(e^~(d|~f))-2*(e^~(~d&(~e|f)))-1*(~(d&~e)&(d^(e^f)))-7*(d|~e)-21*~(d|(~e|f))+1*~(~d|(e|f))+3*~(~d|(~e|f))-7*(~d&(~e&f))+2*(~d&(e&f))-7*(d&(~e&f))-1*(d&(e&f));
}

uint64_t target_287(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*~t+2*(z|~t)+1*~(z|t)-1*(z&~t)-4*(z&t);
}

uint64_t target_288(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*~(x&~y)-11*~(x^y)-7*(x^y)+11*~(x|y)+7*~(x|~y)+11*(x&y);
}

uint64_t target_289(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(e^~(d|(~e&f)))-1*(e^~(~d&(e&f)))-1*(e^(~d&(~e|f)))-2*~(d^e)-1*(f^(~d&(e|f)))-1*~(~d&(e|f))+1*~(d|(e&f))+5*(f^~(d&(e&f)))-2*(f^(d|(~e|f)))+3*(~f|(d^e))-7*(e^~(~d&(~e&f)))-3*(~(d&~e)&(d^(e^f)))+2*(f^(d|(e|f)))+3*(~d|(~e&f))-3*(f^(~d&(~e|f)))+1*~(d&e)+2*(e^(d|(~e&f)))-2*((d&f)^(d^(e&f)))-6*((d^e)|(d^f))-3*(f^(d&~e))-6*e-11*(f^~(~d&(e|f)))-1*(d^e)+7*(e^~(d|~f))-1*((e&~f)^(~d|(e^f)))+4*~(~d&(e^f))+4*(~(d&e)&~(e^f))-11*((d&f)^~(e&~f))-1*(~(d&e)&~(d^(e^f)))+1*(e^~(~d|(e^f)))+2*(e^~(d&(~e&f)))-3*(e|(d&f))-1*~(d&~e)+4*~(d|e)+5*(e^(~d|(e&f)))+1*((d^e)&(d^f))-5*(e^~(~d&(e|f)))+1*(f|(d&e))+11*(d&(e|f))+5*(~(d^e)|(d^f))-11*((d^e)&~(d^f))-5*(f^(d|e))+2*((d&~e)|~(e^f))+1*(f|~(d^e))+1*(d^(e|f))-2*(f^~(~d&(~e|f)))+1*(f&(d|~e))-2*(d|(~e&f))-1*(f^(d|(~e&f)))-2*(e|~(d^f))-2*((d&f)|~(e|f))-1*~(d|~e)+10*~(d|(e|f))+22*~(d|(~e|f))+25*~(~d|(e|f))+1*~(~d|(~e|f))+11*(~d&(~e&f))+29*(~d&(e&f))+17*(d&(~e&f))-6*(d&(e&f));
}

uint64_t target_290(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~x+2*(x|y)+5*y+1*(x|~y)-1*(x^y)-2*~y-7*x+3*~(x&y)+4*(x&~y)-1*(x&y);
}

uint64_t target_291(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(z&t)+3*~t-5*(z^t)-1*(z|~t)+7*~(z|~t)+1*(z&t);
}

uint64_t target_292(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*((d^e)&~(d^f))+1*(f^(d&(~e|f)))+1*((d|e)&(e^f))+1*(d&(e^f))-1*((d&f)^(d^(e&f)))+7*(e^(~d|(~e|f)))+1*(d&~e)+2*((d|~e)&(d^(e^f)))-6*~(d&(~e|f))-1*(f^~(~d&(e|f)))+2*(~(d|~e)|~(e^f))+2*d-6*(f&(d^e))+4*((d&e)^(e|~f))-1*(d&e)+3*(e^(d|~f))-7*~(e^f)-11*(e&~(d^f))+1*((d&~e)|~(e^f))-2*(~(d&~e)&~(e^f))+5*(e^(~d&(e^f)))+4*(d|(e^f))-7*(e&~(d&f))+7*(f|~(d|e))+1*~(~d&(~e&f))-7*(d^(~e|f))-1*~(d^(~e&f))+2*(~d|(~e|f))-2*((d|e)&~(e^f))-1*(d^f)-11*((d^e)|(d^f))+2*~(d^(~e|f))+1*~(d|~f)+1*(e^~(d&~f))-3*(e^~(~d&(e&f)))+4*(d^e)-7*(e^~(d&(~e&f)))+7*(f&(d|e))-3*(~(d&e)&~(d^(e^f)))+11*(~(d|e)|(e^f))-5*((d&f)^~(d^(~e&f)))+2*(~d&(e^f))-2*(f^~(d&(e&f)))+2*(d|(e|f))+3*~(e&~f)-1*(f^(d|(~e&f)))-2*~(d^(e^f))-11*(e^(d&(e|f)))-1*(f^~(~d&(~e|f)))+5*(e^~(~d&(e|f)))+1*(e|(d^f))-1*(f^(d|~e))-1*(e&(d|f))-5*(e|~(d^f))-2*(e^(d|(e^f)))-2*(f^(~d&(e|f)))-11*(~(d^e)|(d^f))-2*(f|(d&e))-3*((d&e)|~(e|f))+4*(~f|(d^e))+3*(e&~f)+3*(f^~(d|~e))-7*(e&f)-2*(e^~(d&(e|f)))+1*((e&f)^~(~d&(e^f)))-5*f+16*~(d|(e|f))+7*~(d|(~e|f))+9*~(~d|(e|f))+27*~(~d|(~e|f))+7*(~d&(~e&f))+64*(~d&(e&f))-19*(d&(~e&f))+25*(d&(e&f));
}

uint64_t target_293(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*(z^t)-6*~(z&~z)+11*(z|~t)-1*~z-1*~(z^t)+16*~(z|~t)+2*(z&~t)-2*(z&t);
}

uint64_t target_294(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*(e|~f)+1*~(d&(~e&f))+5*((d|~e)&~(d^(e^f)))-1*(~d|(e|f))-2*(f|(d&~e))-7*(e^(d&~f))+4*((d&e)^(d^(e&f)))+1*(~d|(~e|f))-1*(d|(e&f))+2*(~d|(e&f))-1*(e^(d&(e|f)))-1*(f&~(d^e))+3*~(d^f)-7*((d&f)|(e&~f))+7*((e&f)^~(~d&(e^f)))+3*(~e|(d^f))+2*(~e|~(d^f))-5*(e^~(~d&(e^f)))-2*(e^~(d&(e&f)))-3*~(e&f)+1*(e^~(d|~f))+2*(e^(d|(e^f)))+11*(f^~(d&(e&f)))-11*(d&(~e|f))+1*(f^(d|(e&f)))+2*(d&~f)+7*(f^~(d&~e))-1*(f^~(~d&(e&f)))-2*(e|~(d^f))-6*(~(d&~e)&~(d^(e^f)))-5*(e^f)+5*~(d|(e^f))-2*(e^~(d|f))-6*(f^~(~d&(~e&f)))+4*(~(d|~e)|~(e^f))+1*(d|(~e&f))+5*(~f|(d^e))-3*(e^~(d|(e&f)))+3*(~d&(e|f))-1*(f^(~d&(e|f)))+5*(d^(~e|f))-5*((d^e)|~(d^f))+1*(~(d|e)|(d^(e^f)))+1*~(~d&(~e&f))+1*(~(d&e)&(d^(e^f)))-7*(e^~(d&(~e&f)))+2*(f^~(d&(~e|f)))+4*(e&(d|f))-6*(f^(~d|(~e|f)))-1*(e^(d|(e&f)))-2*~(d^(e|f))+11*(e^~(d&(~e|f)))-7*(~d|(~e&f))+2*(d|e)+5*~(d|f)+11*(~(d|e)|~(e^f))-52*~(d|(e|f))-5*~(d|(~e|f))-13*~(~d|(e|f))-29*~(~d|(~e|f))-9*(~d&(~e&f))-33*(~d&(e&f))+5*(d&(~e&f))-32*(d&(e&f));
}

uint64_t target_295(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*(x^y)-6*(x|y)-7*~(x&y)+1*~(x&~y)+7*x+1*~(x|y)+3*~(x|~y)-3*(x&~y);
}

uint64_t target_296(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*(b^(~a|(b^c)))-7*(c&(a|~b))+11*~(~a|(b&c))-1*((a&b)^~(a^(b&c)))-5*(~c|~(a^b))-1*(c^~(a&(b|c)))+1*(~(a&b)&(b^c))+1*(a&(b^c))-2*~(~a|(~b&c))-2*(b^(~a|(b|c)))-2*(~a|(~b|c))-1*(b^~(~a&(b^c)))+4*(a^(~b&c))+11*~(b|~c)+23*~(a|(b|c))+9*~(a|(~b|c))-9*~(~a|(~b|c))+12*(~a&(~b&c))+1*(~a&(b&c))+24*(a&(b&c));
}

uint64_t target_297(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~(z^t)-2*~(z&~t)-7*t-3*~z+1*(z|~t)+1*~t+2*(z|t)+9*~(z|t)+12*(z&t);
}

uint64_t target_298(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(z^t)-11*(z^t)-5*t-1*~(z|t)+16*~(z|~t);
}

uint64_t target_299(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*(z|~t)+3*~z-11*z-3*~(z|~t)+14*(z&~t);
}

uint64_t target_300(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(z^t)+1*z-2*~(z&t)-1*~(z&~z)-4*~(z|t)+1*~(z|~t)-7*(z&~t);
}

uint64_t target_301(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*(f|~(d^e))+3*~(e&~f)+4*(f^~(d|(e&f)))-3*(e^~(~d|(e^f)))-11*(d|f)-2*(e^(d|~f))-1*(~f|~(d^e))+1*(f&~(d^e))+4*(~(d|~e)|(d^(e^f)))-2*((d|~e)&(e^f))-11*((d|e)&(e^f))-1*(d|~f)-1*((d|e)&~(d^(e^f)))-6*(f^(d&e))-5*(e^(d&(~e|f)))+5*((d|e)&~(e^f))-6*~(~d|(e&f))-6*((e&f)^~(~d&(e^f)))+2*((d&f)^(d^(e&f)))+1*~(d^(~e|f))+4*(d&(e|f))-1*(~(d|~e)|~(e^f))-2*~(d^f)+5*(f^~(~d&(e&f)))+5*~(e|f)+1*(d|~e)+5*(~d|(e|f))+1*((d&e)^(d^(e&f)))+1*(e^(d&f))+2*(~(d^e)&~(d^f))-1*(f^~(~d&(~e|f)))-1*(e^(d|(e|f)))+3*(~d|(e&f))-1*((d|~e)&(d^(e^f)))-6*((d&f)^(d^(~e&f)))+1*(d&~f)-7*(~e&(d^f))+2*(f^~(d|~e))+11*(f^~(d|(~e&f)))-11*(f^~(d&(~e|f)))-2*(d&f)+7*(~(d^e)|~(d^f))+5*((d&e)^(d^(~e|f)))+11*f-11*(d&e)-5*(f^(~d|(e|f)))+4*(e|~f)+1*(e^~(d|(e&f)))-7*(~d&(e|f))-7*(~e|(d^f))+3*(e^~(d&~f))-1*(f^~(~d&(~e&f)))+4*((d&e)|(d^(e^f)))+1*(~(d&~e)&(d^(e^f)))-7*(e^~(d|(~e&f)))+2*(f^~(d&(e|f)))-5*(~(d&e)&~(e^f))+1*(~d|(e^f))+11*((d&f)|(e&~f))-6*(d|e)-1*(e&(d^f))-5*(f^(d&~e))+7*~(d^(e|f))+1*(d|(~e|f))-3*(f^(d|(~e|f)))-1*(d|(e^f))-3*(~(d|e)|(e^f))+1*(f^~(d&(e&f)))-26*~(d|(e|f))-6*~(d|(~e|f))+40*~(~d|(e|f))+48*~(~d|(~e|f))-16*(~d&(~e&f))-6*(~d&(e&f))+4*(d&(~e&f))-55*(d&(e&f));
}

uint64_t target_302(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~(z^t)-2*~(z&t)+5*~(z|~t)-2*(z&t);
}

uint64_t target_303(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~(z&t)-2*z+2*(z|t)-2*~(z&~z)+3*(z^t)-1*t+5*(z|~t)+8*~(z|t)+4*~(z|~t)+3*(z&t);
}

uint64_t target_304(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*(z|~t)+1*(z|t)+5*~(z&~t)+2*~(z|t)+1*(z&t);
}

uint64_t target_305(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*((b&c)^~(a&(b^c)))-5*(b^(a|(b&c)))+1*(c^(~a|(~b&c)))-6*(b&~(a&c))-7*(b^(~a&(b^c)))-5*~(a^c)+1*(b^(~a&(b|c)))-3*((a&b)^~(a^(~b|c)))+1*(c^~(a|b))-6*(~(a|b)|(a^(b^c)))-1*(b^~(~a&(b&c)))+2*~(~a&(b&c))+11*(b^(a|~c))+3*(b^~(~a&(b^c)))-3*(~(a^b)&(a^c))+5*(c^~(a&b))-1*(c&(a|b))+4*(a&b)+5*(~c|~(a^b))-1*(b^~(~a|(b&c)))+1*(~a|(~b|c))+1*(c^~(~a&(~b&c)))+1*(a|b)-2*~(a&(~b|c))-3*((a&~b)|(b^c))+3*b+1*(a^(b|c))-5*~(b^c)-5*(~(a|~b)|~(a^(b^c)))+5*(c^~(a|(~b&c)))+7*(b^(a|(~b&c)))+1*((b&c)^~(~a&(b^c)))+2*(b^~(a|~c))-1*(~(a&~b)&(a^(b^c)))-5*~a-2*(c^~(~a|(~b&c)))+11*(a|~b)-1*((a|b)&(a^(b^c)))+5*~(a&c)+3*~(a|c)-11*~(~a|(b&c))-1*(b|~c)+1*(~(a|~b)|(a^(b^c)))-32*~(a|(b|c))-13*~(a|(~b|c))-23*~(~a|(b|c))+7*~(~a|(~b|c))-19*(~a&(~b&c))+1*(~a&(b&c))-10*(a&(~b&c))-19*(a&(b&c));
}

uint64_t target_306(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*(a|(~b&c))-2*(b^~(~a&(~b|c)))+5*(b|~(a|c))-2*(a&(b|c))-6*(b^c)+1*(a|(b|c))-5*~(a|(b|c))+8*~(~a|(b|c))+9*~(~a|(~b|c))+12*(~a&(~b&c))-4*(~a&(b&c))+3*(a&(b&c));
}

uint64_t target_307(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(x^y)+4*~(x&~x)-5*~(x&~y)-6*y+1*x-1*(x^y)+19*~(x|~y)-4*(x&~y)+8*(x&y);
}

uint64_t target_308(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*(e^~(d|f))-7*(~e&~(d^f))+1*(f^~(d|~e))+5*(f&(d^e))-6*(~(d|e)|~(e^f))+11*(e^f)+1*(e^(~d&(~e|f)))-2*~(d|(e^f))-2*~f+3*(f&~(d^e))+1*(d^f)-11*((d|e)&~(e^f))+1*(e^~(d&(~e|f)))+2*((d^e)|~(d^f))-2*~(d&e)+2*(~(d^e)&~(d^f))+4*~(d&f)-2*(~(d^e)&(d^f))+7*(f^(~d|(e&f)))-3*(f|(d^e))+1*((d&e)|(e^f))-1*~(d&~f)+5*(f^(d&(~e|f)))-1*(e&f)-1*(f|~(d^e))+7*(~d|(~e|f))-11*~(d&(~e&f))-1*~d+7*(f^~(d&~e))+5*((e&f)|(~d&(e|f)))-1*(f^(d|(e|f)))+2*(~f|(d^e))-7*(e|~(d^f))-7*~(~d&(e&f))+2*(e|(d&~f))+3*(~(d|~e)|(d^(e^f)))+2*(f^~(d&(e&f)))-2*(f^~(d|e))+5*(~(d&~e)&(e^f))+5*~(e&~f)-1*~(d|f)-11*(~d|(e|f))+3*(d|~e)-6*(f^(d|~e))+5*(f&(d|~e))-3*(~(d^e)|(d^f))+7*~(~d|(e^f))-6*(e^~(d&(e^f)))+3*(~(d&e)&~(d^(e^f)))+5*(~f&~(d^e))+7*(e^(d|f))+1*(d^(e^f))+20*~(d|(e|f))-22*~(d|(~e|f))+6*~(~d|(e|f))+9*~(~d|(~e|f))-16*(~d&(~e&f))+19*(~d&(e&f))-25*(d&(~e&f))+8*(d&(e&f));
}

uint64_t target_309(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*((a&b)|(a^(b^c)))-2*((a^b)&~(a^c))+1*(~(a&b)&~(b^c))-6*(b^~(a|~c))+2*(a&(b|c))+7*(c&(a^b))-1*~(a|(b|c))+4*~(a|(~b|c))-5*~(~a|(b|c))+2*(~a&(~b&c));
}

uint64_t target_310(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*(d|(~e&f))+1*((e&~f)^(~d|(e^f)))-1*(~d&(e|f))-2*((d|~e)&(d^(e^f)))+7*(f^(~d|(~e&f)))+2*((d&e)^(e|f))-3*(e|~f)+11*(f^~(d&(~e&f)))-2*(f&~(d&~e))+5*(~d&(e^f))-2*((d&f)^(d^(~e&f)))+1*~(~d|(e&f))-3*(e&f)+7*(e^~(d|(~e&f)))+4*(e|(d&f))-7*(~(d&e)&(d^(e^f)))+11*(f&(d|e))+3*~e-6*((d&e)|(e^f))-6*~(~d&(~e|f))+2*(e^(~d&(e^f)))+2*(f&~(d&e))-11*((d&e)^~(d^(e&f)))-1*~(e&f)-1*(f^~(~d&(~e|f)))+2*(e^~(~d&(e&f)))+1*(e^~(d&f))-5*(e^(d|(e^f)))+1*(f^~(~d&(e&f)))+1*(~d|(e&f))+11*(~d&(~e|f))+4*(~(d|~e)|(e^f))+4*(f^(d|(e&f)))-6*~(d&e)+3*(e^(d&(e^f)))-2*~(d^(e&f))+11*((d&f)|~(e|f))-7*(d|~f)-2*(~(d|e)|(d^(e^f)))-6*(~f&(d^e))-2*(f^(d&(e|f)))+1*(e&~(d^f))+1*(e&~(d&f))-3*((d&f)^~(d^(e&f)))-2*(e|(d^f))+11*(~e&(d^f))-2*(~e|(d^f))-1*((d&f)^(d^(e&f)))-11*(e|f)-1*(e^~(~d|(~e&f)))+1*~(~d&(~e&f))+1*((d&f)|(e&~f))-1*((e&f)^~(~d&(e^f)))+2*((d|e)&(d^(e^f)))-1*(f&(d|~e))-1*(e^~(d|(e&f)))+1*(~(d^e)&~(d^f))+11*~(e|f)-6*(e^~(~d&(e^f)))-7*~(e^f)-17*~(d|(e|f))+38*~(d|(~e|f))+16*~(~d|(e|f))+27*~(~d|(~e|f))+28*(~d&(~e&f))-3*(~d&(e&f))+2*(d&(~e&f))+10*(d&(e&f));
}

uint64_t target_311(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*((b&~c)^(~a|(b^c)))-1*(c^(a|b))-1*((a&b)|~(a^(b^c)))+3*(~b&(a^c))+1*(b^~(~a&(b^c)))-11*((b&c)^~(~a&(b^c)))+1*(~a&(~b|c))-7*(c^~(~a&(b&c)))-1*~(a&(~b|c))+4*(~(a|~b)|~(a^(b^c)))+5*(c^(~a&(b|c)))+7*(c|(a&~b))-7*((b&~c)^(a|(b^c)))+1*((a&~b)|(a^(b^c)))+7*(a&(~b|c))+4*((b&c)|(~a&(b|c)))-3*~(a^(b&c))+1*(~a|(b&c))-3*(a|b)-6*(~a|(b|c))+1*(~(a|b)|(a^(b^c)))+2*((a^b)|~(a^c))+7*(c|~(a|b))+1*((a&c)^~(a^(~b&c)))+1*(b^~(~a|(b^c)))-6*~(a|c)+11*~(b|~c)-1*(b^~(a|(~b&c)))-1*(c^~(a&b))+3*(b^~(~a&(b&c)))+2*(c&(a|b))-2*(c^~(a&~b))-2*(c^(a&(~b|c)))-2*((a&b)^(b|~c))-5*(a^(~b|c))-5*~(a&c)+2*(b^(a&(b|c)))-1*(a|~c)-2*((a&c)^~(b&~c))+41*~(a|(b|c))+15*~(a|(~b|c))+16*~(~a|(b|c))+36*~(~a|(~b|c))+1*(~a&(~b&c))+7*(~a&(b&c))-13*(a&(~b&c))-18*(a&(b&c));
}

uint64_t target_312(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*(z^t)+7*~(z^t)-2*~(z&~t)+1*(z|~t)+1*z-6*~t-3*~(z&t)+3*~(z|t)+8*~(z|~t)+4*(z&~t);
}

uint64_t target_313(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(z&~z)-7*(z^t)+5*~(z&t)-5*(z|t)+1*~t-1*z+4*~(z|t)+8*~(z|~t)+11*(z&~t)+16*(z&t);
}

uint64_t target_314(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*~x-11*~(x&y)-1*~(x^y)-5*(x^y)+23*~(x|y)+26*~(x|~y)+16*(x&~y);
}

uint64_t target_315(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*~(z&~z)+1*~t-2*~(z^t)+13*~(z|~t)+10*(z&~t)+13*(z&t);
}

uint64_t target_316(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(~a|(b&c))-11*(~b&(a^c))+1*(b^~(a&c))+4*(c^~(~a|(b&c)))+1*~(b|~c)+11*(c^(a|(b&c)))-7*(a^(b&c))-2*~(a|(b|c))+2*~(~a|(b|c))-8*~(~a|(~b|c))-7*(~a&(~b&c))+2*(~a&(b&c))-6*(a&(b&c));
}

uint64_t target_317(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*y-2*~(x^y)-3*~(x&y)+7*(x^y)-2*~x+2*~y-2*(x|y)+5*~(x|y)+2*~(x|~y)+2*(x&y);
}

uint64_t target_318(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(a^(b|c))+3*((a&b)|(a^(b^c)))-3*(a|(b|c))+2*(a^(b^c))-1*(b^~(a|c))+1*(c&(a|b))-5*(b&(a|c))-1*(b^~(~a&(~b&c)))+1*(~(a|~b)|~(a^(b^c)))-2*(b^~(~a|(b^c)))-3*(c|~(a|~b))+11*(~a|(b&c))-5*~(~a|(b^c))-1*(c&~(a^b))+5*(a^(b|c))-1*~(a^b)+2*(b&(a|~c))-3*(a&(b^c))-6*(b&~(a&c))+2*(c^(a|(~b|c)))+1*(~(a^b)&(a^c))+2*~(a&b)-5*~(b|c)-3*(c^(a|(b&c)))+1*(~(a^b)|(a^c))-7*(b^~(~a|(b&c)))-2*(a&c)-12*~(a|(b|c))-4*~(a|(~b|c))+12*~(~a|(b|c))+10*~(~a|(~b|c))-14*(~a&(~b&c))+6*(~a&(b&c))+16*(a&(~b&c))+4*(a&(b&c));
}

uint64_t target_319(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(e^(d|(e^f)))-1*((d&f)^(e|f))+5*(~(d^e)&~(d^f))-3*(e&f)+7*~(d&(~e&f))+5*(f^~(d&e))+2*~(~d&(~e|f))-7*((d|e)&(d^(e^f)))+7*(e|~(d|~f))-2*(e^~(d|(e^f)))+1*((d&e)^(e|~f))-11*(f^(~d|(e|f)))+3*(f^~(~d|(e&f)))+1*(~d&(e|f))+11*(~(d&e)&~(d^(e^f)))-2*(f^~(~d&(~e&f)))+7*(e^~(~d|(e&f)))-11*(f^(d&(~e|f)))-7*~(e&f)+1*((d&e)|(d^(e^f)))-1*(~d|(e^f))+1*((d|~e)&~(e^f))+1*(e^~(~d&(e&f)))-5*~(e&~f)-11*~(d&(e^f))+11*(e^(~d|(e^f)))+1*(~d|(~e&f))+11*~(d|(~e&f))+2*(e^f)+3*~(d&(e|f))+1*((d&~e)|~(d^(e^f)))-1*((d|~e)&~(d^(e^f)))-7*(f^~(d&(~e|f)))-2*(d|(~e&f))-1*((e&~f)|~(~d|(~e&f)))+4*(e^~(~d|(e^f)))-6*(d&(e^f))+3*(d&~f)-11*~(d|(e|f))-6*~(d|(~e|f))+2*~(~d|(e|f))+11*~(~d|(~e|f))+2*(~d&(~e&f))-31*(~d&(e&f))-8*(d&(~e&f))-15*(d&(e&f));
}

uint64_t target_320(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*((a|~b)&(b^c))+2*((a&b)^~(a^(~b|c)))+1*(b^(a&(b^c)))-1*(a^(~b|c))-7*~(b|c)-7*~(a^(b^c))-7*((a|~b)&~(a^(b^c)))+2*(~a&(b^c))-5*(~(a&b)&(b^c))-5*(~c&~(a^b))+2*((a&c)|~(b|c))+24*~(a|(b|c))-1*~(a|(~b|c))+2*~(~a|(b|c))+12*~(~a|(~b|c))-1*(~a&(~b&c))+7*(~a&(b&c))+9*(a&(~b&c))-4*(a&(b&c));
}

uint64_t target_321(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(~b&(a^c))-1*(~b|(a^c))-2*(c^~(a|~b))-11*(c&~(a&b))-7*(a^(~b&c))+1*(b|(a^c))+1*(b^~(a|(b&c)))+3*(b^(~a|(b^c)))+2*(a&~b)+3*(~a&(b^c))-1*(~(a&b)&(b^c))-3*~(~a&(~b|c))-7*(b^c)-3*~(a|(b|c))+1*~(~a|(b|c))+16*~(~a|(~b|c))+14*(~a&(~b&c))+10*(~a&(b&c))+20*(a&(~b&c))+7*(a&(b&c));
}

uint64_t target_322(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*~y+5*(x|~y)+2*(x|y)-9*~(x|y)-3*~(x|~y)-11*(x&~y)-8*(x&y);
}

uint64_t target_323(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*(c^~(a&(~b&c)))-1*(~(a|~b)|(b^c))-2*(c&(a|~b))+7*(b^(~a|(~b&c)))-5*(c^~(~a|(~b&c)))-1*(b^~(~a&(b&c)))-1*((a&c)^~(a^(b&c)))-1*(c^(a&(~b|c)))-6*((a^b)&~(a^c))+1*(c^~(a&(~b|c)))+2*(c^(a&~b))-1*~(a^c)-5*(~(a&b)&(b^c))-2*(b&~(a&~c))+1*(~(a|b)|(a^(b^c)))+4*(b|~(a|c))-3*(c|(a&b))+4*~(a^(b&c))-5*((a&c)|~(b|c))+11*((a&b)|~(a^(b^c)))-31*~(a|(b|c))-5*~(a|(~b|c))-2*~(~a|(b|c))-25*~(~a|(~b|c))+5*(~a&(~b&c))-4*(~a&(b&c))+1*(a&(~b&c))-16*(a&(b&c));
}

uint64_t target_324(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~z-11*~(z^t)-2*t-2*(z^t)+3*~t-4*~(z|~t)-1*(z&~t);
}

uint64_t target_325(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*((a&c)^~(b&~c))-2*~(a&(b|c))-2*((a|b)&~(a^(b^c)))+1*(~c|~(a^b))-2*(b^(a|(~b&c)))+2*(~c|(a^b))+5*(b^(~a|(~b|c)))-11*~(a^b)-1*(b^~(a|(b&c)))+7*(~(a|b)|~(a^(b^c)))+2*((a^b)&~(a^c))+7*(~b&~(a^c))+4*((a&~b)|~(a^(b^c)))-7*(b^~(~a|(~b&c)))-1*((a&~b)|(a^(b^c)))+4*((a&c)^~(a^(b&c)))-27*~(a|(b|c))-11*~(~a|(b|c))-5*~(~a|(~b|c))-11*(~a&(~b&c))-10*(~a&(b&c))-26*(a&(~b&c))+12*(a&(b&c));
}

uint64_t target_326(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(z&~z)-1*~(z^t)+1*(z^t)+2*~(z|t)-3*~(z|~t);
}

uint64_t target_327(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*~(a|b)+5*(~a|(~b&c))-7*(c&(a|~b))-5*b+1*(b^~(a&c))-11*(~(a|~b)|(b^c))-1*~(a^(b^c))+2*(a^(~b&c))-1*(b^~(~a&(~b&c)))+11*(a|(b^c))+5*((a&c)^(a^(~b&c)))+2*(~b&~(a^c))-3*((a&b)^(a^(~b|c)))+2*(b^~(a&~c))-11*~(a&~c)+11*((a&c)|(b&~c))-1*(a&c)+15*~(a|(b|c))-20*~(~a|(b|c))-14*~(~a|(~b|c))+15*(~a&(~b&c))+26*(~a&(b&c))-6*(a&(~b&c))+2*(a&(b&c));
}

uint64_t target_328(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*(x|y)-3*y+1*~(x^y)-2*(x|~y)+5*~(x|y)+13*~(x|~y)+19*(x&~y)+3*(x&y);
}

uint64_t target_329(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(z^t)-2*(z|t)-11*z-7*(z^t)+7*~(z|t)+9*~(z|~t)+25*(z&~t);
}

uint64_t target_330(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*(e|f)-7*(e^~(d|(e&f)))-6*((d|e)&~(e^f))-1*(e&(d^f))+4*(f^(d&(~e|f)))+11*((d^e)&~(d^f))+4*~(d^(e&f))+4*((d&f)^(d^(~e&f)))-7*(e|~(d^f))+1*((d^e)|~(d^f))+1*(f^(~d|(~e|f)))-3*(~d&(e^f))-2*~(~d&(~e|f))-1*(~(d|e)|~(d^(e^f)))+2*((d&f)|(e&~f))+1*((d&~e)|~(d^(e^f)))-2*(~f&(d^e))+2*(e^(d|~f))+4*((d&~e)|(e^f))+2*~(d^(e^f))+5*(e&(d|~f))-2*((d|~e)&(d^(e^f)))+2*(e^~(~d|(e&f)))-3*(~e|(d^f))-2*(d^(~e&f))+5*((d&~e)|(d^(e^f)))+1*((e&~f)|~(d|(~e&f)))-1*(~d|(e|f))-6*(f^(~d&(e|f)))+1*((d&f)^~(d^(e&f)))+1*(e^(d|(~e&f)))-5*(d|f)+1*(e^~(~d&(~e|f)))+7*(~f&~(d^e))-5*(e^~(d|~f))+5*(f^~(d&e))-11*(~(d^e)|~(d^f))+5*(~(d|~e)|(e^f))+3*~(~d|(~e&f))-1*~(~d&(e|f))+11*((d&e)^(d^(e&f)))-6*~(d&(e^f))+5*(f^(~d|(~e&f)))-5*(f^(d&(e|f)))+1*(~(d|~e)|~(d^(e^f)))-11*(f^~(d|e))+3*~(d|~e)+4*(e^(d|(e&f)))-1*(~e&(d^f))-2*(~(d|e)|(e^f))+7*(d|e)+4*~(d&(~e&f))-1*(e^(d&(e|f)))-2*((d|~e)&(e^f))-2*(f^~(d|(~e&f)))-1*(~(d^e)&(d^f))+7*~(~d|(e^f))+2*(~f|(d^e))-1*((d|~e)&~(d^(e^f)))+18*~(d|(e|f))-19*~(d|(~e|f))-39*~(~d|(e|f))+16*~(~d|(~e|f))+34*(~d&(~e&f))+15*(~d&(e&f))-2*(d&(~e&f));
}

uint64_t target_331(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(z|~t)+11*(z^t)+3*~(z^t)+7*~(z&t)+2*~t-10*~(z|t)-17*(z&~t);
}

uint64_t target_332(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*(e^~(~d|(e&f)))-3*(e&(d|~f))-6*(f&~(d&e))+11*(f^(d|(e&f)))-1*(e^(d&(e|f)))+4*~e-3*(f^~(d|(e&f)))-1*(e^~(~d|(e^f)))+5*(~d|(e&f))-5*~(d|(~e&f))+7*(f^~(d&(e&f)))-1*(e^~(~d&(e&f)))-2*~(d|~f)+11*(e|f)-1*(d|~f)+2*((e&f)^~(d&(e^f)))+2*(d&f)-7*((d|e)&~(d^(e^f)))-1*(~f&~(d^e))-1*(f^~(~d&(e&f)))+7*~(d|(e^f))-6*(~e|~(d^f))-1*(e^(d|~f))-5*d-11*(e^(d|(e&f)))-1*(f^~(~d|(e&f)))-2*~(e|~f)+11*(f^~(d|(~e&f)))+2*f-5*(f^~(~d|(~e&f)))+1*((d&e)|~(d^(e^f)))-2*((d^e)&~(d^f))+4*(e^~(d&(e&f)))+4*~(~d&(~e&f))-2*((d&e)^~(d^(~e|f)))-7*~(d&(e^f))+1*(~e&~(d^f))+3*~(d^(e^f))+2*(e|~(d|~f))+1*(e^~(d&(e|f)))-11*(e^(~d|(e|f)))+3*~(~d&(e^f))-6*(e^f)+2*((e&f)|(~d&(e|f)))-6*(e^(d&(e^f)))-2*((e&~f)|~(~d|(~e&f)))-7*(e^~(d&(e^f)))+2*~(e|f)+1*(d^(~e|f))-7*(e^(~d|(~e|f)))-5*(f^(~d&(~e|f)))-11*(d&(~e|f))+5*(f|~(d|e))-5*(e&~(d&f))+7*((d&f)|(e&~f))+1*(~(d|~e)|(e^f))+2*(f^(d&(e|f)))-2*((d&f)^~(e&~f))+7*(d^e)+3*(e|(d^f))+1*~(d&~f)-3*(e&~(d^f))-5*(f^~(d|e))+1*(f^(~d|(e&f)))-11*(~d&(e|f))+1*~(d|(e|f))+10*~(d|(~e|f))+20*~(~d|(e|f))-2*~(~d|(~e|f))+6*(~d&(~e&f))+8*(~d&(e&f))+33*(d&(~e&f))-16*(d&(e&f));
}

uint64_t target_333(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(x|~y)-1*~(x^y)+5*~(x|y)+3*~(x|~y)+2*(x&y);
}

uint64_t target_334(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*(x|y)+5*~x-2*~(x|y)-16*~(x|~y)-11*(x&y);
}

uint64_t target_335(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*(~(d|~e)|~(d^(e^f)))+2*(~d&(e^f))-2*(f^(~d|(~e&f)))+1*(e^(d|(e&f)))+4*(e^~(~d|(e^f)))-5*(~d|(e^f))-7*(~(d&e)&~(d^(e^f)))-5*((e&~f)|~(d|(~e&f)))-1*(e^(d&f))+4*(f^(d&(~e|f)))-2*((d&e)^~(d^(e&f)))-7*(d&e)-11*((d&f)|(e&~f))+5*(~(d&e)&(d^(e^f)))-1*(~(d&~e)&(d^(e^f)))-2*((d&f)^(d^(~e&f)))-1*(f^~(d&(e&f)))-11*((d&f)^~(e&~f))+7*(f^(d&e))+3*((d&f)^~(d^(~e&f)))-3*(~(d|e)|~(e^f))-3*(e^~(d|(~e&f)))+7*(e^(~d|(e|f)))+1*((d|~e)&(d^(e^f)))+1*(e^(~d|(~e|f)))-1*(~(d&~e)&(e^f))-3*((e&f)^~(d&(e^f)))+5*(f^~(d|~e))+3*~(d&e)-5*(d|f)+5*(f&~(d&e))+1*((d&e)^(e|f))+2*(f^(~d&(e|f)))-5*(e^(d|(~e&f)))-7*~(~d|(e^f))+2*((d&f)^(d^(e&f)))-2*~(~d&(~e|f))-6*(f|~(d|~e))+1*((e&~f)|~(~d|(~e&f)))-5*(f^(~d|(e&f)))+11*e+2*~(d|~e)-3*~(d|(~e&f))-3*(d&~e)-5*(f^~(~d|(~e&f)))+11*(e^~(d&(~e&f)))+1*((d&e)^(d^(e&f)))+5*((d&e)|(e^f))+2*(e^~(d|(e^f)))-2*(e&f)+4*~(d&(~e&f))-3*(~(d^e)&(d^f))-11*(f|(d&~e))+11*(e^~(~d&(e&f)))-2*(e^~(~d&(~e|f)))-4*~(d|(e|f))-10*~(d|(~e|f))+4*~(~d|(e|f))+4*~(~d|(~e|f))-9*(~d&(~e&f))+1*(~d&(e&f))+24*(d&(e&f));
}

uint64_t target_336(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(d|(~e&f))+2*((d&e)^(d^(~e|f)))-7*(f^~(~d&(e&f)))-2*(f|(d&~e))-6*(e^f)-1*(e&f)-5*(e^(d|f))-6*(d|(e&f))+3*((d&e)|~(e^f))-1*(e^(~d&(e^f)))+4*((e&~f)^(d|(e^f)))+3*(d|f)+5*(e^(d|(e^f)))-5*((d^e)|~(d^f))+1*(e^~(~d|(e&f)))-3*(e|(d&f))+2*(~(d|e)|~(d^(e^f)))+11*(e^~(~d&(e|f)))-1*(d|(~e|f))-1*(e^~(~d&(~e&f)))-11*(d&(e^f))-2*(e^~(~d|(e^f)))+4*((d&f)^(d^(e&f)))+1*~(~d&(~e|f))-11*(e^(~d|(e&f)))-3*(~(d&e)&(e^f))-11*(e^~(d|(e&f)))+11*(f|~(d|~e))+7*~(d|(e|f))-4*~(~d|(e|f))+45*~(~d|(~e|f))+12*(~d&(~e&f))-14*(~d&(e&f))-7*(d&(~e&f));
}

uint64_t target_337(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~(d|(e&f))-1*(f^(~d|(~e|f)))-1*(~(d^e)|~(d^f))+1*(d&(~e|f))-2*~(d^f)-1*(f|(d^e))+1*~(d|~f)+2*(~(d|~e)|(d^(e^f)))+2*(e^(d&(~e|f)))+5*(~d|(e^f))-2*((e&f)|(~d&(e|f)))-6*((d|~e)&~(e^f))-7*(f&(d|~e))-7*(e^~(d&(e&f)))-1*((d&e)^(d^(~e|f)))-11*(f^(d|(e&f)))+5*((d&e)^~(d^(e&f)))+7*(e&f)+1*(e&~(d^f))+3*~(d^(e|f))-3*(e|~(d|~f))+3*(~(d&~e)&~(e^f))+1*((d&f)^~(e&~f))+11*(e&(d|~f))-1*(d|(e^f))-1*(f^~(~d&(~e|f)))-1*(e^(~d&(~e|f)))-2*((e&~f)^(d|(e^f)))+1*(d^(~e&f))+4*(e^~(d&~f))+11*(e^~(d|(e&f)))+2*(~(d|e)|~(e^f))+2*((d&e)|~(e|f))+3*~(d|(e^f))+2*(~(d|~e)|~(e^f))+7*(e^~(~d&(e^f)))-1*~(d&~d)+7*(e^~(~d&(e&f)))+1*~(d&(~e&f))-2*~(e&~f)+1*(~d&(~e|f))-2*(f^~(d&e))-11*(d^(e&f))-2*(~(d&~e)&(d^(e^f)))-1*((d&f)^(d^(e&f)))-7*((d&e)|~(d^(e^f)))-5*(d&f)-1*((d|~e)&~(d^(e^f)))-6*(f^~(~d|(e&f)))-5*((d|e)&(d^(e^f)))+11*(~f&(d^e))+2*~e+1*((d&e)^(e|f))-7*(f^(d|(e|f)))-2*(f^~(d|(~e&f)))+5*(e|(d^f))+2*(e^~(d|(e^f)))-1*~(d^(e&f))+2*(~d|(~e|f))+5*(f^(d&e))-1*(e^(~d|(~e&f)))-3*(f^(d&(e|f)))+3*(f&~(d&e))-1*(f^~(d|(e&f)))+3*(~(d&~e)&~(d^(e^f)))+5*(f^~(~d&(e|f)))-7*(~(d&e)&~(e^f))-21*~(d|(e|f))-17*~(d|(~e|f))+19*~(~d|(e|f))-9*~(~d|(~e|f))+1*(~d&(~e&f))-25*(~d&(e&f))+10*(d&(~e&f))+17*(d&(e&f));
}

uint64_t target_338(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~(z&~z)-7*z-3*(z^t)-6*~z+13*~(z|t)+15*~(z|~t)+17*(z&~t)+14*(z&t);
}

uint64_t target_339(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(z^t)+4*~(z&t)+11*(z|~t)-2*~(z&~t)+3*~(z|~t)-3*(z&~t)-3*(z&t);
}

uint64_t target_340(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*(x|~y)+7*(x^y)-1*~(x^y)-2*y-5*~(x|~y)-18*(x&~y);
}

uint64_t target_341(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*((d&f)|(e&~f))-2*~(d&~e)-6*(e^(d&~f))+4*(d&e)-2*~(d|~e)+4*(~f&~(d^e))+11*~(d^(e&f))-1*(d&f)+1*~(~d&(~e&f))-3*~(d|f)-11*(e^(d&(e^f)))-1*~(d&(~e|f))+2*(~(d&e)&~(e^f))-11*~(d&~f)-1*(e^(~d|(~e&f)))+7*(e&(d|~f))-3*(f|(d&e))+2*~(e|f)-11*(e|(d^f))-3*(f^~(~d&(~e&f)))-7*(e^(~d|(e&f)))-1*(d|(e|f))+11*((e&~f)^(~d|(e^f)))+2*(f^~(d&(~e|f)))-1*(~e&~(d^f))-2*(~d|(e|f))-1*((d&f)^(e|f))+2*(d^(e&f))-1*~(d^e)-2*(f^(d|(e|f)))+1*(e^~(d|(e&f)))+4*~(d&(e&f))-5*~(d^(~e&f))+3*(e^~(d&(e&f)))-1*~(~d|(~e&f))+7*(d|~e)-1*~(~d&(e|f))-7*(e^~(d&(~e&f)))-2*(e^(d|(e&f)))+2*(d|(e^f))-1*((d|~e)&(e^f))+1*(f^(~d|(e|f)))-6*(~f&(d^e))+1*~(~d&(~e|f))-11*(f^(d|(~e&f)))+5*~(d|e)+5*(e^~(~d&(e&f)))-5*(f^~(d|e))+11*(e^~(~d|(~e&f)))+11*(e^(d|(e^f)))-2*(e|~f)+4*d-6*((d^e)&(d^f))+2*(e^~(d&(e^f)))-1*((d^e)|(d^f))-11*(e|~(d|f))+1*(~(d^e)|(d^f))+1*~(d&e)+5*((d|~e)&(d^(e^f)))+2*(d&(e|f))+5*e-6*(e^(d&(~e|f)))-5*((d&e)|(d^(e^f)))-2*(~d&(e|f))+1*(e^(d|f))+7*(d^(e^f))-1*~(d|(e&f))-5*~(~d|(e^f))+2*(~(d&e)&(d^(e^f)))+1*~(e|~f)+7*~(d|(e|f))+54*~(d|(~e|f))+2*~(~d|(e|f))+20*~(~d|(~e|f))-13*(~d&(~e&f))+40*(~d&(e&f))+1*(d&(~e&f))+24*(d&(e&f));
}

uint64_t target_342(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*(c|(a&~b))-1*(~(a&~b)&(b^c))-6*~(a|(~b|c))-3*~(~a|(b|c))-6*~(~a|(~b|c))-9*(~a&(~b&c))-10*(~a&(b&c))-3*(a&(b&c));
}

uint64_t target_343(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~(z&~z)-7*~z-11*~(z^t)+13*~(z|t)-5*(z&~t)+6*(z&t);
}

uint64_t target_344(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(z^t)+3*~(z&t)-11*~t+2*(z^t)+5*~(z&~t)+3*~(z|t)-10*~(z|~t)+6*(z&~t)-6*(z&t);
}

uint64_t target_345(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*~(x^y)-7*~y-7*x+3*~(x&~y)-3*~(x|~y)+14*(x&~y)+11*(x&y);
}

uint64_t target_346(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~(z&~t)-2*~(z&t)-1*(z|~t)-1*~t-3*t+10*~(z|t)+10*~(z|~t)+3*(z&~t)+10*(z&t);
}

uint64_t target_347(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*(x|~y)+3*~(x&y)-5*~y+13*~(x|y)-4*~(x|~y)+12*(x&~y);
}

uint64_t target_348(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*t+5*~z-5*~(z|t)-21*~(z|~t)-5*(z&~t);
}

uint64_t target_349(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*z-2*(z|t)+2*~(z&~t)+7*~t+5*~z+1*~(z&t)-26*~(z|t)-17*~(z|~t)-19*(z&~t)-13*(z&t);
}

uint64_t target_350(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*~t+4*~(z&~t)-1*(z|~t)+1*~(z|t)-4*~(z|~t)+4*(z&~t)-2*(z&t);
}

uint64_t target_351(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(e^(d&(~e|f)))+2*(d&(e^f))+3*(e^~(d&(e^f)))-6*(f|~(d|e))-1*(d|(~e|f))+7*(d^(e|f))-1*~(d&(e^f))+11*(e&~(d&~f))+1*(e|f)-11*((d&f)^(e|f))+7*((d&f)^~(e&~f))-2*(e^(d|(e&f)))-6*(d|~f)+11*~d-5*(~(d|~e)|~(e^f))-5*(e&~f)-1*~(e|f)+5*(~(d|e)|(e^f))+1*(~d&(e^f))+1*(~(d|~e)|~(d^(e^f)))+1*(f|~(d|~e))+1*(f&~(d&e))+1*((e&~f)^(d|(e^f)))+1*~(~d&(~e|f))+2*(e^(~d&(e^f)))-1*(f^~(d|(e&f)))+2*(~e|~(d^f))+4*(~(d^e)|(d^f))-6*((d|~e)&~(d^(e^f)))+3*(e&~(d^f))+2*(f^(d|(e|f)))-11*(~f|(d^e))+3*~(~d&(e|f))+1*~(d^(e|f))+1*(d&~f)+1*((d|~e)&~(e^f))-2*(~e&~(d^f))+4*(d^f)-11*(f^~(d|~e))-1*~(d|e)-1*(d&(~e|f))+1*((d^e)|(d^f))-3*(e^~(~d&(e|f)))-2*(f^~(d&(~e&f)))+2*((d&e)|~(d^(e^f)))+3*(e&~(d&f))+1*~(d^e)+11*((d|~e)&(d^(e^f)))-1*((d&e)^(d^(e&f)))-1*(e|~(d^f))+1*(~(d|e)|(d^(e^f)))-1*(~(d&e)&(e^f))-3*(e^~(d&~f))+7*~(d^(~e&f))+2*(d|f)-5*(e|(d&f))-5*e+1*~(d^(e^f))-7*~(d&f)-3*(e|(d^f))-1*(~(d&e)&~(d^(e^f)))-1*((d&~e)|(d^(e^f)))+11*(~e&(d^f))+2*(~(d&~e)&(d^(e^f)))-2*(e^(d|(e^f)))+7*(f^(~d|(~e|f)))-6*(f^~(d&~e))+11*~(~d|(e&f))+4*~(d|(e|f))+22*~(d|(~e|f))-34*~(~d|(e|f))+23*~(~d|(~e|f))-31*(~d&(~e&f))-3*(~d&(e&f))+29*(d&(~e&f))-5*(d&(e&f));
}

uint64_t target_352(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(b^(a|(b|c)))+1*(b^(~a&(b|c)))-1*(b|~(a^c))-2*((a|~b)&~(a^(b^c)))-2*(c|(a^b))-2*~b-11*~(a&(~b&c))-2*(c^~(a&~b))+1*((a|b)&~(b^c))+2*(c^(~a|(b|c)))+3*(b|(a^c))+11*(b^c)-5*~(b&c)+2*(a^(b|c))+5*(b&c)+11*(c^(a|(~b&c)))-2*(c^~(a&b))-6*(c^~(a&(b|c)))+4*~(b|~c)-1*((b&c)^~(a&(b^c)))+11*(b^(a|c))-5*((a&b)|~(b|c))+2*~(~a&(b^c))-1*((a^b)|~(a^c))+2*(a^(~b|c))+5*(~(a|b)|~(b^c))-7*((a|~b)&(a^(b^c)))+2*(b^(a&(~b|c)))+2*(b^~(~a|(b&c)))+5*(b^~(a&(b^c)))+3*~(a|(b&c))-1*(b^~(~a&(~b|c)))+7*(b^(a|(b&c)))-1*(b^~(a|c))-1*(~(a&~b)&(b^c))-3*(a|c)+1*(b^(a|~c))+4*(c^~(a|~b))+19*~(a|(b|c))-12*~(a|(~b|c))-8*~(~a|(~b|c))-20*(~a&(~b&c))-16*(~a&(b&c))-20*(a&(~b&c))+19*(a&(b&c));
}

uint64_t target_353(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(~(d&e)&(e^f))-2*((d^e)&(d^f))-7*((d&e)|(e^f))+7*(f^(~d&(~e|f)))-2*(~e&~(d^f))-1*(f^~(d&(e&f)))+1*(~(d&~e)&(d^(e^f)))+3*(e|(d&~f))+11*~(d&(~e&f))+5*(d&~f)+2*(e|(d^f))-1*(f|(d&e))+1*(d|~e)-2*(~e|~(d^f))+2*~(d&~f)-11*(~d|(~e|f))-1*((d&~e)|~(d^(e^f)))+11*((d&e)^~(d^(e&f)))+1*(d|(~e|f))+7*(e^~(d&~f))+7*(e^f)+1*~(d|(e&f))+4*~(d&(~e|f))+11*(e&~(d&~f))-5*(e&f)-28*~(d|(e|f))-31*~(d|(~e|f))-7*~(~d|(e|f))-40*~(~d|(~e|f))-24*(~d&(~e&f))-13*(~d&(e&f))+2*(d&(~e&f))-13*(d&(e&f));
}

uint64_t target_354(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~a+2*(~a&(b^c))-6*((a&c)^(a^(~b&c)))+11*(c|(a&~b))-5*((a&b)|(a^(b^c)))-2*(c^~(a&(b|c)))+1*(b^~(a|(~b&c)))-11*(~a|(b&c))+2*(b^(a&(b^c)))-1*~(~a|(b&c))+1*(~(a&~b)&~(a^(b^c)))-11*(c&(a|~b))+3*(a&(b|c))+11*(b&~(a&c))-2*(b^~(~a&(b|c)))+7*(b^c)-2*(b^~(a&(b&c)))-11*(c&(a^b))-2*~(a^(b|c))-3*((a^b)|(a^c))-1*(c^~(a|b))+1*(a|(~b|c))-5*(c^~(a&(~b&c)))-6*(b|c)+7*(~(a|b)|(b^c))-5*~(a^(b&c))-3*(~(a&b)&~(b^c))-6*(c^~(a|~b))+1*~(a|b)-7*((a&c)^(b|c))+1*~(a|c)+1*((b&~c)|~(~a|(~b&c)))+7*(b^~(a|(b^c)))-7*(b^~(~a&(b^c)))+7*(b^(~a&(~b|c)))-1*(b&~(a&~c))+7*(~c&~(a^b))+6*~(a|(b|c))+15*~(a|(~b|c))+24*~(~a|(b|c))-17*~(~a|(~b|c))+18*(~a&(b&c))+35*(a&(~b&c))+19*(a&(b&c));
}

uint64_t target_355(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~y+2*(x|~y)-4*~(x|y)-3*(x&~y)-2*(x&y);
}

uint64_t target_356(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(z^t)+1*~(z&~z)-2*~(z&~t)+1*~(z|~t)-3*(z&~t)+1*(z&t);
}

uint64_t target_357(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*(z^t)+1*z+7*~z+5*(z|~t)-1*~(z&~z)-3*~(z^t)-8*~(z|t)-3*(z&~t)-3*(z&t);
}

uint64_t target_358(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*~(x&~y)+2*~(x&y)-2*~x+11*x+1*~y+1*~(x|y)+3*~(x|~y)-14*(x&~y)-9*(x&y);
}

uint64_t target_359(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(z^t)-2*(z|t)+7*(z^t)-11*~t-11*~z+4*t+2*~(z|~t)+6*(z&~t)-1*(z&t);
}

uint64_t target_360(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*(b^(a|(b^c)))-5*(~(a&b)&~(a^(b^c)))+3*~(a|~b)-2*~(a|~c)-1*(b^(a&(b^c)))-2*(~(a&~b)&(b^c))-11*(~(a&~b)&~(b^c))+11*(c^~(a&(~b|c)))-2*(b^~(a&~c))-6*(c^(a|(~b|c)))-11*(b^~(~a|(b&c)))-7*(a^b)+5*(b^(a|(b&c)))-5*((a^b)|~(a^c))-5*(c^~(a&~b))+2*((a^b)|(a^c))-6*(c^(a|(b&c)))+11*~(a|(b&c))+2*(c^(a&~b))-5*((a&b)^(a^(~b|c)))-1*(a&(b^c))+1*(~(a&~b)&(a^(b^c)))+1*((a|~b)&(a^(b^c)))+1*(~a|(b^c))+4*(b|~(a|~c))+1*(a^(~b&c))+7*(c^~(a&(b&c)))-6*(b^~(a|(b^c)))+1*(c&~(a&~b))+1*(~a&(~b|c))-6*~(a&c)-1*(b^(a|(~b|c)))+7*(c|(a&b))-1*(b^(a|~c))+4*b-1*~(~a|(b^c))-2*(~(a|~b)|(b^c))-1*((a^b)&~(a^c))+2*((a|b)&(a^(b^c)))-5*~(a|(~b&c))-6*(~(a&b)&(b^c))+5*(a&c)-5*~(b|c)-11*(b^~(a&(b|c)))+1*~(~a&(~b&c))+3*((a&c)^(a^(~b&c)))-11*((a&b)|~(a^(b^c)))+1*(a|(b&c))+1*~(a&(~b&c))+3*(a|b)-3*(b^(~a&(~b|c)))+56*~(a|(b|c))+6*~(a|(~b|c))+27*~(~a|(b|c))+15*~(~a|(~b|c))+5*(~a&(~b&c))+37*(~a&(b&c))+16*(a&(~b&c))+13*(a&(b&c));
}

uint64_t target_361(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*(e|~(d^f))+3*~(d|f)+4*((d&e)^(e|~f))+4*(f^~(~d&(e|f)))-2*(~d&(~e|f))-1*((d|~e)&(d^(e^f)))-7*((d&e)|(d^(e^f)))-5*(e|(d^f))+5*~(~d|(e&f))-1*~(d&f)+2*~(d|(e&f))+2*(~(d|e)|(e^f))-1*~(e&f)-5*(e^~(d&(e|f)))+1*(f^~(d&~e))+5*(e^(d&(~e|f)))-5*(~d|(e|f))-2*~(d&(~e&f))-2*(~(d^e)&(d^f))+11*(f^~(d&(e|f)))-7*(e^(~d&(e|f)))+1*(d|~f)-6*(f^(~d&(e|f)))-2*((e&~f)|~(d|(~e&f)))+1*((e&~f)^(~d|(e^f)))+1*((d&f)|~(e|f))+2*(~f&~(d^e))+11*(e^(~d|(e&f)))+11*(f^~(~d&(~e|f)))+3*(d|(~e&f))+4*(e|~(d|~f))+5*(e|f)+11*~(~d&(e|f))-3*(~d|(~e|f))-2*~(d&(~e|f))-1*e-6*~(d^(e&f))-6*(~(d^e)|(d^f))-11*(~d|(e&f))+2*((d&e)^~(d^(~e|f)))+1*(e^~(d&~f))-3*(f^(~d|(e|f)))-5*(f^~(~d&(~e&f)))+4*(d&~f)+2*(~(d|e)|~(e^f))+2*(d^f)+1*(e^(d&~f))+2*~(~d&(e&f))+3*((e&f)|(d&(e|f)))-7*(e^~(~d&(~e&f)))-11*(f^~(d&(~e&f)))-6*(f&(d|~e))-5*(f|(d&~e))-2*(f^(~d|(e&f)))+1*(d|~e)-6*~(d|~f)-1*(f^(d|(e&f)))-1*(e^(d|f))-1*(d|(e^f))-6*((d&e)|(e^f))+2*(e^~(~d|(e&f)))-1*(~d&(e|f))-1*(e^~(~d&(e|f)))+11*(f^~(~d|(~e&f)))+5*(~f&(d^e))+1*(e^(d|(e^f)))+13*~(d|(e|f))-26*~(~d|(e|f))-21*~(~d|(~e|f))+36*(~d&(~e&f))-5*(~d&(e&f))-16*(d&(~e&f))+34*(d&(e&f));
}

uint64_t target_362(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*z-2*t+4*(z^t)-5*~(z|t)-12*(z&~t)-6*(z&t);
}

uint64_t target_363(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*~(z^t)+4*z+1*(z|~t)-5*~(z&t)+3*~(z&~t)+23*~(z|t)+13*~(z|~t)+14*(z&t);
}

uint64_t target_364(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~(~a|(b&c))-5*((a&c)^(b|c))+2*(a^c)+5*((a&c)^(a^(~b&c)))-11*(b^~(~a&(b|c)))-2*(~a|(~b|c))+1*(c^~(a&(b&c)))-5*(b^~(a|(b&c)))-2*(b^(a&c))-1*((a|b)&(a^(b^c)))+1*(b&(a|c))-2*(~(a&b)&(a^(b^c)))+4*~(a|c)-1*(~(a|b)|~(b^c))+1*(~(a|~b)|(a^(b^c)))+1*~(a&(b^c))+3*(b^(a|c))-7*(a|c)-1*~(a&(~b|c))+3*(c^~(a|(~b&c)))-1*(b|~(a^c))+11*~(a|(b|c))+11*~(a|(~b|c))+6*~(~a|(b|c))+6*~(~a|(~b|c))+8*(~a&(~b&c))+30*(~a&(b&c))+6*(a&(~b&c))+9*(a&(b&c));
}

uint64_t target_365(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(z&t)-7*~(z^t)-2*~t-1*(z^t)+11*(z|t)+2*t-3*~(z&~z)+2*z+17*~(z|t)-9*(z&~t)+2*(z&t);
}

uint64_t target_366(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(x&~x)-2*~(x|y)-3*~(x|~y)-2*(x&~y)-3*(x&y);
}

uint64_t target_367(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(e&~f)-2*~(d&~e)+1*(f^~(~d&(~e|f)))+1*(e^(d&~f))+2*((e&f)^~(d&(e^f)))+5*(f^(d&(e|f)))+3*(d|(e&f))+7*~(d&~f)+11*(e^(~d&(e^f)))+2*(e^(~d|(~e&f)))+7*(d|~f)-1*~(e^f)-2*~(d^(e^f))+1*(~(d^e)&(d^f))-6*(~(d|e)|(e^f))-1*(f&(d|~e))-6*((d&~e)|(d^(e^f)))+2*(d^f)-3*(~(d&e)&(e^f))+1*((d&~e)|~(e^f))+3*(~f|~(d^e))+1*(f^(~d&(~e|f)))+4*~(d&(e&f))+11*~e+1*(f|(d&~e))-11*(~e&(d^f))-11*~(d|~f)-6*~(d&(e^f))-3*~(d&~d)+2*((d&f)^~(e&~f))-11*((d&f)^~(d^(e&f)))-2*~(e|f)-6*(d&~f)-1*(f&(d^e))-6*((d&e)^(e|~f))+11*(f^~(d&(e|f)))-2*~(d&(e|f))+2*(f^(d&e))+5*(~(d^e)|~(d^f))-11*(~(d&e)&(d^(e^f)))+11*(f&(d|e))-1*~(d^f)+1*(~f&~(d^e))-3*(e^(d|f))-5*((d&f)^~(d^(~e&f)))+4*~d+3*(f^~(d|~e))-5*(~d|(~e|f))+4*~(d|f)+3*(~(d|~e)|(d^(e^f)))-2*(f^~(d&e))+1*(~e|(d^f))-1*((d&f)^(d^(~e&f)))-5*(f^(d&~e))+4*(d^e)-12*~(d|(e|f))+12*~(d|(~e|f))+20*~(~d|(e|f))-29*~(~d|(~e|f))+17*(~d&(~e&f))-14*(~d&(e&f))-24*(d&(~e&f))-26*(d&(e&f));
}

uint64_t target_368(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*((a|b)&(b^c))+4*~(~a&(b&c))-11*(b&~(a&c))+5*~(a|~c)+7*(b^~(~a&(~b&c)))+1*(a^c)-5*((a&b)|~(b|c))+4*((b&~c)|~(~a|(~b&c)))+2*(b|~c)-2*(~b&(a^c))-6*(b^(a&(~b|c)))+1*((b&~c)^(a|(b^c)))-6*~(a^b)-1*(b^~(a|c))-3*(b|(a&c))+5*(c^~(~a&(~b|c)))+7*(~a|(b&c))+1*((a&~b)|(b^c))+7*(~(a|b)|~(a^(b^c)))-1*((a&b)^~(a^(~b|c)))+1*(a|(b&c))+2*(b^(a|(b&c)))-1*(~a|(b^c))-1*(c^(a|(b&c)))-1*(c^(a|(~b&c)))+4*((a|b)&~(b^c))-5*(b^~(~a&(b|c)))+4*(~a|(~b|c))+1*(~(a&~b)&(a^(b^c)))-7*(b^~(a|(~b&c)))-6*~(a|(b|c))-4*~(a|(~b|c))-16*~(~a|(b|c))+11*~(~a|(~b|c))-32*(~a&(~b&c))-8*(~a&(b&c))-17*(a&(~b&c))-12*(a&(b&c));
}

uint64_t target_369(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*t-6*(z^t)-1*~(z^t)+1*~(z|t)+12*~(z|~t)+7*(z&t);
}

uint64_t target_370(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(z^t)+5*~(z&t)+2*z-7*~t+1*(z|t)-14*~(z|~t)-2*(z&~t)-12*(z&t);
}

uint64_t target_371(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(z^t)-6*~(z&~z)-1*~(z&~t)-2*(z^t)-7*t+17*~(z|t)+5*~(z|~t)+8*(z&~t)+13*(z&t);
}

uint64_t target_372(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*~(x&~y)-1*~(x&~x)+2*(x|~y)-11*x+5*~x+11*(x|y)-13*~(x|y)-20*~(x|~y)+1*(x&~y)-8*(x&y);
}

uint64_t target_373(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*((d&f)^(d^(e&f)))+2*(f^(~d|(~e&f)))-11*~(e&f)-1*~(~d|(~e&f))-1*(e^~(~d&(e^f)))-7*((d|e)&(e^f))-5*(f|(d&e))-2*(f&(d|e))+3*(~f|~(d^e))-5*(f^~(d&(e&f)))+7*(f^~(d|(e&f)))+2*(d|e)+1*((d&f)^~(e&~f))+1*(e^(d&(e^f)))-1*(e^(d|(~e|f)))-11*(f^~(~d&(~e|f)))-7*(e^~(d|~f))-11*(f^(d&(e|f)))-2*(e^(d&~f))-2*~(d|~f)-1*~(~d|(e&f))+3*((d&e)|(d^(e^f)))+1*~(d&~e)+5*(e^(d&(~e|f)))-2*(~e&~(d^f))+2*((e&~f)|~(d|(~e&f)))+11*(~f&~(d^e))-2*((d|e)&~(d^(e^f)))-1*(f^(d&(~e|f)))-2*(e^~(~d&(~e&f)))-1*(d^f)+11*((d&f)|~(e|f))-11*(f^(d&~e))-1*(f^~(~d&(e|f)))-2*(d^(e&f))+2*(f^(~d|(e|f)))-17*~(d|(e|f))+17*~(d|(~e|f))+25*~(~d|(e|f))+35*~(~d|(~e|f))+54*(~d&(~e&f))+31*(~d&(e&f))+2*(d&(e&f));
}

uint64_t target_374(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*(d|(~e&f))-1*((d&e)^(d^(~e|f)))-1*(e^(d|(e^f)))+11*(~(d&e)&(d^(e^f)))+2*~(~d&(e&f))-5*(e^~(d&(e^f)))-6*(f^~(~d&(e|f)))+1*(e^(d&(~e|f)))+11*~(d|(~e&f))+3*((d&e)|(e^f))+4*(e^~(d&(e|f)))+2*(f^~(d|e))-11*(~e&(d^f))+7*~(~d&(e|f))+2*~(d|~f)+7*~(e|~f)-6*((d&f)^~(d^(e&f)))-1*((e&f)^~(d&(e^f)))-2*(~f&~(d^e))+7*((d&f)^(e|f))-1*(f^~(~d|(e&f)))-1*(d|e)-3*((d^e)&(d^f))+3*((d|e)&~(d^(e^f)))-3*(f|~(d|~e))+2*((d&f)^(d^(~e&f)))+5*(f^~(d&~e))+2*(e^~(~d&(~e|f)))+2*(e&(d|~f))+5*(~(d&~e)&(d^(e^f)))-2*((d&e)|~(e^f))-2*(~(d&e)&~(e^f))+1*(~(d&~e)&(e^f))-2*(e&f)+1*(~(d|~e)|~(d^(e^f)))+2*(f|~(d^e))+2*(f|(d&~e))+1*(d|~f)-3*((d|e)&~(e^f))-7*(~(d|e)|~(e^f))-5*(f&(d^e))+11*(e&(d|f))-6*(d|(~e|f))-6*~(~d|(e^f))+5*(e^(d|f))-2*(e^~(d|~f))-11*~(d^(e&f))+2*((d&e)|~(d^(e^f)))-2*(e^~(d|(e&f)))-7*(d^(e&f))-7*(~e&~(d^f))-3*((e&~f)|~(~d|(~e&f)))-7*(e^(d|(~e|f)))-1*(e^f)-2*~(d&(e|f))-7*(e^(d&(e^f)))+2*(f^~(~d|(~e&f)))-11*(e^(d|(e|f)))-1*(d^(~e|f))-3*(e|f)+11*(d^(e^f))-5*(d|(e|f))-1*(f^(d|(e|f)))-6*((d^e)&~(d^f))+7*(f|(d^e))-6*((d&f)^~(d^(~e&f)))+7*~(d^(~e&f))+30*~(d|(e|f))-16*~(d|(~e|f))+31*~(~d|(e|f))-12*~(~d|(~e|f))+17*(~d&(~e&f))+13*(~d&(e&f))+10*(d&(~e&f))+6*(d&(e&f));
}

uint64_t target_375(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*((a&c)^~(a^(b&c)))+1*(c^(a|b))+2*(c&~(a&b))+7*(c&~(a^b))+3*~(a|(b|c))+2*~(a|(~b|c))-1*~(~a|(b|c))-1*~(~a|(~b|c))-7*(~a&(~b&c))-2*(~a&(b&c));
}

uint64_t target_376(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(x&~y)+1*~(x&~x)-1*~x-2*~(x|y)+3*~(x|~y)+4*(x&~y)+2*(x&y);
}

uint64_t target_377(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(e^~(d&(~e|f)))-5*(f^~(d|e))-11*~(d^(e^f))-1*(~(d|e)|(d^(e^f)))+7*(d&~f)-11*(e^~(d&~f))+11*(~d|(e^f))+4*(e|(d&f))-11*((d&e)^(e|~f))-1*(e^~(~d&(e&f)))+1*(e^~(~d&(e^f)))-1*(e^(~d&(e^f)))-5*((d&e)^(d^(e&f)))-2*(~(d^e)&~(d^f))+4*(~(d|~e)|(d^(e^f)))+7*(~e&~(d^f))+7*(e|f)+2*((d|e)&~(d^(e^f)))-2*((d&e)|(d^(e^f)))+4*(e^(d|(e&f)))+11*(e^(~d|(~e|f)))-6*((d^e)|(d^f))-5*~e+1*(f^(d|(~e&f)))-6*(f^~(~d|(~e&f)))-1*(d|f)-3*(f^(d&(e|f)))-2*~(d^(~e&f))+2*(f^(d|(e&f)))-6*(e&~(d&~f))-5*(d|e)+21*~(d|(e|f))+2*~(d|(~e|f))+13*~(~d|(e|f))+1*~(~d|(~e|f))+4*(~d&(~e&f))+34*(~d&(e&f))+11*(d&(~e&f));
}

uint64_t target_378(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*((a&b)^(a^(b&c)))-11*(a&(~b|c))-7*(c|~(a^b))+2*~a-2*(c^(a&(b|c)))-6*(c^~(~a&(b|c)))+5*(~(a|b)|(a^(b^c)))+11*(b^(~a&(b^c)))+5*(a&b)-1*(~(a^b)&(a^c))-1*(c&(a^b))-1*(b^(a|(~b&c)))+11*((a&b)^(a^(~b|c)))-1*(a|(b^c))-5*(b^~(~a&(~b&c)))-5*(a|b)-2*((a|~b)&(a^(b^c)))+11*(b^c)+1*(~b&~(a^c))-11*(b^~(~a&(b|c)))-3*(a^(b&c))+5*(b&~c)+7*((a^b)|(a^c))+7*(b^~(~a&(~b|c)))-5*(b^~(a&~c))-7*~(a|b)-5*(b^(a|(b&c)))-6*(b^(a&c))+1*~(a|~c)-2*(c^(a&b))-6*(a|(~b&c))+5*(b^(~a|(b|c)))-7*(c^(a&(~b|c)))+17*~(a|(b|c))-1*~(a|(~b|c))+33*~(~a|(b|c))+1*~(~a|(~b|c))-10*(~a&(~b&c))+5*(~a&(b&c))-7*(a&(b&c));
}

uint64_t target_379(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~(z&~t)-5*z-7*(z|t)+1*~(z|t)+8*~(z|~t)+18*(z&~t);
}

uint64_t target_380(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*(a&(b|c))+11*(a^(~b&c))-2*(b|(a&~c))-7*(c&~(a^b))-3*~(a^b)-5*(b|(a^c))-3*~a+6*~(a|(b|c))+10*~(a|(~b|c))-4*~(~a|(b|c))-5*~(~a|(~b|c))+10*(~a&(b&c))-4*(a&(~b&c))+2*(a&(b&c));
}

uint64_t target_381(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*(z^t)+2*~z-11*z-11*~(z&t)+3*~(z&~t)+6*~(z|t)+10*~(z|~t)+26*(z&~t)+6*(z&t);
}

uint64_t target_382(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(b^~(a&(b&c)))-1*~(a&b)-3*(c^~(~a&(b|c)))-1*(b^~(~a&(b&c)))+1*(c^(a|(b&c)))+4*(b&~(a^c))-5*~(~a&(b^c))+2*(a&~b)+1*~(a&~b)-11*~(a|(b&c))+2*~a+6*~(a|(b|c))+5*~(a|(~b|c))+6*~(~a|(b|c))+7*(~a&(b&c))+4*(a&(~b&c))-12*(a&(b&c));
}

uint64_t target_383(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*x-2*~(x&y)+1*~x+2*(x|~y)-3*~(x^y)-1*y+2*~(x&~x)+1*~(x|y)+3*~(x|~y)-7*(x&~y);
}

uint64_t target_384(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(z&~z)+4*~(z&t)-2*(z|~t)+5*~(z|~t)+7*(z&~t)+11*(z&t);
}

uint64_t target_385(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~(z^t)+1*~(z&~z)-1*~(z&t)+7*~(z&~t)-2*(z|~t)-10*~(z|t)-10*~(z|~t)-1*(z&~t)-14*(z&t);
}

uint64_t target_386(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*~(x^y)-1*~y+1*~(x&y)+5*(x|~y)+1*(x^y)-16*~(x|y)-2*~(x|~y)-6*(x&~y);
}

uint64_t target_387(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(f&(d^e))+5*((d&~e)|(e^f))-1*((d|e)&~(d^(e^f)))-1*(~(d&e)&(d^(e^f)))-6*((d^e)&(d^f))-5*(f^~(d&(~e&f)))+1*f-1*((d&f)^~(d^(e&f)))+1*((d|e)&(e^f))-7*(e^f)-1*(f^(d&e))+2*~(d&(~e|f))-2*~(d|~f)-1*(~(d|~e)|~(d^(e^f)))+4*((d&e)|~(e|f))-1*((d&e)|~(d^(e^f)))-7*((d|e)&~(e^f))-2*((d|~e)&(d^(e^f)))+11*((d&e)|(e^f))-7*~(d|f)-3*(e^~(d|(e&f)))+1*~(d&~e)+1*~(d&(e|f))+1*(e&~(d^f))+11*(d^f)-1*((d&e)^(d^(~e|f)))-2*~(d&~f)-3*(f^~(~d|(~e&f)))+1*(e^~(d&f))+7*~f+7*(e&~(d&f))+2*(e^~(~d&(e|f)))+4*(e^~(~d|(e&f)))+7*(e|~(d|f))+1*(~e|(d^f))-2*~(d^(~e&f))-3*~(d|(e|f))-12*~(d|(~e|f))-1*~(~d|(e|f))-35*~(~d|(~e|f))-11*(~d&(~e&f))-3*(d&(~e&f))-3*(d&(e&f));
}

uint64_t target_388(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*~(x&y)+2*~x-2*x+11*~(x&~y)-6*(x|~y)-1*~(x&~x)-4*~(x|y)-9*~(x|~y)+11*(x&~y)-2*(x&y);
}

uint64_t target_389(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*(e^~(d&f))-1*(~(d|e)|(d^(e^f)))+1*(d^e)-3*~(d|f)-5*(~(d&~e)&~(e^f))+2*(f^~(d|e))-2*(~(d&e)&~(d^(e^f)))-2*((d^e)&~(d^f))+2*~d-1*((d&e)^(d^(~e|f)))+1*(d^(e^f))-6*(e^(d&f))+1*(~d&(e^f))-5*(e^~(d&(e|f)))+7*(~(d|e)|~(d^(e^f)))-1*((e&~f)|~(d|(~e&f)))-3*(f^~(~d&(e|f)))-11*~(d&(~e&f))-7*((e&f)|(d&(e|f)))-6*(e|(d^f))+1*(~e|~(d^f))+5*(f^~(d&e))-1*(d&f)+4*((d&~e)|(d^(e^f)))+2*(f&~(d&e))+1*(e^(~d&(~e|f)))-1*~(d&(e&f))+11*(f^(d&~e))-1*(~d|(~e&f))+4*(e^(d|(e&f)))+2*((e&~f)^(~d|(e^f)))-2*~(d^(~e|f))+2*(e&(d|~f))+5*~(d|(e&f))-3*~(d&f)+7*~(d&(~e|f))+2*(e^(d|(e|f)))+5*(~(d|~e)|~(d^(e^f)))+1*(d|(~e|f))+3*((e&f)^~(~d&(e^f)))-11*((d&~e)|~(e^f))+11*((d&f)^~(e&~f))+3*~(~d&(e|f))-1*(e^(d|(e^f)))+2*(f|(d&~e))-3*(~d|(e&f))-6*((d|e)&~(d^(e^f)))+1*~(d|(~e|f))-1*~(~d|(e|f))+19*~(~d|(~e|f))-19*(~d&(~e&f))+15*(~d&(e&f))+1*(d&(~e&f))+24*(d&(e&f));
}

uint64_t target_390(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(c^~(a&~b))+4*((a&c)^~(a^(~b&c)))+11*(~(a|b)|~(b^c))+7*(c^~(a&(b&c)))+2*(a|(~b&c))-2*(b|~(a^c))+4*((a&b)|~(b|~c))-2*(a&c)+2*~(a^(b|c))+2*(b^(~a&(b^c)))+3*(b&(a|c))+1*(b^~(a&(b&c)))-5*(~(a|b)|(a^(b^c)))-11*((a|~b)&~(a^(b^c)))+1*(b^(~a|(~b|c)))-1*((a|b)&~(b^c))+5*~(a&~b)-6*(a|(b&c))+4*(c|~(a|b))+3*~(a|(~b&c))-11*~(a&~c)-3*((b&c)|(~a&(b|c)))-1*((a&c)|~(b|c))+2*(c^(a|(b&c)))+1*((b&~c)|~(a|(~b&c)))-1*((a&b)^(a^(b&c)))+1*((b&c)^~(a&(b^c)))-11*(a|(b|c))+11*(b|~(a|~c))+1*(b^(a&~c))+7*(~(a^b)|(a^c))+7*((a|~b)&(b^c))-2*(c^(a&(b|c)))-18*~(a|(b|c))-3*~(a|(~b|c))-9*~(~a|(b|c))-22*~(~a|(~b|c))-28*(~a&(~b&c))-15*(~a&(b&c))+25*(a&(~b&c))-22*(a&(b&c));
}

uint64_t target_391(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(f^~(~d&(~e&f)))-5*(~(d^e)|(d^f))-1*(f&~(d^e))-2*((d&e)^~(d^(~e|f)))+7*~(d&f)+1*(e&f)+2*~(e^f)-1*~(~d|(e&f))+5*(e^(~d&(e|f)))+5*(~d|(~e|f))+2*(~d&(~e|f))-1*(~(d^e)&~(d^f))+11*((d&e)^(d^(~e|f)))+7*(f^(~d&(e|f)))-11*(f^(d&(~e|f)))+2*(~f&(d^e))-3*(f&(d^e))+11*((d^e)|~(d^f))+3*(~(d|~e)|(e^f))-5*(~(d|e)|(e^f))-11*(d&(~e|f))-1*(e|~f)+2*(d^(e^f))+1*(f^(~d|(e|f)))-5*~(d|(e^f))+7*(d|(e|f))+2*~(d&e)+1*~(e&f)-5*((e&~f)^(~d|(e^f)))-1*(e^(~d|(e&f)))-1*(f^~(d&(e&f)))-6*~(~d&(e&f))+1*d-5*(~(d^e)&(d^f))+3*((d|~e)&(d^(e^f)))+11*(f^~(d&(e|f)))+5*~e+11*(f&(d|e))+3*(f^(d|(e&f)))-2*(f^(~d|(~e|f)))-16*~(d|(e|f))-41*~(d|(~e|f))-12*~(~d|(e|f))+11*~(~d|(~e|f))-16*(~d&(~e&f))-32*(~d&(e&f))-18*(d&(~e&f))-38*(d&(e&f));
}

uint64_t target_392(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*~(~d&(e^f))-1*(f^(~d|(e&f)))+1*(e&f)+1*(~(d&e)&~(e^f))+7*(e&(d|~f))-2*(~(d^e)|(d^f))-2*(f^~(d&e))-3*(d&(~e|f))-1*((d&e)|~(e^f))+3*(e^(d&f))-3*(e^(~d&(e^f)))+1*(e&~(d^f))-6*(~(d&e)&(e^f))+1*(f^(d&e))-1*(~(d&~e)&~(d^(e^f)))+2*((d^e)|~(d^f))-1*((d&e)^(e|f))-5*~(~d|(e^f))-6*(e^~(~d&(~e|f)))-5*(~e|(d^f))-2*((d|~e)&(d^(e^f)))-7*((d&f)^~(e&~f))-2*~(d|(~e&f))-2*(e^(d|f))+1*(e^~(d|(e^f)))+5*~(d^e)+9*~(d|(e|f))+1*~(d|(~e|f))+29*~(~d|(e|f))-9*~(~d|(~e|f))+22*(~d&(~e&f))+17*(~d&(e&f))+14*(d&(~e&f))-3*(d&(e&f));
}

uint64_t target_393(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~(z&~t)+1*t-7*(z|t)+2*~(z&~z)-7*~t-1*~z-7*~(z^t)+11*~(z|~t)+12*(z&~t)+17*(z&t);
}

uint64_t target_394(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*(~(d&~e)&(d^(e^f)))-6*(e^~(~d&(e&f)))+5*(f^~(d&(e&f)))-7*((d&f)^(d^(e&f)))-2*(e^(~d&(~e|f)))+7*(e^~(d|f))+2*(~f|~(d^e))-1*((d&f)|~(e|f))-2*(~e|~(d^f))+1*(e&~(d^f))+11*~(~d&(~e&f))+3*(f&~(d&~e))-2*(~(d&~e)&~(e^f))-1*(f|(d&e))+2*(f^~(~d|(~e&f)))+1*(e^(d&(~e|f)))-2*~(~d&(e&f))+3*~(d^(~e|f))+4*(d^f)-5*(e^(d&(e^f)))+5*(d^(e&f))-2*((d&e)|~(e|f))+5*(f|(d&~e))+1*((d&e)|~(e|~f))-7*(d^(~e|f))-11*(~d&(~e|f))-1*(f^(d&~e))-1*(~(d&e)&(d^(e^f)))+2*((d^e)&~(d^f))-6*(f^(d&(e|f)))-1*((d|~e)&(d^(e^f)))-5*(f|(d^e))-3*(~(d|e)|(e^f))+4*f-1*((d&e)^(e|~f))-2*(f|~(d|e))-11*~(d|(~e&f))-1*(f^~(~d|(e&f)))+7*~(d^e)-3*(~f|(d^e))-3*((d&~e)|(d^(e^f)))+11*~(~d&(~e|f))-3*(d|(e|f))+2*(~(d&e)&(e^f))-1*(d|e)+18*~(d|(e|f))+15*~(d|(~e|f))-18*~(~d|(~e|f))+38*(~d&(~e&f))+26*(~d&(e&f))-10*(d&(~e&f))-8*(d&(e&f));
}

uint64_t target_395(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*y+2*~(x&y)-6*(x|y)+2*~(x&~y)-1*~(x&~x)-3*~(x|y)+3*~(x|~y)+4*(x&~y)+6*(x&y);
}

uint64_t target_396(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~z+5*~(z&t)-2*t-7*~(z|t)-5*~(z|~t)-3*(z&~t)+4*(z&t);
}

uint64_t target_397(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*t-3*(z^t)+7*~(z&~z)-3*~(z^t)+2*~(z&t)-14*~(z|~t)-6*(z&~t)-12*(z&t);
}

uint64_t target_398(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*(d^f)+5*((d&~e)|(e^f))+7*~(~d&(~e&f))-2*(~(d^e)&(d^f))-3*(d|~f)-1*((d|~e)&(d^(e^f)))-1*(f^(d&(e|f)))+1*(f^~(d&e))+4*(e^f)-1*(f|(d&e))-1*(f^~(d&(e&f)))+11*(~d|(~e|f))-1*(f^(~d&(~e|f)))+4*(~(d^e)&~(d^f))+7*((d&f)^(d^(e&f)))-2*~(d^f)-2*d+2*((d&e)|~(e|f))+11*(d&e)+11*~(d|(e&f))-11*~(d^e)-1*(~(d&e)&(d^(e^f)))+7*(e&~(d&f))-3*(e^~(~d|(e&f)))-3*(e^~(~d&(~e|f)))-1*(e^(~d|(e&f)))-1*(f^(d|(e|f)))+4*(e|(d^f))-3*(d^(e^f))+1*(e|(d&f))-37*~(d|(~e|f))-8*~(~d|(e|f))-14*~(~d|(~e|f))-3*(~d&(~e&f))-18*(~d&(e&f))-13*(d&(~e&f))-20*(d&(e&f));
}

uint64_t target_399(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(a&(~b&c))+1*(~b&~(a^c))-3*(b^(~a|(~b|c)))+1*(a|~c)+11*~(a&~a)+5*(c^(~a|(b|c)))+3*((b&~c)|~(a|(~b&c)))+11*(c^~(a&~b))-1*(c^(a&~b))+4*(b^~(a&c))-1*~(a&b)-3*((a&c)^~(b&~c))+5*(b^(a&c))-1*(b|(a&~c))-5*(a^(b&c))-6*~(a&~c)+11*a+5*(c^~(a&(~b&c)))-7*~(~a|(b&c))-6*(~a&(b^c))+1*(c^~(a|~b))-29*~(a|(b|c))-29*~(a|(~b|c))-12*~(~a|(b|c))-44*~(~a|(~b|c))-4*(~a&(~b&c))-10*(~a&(b&c))-24*(a&(~b&c))-21*(a&(b&c));
}

uint64_t target_400(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*((a&c)|(b&~c))-11*~(a&~c)-5*(~(a|b)|(a^(b^c)))+5*~(a|(b|c))+19*~(a|(~b|c))-4*~(~a|(b|c))-10*~(~a|(~b|c))+5*(~a&(~b&c))+2*(~a&(b&c))+12*(a&(~b&c))+6*(a&(b&c));
}

uint64_t target_401(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(x|~y)+3*y-6*~(x&y)-6*~(x&~y)+6*~(x|y)+5*~(x|~y)-1*(x&~y)-4*(x&y);
}

uint64_t target_402(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(b^(a&c))-1*(c^~(~a|(b&c)))+2*(b&~c)-5*(c|(a&~b))-1*(b&c)-7*(b^~(a|(b&c)))+11*((a&b)^(b|c))-2*(~(a^b)&(a^c))+2*(~a|(b^c))-3*((a|b)&~(a^(b^c)))+5*(a^b)-1*(c^~(~a|(~b&c)))-7*~(a^c)+11*~(b|c)+1*~(a&(~b&c))-7*(c^~(~a&(b&c)))-1*(b^~(a|c))+4*~(~a&(~b|c))-3*((b&~c)|~(~a|(~b&c)))+7*((a&b)|(b^c))-1*(~a|(~b&c))-2*~(a|(b&c))+2*(b|~(a|~c))-5*~(~a|(b^c))+2*((a|b)&(a^(b^c)))+3*(b^(~a&(~b|c)))+7*(b^(~a|(b|c)))-2*(b^~(~a&(~b|c)))-3*((a&b)|~(b|~c))+5*(c^(~a|(b|c)))-1*(b^(a|c))-3*(c^(~a&(~b|c)))+3*(c|~(a|b))+4*((a|~b)&(b^c))-1*(c^(a|b))+1*(b^(~a|(~b&c)))+4*(b|~(a^c))-2*b+1*~(a&(~b|c))+2*((b&c)|(~a&(b|c)))-2*~(a^(b|c))-2*(b^~(a&~c))+3*(~a|(~b|c))-3*~(a^b)-1*(b^(a|(~b&c)))-7*~(a|(b|c))-37*~(a|(~b|c))+1*~(~a|(b|c))-6*~(~a|(~b|c))-17*(~a&(~b&c))-9*(~a&(b&c))-28*(a&(~b&c))+10*(a&(b&c));
}

uint64_t target_403(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*z-6*(z^t)+7*~(z&t)-2*(z|t)+7*~z-3*~(z&~z)-7*~t-4*~(z|t)-4*~(z|~t)+12*(z&~t)+5*(z&t);
}

uint64_t target_404(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*(e^(d|(e^f)))-6*~(e|f)+7*(e^~(~d&(~e&f)))-3*~(~d&(e^f))-3*(e^~(~d|(e&f)))+1*~(d|e)+2*(f^(d|(~e|f)))-2*~(d&(e^f))+11*~(d&e)-7*(e^(d&(e^f)))+4*(f|~(d^e))+5*(e^~(d&(e^f)))-11*~(d&~e)+1*~(e^f)+1*~(d&~d)+2*(e^(d|(e&f)))+7*(d|(e^f))-3*~(d^f)+2*((d|~e)&~(e^f))+5*(d|~e)-1*(e|~(d^f))-1*(~(d^e)|(d^f))-2*((d&e)|~(e|~f))+3*(~(d|~e)|(d^(e^f)))-1*(e&~f)+1*~d+2*(f^~(d|e))-2*((d|~e)&(d^(e^f)))+3*((e&~f)^(~d|(e^f)))+1*(d^f)-2*(e^~(~d&(e|f)))-3*((d&e)|~(e|f))+3*((d&e)^(e|~f))+2*(~(d&e)&~(d^(e^f)))-1*(f&~(d^e))-7*~(d&f)-2*(f^~(~d&(e|f)))+4*(e|~(d|~f))-2*(~(d|e)|~(d^(e^f)))-2*~(d&(~e|f))-3*((d^e)&(d^f))-2*(e^~(d|f))+7*(e^~(d|(e&f)))-12*~(d|(e|f))+7*~(d|(~e|f))-11*~(~d|(e|f))-1*~(~d|(~e|f))-16*(~d&(~e&f))+8*(~d&(e&f))-16*(d&(~e&f))+5*(d&(e&f));
}

uint64_t target_405(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*((a|b)&(b^c))+3*(~a|(b|c))-1*((b&c)|(~a&(b|c)))-6*((a&b)^(b|c))+4*(a^c)-5*(b|~(a^c))-1*(c^(a|(b|c)))-1*((a&b)|(b^c))-6*((b&~c)|~(a|(~b&c)))-1*(b^~(~a|(b&c)))-1*(~a&(~b|c))+1*~(~a&(~b&c))-5*((a|b)&(a^(b^c)))-2*(b&c)+2*~(a&b)+1*~(a^(b|c))+1*(c^~(a&(~b&c)))+11*((a^b)&(a^c))+11*~(a^c)-1*(c^~(a|~b))+4*(c^(a&~b))+1*(b^(a&(b^c)))-2*((b&~c)|~(~a|(~b&c)))-2*(~(a&b)&(b^c))-6*(c^~(~a&(b|c)))-3*(c|~(a|b))+2*((a&b)|~(b|~c))+1*(~a|(~b&c))-1*(a^(~b|c))+1*(a|(~b|c))-7*((a|~b)&~(b^c))+5*(~a&(b^c))+5*(b^~(a|(~b&c)))-7*(a&(b|c))+4*((a&~b)|~(a^(b^c)))+4*(b|(a&~c))+3*((a&c)^~(a^(b&c)))-1*(~(a&~b)&(a^(b^c)))+2*(b^(~a|(b^c)))-2*(~(a&~b)&~(b^c))-1*(c&(a|~b))-11*(b^c)+7*((a^b)&~(a^c))-2*((a&b)|~(a^(b^c)))+11*((a&c)^(a^(~b&c)))-5*(~(a&b)&(a^(b^c)))-2*~(a|(b|c))+2*~(a|(~b|c))-2*~(~a|(~b|c))+2*(~a&(~b&c))-18*(a&(~b&c))+6*(a&(b&c));
}

uint64_t target_406(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*((a&b)|(a^(b^c)))+11*(a&(b|c))+4*(b&~(a&c))+2*(~b|~(a^c))-3*(c^(a&(~b|c)))-1*~(~a&(b^c))+11*((a|~b)&(b^c))-3*((b&c)^~(~a&(b^c)))+1*((b&c)^~(a&(b^c)))-11*(~(a|b)|(b^c))+2*(a&b)-5*(b^(a|c))+11*((a&c)^(a^(~b&c)))+1*((b&~c)^(a|(b^c)))+5*(~a|(b^c))+3*~(a|(b&c))+2*(~(a|b)|(a^(b^c)))+1*((a|b)&(a^(b^c)))+1*(a^(b^c))+3*(~(a&b)&(b^c))+5*((b&~c)^(~a|(b^c)))+1*(a&c)-1*(~a|(~b|c))-7*~(a^(~b|c))+7*(b|(a^c))-2*(~a|(b&c))-1*~(a&(b^c))-11*(c^~(a|~b))-2*(c^(a|(b&c)))+2*~(a&(~b|c))-1*a-5*~(b|c)-6*((b&c)|(~a&(b|c)))+1*(c|(a&b))+11*(~c&~(a^b))-1*(~(a|~b)|(a^(b^c)))+1*(b^~(a|(b&c)))-1*(~(a|~b)|~(a^(b^c)))+2*(b^~(a&c))+7*((a&~b)|~(b^c))-6*((a&b)|(b^c))-1*(~(a&~b)&~(b^c))+5*(c^(~a|(b&c)))-22*~(a|(b|c))-36*~(~a|(~b|c))-2*(~a&(~b&c))-17*(~a&(b&c))-18*(a&(~b&c))+4*(a&(b&c));
}

uint64_t target_407(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(z^t)-1*~(z&~t)-6*~(z|t)-4*~(z|~t)+2*(z&~t)+1*(z&t);
}

uint64_t target_408(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~(z&~t)-2*(z^t)+9*~(z|t)+11*~(z|~t)+3*(z&~t)+7*(z&t);
}

uint64_t target_409(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(z|t)-3*~(z&~z)-2*~(z^t)-1*(z|~t)+1*t-1*~z+7*(z^t)+8*~(z|t)-1*~(z|~t)+7*(z&t);
}

uint64_t target_410(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~x+2*(x^y)+1*x+3*(x|y)-2*~(x^y)+4*~(x&~y)-1*~(x|y)-8*~(x|~y)-6*(x&y);
}

uint64_t target_411(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*~(z^t)+11*~(z&t)+5*(z|~t)+7*~(z&~z)+5*~t-18*~(z|t)-19*~(z|~t)-26*(z&~t)+1*(z&t);
}

uint64_t target_412(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(e^~(d|(e^f)))-3*(~(d^e)&(d^f))-11*(f^(~d|(~e&f)))-1*(e^~(d|f))+1*(~f|(d^e))+7*(f^~(~d&(e|f)))-7*((d&e)^~(d^(~e|f)))-7*((d&~e)|~(e^f))+11*f+5*~(d|f)+4*(e^~(~d&(e|f)))-3*~e+1*((d&f)|(e&~f))-3*((d&e)|~(e|f))-6*(e^(~d|(~e|f)))-1*~(d&~e)+1*(e&~(d&f))-5*(e^(~d&(~e|f)))+3*~(~d&(~e|f))+1*(e^~(d|(~e&f)))+11*(f^~(~d&(e&f)))+5*~(d|(e^f))-1*(d^(e|f))+2*(~d&(~e|f))+3*(f&~(d^e))+11*(d^f)-3*((e&~f)^(~d|(e^f)))+7*~f+1*((d^e)|~(d^f))-1*~(d|(e|f))-6*~(d|(~e|f))-18*~(~d|(e|f))-14*~(~d|(~e|f))-11*(~d&(~e&f))-41*(~d&(e&f))+5*(d&(~e&f))+10*(d&(e&f));
}

uint64_t target_413(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~(z&t)+1*(z|t)-5*~(z|t)+5*(z&~t)-1*(z&t);
}

uint64_t target_414(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(~d&(~e|f))-5*(~(d&e)&(d^(e^f)))+5*((d|~e)&(d^(e^f)))-1*~(e^f)+1*(f&(d^e))-3*((d&~e)|~(e^f))+2*(~(d|~e)|(e^f))-3*((d^e)&(d^f))+3*~(d^(e|f))+1*(f^~(d|(~e&f)))-2*(~(d|e)|(e^f))+3*(~d|(~e&f))+7*(e^~(d|~f))+4*(e|f)+7*(d|(e^f))+1*((d&e)|~(e|f))-3*(~(d|e)|~(e^f))-3*e-2*(~f&~(d^e))+1*~f+1*(f^(d&(e|f)))+11*(e^(~d|(e&f)))-3*(f^(~d&(e|f)))-6*(e|(d&~f))+5*(e^(d|(~e&f)))+4*(f^(~d|(~e&f)))-1*(f&~(d&~e))-5*(e^~(d&(e^f)))+3*(f^~(~d&(~e|f)))+1*((d&f)^~(d^(~e&f)))+2*(e^(d|(e&f)))-6*(e^~(~d&(e|f)))-7*(f|(d&~e))-6*~(d&~d)-7*~e-1*(f&(d|e))+5*(f^(d|e))-1*((d|e)&~(e^f))-11*(~e|(d^f))+1*(e&~(d^f))-1*((d&e)^(d^(~e|f)))+2*(~d&(e^f))-5*(~(d|e)|(d^(e^f)))+3*(e^(d&(e^f)))-2*(f^(d|(e&f)))+7*(f^(d|~e))-6*(d|~f)-1*(e|(d^f))+1*~(d|(e&f))+1*(e|~f)-1*(e^~(~d&(e&f)))+1*(e^f)-11*(f^~(d&e))+2*(~d|(e^f))+35*~(d|(e|f))-3*~(d|(~e|f))+53*~(~d|(e|f))-12*~(~d|(~e|f))-2*(~d&(~e&f))+24*(~d&(e&f))+19*(d&(~e&f))+21*(d&(e&f));
}

uint64_t target_415(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*((a|~b)&~(b^c))+1*((a&b)^(b|c))+1*(b^(a|(~b&c)))+2*(~(a^b)|(a^c))+1*(~(a|b)|(a^(b^c)))-6*(~(a|b)|~(b^c))-5*~(a|~c)-11*(c&~(a&b))-2*(a&(b^c))-6*((a&b)|(b^c))+1*(c^(~a&(b|c)))-2*(a&(~b|c))-7*(b|(a^c))-6*(a&b)+7*((b&c)|(~a&(b|c)))-1*(a|(~b&c))+5*(c^(a|(~b|c)))-1*(a^(b^c))+2*(b^(a&c))-3*(b^~(a|(b^c)))+1*(b^(a|(b|c)))+11*(c^~(a|~b))-2*b+11*((a&b)|~(b|c))+2*((a|~b)&(a^(b^c)))-1*(~(a|b)|~(a^(b^c)))-3*(b|~(a^c))+3*((b&~c)^(~a|(b^c)))-1*(c&~(a^b))+1*~(a&~c)-3*(b^~(~a&(b&c)))+5*(~(a|~b)|(a^(b^c)))+1*(~a|(b&c))+1*(a&~b)-5*(b^~(a|(~b&c)))-1*(c&~(a&~b))-5*(~b|~(a^c))+3*(b^~(~a&(b^c)))+4*~(a^c)-11*(b^(~a|(b&c)))-2*(b^(a|(b&c)))+7*~c+4*(c^(~a&(~b|c)))+7*(c|(a&~b))+3*~(a|(b|c))-15*~(a|(~b|c))-11*~(~a|(b|c))+21*~(~a|(~b|c))+17*(~a&(~b&c))+9*(~a&(b&c))-4*(a&(~b&c));
}

uint64_t target_416(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*~t+7*~(z&~z)+3*(z|t)-6*~(z|t)-5*~(z|~t)-14*(z&~t)-10*(z&t);
}

uint64_t target_417(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~(z&t)+1*z+7*(z^t)-1*(z|~t)+3*~(z^t)-9*~(z|t)-16*~(z|~t)-16*(z&~t)-7*(z&t);
}

uint64_t target_418(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*y-11*~(x&~x)+4*~(x|y)+7*~(x|~y)+4*(x&~y);
}

uint64_t target_419(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(x&~y)-2*~(x&y)+2*x+7*~(x^y)+3*(x|~y)+5*(x|y)-7*~(x|y)-3*~(x|~y)-8*(x&~y)-17*(x&y);
}

uint64_t target_420(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*~(d&(e&f))-6*~f-1*(e^(d&(e|f)))-2*(~(d|~e)|(d^(e^f)))-7*(e|~f)-11*~(e&f)+2*(e&~f)+5*(f^(d&(~e|f)))+11*(e|f)-1*(e^(d|(e^f)))+1*~(d^f)-1*(d&(e^f))-2*((d|e)&~(e^f))+4*(f^(d|(~e&f)))-11*(e^~(d&(~e&f)))+7*(f^~(d&e))+1*~(e&~f)-1*(e^(~d|(~e&f)))-11*(e^(~d|(e|f)))-7*(e|(d&f))-2*(~(d|e)|~(d^(e^f)))-1*((d|e)&(d^(e^f)))-1*((d&f)^~(d^(e&f)))+4*(~(d&e)&(e^f))-3*(d^(~e|f))+11*(e&~(d&~f))+3*((e&f)|(d&(e|f)))+5*(~(d|e)|(d^(e^f)))-2*(~d|(e&f))-1*~(d^(e&f))-6*((d&e)^(e|f))+1*~e+1*(e^f)-3*((e&~f)^(d|(e^f)))-1*~(d&(~e|f))-3*((d|~e)&~(d^(e^f)))+11*((d&f)|~(e|f))+4*(e^(d|(~e&f)))-1*(e^~(~d|(e&f)))+5*(~(d^e)|(d^f))-5*f-7*(e^~(~d&(~e&f)))-2*(~(d&~e)&(e^f))-5*(~(d|~e)|~(e^f))+4*((d|~e)&(e^f))+4*(e|(d&~f))+1*(f|(d^e))-2*~(d&(e^f))+2*d-1*(e&(d|f))+2*(f|(d&e))-6*~(d|(e^f))+1*(e^(~d|(e^f)))+2*(e^(~d|(e&f)))+2*((d|~e)&(d^(e^f)))-3*((d&f)^~(d^(~e&f)))+7*(f&~(d^e))+2*(f^~(d&(~e&f)))+1*((d|e)&~(d^(e^f)))+2*((e&f)^~(~d&(e^f)))-1*(~(d&~e)&~(d^(e^f)))-6*~(d&~f)+7*(e&(d|~f))+2*(e|~(d^f))-3*(f|~(d|~e))-11*(e^~(d&(e&f)))+3*((d^e)&(d^f))-1*((d&e)^~(d^(~e|f)))+1*((d^e)|(d^f))-1*(e^(~d&(e^f)))-2*(d^(e^f))+57*~(d|(e|f))+4*~(d|(~e|f))+9*~(~d|(e|f))-12*~(~d|(~e|f))+28*(~d&(~e&f))+6*(~d&(e&f))+23*(d&(~e&f))-18*(d&(e&f));
}

uint64_t target_421(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(x^y)-11*~(x&~x)+11*x+3*~(x&y)-3*~(x&~y)-1*~y+1*y+14*~(x|y)+15*~(x|~y)-3*(x&~y)-2*(x&y);
}

uint64_t target_422(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*z+1*(z|t)-1*(z^t)-5*(z|~t)-1*~(z^t)+8*~(z|t)+2*~(z|~t)+6*(z&~t)+4*(z&t);
}

uint64_t target_423(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(a&(~b|c))+7*((a&c)|~(b|c))-6*(~a|(b|c))+11*(b^(a|(b|c)))-7*(a&(b^c))-11*(~(a|~b)|(b^c))+2*(c^~(~a&(~b&c)))-2*(b^(a|(b&c)))+1*(~(a&~b)&~(a^(b^c)))-5*((b&c)|(~a&(b|c)))+2*(c^~(a|(~b&c)))+1*(c&(a|b))-11*(~(a&~b)&(b^c))+1*~(a&(b|c))+11*((a&c)|(b&~c))-1*~(a^(~b|c))-7*~(b^c)-5*((a&c)^~(b&~c))+2*(c^(a|(~b|c)))+2*(b^~(a&(~b|c)))-6*~(~a&(~b|c))-2*(b^(a&~c))-2*(b^~(a|~c))+3*~c-6*~(b&~c)-7*(c^~(~a&(b|c)))+1*~(~a&(~b&c))-3*~(a&~a)+11*(b&~c)+4*~(~a|(b&c))-5*(b&c)-6*((a&~b)|~(a^(b^c)))-1*((a|b)&~(a^(b^c)))+5*(b^~(~a&(~b|c)))-7*(c^~(a|b))-2*(c^~(a&b))+3*(c^(~a|(b|c)))+4*(c^~(a&(b&c)))+5*(a|~c)-2*((a&b)|(a^(b^c)))-2*((b&c)|(a&(b|c)))+2*~(a|(b&c))-1*((a&~b)|(b^c))+14*~(a|(b|c))+9*~(a|(~b|c))+7*~(~a|(b|c))+18*~(~a|(~b|c))+39*(~a&(~b&c))+64*(~a&(b&c))+25*(a&(b&c));
}

uint64_t target_424(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(z&t)+7*z-2*~(z&~z)+5*~t-5*~(z|t)-7*(z&~t)-5*(z&t);
}

uint64_t target_425(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*~y-11*~x-5*(x^y)+1*~(x&y)+1*~(x&~y)-1*(x|y)+2*y+14*~(x|y)+13*~(x|~y)+9*(x&~y)-3*(x&y);
}

uint64_t target_426(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(x^y)+5*y-7*~(x&~y)+3*(x|y)+4*x-1*~x-11*~(x&y)+11*~(x|~y)+4*(x&~y)-6*(x&y);
}

uint64_t target_427(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*~(d^(e&f))-1*(e^~(d|(~e&f)))-6*((d&e)^~(d^(~e|f)))-2*(e^(~d&(~e|f)))-6*~d-1*(e&(d|f))-2*(f&(d^e))+1*((d&~e)|~(e^f))-5*(e|~(d^f))-1*(e^(d|(e&f)))+1*(d^(e&f))+1*((e&~f)^(d|(e^f)))+11*~(d^(~e&f))-1*~(e|~f)+2*(f^~(d&(e&f)))-1*~(d&e)-5*((e&f)|(~d&(e|f)))+3*(e^~(~d&(e^f)))-2*(d|~f)+7*~(d&(e&f))-1*(e&f)-11*~(d|f)-2*(d|e)+3*~(~d|(e^f))+5*~f+4*(~d&(e|f))-6*((d&e)^~(d^(e&f)))+2*((d&f)^(d^(e&f)))-5*(d&(e|f))+11*~e+5*(~f|~(d^e))+4*~(~d&(e^f))+4*((e&f)^~(d&(e^f)))+3*(f^~(d&(~e&f)))+2*(~e|(d^f))+2*(e^(~d&(e^f)))+3*((d&e)|~(e|~f))+2*(d&e)-1*((d&~e)|(e^f))-3*((d&~e)|~(d^(e^f)))-3*(d|f)-2*(~d&(~e|f))-10*~(d|(e|f))+7*~(d|(~e|f))-29*~(~d|(e|f))-1*~(~d|(~e|f))-9*(~d&(~e&f))+3*(~d&(e&f))-15*(d&(~e&f))+11*(d&(e&f));
}

uint64_t target_428(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(z^t)+2*~(z&t)-2*~t+1*~(z&~z)-11*~(z&~t)+12*~(z|t)+8*~(z|~t)-9*(z&~t)+1*(z&t);
}

uint64_t target_429(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*((d&e)|~(e^f))+5*(e^~(d&(e&f)))-2*(~d|(~e|f))-11*(f|(d&e))+4*~(d&e)-1*(e&(d|f))-11*(f^(~d|(e&f)))-2*~(d&~f)-7*(e&(d|~f))+1*(~d|(e|f))+3*((d&~e)|(d^(e^f)))+1*(~(d&e)&(e^f))-3*(f|~(d|e))+5*(f&~(d^e))-1*(d&~f)+2*~(e^f)-7*(f^(~d|(~e&f)))+11*~(d|~f)-2*(e^(d|(~e&f)))+4*((d|e)&~(e^f))-11*e-3*(e^(d|(e^f)))-1*(d^(e^f))+3*((d|e)&(e^f))-5*(e^~(~d|(e&f)))+4*(e^(~d|(~e&f)))+4*(~(d&e)&~(e^f))+1*(~(d|~e)|(e^f))+2*(e^~(~d&(~e|f)))-1*((d&f)^(d^(e&f)))+1*(f^(d&e))+5*(e^(~d&(e^f)))+7*(f^(d&(e|f)))+5*(f^~(~d|(e&f)))+1*(e^~(~d&(e&f)))+7*((d&~e)|(e^f))-7*(~(d|~e)|~(e^f))+1*(d|(~e&f))-1*(f^~(d|e))-6*(f^~(d&(e|f)))-11*(e^~(d|(e^f)))-7*(e|f)-6*~(~d&(e&f))+2*(~f|~(d^e))+2*(e|~(d^f))-5*(~d|(e&f))+7*(e^~(d|~f))-2*((d|~e)&(d^(e^f)))-2*(d|(e^f))+4*((d^e)&(d^f))+4*~(d|(e&f))-5*((e&f)^~(~d&(e^f)))-1*(e&f)+5*~(d^(~e|f))+7*((d^e)|~(d^f))+2*(~(d&~e)&~(d^(e^f)))-7*(d|~f)-2*(e^(d|(e|f)))+11*((d|e)&(d^(e^f)))+38*~(d|(e|f))+40*~(d|(~e|f))-12*~(~d|(e|f))+24*~(~d|(~e|f))-28*(~d&(~e&f))+1*(~d&(e&f))+27*(d&(~e&f))+40*(d&(e&f));
}

uint64_t target_430(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*~(z^t)+7*(z^t)+5*~(z&~z)-11*(z|t)-2*(z|~t)+3*~(z|t)-1*~(z|~t)+13*(z&t);
}

uint64_t target_431(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(d&(~e&f))-7*((d&e)|~(e^f))+1*((d^e)&~(d^f))-5*((d|~e)&~(e^f))+1*(~(d&e)&(d^(e^f)))+11*(e^(d&f))+1*(f^~(~d&(~e|f)))-1*(f|(d&~e))-2*(f^~(~d|(e&f)))-5*(~(d&e)&(e^f))-1*(d|~f)+2*(e^~(d&(e&f)))+2*((e&~f)^(d|(e^f)))+3*(~(d&~e)&(e^f))-1*((d&e)|(d^(e^f)))+4*(f&(d|e))+7*(f^(~d|(e|f)))+4*(f|~(d|~e))+1*((d&~e)|~(d^(e^f)))+4*(f&(d^e))-1*((e&f)|(~d&(e|f)))+2*(e&(d|f))+1*(f^~(d|e))-1*(~e&(d^f))-1*(e^(~d|(e|f)))-1*((d&f)^(d^(~e&f)))-3*((d&f)^~(e&~f))-7*(f^~(d|(~e&f)))+1*((d&~e)|(d^(e^f)))+2*(~(d|~e)|(d^(e^f)))+2*(d^e)+7*(f^~(d&(e|f)))+11*(~d&(e|f))+3*(e^~(d&f))+5*~(d|(e|f))-34*~(d|(~e|f))+2*~(~d|(e|f))-11*~(~d|(~e|f))-27*(~d&(e&f))-24*(d&(~e&f))-1*(d&(e&f));
}

uint64_t target_432(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*(~d&(e|f))+7*~(d|(~e&f))-1*(e|(d&f))-11*(~e&~(d^f))-7*(f^(~d|(~e|f)))+2*(~f|~(d^e))-2*((e&~f)|~(~d|(~e&f)))-1*(~d|(~e&f))-2*(f|(d&~e))-2*(f^~(~d|(~e&f)))+2*(d|~e)+1*(f^(d|~e))+3*(d&f)-2*~(~d&(~e&f))-7*((d&f)^(d^(~e&f)))+4*(~(d|~e)|~(d^(e^f)))-3*~(~d|(e^f))+7*(~f&~(d^e))-2*((d&e)|~(e|f))-6*(~(d|~e)|(d^(e^f)))+2*(f^(d|e))+11*(~d|(e&f))+4*((d&f)^(e|f))-3*(e&~(d&f))-3*~(d^e)+3*((d&f)^~(d^(~e&f)))-1*(f^(~d|(e&f)))-1*(d^(~e|f))+5*((d|~e)&~(e^f))-6*(e^~(~d&(~e|f)))-1*(~(d|~e)|~(e^f))+2*~(d&f)+2*(f^(d|(~e&f)))+1*~(d&(~e&f))-5*~(d|(e^f))-7*(e^~(~d|(e^f)))-2*(f&~(d&e))-1*(~f&(d^e))+1*((d^e)&(d^f))+1*(e^(d|~f))-1*(e^~(d|(e&f)))+2*~(d&e)+11*e-1*(d|f)-6*(f|~(d^e))-5*(f^(d|(e|f)))-1*(f^~(d&~e))-6*((d|e)&~(e^f))-5*(d^e)-1*(e^(~d&(e^f)))+3*((d&e)^~(d^(e&f)))+11*((d&~e)|~(d^(e^f)))+2*((d^e)&~(d^f))-20*~(d|(e|f))-15*~(d|(~e|f))+33*~(~d|(e|f))-7*~(~d|(~e|f))+23*(d&(~e&f))-1*(d&(e&f));
}

uint64_t target_433(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(x|~y)-1*y+3*~(x&~y)+1*~y-6*~(x&~x)-6*(x^y)+3*~(x|~y)+10*(x&~y)+3*(x&y);
}

uint64_t target_434(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(x&~y)-11*x-11*(x|y)+9*~(x|y)+14*~(x|~y)+24*(x&~y)+29*(x&y);
}

uint64_t target_435(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*((b&~c)|~(~a|(~b&c)))+11*(a^(b&c))-5*(a|(~b|c))-3*(c^~(a|b))+1*(~a&(b^c))-11*(~a&(b|c))-1*((a^b)|~(a^c))+7*~(a^b)-5*(b^(a&~c))-5*(b^~(a|(~b&c)))+1*(b&~(a^c))-3*(c^(a|(~b|c)))+5*((a|~b)&~(b^c))+2*(c&~(a&b))+4*(c^(~a|(~b&c)))+1*~(a|(b|c))-16*~(~a|(~b|c))+6*(~a&(~b&c))+12*(~a&(b&c))-4*(a&(~b&c))-9*(a&(b&c));
}

uint64_t target_436(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*(z^t)+3*~(z&t)-3*~(z^t)-11*(z|~t)+5*~z-19*~(z|~t)-4*(z&~t)+14*(z&t);
}

uint64_t target_437(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~z+3*(z^t)+11*~t-7*~(z|t)-4*~(z|~t)-9*(z&~t);
}

uint64_t target_438(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*~y+4*(x^y)+11*(x|y)-7*~(x&~y)+3*~(x&~x)-11*x-11*~(x&y)+19*~(x|y)-1*~(x|~y)+9*(x&~y)+4*(x&y);
}

uint64_t target_439(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*~z+3*z+5*(z^t)+7*(z|t)-10*~(z|t)-22*~(z|~t)-15*(z&~t)-9*(z&t);
}

uint64_t target_440(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*(b^~(~a|(b&c)))+1*~(a&c)-6*~(~a&(~b&c))-1*(c&~(a&~b))+2*(b&~(a^c))-6*(c^~(a|(b&c)))+4*(a^c)-1*(a|~c)-1*(b^(~a|(b|c)))+3*((a&c)^~(a^(~b&c)))-3*~(b|c)+1*(b^(a|(b&c)))+1*(a|c)-1*(~(a&~b)&~(b^c))-1*(b^~(a&(~b|c)))+11*((a&b)^(b|~c))+7*(c^~(a&(~b|c)))-7*(~(a|~b)|(b^c))-2*(c^~(~a&(b&c)))-7*(c^(a&b))+2*(c^~(a&b))-5*(~(a&b)&~(b^c))-5*~(a|(b&c))+7*~(a|(b|c))-5*~(a|(~b|c))-8*~(~a|(b|c))-1*~(~a|(~b|c))+16*(~a&(~b&c))-1*(~a&(b&c))+14*(a&(~b&c))-15*(a&(b&c));
}

uint64_t target_441(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~(~d|(~e&f))-11*(e^~(~d&(e|f)))+4*((d&e)|(e^f))-6*(~d&(e|f))+1*(f^(d&e))+4*(e^(d&(~e|f)))+1*(f^(d|(e&f)))+4*~(e^f)+3*(e^(d|f))-1*~(d&~d)-3*(f^(d&(e|f)))-1*(~e&(d^f))+7*((d&e)|~(e^f))-1*~(~d&(e&f))-6*(e^(d|(~e|f)))-5*~e+2*(d|(e^f))+11*(~(d|~e)|~(d^(e^f)))+3*(f&(d|~e))-6*(e^~(d|(e&f)))-2*e-5*(~(d|~e)|~(e^f))+1*(~d&(e^f))+5*(f^(d|(~e&f)))-11*(e^(d&f))+4*(e&~(d&~f))+3*((e&~f)|~(~d|(~e&f)))+2*~(d&~f)-6*(f^~(~d&(~e&f)))+12*~(d|(e|f))+8*~(d|(~e|f))-15*~(~d|(~e|f))+16*(~d&(~e&f))+2*(~d&(e&f))+3*(d&(~e&f))-19*(d&(e&f));
}

uint64_t target_442(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(b^~(~a&(b^c)))-5*(c^(~a&(b|c)))+3*(b^~(a|(b^c)))+1*(c^(~a|(b|c)))-11*(~(a&b)&~(b^c))-3*~(b|c)-6*(~(a|b)|~(a^(b^c)))-2*(a^(b&c))+7*(b&(a^c))+4*(b^~(~a&(b|c)))-2*((a&~b)|(a^(b^c)))+7*~(a|(b^c))+1*(b^(~a|(~b&c)))-11*(~(a|~b)|~(b^c))+5*(a^c)-2*(b^~(a|~c))+17*~(a|(b|c))+12*~(a|(~b|c))+22*~(~a|(b|c))-9*~(~a|(~b|c))+4*(~a&(~b&c))+10*(a&(~b&c))+14*(a&(b&c));
}

uint64_t target_443(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*(x^y)-11*(x|y)-3*~y+7*~(x^y)-1*~(x&~x)-2*(x|~y)+14*~(x|~y)+19*(x&~y)+7*(x&y);
}

uint64_t target_444(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*(x|~y)-2*y+4*~x+1*~(x|y)-2*~(x|~y)+5*(x&~y);
}

uint64_t target_445(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*(z^t)+3*~z-7*z-3*~(z|t)-14*~(z|~t);
}

uint64_t target_446(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*~(z&~z)+2*~(z&~t)+7*(z^t)-6*z+3*(z|~t)-3*~(z|t)-7*~(z|~t)+3*(z&t);
}

uint64_t target_447(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(e^~(d&(e|f)))-5*((d&f)^~(d^(e&f)))-5*((d&e)^~(d^(e&f)))+1*(~d|(e|f))+1*(~e|~(d^f))+5*(e&~(d&~f))+1*(e^~(~d&(~e|f)))-2*(e&(d^f))+1*(~d|(e&f))-1*(d|e)-11*(d&f)-1*(e^~(d&(~e|f)))+1*((e&~f)^(~d|(e^f)))+3*(f^(~d&(~e|f)))-2*~f+11*~(d&f)+5*((d&f)|(e&~f))+4*(e^~(d|~f))+5*((d&e)|~(d^(e^f)))-1*((d|~e)&~(e^f))-7*(d^(e&f))+11*(e^~(d&f))-7*(e^(d|(e|f)))+2*(d&~f)+4*~(~d|(e^f))+11*(d^f)-1*(e&(d|~f))+3*~(~d&(e^f))-11*(e^~(d|f))-1*(d|(e|f))-1*(e^~(d&(e&f)))-1*(f^~(~d&(e&f)))-1*e+1*(~(d|e)|~(d^(e^f)))+2*(d^(e|f))+2*(e|(d&f))+1*((d&e)|(d^(e^f)))+4*(~(d&~e)&(d^(e^f)))+7*((d&f)^(d^(e&f)))+2*(d^(e^f))+2*((d^e)&(d^f))-1*(f^(d|(e&f)))+7*((d&e)|~(e^f))+5*(e^(~d&(e|f)))-3*~(e^f)-6*(e^(~d|(e&f)))-6*((d&~e)|~(e^f))-7*(d|(~e|f))-6*(e^(~d&(~e|f)))-1*(e^~(~d|(~e&f)))-3*(e|~(d|f))+5*(f|(d&~e))-6*(e|f)-6*~(d|f)+4*((d^e)&~(d^f))-11*(d&(e|f))-11*(d^(~e&f))-7*(d&(~e|f))-7*(f&~(d&e))-2*(~d|(~e|f))+1*(~f&~(d^e))-1*(f^~(~d&(~e|f)))+7*((d&e)|(e^f))+7*(d^(~e|f))+2*((e&~f)^(d|(e^f)))+2*(e^~(d&(~e&f)))+1*((d|~e)&~(d^(e^f)))+7*(f^~(d&(e|f)))-5*(~(d|~e)|(d^(e^f)))+7*~(d|(e|f))-7*~(d|(~e|f))-4*~(~d|(e|f))+18*~(~d|(~e|f))-6*(~d&(~e&f))-7*(~d&(e&f))+41*(d&(~e&f))+8*(d&(e&f));
}

uint64_t target_448(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~(x&~x)+4*(x|~y)+1*(x^y)+1*~(x|y)+5*~(x|~y)+1*(x&~y)+1*(x&y);
}

uint64_t target_449(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*(e^(d&f))-3*(~(d&e)&~(e^f))-1*(d|~f)+5*~(d^(~e|f))+7*(~(d^e)&(d^f))+5*(e^(d|~f))+4*(d|(e|f))+11*(f^(~d|(~e|f)))-11*~(d&(e|f))+4*(f^(d&(e|f)))-1*(e^(~d|(e|f)))+4*(e^(d|(e|f)))-7*~(d^(e|f))-2*(f^(~d|(~e&f)))-2*~(~d&(e^f))+5*(~e&(d^f))-2*~(d|(e^f))+1*((d&~e)|~(e^f))+2*(e|~f)+1*(f^~(d&(e|f)))-3*(d^f)-2*~(d^(~e&f))-11*(f^~(d|e))+1*(f^(~d|(e&f)))+4*(e^~(d|f))+2*(e^~(~d&(~e|f)))+4*((d|e)&~(d^(e^f)))-3*(f&~(d^e))-5*~(d&~d)+7*(~(d|~e)|(d^(e^f)))-2*~(d&f)-6*(~d|(~e&f))-2*(~(d&~e)&~(e^f))-5*(f^~(~d&(e|f)))+9*~(d|(~e|f))-15*~(~d|(e|f))+10*~(~d|(~e|f))+5*(~d&(~e&f))+32*(~d&(e&f))+18*(d&(~e&f))+8*(d&(e&f));
}

uint64_t target_450(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(x|~y)-3*~(x&~y)-1*~(x&~x)-11*x-1*~y+3*y+2*(x|y)-7*~x+5*~(x|y)+6*~(x|~y)+4*(x&~y);
}

uint64_t target_451(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*z+1*(z^t)-5*~(z&t)-3*(z&~t)-7*(z&t);
}

uint64_t target_452(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*((b&c)|(a&(b|c)))+11*(b|(a^c))-2*(a^(b|c))-3*(b^(~a|(~b&c)))+7*(b&~(a&~c))+1*(c^~(a&~b))-1*~(~a|(b^c))+7*(b^(a|(b^c)))-7*(~(a&~b)&~(b^c))+2*(c^~(a&(~b&c)))+5*(~(a&b)&(a^(b^c)))+11*~(a&(b^c))+7*~a-7*(a|(~b&c))+5*(b&~(a^c))-1*((a^b)|(a^c))+3*(~(a^b)&~(a^c))+3*(b^~(a|c))+2*(c^(a|(b|c)))+5*(~b|(a^c))+2*((a&c)|~(b|c))+11*((a&c)^~(a^(b&c)))-3*(c^(a|~b))-7*(a^(~b|c))-3*(~b|~(a^c))-7*(a|(b&c))-5*((a&b)^(a^(~b|c)))+2*(c|(a&b))-6*(~(a|b)|~(a^(b^c)))-2*~(a^b)+2*(a|~b)-2*(a&c)+1*(b^(a&c))+3*~(a|(b&c))-11*((a&c)|(b&~c))+2*(b^~(~a&(~b&c)))-5*~(~a&(~b|c))-1*(b^(a&(b|c)))-2*~(a|~b)-5*(b&c)-2*((a|b)&(b^c))-11*~(a|(b|c))-34*~(a|(~b|c))-15*~(~a|(b|c))+20*~(~a|(~b|c))-28*(~a&(~b&c))-13*(~a&(b&c))+13*(a&(~b&c))+7*(a&(b&c));
}

uint64_t target_453(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(z&t)+5*z-7*~(z|t)-12*~(z|~t)-12*(z&~t)-15*(z&t);
}

uint64_t target_454(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~(x^y)+2*~(x&~y)+5*(x|~y)-2*~(x&~x)-10*~(x|y)-14*(x&~y)-10*(x&y);
}

uint64_t target_455(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~(x&~x)-11*~y-1*x+6*~(x|y)+7*(x&~y)-4*(x&y);
}

uint64_t target_456(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*(z^t)+1*t-1*z+1*~(z&~t)-2*~t-1*~(z|t)-1*~(z|~t)+4*(z&~t)-3*(z&t);
}

uint64_t target_457(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(x^y)+3*y-12*~(x|~y)-9*(x&~y)-14*(x&y);
}

uint64_t target_458(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*~(x^y)+2*(x|y)-7*~x-1*(x|~y)-3*y-1*~y+8*~(x|~y)+2*(x&~y)-7*(x&y);
}

uint64_t target_459(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(x&~y)-3*y+7*x-1*~(x&~x)-1*(x^y)-2*(x|~y)-1*~y+3*~(x|y)+4*~(x|~y)-2*(x&y);
}

uint64_t target_460(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*(z|~t)-11*~(z&~z)-5*~(z&~t)-6*~(z&t)-6*~(z^t)+1*~t+22*~(z|t)+17*~(z|~t)+12*(z&t);
}

uint64_t target_461(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*t+5*~(z&~z)-5*z-4*~(z|t)-3*~(z|~t)-4*(z&~t)+3*(z&t);
}

uint64_t target_462(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*(e^~(d&~f))-1*(f|~(d|~e))-3*(e|(d^f))-11*((d&f)^(d^(e&f)))-2*(d^(e&f))+3*(e|(d&~f))+2*(~d&(~e|f))+1*~(d^(~e&f))-3*(~(d&~e)&~(e^f))+5*~(e^f)+1*(e^~(d|~f))+3*(e|~f)+4*(e|~(d|~f))+1*(~f|(d^e))-5*((e&f)^~(~d&(e^f)))+1*(e^(d|(e&f)))+1*(f^~(~d&(e|f)))+1*((d|e)&(e^f))+7*~(~d|(~e&f))-6*(~(d|~e)|~(e^f))+4*((d&e)|(e^f))-5*~(d&e)+2*(e^(d|~f))-1*(e^(~d&(e^f)))-1*~(d^e)+7*(f^~(~d|(e&f)))-7*(~e|(d^f))-2*(f&~(d^e))-3*(~d|(~e|f))-1*(~(d&~e)&(e^f))+1*(~(d&e)&~(d^(e^f)))+3*(f^(d|(~e|f)))+11*(e|(d&f))-6*(~(d^e)&(d^f))+1*~(~d&(~e|f))+1*~(d|(e&f))-2*(e^~(d|(e^f)))+2*(e&(d^f))+11*~(d&(e|f))+7*(~d|(e|f))-6*((d|e)&(d^(e^f)))+2*((d&f)|~(e|f))-11*(e&~(d^f))-1*~(d&(~e&f))-11*~(d&~e)+1*((d&e)|~(e|f))+4*~(~d&(~e&f))-3*(~(d|e)|~(e^f))-7*((d&e)|~(e^f))-5*(d&f)-7*(e^~(d|(~e&f)))+5*~(d^(e|f))+3*~(d^(e&f))+2*(f^(d|(~e&f)))+11*(~f|~(d^e))+2*(e&f)+5*((d&e)|~(e|~f))+1*(e^(~d&(~e|f)))-4*~(d|(e|f))-24*~(d|(~e|f))-11*~(~d|(e|f))-20*~(~d|(~e|f))-13*(~d&(~e&f))-5*(~d&(e&f))-13*(d&(~e&f))-3*(d&(e&f));
}

uint64_t target_463(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*(c^(a|(b&c)))-2*(~(a|~b)|~(a^(b^c)))+1*~(~a&(b|c))-3*(b^~(a&(~b&c)))+2*(b|~(a|c))-1*(c^~(a|b))+2*((a^b)|(a^c))-1*(~(a&~b)&~(a^(b^c)))+7*(c^(~a|(b|c)))+11*(c&~(a^b))-2*(c|~(a|~b))+1*(b^(a|(b&c)))+5*(a&c)+4*(b^~(a|c))+7*((a&b)|(a^(b^c)))+1*((a&b)|~(b|c))+3*(b|~(a|~c))-1*(~b|(a^c))-3*((a^b)&~(a^c))-7*((a&c)^(b|c))+5*~(~a|(~b&c))+3*((a&c)^(a^(~b&c)))-1*~(b&c)+1*(c&(a|~b))+11*(~c|~(a^b))+5*(b^(a|(b^c)))-1*(~(a^b)|~(a^c))-6*(~(a|b)|~(a^(b^c)))+3*~(~a|(b&c))+2*(b^(a&(~b|c)))-1*((a|b)&(b^c))+1*((b&c)^~(a&(b^c)))-11*(b^~(a|(b&c)))+11*((a|b)&(a^(b^c)))+7*~(a^b)+11*(a|(~b&c))+1*((b&c)|(a&(b|c)))-11*~(a|(b|c))-34*~(a|(~b|c))-53*~(~a|(b|c))-32*~(~a|(~b|c))-28*(~a&(~b&c))+8*(~a&(b&c))-17*(a&(~b&c))-70*(a&(b&c));
}

uint64_t target_464(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(b^~(~a|(b&c)))-1*(b^~(~a|(~b&c)))+11*(~a|(b|c))+5*(b&(a^c))+4*(b&~(a&~c))+2*~(a|c)+11*(c^(a&b))+4*~(a&(b|c))-1*(b&~(a^c))-11*(a^(b&c))-3*(b^~(~a&(b|c)))-1*~(a&(b^c))+3*(c^(~a|(~b&c)))+7*((a&b)|~(b|~c))+4*(c&~(a^b))-6*(b^(a|~c))-2*(c^~(~a|(~b&c)))+1*((a|~b)&(b^c))+11*(c^~(a&(b|c)))-1*(c&~(a&~b))+2*((a&b)^(b|~c))+5*(b&c)-2*(a&(b|c))-5*~(a|~b)-11*~(b|c)-3*(~(a^b)&(a^c))-6*~(~a&(b|c))-1*(c|(a&~b))-1*(~c&~(a^b))+1*((b&~c)^(~a|(b^c)))-2*(b^(~a|(b|c)))+1*(b^~(a|(b&c)))+2*(b^~(a&(b|c)))+3*((b&~c)|~(~a|(~b&c)))-1*(~a|(~b|c))-1*((a&b)|~(b^c))+1*(c^(a|~b))+4*((a&c)^~(a^(~b&c)))+2*(~(a|~b)|(b^c))+5*(b^(a|(b&c)))-1*((a&~b)|(a^(b^c)))+1*((a^b)&~(a^c))-7*((a&b)^(b|c))+11*(a|c)+1*(a|(b&c))+1*(b^(~a|(~b|c)))-5*(b^(~a|(b^c)))-6*~(a|(b|c))-35*~(a|(~b|c))-33*~(~a|(~b|c))-34*(~a&(~b&c))-26*(~a&(b&c))-19*(a&(~b&c))-48*(a&(b&c));
}

uint64_t target_465(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*((d&f)^(e|f))-3*(~d|(e&f))-1*(e|(d^f))+5*(f&~(d^e))+7*(~f&(d^e))+3*(f^(d&(e|f)))-6*(~d|(~e|f))+3*(~d|(e^f))+1*(~(d|e)|(d^(e^f)))-1*(f^~(d&(~e&f)))-3*((d|~e)&~(e^f))-1*~(d&(~e|f))+2*(e^~(d&~f))+2*~(e^f)-6*~(e&~f)-5*(d&f)+2*(f^~(d|e))+2*(~(d^e)|~(d^f))-5*(e^~(d&(e&f)))-2*((e&~f)^(d|(e^f)))-3*(d^(e|f))+11*(~e&~(d^f))+1*(~(d|e)|(e^f))+3*(f|(d&~e))+7*(f&(d|e))-5*(e^(d&~f))-2*(e&(d^f))+5*(~(d&~e)&~(d^(e^f)))+11*(d|(e&f))-5*((d&f)^~(d^(e&f)))+1*(f|~(d|e))-11*(~(d|e)|~(e^f))+1*(e^~(~d|(e^f)))-5*(~(d|e)|~(d^(e^f)))-1*(~e|(d^f))+4*(~(d&~e)&~(e^f))+13*~(d|(e|f))+21*~(d|(~e|f))+18*~(~d|(e|f))-7*~(~d|(~e|f))+39*(~d&(~e&f))+12*(~d&(e&f))-8*(d&(~e&f))+9*(d&(e&f));
}

uint64_t target_466(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*~y-11*x+11*~(x&~x)-14*~(x|y)-3*(x&~y);
}

uint64_t target_467(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*~(z&~z)+2*(z^t)-7*~t+3*z+2*~(z&t)+7*~(z&~t)+1*~(z|t)+3*(z&~t)-5*(z&t);
}

uint64_t target_468(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*~(x&~y)+2*~(x&~x)-7*(x|y)-6*x-6*~(x|~y)+11*(x&~y);
}

uint64_t target_469(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -7*(e^(d|~f))+5*((d&e)^~(d^(e&f)))+11*(f^~(d&(e|f)))+1*(d&~e)+2*(e^~(d&(e&f)))+3*((d|e)&(e^f))-11*~(~d&(e&f))-1*(d^(e^f))+1*(e|~f)-2*(~f|~(d^e))-1*(f^(d&e))+4*((d&f)^~(d^(e&f)))+2*(e^~(~d&(e&f)))-6*(e^~(d&(~e&f)))-5*(f|~(d^e))+4*~(~d&(e|f))-11*(f^(d|(~e|f)))-5*((e&f)^~(~d&(e^f)))-6*((d&f)^(d^(~e&f)))+1*(e^~(~d&(e|f)))-6*(e^~(~d|(e&f)))-1*(d^(e|f))+2*~f+5*(~(d&~e)&(d^(e^f)))+1*(e&(d^f))+3*(e^~(d&(e^f)))+2*(e|f)-11*(e^~(d&f))+1*((d&e)|(d^(e^f)))+5*(~(d|~e)|(e^f))-3*((d|~e)&~(e^f))-1*(e|~(d|~f))+1*(f|(d^e))+1*((d&e)^(d^(e&f)))-2*(f|~(d|~e))+5*(e^~(d&(~e|f)))+2*(~f&(d^e))+4*(e^(~d&(e^f)))+11*~(d^(e|f))+1*~(~d|(~e&f))+7*((d^e)&(d^f))-2*(~e|(d^f))-2*(d^(e&f))+1*(e&~f)+1*(f^(~d&(~e|f)))-6*((d&f)^(e|f))+2*d+1*(e^~(~d&(~e&f)))-7*f+2*~(d^(e&f))+5*(e&~(d^f))+1*~(d&(e|f))-11*~e-7*(d|(e&f))+1*(~(d|~e)|~(e^f))+1*(d&(~e|f))-1*(~(d|e)|~(e^f))-11*(~(d&~e)&~(e^f))-1*~(d&~f)-7*((d^e)|(d^f))-1*(d|(e^f))-2*(e^(~d|(~e&f)))+7*(e^(d&(e|f)))-2*(~(d^e)&(d^f))-6*((d&f)^(d^(e&f)))-1*(f^(d|(~e&f)))+11*(e&(d|~f))-2*(~(d^e)|~(d^f))+1*(d|~e)+5*(e^(d&(~e|f)))+3*(f^(d|(e|f)))-2*((d&e)|~(d^(e^f)))-1*(f^(d|(e&f)))-1*~(d&(e^f))+47*~(d|(e|f))-26*~(d|(~e|f))+58*~(~d|(e|f))+28*~(~d|(~e|f))+62*(~d&(~e&f))+52*(~d&(e&f))+24*(d&(~e&f))+24*(d&(e&f));
}

uint64_t target_470(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*~z-3*~(z&~t)+11*(z|~t)+7*~(z&~z)+2*(z|t)-15*~(z|t)-3*~(z|~t)-23*(z&~t);
}

uint64_t target_471(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*~(x&~y)-5*~y+1*y-7*(x|y)-6*~(x&~x)+2*~(x^y)+12*~(x|y)+15*~(x|~y)+19*(x&~y);
}

uint64_t target_472(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 4*(x|y)-2*(x|~y)-5*~(x&~y)+7*~x+3*~(x&~x)+3*~(x&y)-1*~y-12*~(x|~y)-7*(x&~y);
}

uint64_t target_473(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*t-1*~z+5*~(z&~z)+1*~(z&t)-6*z-3*~(z&~t)-3*~(z|t)-2*~(z|~t)+6*(z&~t)+3*(z&t);
}

uint64_t target_474(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -5*(z|t)-3*~t+1*~(z^t)+3*(z^t)+7*(z|~t)-6*~(z|t)+1*~(z|~t)-2*(z&~t)-4*(z&t);
}

uint64_t target_475(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(x&~x)+1*~x-11*y-1*x-2*~(x^y)+1*(x^y)+7*~(x|y)+15*~(x|~y)-1*(x&~y)+20*(x&y);
}

uint64_t target_476(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*((d&e)^(d^(~e|f)))-1*(d^(~e|f))+4*(~(d&e)&(d^(e^f)))-7*~(d&e)-1*((d|e)&(e^f))+4*(f&~(d^e))-2*(f^~(d&(~e|f)))-11*(f^~(d&(~e&f)))-7*((d&e)^(e|~f))+2*((e&~f)|~(~d|(~e&f)))+11*(e^(d|~f))+2*(f^~(d|(e&f)))+1*(e^~(d&(~e&f)))-2*(e^~(~d&(e^f)))+4*~(d^(~e&f))-11*(f&(d^e))+1*(~(d|e)|~(d^(e^f)))-5*(f^(d|(~e&f)))-3*(d|e)+3*((d^e)|~(d^f))+1*((d|~e)&(e^f))+2*((d&~e)|(e^f))+11*~(d^(e&f))-5*(~(d|~e)|~(d^(e^f)))-1*(e&~(d&f))+1*(~(d^e)&~(d^f))-1*((d|~e)&~(e^f))-2*~(~d&(~e&f))-2*(f|~(d|e))-6*(d|(e^f))-7*(~d|(e&f))+2*(e^(~d|(~e|f)))+4*(e^(~d&(~e|f)))-1*(e^~(~d&(e&f)))-6*~(d&(e|f))+11*~f+4*(d^(~e&f))-6*(d^(e|f))-1*(~(d&~e)&(d^(e^f)))+2*~(d&(e^f))+3*(e|(d&~f))-11*~(~d&(~e|f))-1*(d&(~e|f))-11*(f^(~d|(~e|f)))-5*(f^~(~d&(~e|f)))-3*(d|(~e|f))-1*~(d^(e^f))+1*((d&f)^~(e&~f))+5*(~f&~(d^e))+5*(e^(~d&(e^f)))+5*((d&f)^(d^(e&f)))-3*(~(d|e)|(e^f))+11*~(d&~f)+1*~(e|~f)-1*(e^(d&(e^f)))+1*(e^~(d|~f))+3*(f^~(d|~e))-5*(f^(~d|(e|f)))-5*((e&~f)^(d|(e^f)))+2*(d&e)+1*(f^(d|(e|f)))+2*(~(d^e)|(d^f))+5*((e&f)|(d&(e|f)))-3*(e^~(d&(e^f)))-5*(e^(d&~f))-7*(d|(e&f))-6*(~d|(e|f))-2*(e^~(d&(e&f)))-1*(f&(d|e))+5*~(d|(e&f))-5*(e^(d&(~e|f)))+1*(e|~(d|~f))-1*(d^f)-1*(~f|~(d^e))+15*~(d|(e|f))+50*~(d|(~e|f))+63*~(~d|(e|f))+33*~(~d|(~e|f))+3*(~d&(~e&f))+46*(~d&(e&f))+55*(d&(~e&f))+1*(d&(e&f));
}

uint64_t target_477(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*~x-1*x-2*~(x&y)+2*~y+3*~(x&~x)+2*(x|~y)+1*~(x&~y)-2*~(x|y)+4*~(x|~y)-7*(x&y);
}

uint64_t target_478(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(z&t)+2*(z^t)+11*~t+5*~(z&~z)-1*(z|~t)-14*~(z|t)-6*~(z|~t)-16*(z&~t);
}

uint64_t target_479(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -6*(~(d^e)&(d^f))-5*(f^(~d|(e|f)))+5*(~(d|e)|~(e^f))-11*(f&(d^e))+7*(e&(d|~f))+5*(~(d&e)&(d^(e^f)))+2*((d&e)|~(e^f))-7*(e^~(d|f))-11*(d^(e&f))-11*~(~d&(e^f))-6*(e^(~d&(e^f)))+2*((d&f)^(e|f))-6*~(~d&(e|f))-7*(f^(d|(e&f)))+2*(d^(e|f))+3*((d^e)&(d^f))-6*(f^(d|e))+5*(~f&(d^e))-6*((d|~e)&(e^f))+11*(f^(~d&(e|f)))-7*(e^~(d|(~e&f)))-2*(f^~(d|(e&f)))+11*(d&(~e|f))+2*(e^~(~d&(e^f)))+2*~(d^(e|f))-2*((d&e)|(d^(e^f)))+1*(~d|(~e&f))+1*(d&(e|f))+1*~(e|~f)-3*(d&~f)+3*~(d&(e|f))-1*(e^(~d|(e&f)))-5*(~f|~(d^e))-5*((e&f)|(d&(e|f)))-7*~(d&~f)-6*(~(d|~e)|~(e^f))-1*((d|~e)&~(e^f))+7*(d|e)+7*((d|e)&(e^f))-7*((d&~e)|(d^(e^f)))+4*(e^(~d&(~e|f)))-11*(~(d|~e)|(d^(e^f)))+7*(f|(d^e))+11*((e&~f)|~(d|(~e&f)))-1*~(d|(~e&f))-5*(~(d&~e)&(d^(e^f)))+2*~(d^(e^f))+4*~(d|e)+1*(~(d|~e)|(e^f))-3*((d&~e)|~(d^(e^f)))+1*~(d&~e)+2*(~(d&e)&(e^f))-1*(f&~(d&e))-1*(~(d^e)|(d^f))-1*(e&~(d&~f))+2*((d|e)&~(d^(e^f)))-2*(f^~(d|e))+3*~(d|(e&f))-1*((e&~f)|~(~d|(~e&f)))+5*(~(d&~e)&~(e^f))+1*(~(d&e)&~(d^(e^f)))+4*(~f&~(d^e))+1*(~d|(e^f))-2*((d&e)^(d^(~e|f)))+2*(d^f)-2*(e^(d|(~e|f)))+11*(e|(d&~f))+1*(f^(d|(~e&f)))+18*~(d|(e|f))-32*~(d|(~e|f))+17*~(~d|(e|f))+26*~(~d|(~e|f))+26*(~d&(~e&f))+18*(~d&(e&f))+10*(d&(~e&f))+16*(d&(e&f));
}

uint64_t target_480(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*~(x&~y)-2*(x^y)-5*~(x|y)+3*~(x|~y)+8*(x&~y);
}

uint64_t target_481(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 5*((d|~e)&(d^(e^f)))-6*(e&~(d^f))-11*((d&e)|~(e|f))-2*(~(d^e)&(d^f))+1*((d^e)&(d^f))+1*(e^(d|(e|f)))-5*~(d&~f)+2*(e^(~d&(e|f)))-11*~e+11*(~(d&~e)&~(e^f))+7*(d|(e&f))-11*(d|f)+4*(e|(d&f))+5*~f+1*(e|(d&~f))-2*~(d&f)-2*((d&~e)|(d^(e^f)))-7*((d&~e)|~(e^f))+7*((d^e)|(d^f))-1*~(d^(e^f))+1*(d^(e|f))-7*(d|(~e|f))-5*(e^~(d&(e&f)))-3*(~(d|~e)|(d^(e^f)))+2*(e|~(d|f))+5*~(d&(e|f))-11*(e|(d^f))+4*(f^(~d|(~e&f)))+5*~(d&~e)-1*(e^(~d|(e|f)))+3*e+11*(e^(~d&(e^f)))-5*(~(d^e)|~(d^f))+1*(e^(d&~f))-2*((d&f)|(e&~f))-2*(e^~(d&(~e|f)))+2*(f^(d&~e))+11*((d&~e)|~(d^(e^f)))+11*(~f&~(d^e))-5*(e^~(d&(~e&f)))-3*(f^(d|(~e|f)))-1*(e^~(d&f))+4*(f^~(d&(~e&f)))-2*((d&e)^~(d^(e&f)))+4*(d&(~e|f))-3*(~(d|e)|(e^f))+2*(d&(e|f))-1*(e&f)+3*~(d&(~e|f))-7*(e&~(d&f))-3*(f|~(d|~e))-5*((d&e)^(d^(e&f)))-1*~(e|~f)+1*(e^f)-6*~(d^f)+6*~(d|(e|f))+11*~(d|(~e|f))+30*~(~d|(e|f))-11*~(~d|(~e|f))+40*(~d&(~e&f))-12*(~d&(e&f))+35*(d&(~e&f))+19*(d&(e&f));
}

uint64_t target_482(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*(e^(d|(~e&f)))-1*~(d&(e^f))+2*(e^~(d|f))+1*((d|e)&(d^(e^f)))-6*(~(d|~e)|(d^(e^f)))-3*(e|~(d|f))-1*~(d^(e&f))+4*(~d|(e&f))+1*(e^f)+11*((d&f)^(e|f))-1*(e^~(d&(e&f)))+7*(e^(d&f))+2*(e^~(~d|(e^f)))+2*(e|~f)-1*~(d&e)-11*(f&(d^e))-7*(~f&~(d^e))-2*~(~d&(e^f))-1*~(~d&(e|f))+3*(d&(e^f))+1*(e^~(d|(e&f)))+7*~(~d&(~e|f))+1*(~(d|~e)|~(d^(e^f)))-6*(~(d&~e)&~(e^f))-1*(f^(d|(e|f)))-11*~(e|f)+2*((d&e)|(d^(e^f)))-3*((d&f)^(d^(e&f)))+1*((d&e)|~(e|~f))+2*((d|e)&~(d^(e^f)))-2*(d^(e&f))+3*~(d&(~e&f))+5*~(d^(~e|f))+1*((d&f)^(d^(~e&f)))+5*~(~d|(e^f))+4*(~e&~(d^f))-5*(~(d|e)|(d^(e^f)))-5*(d&~e)+7*(e^~(~d&(~e|f)))+7*(f^(~d&(e|f)))-1*(~(d|~e)|(e^f))-6*((d^e)&(d^f))+2*(e|~(d^f))+1*((d&~e)|~(d^(e^f)))-7*((d|e)&(e^f))+11*(f^~(d&e))-2*(e^(~d|(e&f)))+7*(~(d|e)|~(e^f))+4*(~d&(e|f))+2*~(d^e)+3*~(~d|(e&f))+5*(f^(~d|(e|f)))-6*(f^~(d|e))-5*((d&e)|~(e^f))+2*((e&~f)^(~d|(e^f)))+2*(d|f)+6*~(d|(e|f))-47*~(d|(~e|f))-10*~(~d|(e|f))-27*~(~d|(~e|f))-23*(~d&(~e&f))-10*(~d&(e&f))-22*(d&(~e&f))-26*(d&(e&f));
}

uint64_t target_483(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*(z^t)+5*~t-1*~(z&t)+1*~(z&~t)-3*t-4*~(z|t)+2*~(z|~t)-5*(z&~t)+3*(z&t);
}

uint64_t target_484(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -2*(f&~(d&~e))-2*(f^(d|(~e&f)))+4*(f|(d&~e))+2*(~(d^e)&~(d^f))+1*(e^(d&~f))+7*(~e&~(d^f))+2*(~d|(e^f))-7*(f^(~d|(~e&f)))+1*(f^(d|(~e|f)))+2*(f^(~d|(e&f)))+5*(~d&(~e|f))+2*(~(d|e)|(e^f))-5*(f^~(~d&(e|f)))+1*(d&~f)+11*(~(d|~e)|~(e^f))-3*~(d&(~e|f))-1*~(d&~d)-1*(~d|(~e&f))+2*(~(d&e)&~(d^(e^f)))+4*(~e|(d^f))-1*d-7*(e^(~d&(e|f)))+5*(d^(e&f))-11*(f^(~d&(~e|f)))+2*~(d&(e|f))-6*((d&e)|~(e^f))-2*~(d^(e^f))-3*(f^~(~d|(e&f)))-3*(~(d&~e)&(d^(e^f)))-6*((d&e)|(e^f))-6*(e|~(d|f))+4*(e&(d^f))-3*((d&f)^(d^(e&f)))-1*((d|~e)&(e^f))+5*(e^(d|~f))-1*(f|~(d|e))-11*(f^(d&e))-6*(e^(~d&(~e|f)))+1*((d^e)&(d^f))-2*(e|~(d^f))-3*(e^(d&(e^f)))-11*(e^(d|(~e&f)))-1*(~(d&e)&(d^(e^f)))-2*(~(d&~e)&(e^f))+3*~(d|~f)+1*(d|(e|f))+1*~(d&(e&f))-2*(e^~(d|(e^f)))-5*(~(d&~e)&~(e^f))-5*((d&e)^~(d^(~e|f)))-2*~e-1*(f|(d&e))-1*(e^~(~d|(e&f)))+2*(f|~(d^e))+4*~(d^(e&f))+1*~(d&(~e&f))-1*e-2*((d|~e)&(d^(e^f)))+12*~(d|(e|f))+34*~(d|(~e|f))+5*~(~d|(e|f))+57*~(~d|(~e|f))+38*(~d&(~e&f))+16*(~d&(e&f))+23*(d&(~e&f))+54*(d&(e&f));
}

uint64_t target_485(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*(b|~(a|c))-3*((b&~c)^(a|(b^c)))-1*(~b&(a^c))-7*((a&c)|(b&~c))+11*(~(a^b)|~(a^c))-6*(c|~(a|b))-1*(b&(a|c))-3*(b^(a|(~b|c)))+2*~(a|b)+1*(b^~(a&~c))-2*(~c&(a^b))-2*~(a|(b^c))-2*(~(a^b)&(a^c))+7*(c|(a&b))-1*(a&~b)-1*(c&(a^b))-1*~(a&(b^c))-5*(b^(a|~c))-6*((a^b)|~(a^c))+4*(b&~c)-7*((b&~c)|~(~a|(~b&c)))+2*~(~a&(~b&c))+7*(c^(~a|(b&c)))+2*(b^(a&(b^c)))-7*~(~a&(b^c))+4*(b^~(~a&(b|c)))-1*~(~a&(b&c))+7*(~a|(b|c))+4*(b&~(a&c))-6*((a&c)|~(b|c))-6*(b^c)+3*(b^(~a&(~b|c)))-1*(b&~(a^c))+5*(c^~(~a&(~b&c)))+1*~(a|c)+11*(c^~(a&(b|c)))-3*((b&c)|(a&(b|c)))+1*~(b|~c)-11*(b|c)-19*~(a|(b|c))-21*~(a|(~b|c))+18*~(~a|(b|c))-1*~(~a|(~b|c))+2*(~a&(~b&c))+15*(~a&(b&c))+10*(a&(~b&c))+12*(a&(b&c));
}

uint64_t target_486(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*~(e|f)+1*(e^~(d|~f))+2*(e&(d^f))+11*~(~d&(~e|f))-1*((d&~e)|(d^(e^f)))-2*(f^(~d&(e|f)))+2*~(d&~d)+5*((e&~f)|~(d|(~e&f)))-11*(f^~(~d&(e&f)))+2*(~f&~(d^e))-3*(~(d&~e)&(e^f))+11*(d|~f)-7*((d|~e)&~(d^(e^f)))-11*(f^~(~d&(e|f)))-6*(~d|(e^f))+1*~(~d|(~e&f))-3*((e&~f)^(~d|(e^f)))+1*(f^(d|(e&f)))-3*((d&e)^(d^(e&f)))+5*(d^f)+4*(f^(d|e))-7*(f^(d&e))+3*(d&~f)+11*(d&(e|f))+7*(e|~(d|~f))-5*(~(d&~e)&(d^(e^f)))+3*(f^(~d|(~e|f)))-2*((d&f)^~(d^(~e&f)))+4*(~(d&e)&(d^(e^f)))-2*(f|~(d^e))-5*(~(d^e)&(d^f))-1*~(d&(~e&f))-6*(e|(d^f))+5*(d&(~e|f))-1*((d&e)^~(d^(e&f)))-11*~(d|~e)+5*(e|f)+2*(d|(e&f))+4*(e|(d&~f))-2*(~f|~(d^e))+2*(e^(d|f))+1*~(~d|(e&f))+1*(f^~(~d&(~e|f)))-1*(d^(~e&f))-7*(e^(d&~f))+7*~(d^(e|f))-2*(f^(d|(e|f)))-5*(e^~(d|(e^f)))-6*~(d&f)-1*(f^~(d|e))+3*(e&~f)-3*((d|e)&(d^(e^f)))-2*(~(d^e)|~(d^f))+4*(~(d|e)|~(d^(e^f)))-1*(~f|(d^e))+1*(~(d&e)&(e^f))+1*(e^(d|(e^f)))-7*((d^e)|~(d^f))-1*(e^(d|(e&f)))-1*((d&f)^(e|f))-1*(~(d|e)|(e^f))-6*~(~d&(e|f))+5*(e^(d|~f))+4*((d&e)|~(e|f))+1*e-5*(~e|(d^f))+1*d-2*(d|(~e|f))-7*(d&~e)+1*(d^e)-1*(~(d&~e)&~(d^(e^f)))+11*(~(d&e)&~(e^f))+1*(e^~(d&(e^f)))+17*~(d|(e|f))+19*~(d|(~e|f))-12*~(~d|(e|f))-5*~(~d|(~e|f))+32*(~d&(~e&f))+36*(~d&(e&f))-6*(d&(~e&f))-17*(d&(e&f));
}

uint64_t target_487(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~x-1*~(x&y)+2*(x^y)+3*~(x|y)+1*~(x|~y)-1*(x&~y)+1*(x&y);
}

uint64_t target_488(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*(b^(a&~c))-1*(~b&(a^c))-1*(b^(~a&(~b|c)))+1*(b&~c)+4*~(~a|(~b&c))+1*~(a|(b|c))+8*~(~a|(b|c))-4*~(~a|(~b|c))+2*(~a&(~b&c))+11*(~a&(b&c))+8*(a&(b&c));
}

uint64_t target_489(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -3*(b|~(a|~c))+3*(a&(~b|c))-11*(~a|(~b|c))-7*b-3*~(~a|(b&c))+1*(c^~(a&(~b&c)))-2*~(a&(b^c))-7*(c^(a|(b|c)))+1*(~b&(a^c))+1*(b^(~a|(b&c)))-2*(b^(a|(~b&c)))-6*(~(a&b)&(b^c))-1*~(a|b)+3*(c&~(a&~b))-3*(c^(a|(b&c)))-2*(b^(a&(b^c)))-2*((b&~c)|~(~a|(~b&c)))-11*~(b|~c)+7*(b^~(a&c))+2*(b^(a|c))-1*~(b&c)+3*~(a&~b)-1*(a&~c)+1*(~(a^b)|~(a^c))+4*(c^(a|b))+11*(b^~(~a&(~b&c)))-1*~(a|~b)-11*(c^~(a&~b))-1*(~a|(b&c))-5*(b^~(a|~c))-1*((a^b)&(a^c))+4*(a|(b^c))+1*(~(a&~b)&~(a^(b^c)))+2*(b^c)+11*(b|~(a|c))+1*(b|c)-3*(c|(a^b))+5*(c^(a&b))-6*~(a|(b^c))-1*((a&b)|~(b|~c))-3*(a&(b^c))+7*~(a|~c)+4*((a^b)|(a^c))-1*~(a&b)-2*((a&b)|(a^(b^c)))-5*(b^~(a|c))-2*(b^(a&(b|c)))-1*(a&(b|c))-1*(~(a|~b)|~(b^c))+3*(b^~(a&(~b|c)))-4*~(a|(b|c))+29*~(a|(~b|c))-5*~(~a|(b|c))+9*~(~a|(~b|c))+5*(~a&(~b&c))+8*(~a&(b&c))+21*(a&(~b&c))+10*(a&(b&c));
}

uint64_t target_490(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~y-7*~(x&y)+7*~(x|y)+8*~(x|~y)+7*(x&~y)+1*(x&y);
}

uint64_t target_491(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 2*~(x&~x)-3*~(x^y)+1*~(x|y)-4*~(x|~y)-4*(x&~y)-1*(x&y);
}

uint64_t target_492(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 1*~(x^y)+2*(x|~y)+4*~x-4*~(x|~y)-2*(x&~y);
}

uint64_t target_493(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 3*(z|~t)+11*~z+1*(z^t)-2*~(z&~t)+7*(z|t)+2*t-1*~(z|t)-10*(z&t);
}

uint64_t target_494(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 11*~(x&~y)-9*~(x|y)+2*(x&~y);
}

uint64_t target_495(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -11*((a&b)|~(a^(b^c)))-3*(~b&(a^c))-6*~(b|c)-6*((a|~b)&(b^c))-1*((a&b)|(b^c))+7*(b^~(a&(b|c)))-6*~(a&(b|c))+3*(a|(~b&c))+3*~(a|~c)-7*~(b&c)+11*((a^b)|(a^c))-2*~(~a|(b^c))+1*(c^(~a|(b&c)))+7*(a&~b)-7*(c^~(a&~b))+7*(a^c)+1*(b|~c)-3*(~(a|~b)|~(a^(b^c)))+1*((a&~b)|~(a^(b^c)))+3*(b|(a&~c))+2*(~a|(~b|c))+1*(~(a|b)|(a^(b^c)))-2*(c^~(~a|(~b&c)))-3*(a|(b|c))+5*(b^(a|(~b|c)))-2*(b&(a^c))+2*(b^(a|(~b&c)))+3*(c^(a|~b))+14*~(a|(b|c))-4*~(a|(~b|c))-29*~(~a|(b|c))+1*~(~a|(~b|c))-11*(~a&(b&c))+3*(a&(~b&c))-5*(a&(b&c));
}

uint64_t target_496(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~(x&y)+4*(x|~y)+1*(x|y)-1*(x^y)+2*~(x|y)+1*~(x|~y)+2*(x&~y)-5*(x&y);
}

uint64_t target_497(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*x-6*y+2*~x+4*~(x&y)-2*~(x^y)+1*~(x&~x)-11*(x^y)+3*~(x&~y)-1*~(x|y)+14*(x&~y)+5*(x&y);
}

uint64_t target_498(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return 7*y-5*x-2*(x|~y)+2*~(x|y)-8*~(x|~y)+6*(x&~y)+2*(x&y);
}

uint64_t target_499(uint64_t x, uint64_t y, uint64_t z, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f, uint64_t t){
		return -1*~y+3*~x-2*(x|y)-4*~(x|y)-3*~(x|~y)+3*(x&~y);
}

