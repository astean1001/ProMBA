/*
 * - Grammar definition: {'bitsize': 64, 'variables_names': ['a', 'b', 'c', 'd', 'e'], 'variables_sizes': [64, 64, 64, 64, 64], 'operators_names': ['ADD_64', 'MUL_64', 'OR_64', 'AND_64', 'SUB_64', 'NEG_64', 'XOR_64', 'NOT_64']}
 * - Inputs: [{'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}, {'a': 42, 'b': 42, 'c': 42, 'd': 42, 'e': 42}]
 * - Min vars: 2, Max vars: 3
 * - Min derivations: 4, Max derivations: 10
 */

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

uint64_t target_0(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((b-(b&b))&b)*(b^e))+(((b^e)^b)*(e&e))));
}

uint64_t target_1(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~((b*d)^(d*d)))-b));
}

uint64_t target_2(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e+(c|c))-(c+e))|(-(c&c))));
}

uint64_t target_3(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((~(-(e-(a&a))))&(-(e&(-c))))));
}

uint64_t target_4(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d^(~(d+a)))&(((a-d)|(a+(a&d)))^(~d))));
}

uint64_t target_5(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((a&e)*e)|c)|(e+a)));
}

uint64_t target_6(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b^b)|(e+b))^(-(((e|e)|(e*e))^(-e)))));
}

uint64_t target_7(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(((-c)-(a*c))&(-(a|c)))));
}

uint64_t target_8(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-e)-((e-(c+c))+((e|c)^(-e)))));
}

uint64_t target_9(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((a|c)|((a^c)-(-a)))^(~((b&a)^(~a)))));
}

uint64_t target_10(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(~a))*(~(e*d))));
}

uint64_t target_11(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((e-a)|(e&(e*(e-e))))));
}

uint64_t target_12(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~d)|(~(-b))));
}

uint64_t target_13(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(-(((-a)+(~(~a)))^((a-a)+a)))));
}

uint64_t target_14(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(~((a-(~e))-(e^e))))-(e-(e|e))));
}

uint64_t target_15(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~d)^(-(d+d)))^(~((~d)|((d^a)|a)))));
}

uint64_t target_16(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((-((e-c)^(e*c)))-(-(-(c&(~e)))))));
}

uint64_t target_17(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d-c)-(d|c))-(c|(c|c))));
}

uint64_t target_18(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d|(c|(c&d)))-((c|d)-(((d^c)|c)^d))));
}

uint64_t target_19(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((e&e)*(c-e))));
}

uint64_t target_20(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a-a)|((-e)^((a|a)+e))));
}

uint64_t target_21(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(-(~(-e))))-(a^(-(e*e)))));
}

uint64_t target_22(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((-(-(a^(a^a))))^((a|a)+(b+a)))));
}

uint64_t target_23(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(d&(-(~e))))^(d|d)));
}

uint64_t target_24(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(((-(~b))+(a-a))^(e|(b^(a-b))))));
}

uint64_t target_25(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(~((~b)&d))));
}

uint64_t target_26(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(c|b))*((c|b)^(b*(b-c)))));
}

uint64_t target_27(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(((a&a)^(a-a))-(~(-(a+(b|b)))))));
}

uint64_t target_28(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(-((((~c)+d)*((d*b)&c))-(~(-d))))));
}

uint64_t target_29(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(c&(b&a)))&(a^a)));
}

uint64_t target_30(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d-c)^(d+d))&((d*(c-d))&c)));
}

uint64_t target_31(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((-(b&e))&(~(b+b)))));
}

uint64_t target_32(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d+a)-(~((a|d)^(a-d))))&(a&d)));
}

uint64_t target_33(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(-b))-((-e)&((e^b)*a))));
}

uint64_t target_34(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a&(a^b))^(((a+a)*a)^(a^a))));
}

uint64_t target_35(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((((a-d)+a)-(-d))^((-a)-(~(d-d))))));
}

uint64_t target_36(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d&d)^(-d))^(b*(~b))));
}

uint64_t target_37(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((c+(~(c-c)))*((c|(e&e))|(~c)))));
}

uint64_t target_38(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(((b-b)^a)&(b+(b+(b|b)))))|((b&a)^b)));
}

uint64_t target_39(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(a|a))&((-(d|a))|b)));
}

uint64_t target_40(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b|(d*c))|((-b)+c))+(c&d)));
}

uint64_t target_41(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((-c)-(b|b))));
}

uint64_t target_42(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d|d)^((-d)+a))-(~((d+(~a))&(d^a)))));
}

uint64_t target_43(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c|(b-e))&b)^(~(~(~((c*c)-(c^c)))))));
}

uint64_t target_44(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b+(b-a))&((-(a|(a&a)))&((b+b)^b))));
}

uint64_t target_45(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e-(c-a))^((e|e)^(((c^a)&e)*a))));
}

uint64_t target_46(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((b^(-(~(a|a)))));
}

uint64_t target_47(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(((e&d)*(e^d))+(-d))));
}

uint64_t target_48(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d&d)-(d-(~d))));
}

uint64_t target_49(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((((a*(-b))^a)*(-(~(b-b))))+(d+a))));
}

uint64_t target_50(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e^(-c))+(e^(-e))));
}

uint64_t target_51(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e*e)-(-d))*(-((-e)+((e|d)^(d-d))))));
}

uint64_t target_52(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-b)|(-(b|(-b)))));
}

uint64_t target_53(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b^b)*c)|(b+(c*c))));
}

uint64_t target_54(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b^b)-(e+b))*((e+b)-e)));
}

uint64_t target_55(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((((d&b)^(c|c))-((c^b)*d))+((d-c)^c))));
}

uint64_t target_56(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b^b)+(b+a))^(((b*(~a))^b)^(a|a))));
}

uint64_t target_57(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((b+d)+b)*d)-b));
}

uint64_t target_58(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a|a)^(-(e*(e-b)))));
}

uint64_t target_59(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(~((e*e)-(c+(c&e))))));
}

uint64_t target_60(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((e^a)*(d+a))));
}

uint64_t target_61(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((d+((d|d)&a))-((b^b)*b))));
}

uint64_t target_62(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~c)-(-a))&(((c-c)-c)|(~a))));
}

uint64_t target_63(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(-((~(e^(c+e)))|(~(-c))))));
}

uint64_t target_64(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(d|(-e)))&(-b)));
}

uint64_t target_65(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(-((e+a)+(a^a))))|(a^b)));
}

uint64_t target_66(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(-((((~c)|d)-(b+b))+d))));
}

uint64_t target_67(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e^(a*e))+((~e)^e)));
}

uint64_t target_68(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c*((c*a)^a))|(c|a)));
}

uint64_t target_69(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b+(-b))-(-((a*c)*(c-c)))));
}

uint64_t target_70(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~(a+(b*b)))*(b|b))&((b*b)^(b+b))));
}

uint64_t target_71(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c+(d*d))-(-d))*(((c-b)^d)*(d^c))));
}

uint64_t target_72(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((d+c)&(c^c)))|((-c)-((c&c)+d))));
}

uint64_t target_73(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b|b)&a)|(b*a)));
}

uint64_t target_74(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(d&((a-d)*a))));
}

uint64_t target_75(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(c*d))-(((d|d)|(~d))^(c|c))));
}

uint64_t target_76(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(~(-((b-(b&b))+(a|b))))));
}

uint64_t target_77(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((a+d)&a)^(a+c)));
}

uint64_t target_78(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(d+(~b)))+d));
}

uint64_t target_79(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c+c)&((c+a)|(c*c)))-((a|(~(~a)))|c)));
}

uint64_t target_80(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~c)|(c*(b+c))));
}

uint64_t target_81(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((-((-a)-(a|(b-b))))&((b^b)*(~b)))));
}

uint64_t target_82(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c|(a^a))^(b*c))+(((a|b)+b)+(~(-c)))));
}

uint64_t target_83(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(b|(b*b)))^(~((b*(-e))^(e-(-b))))));
}

uint64_t target_84(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(e&e))-(~(-((e*d)|e)))));
}

uint64_t target_85(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(~((-(d&e))^((d^d)&((-d)|d))))));
}

uint64_t target_86(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((c&(b+(c*c)))&((c&d)|(b&c)))));
}

uint64_t target_87(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(e^e))+((a|c)&(c&(e^a)))));
}

uint64_t target_88(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(d-(b+(b&b))))*(-(c^(c^d)))));
}

uint64_t target_89(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~c)-(e+(a^e))));
}

uint64_t target_90(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((a*a)^(-(d&a)))|((d+a)^(d-d))));
}

uint64_t target_91(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-e)*((((b*d)+d)^(-b))+d)));
}

uint64_t target_92(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e-e)+(e*c))*(a-a)));
}

uint64_t target_93(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(b&e))|((c^c)*c)));
}

uint64_t target_94(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c+d)&(-d))*(-((-c)+(c+c)))));
}

uint64_t target_95(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d*c)*((c|c)^c)));
}

uint64_t target_96(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e&c)&((e+e)+(c*c)))-(~c)));
}

uint64_t target_97(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b-((b&b)-(~(d^b))))^(~(d+d))));
}

uint64_t target_98(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~c)+c)*((-(-d))^(~(c&(c*d))))));
}

uint64_t target_99(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b-c)^((c|c)^(c+b))));
}

uint64_t target_100(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(((c^(c&b))|c)^a)));
}

uint64_t target_101(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(e^e))^(((d+e)|(e+e))|d)));
}

uint64_t target_102(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((d+((-(e*d))-(a^a))));
}

uint64_t target_103(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d+a)-(a|(d|a)))^((d&a)&(d-d))));
}

uint64_t target_104(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a-a)&((d*d)^(d*a))));
}

uint64_t target_105(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((c+c)&(c|b))));
}

uint64_t target_106(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(~(-a)))*((~((b+b)|(a*b)))+(b+a))));
}

uint64_t target_107(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(~((((-e)+(e^(b^a)))&(~b))+(a&b)))));
}

uint64_t target_108(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-e)-((~e)+a)));
}

uint64_t target_109(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(~((((e|a)|a)-(d+a))^(((e^d)-a)^e)))));
}

uint64_t target_110(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((a^b)-b)^a)^(-(-b))));
}

uint64_t target_111(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((b&((-(-(b&b)))*((-a)^(a|(b*b))))));
}

uint64_t target_112(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(d|(d|(d&b)))));
}

uint64_t target_113(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e+(~e))^(((e&b)|e)-(-(-b)))));
}

uint64_t target_114(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(-(~(a+a)))));
}

uint64_t target_115(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((e&a)+d)|(d^d))|((a-(d|e))-(e|a))));
}

uint64_t target_116(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((d+((a*a)+(a^(e|d)))));
}

uint64_t target_117(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(-((~((e+b)-((c^c)-e)))^(~c)))));
}

uint64_t target_118(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b^c)^(b|(b|c))));
}

uint64_t target_119(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((d*d)^((~c)|c)))+((d^d)&(~d))));
}

uint64_t target_120(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(((b*d)^c)+((c+d)^d))));
}

uint64_t target_121(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((d*((b*d)-(((d^d)^b)|d))));
}

uint64_t target_122(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c+(~e))+((e-(c^b))*((-b)-b))));
}

uint64_t target_123(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(b^((d*d)+d))));
}

uint64_t target_124(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d+e)|((e+e)^d))*(d-e)));
}

uint64_t target_125(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((a|(b|b))^(d&d))));
}

uint64_t target_126(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d+c)*a)+(-(~(a|a)))));
}

uint64_t target_127(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((a|a)*((d+a)-(-(a-d))))^((a&a)&(d&a))));
}

uint64_t target_128(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a|(d|a))*((a|a)&b)));
}

uint64_t target_129(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((a-(~(-(-(-a))))));
}

uint64_t target_130(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a&(b^b))&(a&b)));
}

uint64_t target_131(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((c-c)|((c+c)|c)))&(-((d*d)+c))));
}

uint64_t target_132(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(-(-(c*(a*b))))));
}

uint64_t target_133(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e&(d*d))|(d^e)));
}

uint64_t target_134(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(e|((e|e)-b)))*(b-(b|(-e)))));
}

uint64_t target_135(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((a*e)-(e*(e+a)))-((-e)*(e-e))));
}

uint64_t target_136(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c|((e&b)|e))&((b*b)*c))^(b^(e*b))));
}

uint64_t target_137(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(-((a&a)&(a*e)))));
}

uint64_t target_138(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(~((c+c)*(c|(b-b))))));
}

uint64_t target_139(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(~(~(b*b)))));
}

uint64_t target_140(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b^b)^c)|(e|((e*c)|b))));
}

uint64_t target_141(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((-a)+(a^a))|(-a))^(a*a)));
}

uint64_t target_142(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((a-d)*(a^b))*((a*(a^b))^((~b)*(d-b)))));
}

uint64_t target_143(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(((a*c)|a)|(a-(-(b&a)))))^((-b)-b)));
}

uint64_t target_144(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d&c)+(-(c*a)))^(-((d-(~c))-(-c)))));
}

uint64_t target_145(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((a|a)&(~(-b)))*(c|c))*(-(~c))));
}

uint64_t target_146(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(b|(b&(-e)))));
}

uint64_t target_147(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e^c)&e)&(((c-e)*(a+e))&((a-c)^e))));
}

uint64_t target_148(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(-c))^((c^a)-a)));
}

uint64_t target_149(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~a)-(a+(a*d)))+((b^a)+(a&((b-a)^a)))));
}

uint64_t target_150(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c&(~c))-d)+(((d+a)|(-a))*a)));
}

uint64_t target_151(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(-(-(((a+e)*(b^a))*(b+a))))));
}

uint64_t target_152(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b^e)+(b+(e+e))));
}

uint64_t target_153(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((c*d)&(c+c)))^(~(~(-(d|d))))));
}

uint64_t target_154(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((d*(-((c&d)|c))));
}

uint64_t target_155(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a+(a|a))+(a-b)));
}

uint64_t target_156(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d+(-(~(-d))))-(b^d))-((b-d)*b)));
}

uint64_t target_157(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d-(b^b))*(b-b))*(((d*d)|d)+d)));
}

uint64_t target_158(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((e*e)*(a|e))|a)^(~((e^a)*(a-e)))));
}

uint64_t target_159(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-c)*(d-d))|(d|(d|c))));
}

uint64_t target_160(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d-a)+(d^d))^(a^d)));
}

uint64_t target_161(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d^d)|(-(d^(a^a)))));
}

uint64_t target_162(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~e)^d)&(d&(~(c-(d|e))))));
}

uint64_t target_163(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b^(-b))-b)+(((-d)+d)&(d|(b*b)))));
}

uint64_t target_164(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((-(-(d|e)))|((~(e-d))+(d-e)))));
}

uint64_t target_165(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~(d*e))*(d^(d^(e&e))))*(d^(d&d))));
}

uint64_t target_166(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c|(((-b)+c)|(~b)))+(-b)));
}

uint64_t target_167(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((b|b)*(~(e*(e-(b-b)))))));
}

uint64_t target_168(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(-(b*(-a))))|((b+a)^a)));
}

uint64_t target_169(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(((c*a)*(c-(e^a)))|(~((a*e)-(e&c))))));
}

uint64_t target_170(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-((d|a)-(a&e)))-(d*a))&((e^(a+a))|d)));
}

uint64_t target_171(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~((e*d)^e))+d)+(((-e)^d)+(d&(d^d)))));
}

uint64_t target_172(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((-(a+b))-(c&a)))*((a+(a|c))&(c+b))));
}

uint64_t target_173(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e+b)|(b|e))*((-b)^e)));
}

uint64_t target_174(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~b)^e)+(((b+b)^b)+((-e)^e))));
}

uint64_t target_175(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(~(((e+b)+b)|(-a)))));
}

uint64_t target_176(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(((d&(c^c))^((c-d)+(d|c)))|(~(c^c)))));
}

uint64_t target_177(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((d-c)+(~d)))|((-e)|(-(e-d)))));
}

uint64_t target_178(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(~((e|d)&e)))-(-((d|a)&(~a)))));
}

uint64_t target_179(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-d)-(e^e))+((e*e)&(-(-e)))));
}

uint64_t target_180(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a&b)-(~(e^e))));
}

uint64_t target_181(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((a*e)&e)*b)-((~b)^(a^(-(-e))))));
}

uint64_t target_182(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c-(a&c))-((c&(a+a))*c)));
}

uint64_t target_183(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d|d)^e)^((~(-((c|d)-c)))*(e-e))));
}

uint64_t target_184(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((~(d-d))&((a&(d^(d-a)))&d))));
}

uint64_t target_185(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((-d)*(~c))^d)+d));
}

uint64_t target_186(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(b^b))|((-e)-(b-b))));
}

uint64_t target_187(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c^b)+a)^((c|c)-(b+c))));
}

uint64_t target_188(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a+(-(b-(-a))))|((e&a)&(~b))));
}

uint64_t target_189(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c^c)&((c*b)&(b-b)))+((b^(b*b))&(~c))));
}

uint64_t target_190(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a^(a*a))^(~((d^a)|a))));
}

uint64_t target_191(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d+(c&c))+((~((c|(c+d))*d))|(~(d&d)))));
}

uint64_t target_192(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d+(d*(d+a)))+(d&a)));
}

uint64_t target_193(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e-(a+a))+(~(c&(c^c)))));
}

uint64_t target_194(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b|(e|b))+(b|b)));
}

uint64_t target_195(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a*e)^(d-(e&e))));
}

uint64_t target_196(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((d&e)&b)-(((b&d)-e)+e))+(b^(-(e-d)))));
}

uint64_t target_197(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((a|a)|c)-(~(-(~(a&((c-a)+c)))))));
}

uint64_t target_198(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e*c)|(c|(e|b))));
}

uint64_t target_199(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((e*((-e)&e))|((d-e)-(d&d)))));
}

uint64_t target_200(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~c)*e)-((c-c)&(c+(e^e)))));
}

uint64_t target_201(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c*(((a*c)^c)|a))+(a-a)));
}

uint64_t target_202(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e-e)+((a&e)*a)));
}

uint64_t target_203(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c^e)+(-(a-c)))*(((c&e)+c)&a)));
}

uint64_t target_204(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(((c-(-c))|(~(c-d)))*(a*(c|a)))));
}

uint64_t target_205(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((e+e)-((e|a)*e)))*(~(a&e))));
}

uint64_t target_206(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c-(-a))|(e*c))+(a^(e*e))));
}

uint64_t target_207(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(-(~((b+b)+((-a)*e))))));
}

uint64_t target_208(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c+(-d))-((c^e)-c)));
}

uint64_t target_209(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((a^(d|a))*a)+(a|(-(a&(a^d))))));
}

uint64_t target_210(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((e^((e-a)-e))&a)));
}

uint64_t target_211(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e-(e|(~e)))-d)*(((b-b)|b)-(b+(-d)))));
}

uint64_t target_212(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((a&(~((~c)|(~(e+(~(e&e))))))));
}

uint64_t target_213(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((((~a)+d)&(-b))^(((b-d)^b)*(~b)))));
}

uint64_t target_214(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~((e&e)+(b-b)))^((b^b)+b)));
}

uint64_t target_215(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b-(-a))&(a|(b&a))));
}

uint64_t target_216(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c&a)-a)*(-(a|(a^(a+c))))));
}

uint64_t target_217(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b*((b-(a^d))-((~b)|(a+d))))&((b*a)-a)));
}

uint64_t target_218(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-a)|(~e))&(-a)));
}

uint64_t target_219(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(b&c))|(e|c)));
}

uint64_t target_220(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((d+((e|d)^((d^d)^e))));
}

uint64_t target_221(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((~c)-c)|e)+(a+a)));
}

uint64_t target_222(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(c*c))|((c|(b-c))^(c^c))));
}

uint64_t target_223(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((d&a)-d)|(e+d))|(e*d)));
}

uint64_t target_224(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b^(a-(-b)))*a)*((-(-a))-(a-a))));
}

uint64_t target_225(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~(e*c))+(c&(b&e)))&((b^e)*(e-b))));
}

uint64_t target_226(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((((e|e)&(e&e))^(~a))+(a|(-a)))));
}

uint64_t target_227(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b&c)-(c*b))|(((~b)^c)^(-(-c)))));
}

uint64_t target_228(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c&b)-e)^((b&c)*(-b))));
}

uint64_t target_229(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d|(d+b))+d)-((~(-(b*a)))^(b+b))));
}

uint64_t target_230(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b|d)&(d*(a*b)))^(((d^b)+b)*(d^(b^a)))));
}

uint64_t target_231(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((b^b)-c)-e)+((c*e)|(b-b))));
}

uint64_t target_232(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((d-c)|(~(d&d)))));
}

uint64_t target_233(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(~((c+d)-(-c))))-(c|b)));
}

uint64_t target_234(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((b+(-b))|b)|(b*b))|((d^b)-b)));
}

uint64_t target_235(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a&(-(c+(-c))))|((-(d&a))&(~(d|d)))));
}

uint64_t target_236(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e+((e*c)+e))-((~a)+(a&e))));
}

uint64_t target_237(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(((c+(e+e))|(c^c))+((-a)-(e^(~a))))));
}

uint64_t target_238(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((-c)^c)*b)&(~(b+(c*c)))));
}

uint64_t target_239(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((e|e)+a)*(~(a&c)))*((a^a)&e)));
}

uint64_t target_240(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((a&((-(a|c))-(~a))));
}

uint64_t target_241(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e+e)&(e|(e|b))));
}

uint64_t target_242(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d+d)&((~e)^((d*b)|(e*d)))));
}

uint64_t target_243(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(-((e^e)-(-c)))));
}

uint64_t target_244(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((c&e)^d)-e)*(((c+c)|(d+d))-((c+e)|d))));
}

uint64_t target_245(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d*b)^(~(~((d*d)+b)))));
}

uint64_t target_246(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(((a|a)-c)*(a+c))));
}

uint64_t target_247(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~(-b))^(~(b^e)))*((-b)^(-e))));
}

uint64_t target_248(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((c+(a*c))-c))&(a^a)));
}

uint64_t target_249(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b|b)&((~(((b|b)&d)-b))|(b&(b-b)))));
}

uint64_t target_250(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~e)+(-(a|a)))+(-(((d^d)-e)*(e*d)))));
}

uint64_t target_251(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-c)*(-(d+a)))|(-((d&c)&(a^c)))));
}

uint64_t target_252(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e+(d*a))|((d^a)&(a-e))));
}

uint64_t target_253(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((d|d)*(-(d^b)))+(b+b))|((b+(b-b))^b)));
}

uint64_t target_254(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-(~c))|d)^(((-d)+d)|((c+c)-(c|c)))));
}

uint64_t target_255(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b+(~(-b)))^((~e)^b))*b));
}

uint64_t target_256(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((c+c)|d)+(d|d))|(~(c|(c|d)))));
}

uint64_t target_257(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((-d)*e))|(d^((d+d)+b))));
}

uint64_t target_258(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b-(c*b))&(-b))|(-(d-c))));
}

uint64_t target_259(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-(d-(b*(b&d))))-b)-(~(-(b^d)))));
}

uint64_t target_260(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(-(~(e-b))))*(e&e)));
}

uint64_t target_261(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~b)|(e|(c-b))));
}

uint64_t target_262(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((b-e)|b)|(b&e))|(b^b)));
}

uint64_t target_263(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((-(c&(a&e)))*(((c&a)+e)*(c-(-a))))));
}

uint64_t target_264(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d&(-e))|(d*e))&(e^(e|d))));
}

uint64_t target_265(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c|a)^(((-c)*a)+(c*d))));
}

uint64_t target_266(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(a^(~(b+c))))^((a^b)&c)));
}

uint64_t target_267(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(~c))-(~c)));
}

uint64_t target_268(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c&e)^((c+e)&(c|c)))|((c-e)|(e-c))));
}

uint64_t target_269(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(~(~((-(~(d&d)))+e)))));
}

uint64_t target_270(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(~(((a+c)+(c-a))&(-((a+c)+(c|c)))))));
}

uint64_t target_271(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((b&a)|b))|((b-a)*(-(a+a)))));
}

uint64_t target_272(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((~(~(~d)))^((b&e)|b))));
}

uint64_t target_273(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((e+b)|(~(e-(~b))))));
}

uint64_t target_274(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b-e)|(a^e))&(((e*a)&b)*e)));
}

uint64_t target_275(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((d&a)^(a^c))));
}

uint64_t target_276(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-a)&(~a))-((e*((a-a)^a))-(a-a))));
}

uint64_t target_277(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((d&(a^a))|((a-(a*a))+(a*((-a)*a))))));
}

uint64_t target_278(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~b)&(~((b|c)*c))));
}

uint64_t target_279(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((d&(c*d))*d)));
}

uint64_t target_280(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((a+(d&b))^(-(d+d)))-((d^(-b))-(d&d))));
}

uint64_t target_281(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~d)|((~c)+d))*((a-(a-d))|a)));
}

uint64_t target_282(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((e*((b+b)&(b+b))));
}

uint64_t target_283(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a*(b&a))|(-(b+a))));
}

uint64_t target_284(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c|((b+(c|b))*b))|((~a)&(~(b&b)))));
}

uint64_t target_285(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d*e)|((e-d)+d)));
}

uint64_t target_286(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(-(~b)))&(-(b-d))));
}

uint64_t target_287(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b|(b-(b&a)))^((b*a)+(b*b))));
}

uint64_t target_288(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d-d)-(d+b))+(~(d|((d^b)&b)))));
}

uint64_t target_289(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-(~e))-e)-((b&(b-b))+((b+b)^b))));
}

uint64_t target_290(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b|(-b))|d)&(-(((d&a)|b)&(d-b)))));
}

uint64_t target_291(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e-e)&((e*e)^c))|(c|e)));
}

uint64_t target_292(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(-c))^(~e)));
}

uint64_t target_293(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e&a)^a)-((e*c)*(c|(-e)))));
}

uint64_t target_294(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((b^a)*a)+(~b))^(b&b)));
}

uint64_t target_295(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d&((-a)+d))|(-(e*a))));
}

uint64_t target_296(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((-a)&(a+(a&a)))));
}

uint64_t target_297(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((-a)*((a^a)*(b-(b&(b-b)))))));
}

uint64_t target_298(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(a^((~b)&a))));
}

uint64_t target_299(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-(e+(e+a)))|(-b))*((a&a)*a)));
}

uint64_t target_300(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c^d)&((c-c)+d))^(~(-(a+(~(d*d)))))));
}

uint64_t target_301(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~c)-(~(a|a))));
}

uint64_t target_302(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((-(b*b))*b)));
}

uint64_t target_303(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((a*d)^(a-d))*((d*(d^d))^((d+(a*d))*a))));
}

uint64_t target_304(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b|a)-((-b)^d)));
}

uint64_t target_305(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(a^(a|(-a)))));
}

uint64_t target_306(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(-((a^a)+(c*(a+a))))));
}

uint64_t target_307(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(((b^d)&(c-(~d)))^(c&(b+(-(d&b)))))));
}

uint64_t target_308(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~((b^d)&b))-(~(~((d^d)-e)))));
}

uint64_t target_309(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d+d)^a)+(((d&d)-a)+(a|a))));
}

uint64_t target_310(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((d-c)|c)+(c^(c*d)))^(((d-d)*d)&(c*c))));
}

uint64_t target_311(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e|e)|(~(~d))));
}

uint64_t target_312(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(~(b&c)))&((-((~c)+b))*(c*(c*b)))));
}

uint64_t target_313(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(d-a))&((d-d)-a)));
}

uint64_t target_314(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e&a)-e)-((e*a)+((-e)-e))));
}

uint64_t target_315(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~d)|(-(~(~d))))^(b&b)));
}

uint64_t target_316(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((~(((a*d)+(d-d))*d))*(a^(d+d)))));
}

uint64_t target_317(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a^b)^((~a)-(-b))));
}

uint64_t target_318(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(((-c)-a)+(-c))));
}

uint64_t target_319(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~b)&(a&(c&b))));
}

uint64_t target_320(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((-a)&a)+(a-a))|(~((-b)^(a^b)))));
}

uint64_t target_321(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e^a)+((~a)+e)));
}

uint64_t target_322(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~b)*((-(b&b))|(-(b+((c&b)-b))))));
}

uint64_t target_323(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e*a)-((-e)*a))|(a|((e|(-a))-(d&d)))));
}

uint64_t target_324(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((e^d)|((e-d)^e))));
}

uint64_t target_325(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((b|(d&b))-(d*b))));
}

uint64_t target_326(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c&c)|((c+c)&(c^a)))+(-(c*a))));
}

uint64_t target_327(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b&(((~b)*e)|a))|(-b)));
}

uint64_t target_328(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d*d)*d)+(e^e)));
}

uint64_t target_329(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((a|e)^(b-(a+b)))));
}

uint64_t target_330(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d|d)^c)-(-(c|(-(d+(a-d)))))));
}

uint64_t target_331(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d&d)|((d*a)|a)));
}

uint64_t target_332(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e*e)|((a|(a+e))+(~e))));
}

uint64_t target_333(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((~(c*d))&(-c))^d)-((e-d)|c)));
}

uint64_t target_334(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(a^e))&((-a)^e)));
}

uint64_t target_335(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((-((e*e)&c))^(e&c))));
}

uint64_t target_336(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((e+(c+(-(c-c)))));
}

uint64_t target_337(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((b&(~(~((d+d)-(d|(b|b)))))));
}

uint64_t target_338(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(e+c))+(((~e)|c)|((e&c)^(c|c)))));
}

uint64_t target_339(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((b|((c+d)*c))*((d&d)-b))));
}

uint64_t target_340(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e+(e*b))*((e-e)+b)));
}

uint64_t target_341(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-d)+(((b|b)&d)|(b*b))));
}

uint64_t target_342(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~(a&b))^((~a)*b))+a));
}

uint64_t target_343(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c+a)+a)*((-(a-e))&e)));
}

uint64_t target_344(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d-c)^d)^(c|d)));
}

uint64_t target_345(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(-(c+(b*b)))));
}

uint64_t target_346(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d^(e+d))&(~(-(~(d+d))))));
}

uint64_t target_347(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d+b)*d)&(-(((b&b)|c)+(d|b)))));
}

uint64_t target_348(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((c+b)^(-(b*c))))&c));
}

uint64_t target_349(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e+(-(d*c)))-((e&(c+d))-e))^(e+d)));
}

uint64_t target_350(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((e-(~((c*e)*c))));
}

uint64_t target_351(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((-a)+((a-a)+a))|(~(a^a)))&(d+(d|e))));
}

uint64_t target_352(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-c)*(a^c))-((a*a)+(~a))));
}

uint64_t target_353(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(~(-(~((e^d)*e))))));
}

uint64_t target_354(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d-(d+d))&((a+d)+(~((a|d)|a)))));
}

uint64_t target_355(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(((a*d)*d)*a)));
}

uint64_t target_356(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d|(((d|e)-a)*e))+((~a)&(e|e))));
}

uint64_t target_357(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((((e&e)^c)-e)|(a|(a&e)))^(a+((e|c)|e))));
}

uint64_t target_358(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-a)&(((e&e)-e)+(a-e))));
}

uint64_t target_359(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((e-e)|(-b))+b)^((b^e)-((b+e)&b))));
}

uint64_t target_360(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(a&(-c)))^((-(c&(a|b)))*(b+c))));
}

uint64_t target_361(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b*b)&((~(~(b^c)))|(c|c))));
}

uint64_t target_362(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(b^c))|((c|c)*b)));
}

uint64_t target_363(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((c|(c|b))*(c+c)))&(b-(b&b))));
}

uint64_t target_364(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((c&e)|(c+e)))|((e*e)-((c+e)^e))));
}

uint64_t target_365(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b&a)-a)-((b|(b|e))|(e&(e*e)))));
}

uint64_t target_366(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a^(-(a&c)))|(-(a^a))));
}

uint64_t target_367(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e&e)|e)-(-((e+e)^a))));
}

uint64_t target_368(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~((((c|b)+c)*(-(-b)))^c))&(b|c)));
}

uint64_t target_369(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c^e)^(~(~c))));
}

uint64_t target_370(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b-b)-(-(((-(~b))&(b*c))^(b|b)))));
}

uint64_t target_371(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(c*c))|(d^(c-d))));
}

uint64_t target_372(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((((c^c)|(~b))*(b|c))+(c*e))));
}

uint64_t target_373(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-((b-c)&e))|((c*b)+c))*(~(-(c&b)))));
}

uint64_t target_374(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((b^(b+(e-e)))&(b&b)))-(~b)));
}

uint64_t target_375(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((e+e)+(e|d))));
}

uint64_t target_376(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c+(a^a))^((~((c*a)-e))+(-(c+a)))));
}

uint64_t target_377(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((b|((a|b)|b))^((b*(-b))|(-a)))));
}

uint64_t target_378(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~((c|e)+c))-(-e)));
}

uint64_t target_379(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e^(b^(e-(e+e))))|(e-b)));
}

uint64_t target_380(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b*(-(~d)))*(a-d)));
}

uint64_t target_381(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d-d)-(-d))*(~d)));
}

uint64_t target_382(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(-(((b-b)^b)-((a|(a+a))-a)))));
}

uint64_t target_383(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(d&d))*(-d)));
}

uint64_t target_384(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(((a-c)*c)|(~((~a)*a)))));
}

uint64_t target_385(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((b&c)*a)*b)+a));
}

uint64_t target_386(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e&(a+(a*a)))&(c|(a*c)))|((c*c)*e)));
}

uint64_t target_387(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((~((e^a)-(e+a)))*((-(a^e))+(a|e)))));
}

uint64_t target_388(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((b^a)&((e^b)|(b&b)))));
}

uint64_t target_389(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d-b)&d)+((a^b)&d)));
}

uint64_t target_390(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b|b)+b)|(-b)));
}

uint64_t target_391(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e+e)&e)|(c-e)));
}

uint64_t target_392(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~(d|c))-(d^c))*(((c|c)&((d|c)|c))^d)));
}

uint64_t target_393(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(d-a))+((a|c)*d)));
}

uint64_t target_394(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d+(~(e&e)))*((d+d)-(((b+e)-(d-d))&b))));
}

uint64_t target_395(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((a+((a+a)&(b&b)))&((-a)*(a+a)))));
}

uint64_t target_396(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d*a)|(a^d))+(a^(a+a))));
}

uint64_t target_397(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(((d*e)|(e-d))+(e&((e*d)*(d-e))))));
}

uint64_t target_398(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c^e)|c)|(-(a-e))));
}

uint64_t target_399(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~(a*d))*(d+a))-(~((c+c)-((d-a)^d)))));
}

uint64_t target_400(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a-(c*c))|((c*c)|a)));
}

uint64_t target_401(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~((d-c)+c))&((~c)^(c|d))));
}

uint64_t target_402(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-(b&b))*(~b))*(d*(-(b&(d&b))))));
}

uint64_t target_403(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c*((-e)-(c-e)))*(((~d)*c)|(c^c))));
}

uint64_t target_404(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((~b)|(~(~((b&b)*b))))));
}

uint64_t target_405(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d-e)^d)|(d+((d&d)|e))));
}

uint64_t target_406(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-(-a))^(a&a))|((-a)+(~((-a)^a)))));
}

uint64_t target_407(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(((d*c)-(d&c))+(~(c*d)))));
}

uint64_t target_408(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((e&b)*(~c))|(b-c))+((~e)&e)));
}

uint64_t target_409(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(-(((-(e&d))*(-e))|(~((~d)*d))))));
}

uint64_t target_410(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d*d)&(c-e))|(~(-((c&d)|((-d)&c))))));
}

uint64_t target_411(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e-(e+(b+b)))|((e^(b|a))-((~e)^a))));
}

uint64_t target_412(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(((~(a+((a^a)|a)))&d)+(c|c))));
}

uint64_t target_413(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~a)+(c*c))^(e^(((a+c)+a)*c))));
}

uint64_t target_414(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d-a)^(~a))&((b*(a&d))&(d^a))));
}

uint64_t target_415(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((d*a)^(a-a))));
}

uint64_t target_416(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a^(~(d*(c+a))))-(c*(-c))));
}

uint64_t target_417(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((~(d*(e*(e|d))))-(d*(e|(e+e))))));
}

uint64_t target_418(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e-e)+((b^b)|e)));
}

uint64_t target_419(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a*a)+(b-(a+a))));
}

uint64_t target_420(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((a^d)-d)&(d-a))^(-(-(a+(~a))))));
}

uint64_t target_421(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b-((b-b)*b))-((((-d)&d)|d)|(d*b))));
}

uint64_t target_422(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((-((e^e)^(e-e)))^(~(~((c^c)*c))))));
}

uint64_t target_423(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~c)^(d-e))-((d|(d|e))-((e+d)-e))));
}

uint64_t target_424(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((b*b)-(~b))));
}

uint64_t target_425(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((~b)-b)^b)+((d|b)&(-b))));
}

uint64_t target_426(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~((~c)*(b-(c*b))))-(c+(b*(b&c)))));
}

uint64_t target_427(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e+a)&c)-((c-a)&a)));
}

uint64_t target_428(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(-((-(~a))&(d|(d|d))))));
}

uint64_t target_429(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~((d&a)^c))+((c&(a^c))|(-a))));
}

uint64_t target_430(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((-b)&b)&c)-(-(a+c))));
}

uint64_t target_431(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~a)&((-(a|b))*e))|(-((~(a^a))&a))));
}

uint64_t target_432(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(c-(c&(b-c)))));
}

uint64_t target_433(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~(((b-b)^c)^(-c)))-((c*c)^(b*(-c)))));
}

uint64_t target_434(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e&(~a))|(b-a))|(~((e|b)-e))));
}

uint64_t target_435(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~((b+(e*e))*(a&a)))*((~(a*b))-a)));
}

uint64_t target_436(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(~(((a|a)^((a+a)&a))^(a|((c-a)^a))))));
}

uint64_t target_437(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(((-(c^e))*b)+((b*e)^(~((~c)+c))))));
}

uint64_t target_438(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(e+(c-c)))^((~b)*(b&(b+e)))));
}

uint64_t target_439(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-d)|d)-((~((d^(a+a))^(-a)))+(d-a))));
}

uint64_t target_440(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((e|e)+((~e)&c)))+(-((-c)*(-b)))));
}

uint64_t target_441(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((a+((a^a)&a))-(a*(a*((a*a)-a))))));
}

uint64_t target_442(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(-(((b&b)|(a-(b+b)))|(b-(~(b^b)))))));
}

uint64_t target_443(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c*((~b)*b))-((b|(d|b))*(b|(~b)))));
}

uint64_t target_444(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((~(d^b))-(-e))));
}

uint64_t target_445(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~(-e))&(a^(~e)))^(e-(e+a))));
}

uint64_t target_446(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((e|(~(-(~((~c)-d))))));
}

uint64_t target_447(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c+c)&(d&d))+((((~d)&(d^c))&c)|(c|d))));
}

uint64_t target_448(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~b)+((e*b)&(~((e^b)|b)))));
}

uint64_t target_449(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e-c)^(-(~c))));
}

uint64_t target_450(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(a-((e|(a|e))^a))));
}

uint64_t target_451(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((-c)&b)|(-b))&((c-b)*(b-(c|(b+b))))));
}

uint64_t target_452(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c|d)+(((~c)&c)|(-d))));
}

uint64_t target_453(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((a&d)-((d^c)|c))&(d-d))-((d^(-c))*d)));
}

uint64_t target_454(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b-(b|e))&((-((-b)^e))-(-(e-e)))));
}

uint64_t target_455(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((~(d+e))|(e*e))-(e*d)));
}

uint64_t target_456(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((d*d)-(d|e))*((e-e)*d))-(d&(d|(-e)))));
}

uint64_t target_457(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((a&(-(~a)))+(b*(~a)))^((a^a)*(a*a))));
}

uint64_t target_458(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((a|e)+c)&(-(a&(c*e)))));
}

uint64_t target_459(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c+(c*(a*c)))|(-(a*a))));
}

uint64_t target_460(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((-((a-(-d))-a))-(d+d))-((-(d|a))^d)));
}

uint64_t target_461(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((~(~(~b)))|(~((e&c)^(b+(b+c)))))));
}

uint64_t target_462(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(~(((a+d)+b)+(d^(a&b))))));
}

uint64_t target_463(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b+b)|a)&(-(~(a|e)))));
}

uint64_t target_464(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b|a)+a)+(b&(b&b))));
}

uint64_t target_465(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c*d)*((~(-c))&d))|((c*d)^(d*d))));
}

uint64_t target_466(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(-(((-d)&d)+((~d)-d)))));
}

uint64_t target_467(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((c+d)+c)&a)^((c-d)*(c*c))));
}

uint64_t target_468(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((e^(e|d))+(-(~(d-(e&e))))));
}

uint64_t target_469(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b^c)-b)*(-b)));
}

uint64_t target_470(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b^(e^e))&(((e&b)&(~e))*(b+(~e)))));
}

uint64_t target_471(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b+b)+(e+(b-b))));
}

uint64_t target_472(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d-e)-(-(d-d)))-((e&e)-(d|a))));
}

uint64_t target_473(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-((c|c)+c))-(b-(~b))));
}

uint64_t target_474(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(a*(a+a)))|((-b)|a)));
}

uint64_t target_475(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(c+a))&((-(d&(-d)))|(c^d))));
}

uint64_t target_476(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((~(~(a*c)))&(b|((c&b)*c)))));
}

uint64_t target_477(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(((e&e)+e)-(~a)))+(-(~(~(a*a))))));
}

uint64_t target_478(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a^a)+(((~b)^(a+b))|b)));
}

uint64_t target_479(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a*((a|d)&a))&(~((d&a)+(d*d)))));
}

uint64_t target_480(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((~((e*a)^d))&((~(a+d))*(e|e))));
}

uint64_t target_481(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e-e)&(e-d))-d));
}

uint64_t target_482(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~((b-(c&b))|(b&b))));
}

uint64_t target_483(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((-(a|(a*c)))*((a|c)*((c+a)^a))));
}

uint64_t target_484(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((b-(-(b+b)))^(~(d+d))));
}

uint64_t target_485(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((d*a)|(-(a^d))));
}

uint64_t target_486(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((a+a)*e)^((e^e)|(e*a))));
}

uint64_t target_487(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((e&b)&b)*(c&c)));
}

uint64_t target_488(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-(~(~((b&b)*b)))));
}

uint64_t target_489(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c|b)^(~((-(c|c))*((b^b)^a)))));
}

uint64_t target_490(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((~(~(d&(e|e)))));
}

uint64_t target_491(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((b&((e|b)^(e^e)))&(b&b))^((b|a)+a)));
}

uint64_t target_492(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((a|((c|(a+a))+(c+a))));
}

uint64_t target_493(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((-c)&((c&a)*a))));
}

uint64_t target_494(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((c&c)&(((a^c)|a)|c))-((c-(c^a))^(a&a))));
}

uint64_t target_495(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((((d&a)*a)^(a+d))^((a^a)&d)));
}

uint64_t target_496(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((((d*a)&((~((-a)^a))&a))-(((-a)-e)&e)));
}

uint64_t target_497(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((a^((a-c)&c))&((a|c)|a)));
}

uint64_t target_498(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return (((c+(-c))&(e&b)));
}

uint64_t target_499(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	return ((-((-(-(-e)))&((b&e)+b))));
}

void all_targets(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e){
	target_0(a, b, c, d, e);
	target_1(a, b, c, d, e);
	target_2(a, b, c, d, e);
	target_3(a, b, c, d, e);
	target_4(a, b, c, d, e);
	target_5(a, b, c, d, e);
	target_6(a, b, c, d, e);
	target_7(a, b, c, d, e);
	target_8(a, b, c, d, e);
	target_9(a, b, c, d, e);
	target_10(a, b, c, d, e);
	target_11(a, b, c, d, e);
	target_12(a, b, c, d, e);
	target_13(a, b, c, d, e);
	target_14(a, b, c, d, e);
	target_15(a, b, c, d, e);
	target_16(a, b, c, d, e);
	target_17(a, b, c, d, e);
	target_18(a, b, c, d, e);
	target_19(a, b, c, d, e);
	target_20(a, b, c, d, e);
	target_21(a, b, c, d, e);
	target_22(a, b, c, d, e);
	target_23(a, b, c, d, e);
	target_24(a, b, c, d, e);
	target_25(a, b, c, d, e);
	target_26(a, b, c, d, e);
	target_27(a, b, c, d, e);
	target_28(a, b, c, d, e);
	target_29(a, b, c, d, e);
	target_30(a, b, c, d, e);
	target_31(a, b, c, d, e);
	target_32(a, b, c, d, e);
	target_33(a, b, c, d, e);
	target_34(a, b, c, d, e);
	target_35(a, b, c, d, e);
	target_36(a, b, c, d, e);
	target_37(a, b, c, d, e);
	target_38(a, b, c, d, e);
	target_39(a, b, c, d, e);
	target_40(a, b, c, d, e);
	target_41(a, b, c, d, e);
	target_42(a, b, c, d, e);
	target_43(a, b, c, d, e);
	target_44(a, b, c, d, e);
	target_45(a, b, c, d, e);
	target_46(a, b, c, d, e);
	target_47(a, b, c, d, e);
	target_48(a, b, c, d, e);
	target_49(a, b, c, d, e);
	target_50(a, b, c, d, e);
	target_51(a, b, c, d, e);
	target_52(a, b, c, d, e);
	target_53(a, b, c, d, e);
	target_54(a, b, c, d, e);
	target_55(a, b, c, d, e);
	target_56(a, b, c, d, e);
	target_57(a, b, c, d, e);
	target_58(a, b, c, d, e);
	target_59(a, b, c, d, e);
	target_60(a, b, c, d, e);
	target_61(a, b, c, d, e);
	target_62(a, b, c, d, e);
	target_63(a, b, c, d, e);
	target_64(a, b, c, d, e);
	target_65(a, b, c, d, e);
	target_66(a, b, c, d, e);
	target_67(a, b, c, d, e);
	target_68(a, b, c, d, e);
	target_69(a, b, c, d, e);
	target_70(a, b, c, d, e);
	target_71(a, b, c, d, e);
	target_72(a, b, c, d, e);
	target_73(a, b, c, d, e);
	target_74(a, b, c, d, e);
	target_75(a, b, c, d, e);
	target_76(a, b, c, d, e);
	target_77(a, b, c, d, e);
	target_78(a, b, c, d, e);
	target_79(a, b, c, d, e);
	target_80(a, b, c, d, e);
	target_81(a, b, c, d, e);
	target_82(a, b, c, d, e);
	target_83(a, b, c, d, e);
	target_84(a, b, c, d, e);
	target_85(a, b, c, d, e);
	target_86(a, b, c, d, e);
	target_87(a, b, c, d, e);
	target_88(a, b, c, d, e);
	target_89(a, b, c, d, e);
	target_90(a, b, c, d, e);
	target_91(a, b, c, d, e);
	target_92(a, b, c, d, e);
	target_93(a, b, c, d, e);
	target_94(a, b, c, d, e);
	target_95(a, b, c, d, e);
	target_96(a, b, c, d, e);
	target_97(a, b, c, d, e);
	target_98(a, b, c, d, e);
	target_99(a, b, c, d, e);
	target_100(a, b, c, d, e);
	target_101(a, b, c, d, e);
	target_102(a, b, c, d, e);
	target_103(a, b, c, d, e);
	target_104(a, b, c, d, e);
	target_105(a, b, c, d, e);
	target_106(a, b, c, d, e);
	target_107(a, b, c, d, e);
	target_108(a, b, c, d, e);
	target_109(a, b, c, d, e);
	target_110(a, b, c, d, e);
	target_111(a, b, c, d, e);
	target_112(a, b, c, d, e);
	target_113(a, b, c, d, e);
	target_114(a, b, c, d, e);
	target_115(a, b, c, d, e);
	target_116(a, b, c, d, e);
	target_117(a, b, c, d, e);
	target_118(a, b, c, d, e);
	target_119(a, b, c, d, e);
	target_120(a, b, c, d, e);
	target_121(a, b, c, d, e);
	target_122(a, b, c, d, e);
	target_123(a, b, c, d, e);
	target_124(a, b, c, d, e);
	target_125(a, b, c, d, e);
	target_126(a, b, c, d, e);
	target_127(a, b, c, d, e);
	target_128(a, b, c, d, e);
	target_129(a, b, c, d, e);
	target_130(a, b, c, d, e);
	target_131(a, b, c, d, e);
	target_132(a, b, c, d, e);
	target_133(a, b, c, d, e);
	target_134(a, b, c, d, e);
	target_135(a, b, c, d, e);
	target_136(a, b, c, d, e);
	target_137(a, b, c, d, e);
	target_138(a, b, c, d, e);
	target_139(a, b, c, d, e);
	target_140(a, b, c, d, e);
	target_141(a, b, c, d, e);
	target_142(a, b, c, d, e);
	target_143(a, b, c, d, e);
	target_144(a, b, c, d, e);
	target_145(a, b, c, d, e);
	target_146(a, b, c, d, e);
	target_147(a, b, c, d, e);
	target_148(a, b, c, d, e);
	target_149(a, b, c, d, e);
	target_150(a, b, c, d, e);
	target_151(a, b, c, d, e);
	target_152(a, b, c, d, e);
	target_153(a, b, c, d, e);
	target_154(a, b, c, d, e);
	target_155(a, b, c, d, e);
	target_156(a, b, c, d, e);
	target_157(a, b, c, d, e);
	target_158(a, b, c, d, e);
	target_159(a, b, c, d, e);
	target_160(a, b, c, d, e);
	target_161(a, b, c, d, e);
	target_162(a, b, c, d, e);
	target_163(a, b, c, d, e);
	target_164(a, b, c, d, e);
	target_165(a, b, c, d, e);
	target_166(a, b, c, d, e);
	target_167(a, b, c, d, e);
	target_168(a, b, c, d, e);
	target_169(a, b, c, d, e);
	target_170(a, b, c, d, e);
	target_171(a, b, c, d, e);
	target_172(a, b, c, d, e);
	target_173(a, b, c, d, e);
	target_174(a, b, c, d, e);
	target_175(a, b, c, d, e);
	target_176(a, b, c, d, e);
	target_177(a, b, c, d, e);
	target_178(a, b, c, d, e);
	target_179(a, b, c, d, e);
	target_180(a, b, c, d, e);
	target_181(a, b, c, d, e);
	target_182(a, b, c, d, e);
	target_183(a, b, c, d, e);
	target_184(a, b, c, d, e);
	target_185(a, b, c, d, e);
	target_186(a, b, c, d, e);
	target_187(a, b, c, d, e);
	target_188(a, b, c, d, e);
	target_189(a, b, c, d, e);
	target_190(a, b, c, d, e);
	target_191(a, b, c, d, e);
	target_192(a, b, c, d, e);
	target_193(a, b, c, d, e);
	target_194(a, b, c, d, e);
	target_195(a, b, c, d, e);
	target_196(a, b, c, d, e);
	target_197(a, b, c, d, e);
	target_198(a, b, c, d, e);
	target_199(a, b, c, d, e);
	target_200(a, b, c, d, e);
	target_201(a, b, c, d, e);
	target_202(a, b, c, d, e);
	target_203(a, b, c, d, e);
	target_204(a, b, c, d, e);
	target_205(a, b, c, d, e);
	target_206(a, b, c, d, e);
	target_207(a, b, c, d, e);
	target_208(a, b, c, d, e);
	target_209(a, b, c, d, e);
	target_210(a, b, c, d, e);
	target_211(a, b, c, d, e);
	target_212(a, b, c, d, e);
	target_213(a, b, c, d, e);
	target_214(a, b, c, d, e);
	target_215(a, b, c, d, e);
	target_216(a, b, c, d, e);
	target_217(a, b, c, d, e);
	target_218(a, b, c, d, e);
	target_219(a, b, c, d, e);
	target_220(a, b, c, d, e);
	target_221(a, b, c, d, e);
	target_222(a, b, c, d, e);
	target_223(a, b, c, d, e);
	target_224(a, b, c, d, e);
	target_225(a, b, c, d, e);
	target_226(a, b, c, d, e);
	target_227(a, b, c, d, e);
	target_228(a, b, c, d, e);
	target_229(a, b, c, d, e);
	target_230(a, b, c, d, e);
	target_231(a, b, c, d, e);
	target_232(a, b, c, d, e);
	target_233(a, b, c, d, e);
	target_234(a, b, c, d, e);
	target_235(a, b, c, d, e);
	target_236(a, b, c, d, e);
	target_237(a, b, c, d, e);
	target_238(a, b, c, d, e);
	target_239(a, b, c, d, e);
	target_240(a, b, c, d, e);
	target_241(a, b, c, d, e);
	target_242(a, b, c, d, e);
	target_243(a, b, c, d, e);
	target_244(a, b, c, d, e);
	target_245(a, b, c, d, e);
	target_246(a, b, c, d, e);
	target_247(a, b, c, d, e);
	target_248(a, b, c, d, e);
	target_249(a, b, c, d, e);
	target_250(a, b, c, d, e);
	target_251(a, b, c, d, e);
	target_252(a, b, c, d, e);
	target_253(a, b, c, d, e);
	target_254(a, b, c, d, e);
	target_255(a, b, c, d, e);
	target_256(a, b, c, d, e);
	target_257(a, b, c, d, e);
	target_258(a, b, c, d, e);
	target_259(a, b, c, d, e);
	target_260(a, b, c, d, e);
	target_261(a, b, c, d, e);
	target_262(a, b, c, d, e);
	target_263(a, b, c, d, e);
	target_264(a, b, c, d, e);
	target_265(a, b, c, d, e);
	target_266(a, b, c, d, e);
	target_267(a, b, c, d, e);
	target_268(a, b, c, d, e);
	target_269(a, b, c, d, e);
	target_270(a, b, c, d, e);
	target_271(a, b, c, d, e);
	target_272(a, b, c, d, e);
	target_273(a, b, c, d, e);
	target_274(a, b, c, d, e);
	target_275(a, b, c, d, e);
	target_276(a, b, c, d, e);
	target_277(a, b, c, d, e);
	target_278(a, b, c, d, e);
	target_279(a, b, c, d, e);
	target_280(a, b, c, d, e);
	target_281(a, b, c, d, e);
	target_282(a, b, c, d, e);
	target_283(a, b, c, d, e);
	target_284(a, b, c, d, e);
	target_285(a, b, c, d, e);
	target_286(a, b, c, d, e);
	target_287(a, b, c, d, e);
	target_288(a, b, c, d, e);
	target_289(a, b, c, d, e);
	target_290(a, b, c, d, e);
	target_291(a, b, c, d, e);
	target_292(a, b, c, d, e);
	target_293(a, b, c, d, e);
	target_294(a, b, c, d, e);
	target_295(a, b, c, d, e);
	target_296(a, b, c, d, e);
	target_297(a, b, c, d, e);
	target_298(a, b, c, d, e);
	target_299(a, b, c, d, e);
	target_300(a, b, c, d, e);
	target_301(a, b, c, d, e);
	target_302(a, b, c, d, e);
	target_303(a, b, c, d, e);
	target_304(a, b, c, d, e);
	target_305(a, b, c, d, e);
	target_306(a, b, c, d, e);
	target_307(a, b, c, d, e);
	target_308(a, b, c, d, e);
	target_309(a, b, c, d, e);
	target_310(a, b, c, d, e);
	target_311(a, b, c, d, e);
	target_312(a, b, c, d, e);
	target_313(a, b, c, d, e);
	target_314(a, b, c, d, e);
	target_315(a, b, c, d, e);
	target_316(a, b, c, d, e);
	target_317(a, b, c, d, e);
	target_318(a, b, c, d, e);
	target_319(a, b, c, d, e);
	target_320(a, b, c, d, e);
	target_321(a, b, c, d, e);
	target_322(a, b, c, d, e);
	target_323(a, b, c, d, e);
	target_324(a, b, c, d, e);
	target_325(a, b, c, d, e);
	target_326(a, b, c, d, e);
	target_327(a, b, c, d, e);
	target_328(a, b, c, d, e);
	target_329(a, b, c, d, e);
	target_330(a, b, c, d, e);
	target_331(a, b, c, d, e);
	target_332(a, b, c, d, e);
	target_333(a, b, c, d, e);
	target_334(a, b, c, d, e);
	target_335(a, b, c, d, e);
	target_336(a, b, c, d, e);
	target_337(a, b, c, d, e);
	target_338(a, b, c, d, e);
	target_339(a, b, c, d, e);
	target_340(a, b, c, d, e);
	target_341(a, b, c, d, e);
	target_342(a, b, c, d, e);
	target_343(a, b, c, d, e);
	target_344(a, b, c, d, e);
	target_345(a, b, c, d, e);
	target_346(a, b, c, d, e);
	target_347(a, b, c, d, e);
	target_348(a, b, c, d, e);
	target_349(a, b, c, d, e);
	target_350(a, b, c, d, e);
	target_351(a, b, c, d, e);
	target_352(a, b, c, d, e);
	target_353(a, b, c, d, e);
	target_354(a, b, c, d, e);
	target_355(a, b, c, d, e);
	target_356(a, b, c, d, e);
	target_357(a, b, c, d, e);
	target_358(a, b, c, d, e);
	target_359(a, b, c, d, e);
	target_360(a, b, c, d, e);
	target_361(a, b, c, d, e);
	target_362(a, b, c, d, e);
	target_363(a, b, c, d, e);
	target_364(a, b, c, d, e);
	target_365(a, b, c, d, e);
	target_366(a, b, c, d, e);
	target_367(a, b, c, d, e);
	target_368(a, b, c, d, e);
	target_369(a, b, c, d, e);
	target_370(a, b, c, d, e);
	target_371(a, b, c, d, e);
	target_372(a, b, c, d, e);
	target_373(a, b, c, d, e);
	target_374(a, b, c, d, e);
	target_375(a, b, c, d, e);
	target_376(a, b, c, d, e);
	target_377(a, b, c, d, e);
	target_378(a, b, c, d, e);
	target_379(a, b, c, d, e);
	target_380(a, b, c, d, e);
	target_381(a, b, c, d, e);
	target_382(a, b, c, d, e);
	target_383(a, b, c, d, e);
	target_384(a, b, c, d, e);
	target_385(a, b, c, d, e);
	target_386(a, b, c, d, e);
	target_387(a, b, c, d, e);
	target_388(a, b, c, d, e);
	target_389(a, b, c, d, e);
	target_390(a, b, c, d, e);
	target_391(a, b, c, d, e);
	target_392(a, b, c, d, e);
	target_393(a, b, c, d, e);
	target_394(a, b, c, d, e);
	target_395(a, b, c, d, e);
	target_396(a, b, c, d, e);
	target_397(a, b, c, d, e);
	target_398(a, b, c, d, e);
	target_399(a, b, c, d, e);
	target_400(a, b, c, d, e);
	target_401(a, b, c, d, e);
	target_402(a, b, c, d, e);
	target_403(a, b, c, d, e);
	target_404(a, b, c, d, e);
	target_405(a, b, c, d, e);
	target_406(a, b, c, d, e);
	target_407(a, b, c, d, e);
	target_408(a, b, c, d, e);
	target_409(a, b, c, d, e);
	target_410(a, b, c, d, e);
	target_411(a, b, c, d, e);
	target_412(a, b, c, d, e);
	target_413(a, b, c, d, e);
	target_414(a, b, c, d, e);
	target_415(a, b, c, d, e);
	target_416(a, b, c, d, e);
	target_417(a, b, c, d, e);
	target_418(a, b, c, d, e);
	target_419(a, b, c, d, e);
	target_420(a, b, c, d, e);
	target_421(a, b, c, d, e);
	target_422(a, b, c, d, e);
	target_423(a, b, c, d, e);
	target_424(a, b, c, d, e);
	target_425(a, b, c, d, e);
	target_426(a, b, c, d, e);
	target_427(a, b, c, d, e);
	target_428(a, b, c, d, e);
	target_429(a, b, c, d, e);
	target_430(a, b, c, d, e);
	target_431(a, b, c, d, e);
	target_432(a, b, c, d, e);
	target_433(a, b, c, d, e);
	target_434(a, b, c, d, e);
	target_435(a, b, c, d, e);
	target_436(a, b, c, d, e);
	target_437(a, b, c, d, e);
	target_438(a, b, c, d, e);
	target_439(a, b, c, d, e);
	target_440(a, b, c, d, e);
	target_441(a, b, c, d, e);
	target_442(a, b, c, d, e);
	target_443(a, b, c, d, e);
	target_444(a, b, c, d, e);
	target_445(a, b, c, d, e);
	target_446(a, b, c, d, e);
	target_447(a, b, c, d, e);
	target_448(a, b, c, d, e);
	target_449(a, b, c, d, e);
	target_450(a, b, c, d, e);
	target_451(a, b, c, d, e);
	target_452(a, b, c, d, e);
	target_453(a, b, c, d, e);
	target_454(a, b, c, d, e);
	target_455(a, b, c, d, e);
	target_456(a, b, c, d, e);
	target_457(a, b, c, d, e);
	target_458(a, b, c, d, e);
	target_459(a, b, c, d, e);
	target_460(a, b, c, d, e);
	target_461(a, b, c, d, e);
	target_462(a, b, c, d, e);
	target_463(a, b, c, d, e);
	target_464(a, b, c, d, e);
	target_465(a, b, c, d, e);
	target_466(a, b, c, d, e);
	target_467(a, b, c, d, e);
	target_468(a, b, c, d, e);
	target_469(a, b, c, d, e);
	target_470(a, b, c, d, e);
	target_471(a, b, c, d, e);
	target_472(a, b, c, d, e);
	target_473(a, b, c, d, e);
	target_474(a, b, c, d, e);
	target_475(a, b, c, d, e);
	target_476(a, b, c, d, e);
	target_477(a, b, c, d, e);
	target_478(a, b, c, d, e);
	target_479(a, b, c, d, e);
	target_480(a, b, c, d, e);
	target_481(a, b, c, d, e);
	target_482(a, b, c, d, e);
	target_483(a, b, c, d, e);
	target_484(a, b, c, d, e);
	target_485(a, b, c, d, e);
	target_486(a, b, c, d, e);
	target_487(a, b, c, d, e);
	target_488(a, b, c, d, e);
	target_489(a, b, c, d, e);
	target_490(a, b, c, d, e);
	target_491(a, b, c, d, e);
	target_492(a, b, c, d, e);
	target_493(a, b, c, d, e);
	target_494(a, b, c, d, e);
	target_495(a, b, c, d, e);
	target_496(a, b, c, d, e);
	target_497(a, b, c, d, e);
	target_498(a, b, c, d, e);
	target_499(a, b, c, d, e);
}

int main(int argc, char** argv){
	if (argc <= 5){
		printf("usage: %s <input1> ... <input5>\n",argv[0]);
		exit(1);
	}
	uint64_t a = atoi(argv[1]);
	uint64_t b = atoi(argv[2]);
	uint64_t c = atoi(argv[3]);
	uint64_t d = atoi(argv[4]);
	uint64_t e = atoi(argv[5]);
	all_targets(a ,b ,c ,d ,e);
	return 0;
}
