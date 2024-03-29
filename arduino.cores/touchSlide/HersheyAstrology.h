//*******************************************************************************
//*	astrology.jhf		Astrology
//*	formated for use with Arduino Processing 
//*	by Mark Sproul
//*******************************************************************************
//*	Jan 25,	2009	<MLS>	Formated Hershey Astrology for Arduino
//*******************************************************************************
//#include	"HersheyAstrology.h"


prog_char	gAstrology_00[]	PROGMEM	=	"Astrology";

prog_char	gAstrology_20[]	PROGMEM	=	" 1JZ";
prog_char	gAstrology_21[]	PROGMEM	=	"48F^JHNJPLQOQRPUNWJY RJHMIOJQLRO RRRQUOWMXJY RZHWIUJSLRO RRRSUUWWXZY RZHVJTLSOSRTUVWZY RIP[P RIQ[Q";
prog_char	gAstrology_22[]	PROGMEM	=	"22I[NFMGMM RNGMM RNFOGMM RWFVGVM RWGVM RWFXGVM";
prog_char	gAstrology_23[]	PROGMEM	=	"38E`QFNGKIILHOHRIUKXNZQ[T[WZZX\\U]R]O\\LZIWGTFQF RROQPQQRRSRTQTPSORO RRPRQSQSPRP";
prog_char	gAstrology_24[]	PROGMEM	=	"45J[PFNGOIQJ RPFOGOI RUFWGVITJ RUFVGVI RQJOKNLMNMQNSOTQUTUVTWSXQXNWLVKTJQJ RRUR[ RSUS[ RNXWX";
prog_char	gAstrology_25[]	PROGMEM	=	"27I\\RFOGMILLLMMPORRSSSVRXPYMYLXIVGSFRF RRSR[ RSSS[ RNWWW";
prog_char	gAstrology_26[]	PROGMEM	=	"28D`PFMGJIHLGOGSHVJYM[P\\T\\W[ZY\\V]S]O\\LZIWGTFPF RRFR\\ RGQ]Q";
prog_char	gAstrology_27[]	PROGMEM	=	"31G`PMMNKPJSJTKWMYPZQZTYVWWTWSVPTNQMPM R]GWG[HUN R]G]M\\IVO R\\HVN";
prog_char	gAstrology_28[]	PROGMEM	=	"20KYVBTDRGPKOPOTPYR]T`Vb RTDRHQKPPPTQYR\\T`";
prog_char	gAstrology_29[]	PROGMEM	=	"20KYNBPDRGTKUPUTTYR]P`Nb RPDRHSKTPTTSYR\\P`";
prog_char	gAstrology_2A[]	PROGMEM	=	"28F\\IIJGLFOFQGRIRLQOPQNSKU ROFPGQIQMPPNS RVFT[ RWFS[ RKUYU";
prog_char	gAstrology_2B[]	PROGMEM	=	"30I\\MFMU RNFMQ RMQNOONQMTMWNXPXRWTUV RTMVNWPWRTXTZU[W[YY RKFNF";
prog_char	gAstrology_2C[]	PROGMEM	=	" 8NVSWRXQWRVSWSYQ[";
prog_char	gAstrology_2D[]	PROGMEM	=	"44I\\RNOOMQLTLUMXOZR[S[VZXXYUYTXQVOSNRN RRHNJRFRN RSHWJSFSN RRSQTQURVSVTUTTSSRS RRTRUSUSTRT";
prog_char	gAstrology_2E[]	PROGMEM	=	" 6NVRVQWRXSWRV";
prog_char	gAstrology_2F[]	PROGMEM	=	"37G^QHRFR[ RTHSFS[ RJHKFKMLPNRQSRS RMHLFLNMQ R[HZFZMYPWRTSSS RXHYFYNXQ RNWWW";

prog_char	gAstrology_30[]	PROGMEM	=	"58H]TFQGOIMLLOKSKVLYMZO[Q[TZVXXUYRZNZKYHXGVFTF RQHOJNLMOLSLWMY RTYVWWUXRYNYJXH RTFRGPJOLNOMSMXNZO[ RQ[SZUWVUWRXNXIWGVF";
prog_char	gAstrology_31[]	PROGMEM	=	"20H]TJO[Q[ RWFUJP[ RWFQ[ RWFTIQKOL RTJRKOL";
prog_char	gAstrology_32[]	PROGMEM	=	"52H]OKOJPJPLNLNJOHPGSFVFYGZIZKYMWOMUKWI[ RXGYIYKXMVOSQ RVFWGXIXKWMUOMU RJYKXMXRYWYXX RMXRZWZ RMXR[U[WZXXXW";
prog_char	gAstrology_33[]	PROGMEM	=	"64H]OKOJPJPLNLNJOHPGSFVFYGZIZKYMXNVOSP RXGYIYKXMWN RVFWGXIXKWMUOSP RQPSPVQWRXTXWWYUZR[O[LZKYJWJULULWKWKV RVRWTWWVY RSPUQVSVWUYTZR[";
prog_char	gAstrology_34[]	PROGMEM	=	"15H]WJR[T[ RZFXJS[ RZFT[ RZFJUZU";
prog_char	gAstrology_35[]	PROGMEM	=	"49H]QFLP RQF[F RQGYG RPHUHYG[F RLPMOPNSNVOWPXRXUWXUZQ[N[LZKYJWJULULWKWKV RVPWRWUVXTZ RSNUOVQVUUXSZQ[";
prog_char	gAstrology_36[]	PROGMEM	=	"61H]YJYIXIXKZKZIYGWFTFQGOIMLLOKSKVLYMZO[R[UZWXXVXSWQVPTOQOOPNQMS RPINLMOLSLWMY RVXWVWSVQ RTFRGPJOLNOMSMXNZO[ RR[TZUYVVVRUPTO";
prog_char	gAstrology_37[]	PROGMEM	=	"39H]NFLL R[FZIXLTQRTQWP[ RRSPWO[ RXLRRPUOWN[P[ RMIPFRFWI ROGRGWI RMIOHRHWIYIZH[F";
prog_char	gAstrology_38[]	PROGMEM	=	"04H]SFPGOHNJNMOOQPTPWOYNZLZIYGWFSF RUFPG RPHOJONPO ROORP RSPWO RXNYLYIXG RYGUF RSFQHPJPNQP RTPVOWNXLXHWF RQPMQKSJUJXKZN[R[VZWYXWXTWRVQTP RRPMQ RNQLSKUKXLZ RKZP[VZ RVYWWWTVR RVQSP RQPOQMSLULXMZN[ RR[TZUYVWVSUQTP";
prog_char	gAstrology_39[]	PROGMEM	=	"61H]XNWPVQTRQROQNPMNMKNIPGSFVFXGYHZKZNYRXUVXTZQ[N[LZKXKVMVMXLXLW ROPNNNKOI RXHYJYNXRWUUX RQRPQOOOKPHQGSF RVFWGXIXNWRVUUWSZQ[";
prog_char	gAstrology_3A[]	PROGMEM	=	"31G]LFL[ RMFM[ RIFUFXGYHZJZMYOXPUQMQ RUFWGXHYJYMXOWPUQ RI[Y[YVX[";
prog_char	gAstrology_3B[]	PROGMEM	=	"24H[YGUGQHNJLMKPKSLVNYQ[U\\Y\\ RYGVHSJQMPPPSQVSYV[Y\\";
prog_char	gAstrology_3C[]	PROGMEM	=	"27F_OQMQKRJSIUIWJYKZM[O[QZRYSWSURSQROQ RSHPQ RZJRR R\\QST";
prog_char	gAstrology_3D[]	PROGMEM	=	"12H\\OKUY RUKOY RKOYU RYOKU";
prog_char	gAstrology_3E[]	PROGMEM	=	"48F^NVLUKUIVHXHYI[K\\L\\N[OYOXNVKRJOJMKJMHPGTGWHYJZMZOYRVVUXUYV[X\\Y\\[[\\Y\\X[VYUXUVV RJMKKMIPHTHWIYKZM";
prog_char	gAstrology_3F[]	PROGMEM	=	"48F^NMLNKNIMHKHJIHKGLGNHOJOKNMKQJTJVKYM[P\\T\\W[YYZVZTYQVMUKUJVHXGYG[H\\J\\K[MYNXNVM RJVKXMZP[T[WZYXZV";

prog_char	gAstrology_40[]	PROGMEM	=	"40F_JMILIJJHLGNGPHQIRKSP RIJKHMHOIPJQLRPR[ R[M\\L\\J[HYGWGUHTISKRP R\\JZHXHVIUJTLSPS[";
prog_char	gAstrology_41[]	PROGMEM	=	"36H\\RFKZ RQIW[ RRIX[ RRFY[ RMUVU RI[O[ RT[[[ RKZJ[ RKZM[ RWZU[ RWYV[ RXYZ[";
prog_char	gAstrology_42[]	PROGMEM	=	"78G]LFL[ RMGMZ RNFN[ RIFUFXGYHZJZLYNXOUP RXHYJYLXN RUFWGXIXMWOUP RNPUPXQYRZTZWYYXZU[I[ RXRYTYWXY RUPWQXSXXWZU[ RJFLG RKFLH ROFNH RPFNG RLZJ[ RLYK[ RNYO[ RNZP[";
prog_char	gAstrology_43[]	PROGMEM	=	"37G\\XIYFYLXIVGTFQFNGLIKKJNJSKVLXNZQ[T[VZXXYV RMILKKNKSLVMX RQFOGMJLNLSMWOZQ[";
prog_char	gAstrology_44[]	PROGMEM	=	"62G]LFL[ RMGMZ RNFN[ RIFSFVGXIYKZNZSYVXXVZS[I[ RWIXKYNYSXVWX RSFUGWJXNXSWWUZS[ RJFLG RKFLH ROFNH RPFNG RLZJ[ RLYK[ RNYO[ RNZP[";
prog_char	gAstrology_45[]	PROGMEM	=	"83G\\LFL[ RMGMZ RNFN[ RIFYFYL RNPTP RTLTT RI[Y[YU RJFLG RKFLH ROFNH RPFNG RTFYG RVFYH RWFYI RXFYL RTLSPTT RTNRPTR RTOPPTQ RLZJ[ RLYK[ RNYO[ RNZP[ RT[YZ RV[YY RW[YX RX[YU";
prog_char	gAstrology_46[]	PROGMEM	=	"70G[LFL[ RMGMZ RNFN[ RIFYFYL RNPTP RTLTT RI[Q[ RJFLG RKFLH ROFNH RPFNG RTFYG RVFYH RWFYI RXFYL RTLSPTT RTNRPTR RTOPPTQ RLZJ[ RLYK[ RNYO[ RNZP[";
prog_char	gAstrology_47[]	PROGMEM	=	"60G^XIYFYLXIVGTFQFNGLIKKJNJSKVLXNZQ[T[VZXZY[YS RMILKKNKSLVMX RQFOGMJLNLSMWOZQ[ RXTXY RWSWYVZ RTS\\S RUSWT RVSWU RZSYU R[SYT";
prog_char	gAstrology_48[]	PROGMEM	=	"81F^KFK[ RLGLZ RMFM[ RWFW[ RXGXZ RYFY[ RHFPF RTF\\F RMPWP RH[P[ RT[\\[ RIFKG RJFKH RNFMH ROFMG RUFWG RVFWH RZFYH R[FYG RKZI[ RKYJ[ RMYN[ RMZO[ RWZU[ RWYV[ RYYZ[ RYZ[[";
prog_char	gAstrology_49[]	PROGMEM	=	"39LXQFQ[ RRGRZ RSFS[ RNFVF RN[V[ ROFQG RPFQH RTFSH RUFSG RQZO[ RQYP[ RSYT[ RSZU[";
prog_char	gAstrology_4A[]	PROGMEM	=	"45JZSFSWRZQ[ RTGTWSZ RUFUWTZQ[O[MZLXLVMUNUOVOWNXMX RMVMWNWNVMV RPFXF RQFSG RRFSH RVFUH RWFUG";
prog_char	gAstrology_4B[]	PROGMEM	=	"69F\\KFK[ RLGLZ RMFM[ RXGMR RPPW[ RQPX[ RQNY[ RHFPF RUF[F RH[P[ RT[[[ RIFKG RJFKH RNFMH ROFMG RWFXG RZFXG RKZI[ RKYJ[ RMYN[ RMZO[ RWYU[ RWYZ[";
prog_char	gAstrology_4C[]	PROGMEM	=	"52I[NFN[ ROGOZ RPFP[ RKFSF RK[Z[ZU RLFNG RMFNH RQFPH RRFPG RNZL[ RNYM[ RPYQ[ RPZR[ RU[ZZ RW[ZY RX[ZX RY[ZU";
prog_char	gAstrology_4D[]	PROGMEM	=	"63E_JFJZ RJFQ[ RKFQX RLFRX RXFQ[ RXFX[ RYGYZ RZFZ[ RGFLF RXF]F RG[M[ RU[][ RHFJG R[FZH R\\FZG RJZH[ RJZL[ RXZV[ RXYW[ RZY[[ RZZ\\[";
prog_char	gAstrology_4E[]	PROGMEM	=	"39F^KFKZ RKFY[ RLFXX RMFYX RYGY[ RHFMF RVF\\F RH[N[ RIFKG RWFYG R[FYG RKZI[ RKZM[";
prog_char	gAstrology_4F[]	PROGMEM	=	"54G]QFNGLIKKJOJRKVLXNZQ[S[VZXXYVZRZOYKXIVGSFQF RMILKKNKSLVMX RWXXVYSYNXKWI RQFOGMJLNLSMWOZQ[ RS[UZWWXSXNWJUGSF";

prog_char	gAstrology_50[]	PROGMEM	=	"59G]LFL[ RMGMZ RNFN[ RIFUFXGYHZJZMYOXPUQNQ RXHYJYMXO RUFWGXIXNWPUQ RI[Q[ RJFLG RKFLH ROFNH RPFNG RLZJ[ RLYK[ RNYO[ RNZP[";
prog_char	gAstrology_51[]	PROGMEM	=	"77G]QFNGLIKKJOJRKVLXNZQ[S[VZXXYVZRZOYKXIVGSFQF RMILKKNKSLVMX RWXXVYSYNXKWI RQFOGMJLNLSMWOZQ[ RS[UZWWXSXNWJUGSF RNXOVQURUTVUXV^W`Y`Z^Z\\ RV\\W^X_Y_ RUXW]X^Y^Z]";
prog_char	gAstrology_52[]	PROGMEM	=	"80G]LFL[ RMGMZ RNFN[ RIFUFXGYHZJZLYNXOUPNP RXHYJYLXN RUFWGXIXMWOUP RRPTQUSWYX[Z[[Y[W RWWXYYZZZ RTQURXXYYZY[X RI[Q[ RJFLG RKFLH ROFNH RPFNG RLZJ[ RLYK[ RNYO[ RNZP[";
prog_char	gAstrology_53[]	PROGMEM	=	"44H\\XIYFYLXIVGSFPFMGKIKLLNOPURWSXUXXWZ RLLMNOOUQWRXT RMGLILKMMONUPXRYTYWXYWZT[Q[NZLXKUK[LX";
prog_char	gAstrology_54[]	PROGMEM	=	"57H\\JFJL RQFQ[ RRGRZ RSFS[ RZFZL RJFZF RN[V[ RKFJL RLFJI RMFJH ROFJG RUFZG RWFZH RXFZI RYFZL RQZO[ RQYP[ RSYT[ RSZU[";
prog_char	gAstrology_55[]	PROGMEM	=	"45F^KFKULXNZQ[S[VZXXYUYG RLGLVMX RMFMVNYOZQ[ RHFPF RVF\\F RIFKG RJFKH RNFMH ROFMG RWFYG R[FYG";
prog_char	gAstrology_56[]	PROGMEM	=	"34H\\KFR[ RLFRXR[ RMFSX RYGR[ RIFPF RUF[F RJFLH RNFMH ROFMG RWFYG RZFYG";
prog_char	gAstrology_57[]	PROGMEM	=	"55F^JFN[ RKFNVN[ RLFOV RRFOVN[ RRFV[ RSFVVV[ RTFWV RZGWVV[ RGFOF RRFTF RWF]F RHFKG RIFKH RMFLH RNFLG RXFZG R\\FZG";
prog_char	gAstrology_58[]	PROGMEM	=	"54H\\KFW[ RLFX[ RMFY[ RXGLZ RIFPF RUF[F RI[O[ RT[[[ RJFMH RNFMH ROFMG RVFXG RZFXG RLZJ[ RLZN[ RWZU[ RWYV[ RWYZ[";
prog_char	gAstrology_59[]	PROGMEM	=	"48G]JFQQQ[ RKFRQRZ RLFSQS[ RYGSQ RHFOF RVF\\F RN[V[ RIFKG RNFLG RWFYG R[FYG RQZO[ RQYP[ RSYT[ RSZU[";
prog_char	gAstrology_5A[]	PROGMEM	=	"41H\\YFKFKL RWFK[ RXFL[ RYFM[ RK[Y[YU RLFKL RMFKI RNFKH RPFKG RT[YZ RV[YY RW[YX RX[YU";
prog_char	gAstrology_5B[]	PROGMEM	=	"51F^IGJKKMMOPPTPWOYMZK[G RIGJJKLMNPOTOWNYLZJ[G RPONPMQLSLVMXOZQ[S[UZWXXVXSWQVPTO RPPNQMSMVNY RVYWVWSVQTP";
prog_char	gAstrology_5C[]	PROGMEM	=	" 3KYKFY^";
prog_char	gAstrology_5D[]	PROGMEM	=	"30F^MJMV RNKNU RVKVU RWJWV RIGKIMJPKTKWJYI[G RIYKWMVPUTUWVYW[Y";
prog_char	gAstrology_5E[]	PROGMEM	=	"48F^[ILIJJILINJPLQNQPPQNQLPJ[J RIMJOKPMQ RQMPKOJMI RIXXXZW[U[SZQXPVPTQSSSUTWIW R[TZRYQWP RSTTVUWWX";
prog_char	gAstrology_5F[]	PROGMEM	=	"48F]OUMTLTJUIWIXJZL[M[OZPXPWOUJPINIKJILHOGSGWHYJZLZOYRVUUWUYV[X[YZZX RMSKPJNJKKILH RSGVHXJYLYOXRVU";

prog_char	gAstrology_60[]	PROGMEM	=	"48G_HKKHMKMV RJILLLV RMKPHRKRU ROIQLQU RRKUHWKW[ RTIVLV[ RWKZH[J\\M\\P[SZUXWUYP[ RYIZJ[M[PZSYUWWTYP[";
prog_char	gAstrology_61[]	PROGMEM	=	"50G]WMUTUXVZW[Y[[Y\\W RXMVTVZ RWMYMWTVX RUTUQTNRMPMMNKQJTJVKYLZN[P[RZSYTWUT RNNLQKTKWLY RPMNOMQLTLWMZN[";
prog_char	gAstrology_62[]	PROGMEM	=	"52I\\PFNMMSMWNYOZQ[S[VZXWYTYRXOWNUMSMQNPOOQNT RQFOMNQNWOZ RVYWWXTXQWO RMFRFPMNT RS[UYVWWTWQVNUM RNFQG ROFPH";
prog_char	gAstrology_63[]	PROGMEM	=	"34I[WQWPVPVRXRXPWNUMRMONMQLTLVMYNZP[R[UZWW ROONQMTMWNY RRMPOOQNTNWOZP[";
prog_char	gAstrology_64[]	PROGMEM	=	"58G]YFVQUUUXVZW[Y[[Y\\W RZFWQVUVZ RVF[FWTVX RUTUQTNRMPMMNKQJTJVKYLZN[P[RZSYTWUT RMOLQKTKWLY RPMNOMQLTLWMZN[ RWFZG RXFYH";
prog_char	gAstrology_65[]	PROGMEM	=	"33I[MVQUTTWRXPWNUMRMONMQLTLVMYNZP[R[UZWX ROONQMTMWNY RRMPOOQNTNWOZP[";
prog_char	gAstrology_66[]	PROGMEM	=	"45JZZHZGYGYI[I[GZFXFVGTISKRNQRO[N^M`Kb RTJSMRRP[O^ RXFVHUJTMSRQZP]O_MaKbIbHaH_J_JaIaI` RNMYM";
prog_char	gAstrology_67[]	PROGMEM	=	"57H]XMT[S^QaOb RYMU[S_ RXMZMV[T_RaObLbJaI`I^K^K`J`J_ RVTVQUNSMQMNNLQKTKVLYMZO[Q[SZTYUWVT RNOMQLTLWMY RQMOONQMTMWNZO[";
prog_char	gAstrology_68[]	PROGMEM	=	"41G]OFI[K[ RPFJ[ RLFQFK[ RMTOPQNSMUMWNXPXSVX RWNWRVVVZ RWPUUUXVZW[Y[[Y\\W RMFPG RNFOH";
prog_char	gAstrology_69[]	PROGMEM	=	"35KXSFSHUHUFSF RTFTH RSGUG RLQMOOMQMRNSPSSQX RRNRRQVQZ RRPPUPXQZR[T[VYWW";
prog_char	gAstrology_6A[]	PROGMEM	=	"45KXUFUHWHWFUF RVFVH RUGWG RMQNOPMRMSNTPTSRZQ]P_NaLbJbIaI_K_KaJaJ` RSNSSQZP]O_ RSPRTP[O^N`Lb";
prog_char	gAstrology_6B[]	PROGMEM	=	"49G]OFI[K[ RPFJ[ RLFQFK[ RYOYNXNXPZPZNYMWMUNQROS RMSOSQTRUTYUZWZ RQUSYTZ ROSPTRZS[U[WZYW RMFPG RNFOH";
prog_char	gAstrology_6C[]	PROGMEM	=	"26LXTFQQPUPXQZR[T[VYWW RUFRQQUQZ RQFVFRTQX RRFUG RSFTH";
prog_char	gAstrology_6D[]	PROGMEM	=	"61@cAQBODMFMGNHPHSF[ RGNGSE[ RGPFTD[F[ RHSJPLNNMPMRNSPSSQ[ RRNRSP[ RRPQTO[Q[ RSSUPWNYM[M]N^P^S\\X R]N]R\\V\\Z R]P[U[X\\Z][_[aYbW";
prog_char	gAstrology_6E[]	PROGMEM	=	"42F^GQHOJMLMMNNPNSL[ RMNMSK[ RMPLTJ[L[ RNSPPRNTMVMXNYPYSWX RXNXRWVWZ RXPVUVXWZX[Z[\\Y]W";
prog_char	gAstrology_6F[]	PROGMEM	=	"46H\\QMNNLQKTKVLYMZP[S[VZXWYTYRXOWNTMQM RNOMQLTLWMY RVYWWXTXQWO RQMOONQMTMWNZP[ RS[UYVWWTWQVNTM";

prog_char	gAstrology_70[]	PROGMEM	=	"66G]HQIOKMMMNNOPOSNWKb RNNNSMWJb RNPMTIb ROTPQQORNTMVMXNYOZRZTYWWZT[R[PZOWOT RXOYQYTXWWY RVMWNXQXTWWVYT[ RFbNb RJaGb RJ`Hb RK`Lb RJaMb";
prog_char	gAstrology_71[]	PROGMEM	=	"57G\\WMQb RXMRb RWMYMSb RUTUQTNRMPMMNKQJTJVKYLZN[P[RZSYTWUT RMOLQKTKWLY RPMNOMQLTLWMZN[ RNbVb RRaOb RR`Pb RS`Tb RRaUb";
prog_char	gAstrology_72[]	PROGMEM	=	"30I[JQKOMMOMPNQPQTO[ RPNPTN[ RPPOTM[O[ RYOYNXNXPZPZNYMWMUNSPQT";
prog_char	gAstrology_73[]	PROGMEM	=	"47J[XPXOWOWQYQYOXNUMRMONNONQOSQTTUVVWX RONNQ RORQSTTVU RWVVZ RNOOQQRTSVTWVWXVZS[P[MZLYLWNWNYMYMX";
prog_char	gAstrology_74[]	PROGMEM	=	"23KYTFQQPUPXQZR[T[VYWW RUFRQQUQZ RTFVFRTQX RNMXM";
prog_char	gAstrology_75[]	PROGMEM	=	"42F^GQHOJMLMMNNPNSLX RMNMRLVLZ RMPKUKXLZN[P[RZTXVU RXMVUVXWZX[Z[\\Y]W RYMWUWZ RXMZMXTWX";
prog_char	gAstrology_76[]	PROGMEM	=	"29H\\IQJOLMNMONPPPSNX RONORNVNZ ROPMUMXNZP[R[TZVXXUYQYMXMXNYP";
prog_char	gAstrology_77[]	PROGMEM	=	"48CaDQEOGMIMJNKPKSIX RJNJRIVIZ RJPHUHXIZK[M[OZQXRU RTMRURXSZU[W[YZ[X]U^Q^M]M]N^P RUMSUSZ RTMVMTTSX";
prog_char	gAstrology_78[]	PROGMEM	=	"51G]JQLNNMPMRNSPSR RPMQNQRPVOXMZK[I[HZHXJXJZIZIY RRORRQVQY RZOZNYNYP[P[NZMXMVNTPSRRVRZS[ RPVPXQZS[U[WZYW";
prog_char	gAstrology_79[]	PROGMEM	=	"49G]HQIOKMMMNNOPOSMX RNNNRMVMZ RNPLULXMZO[Q[SZUXWT RYMU[T^RaPb RZMV[T_ RYM[MW[U_SaPbMbKaJ`J^L^L`K`K_";
prog_char	gAstrology_7A[]	PROGMEM	=	"39H\\YMXOVQNWLYK[ RXOOOMPLR RVORNONNO RVORMOMMOLR RLYUYWXXV RNYRZUZVY RNYR[U[WYXV";
prog_char	gAstrology_7B[]	PROGMEM	=	"30F_GLJIMLMX RIJLMLX RMLPISLSX ROJRMRX RSLVIYLYW[Y RUJXMXXZZ]W";
prog_char	gAstrology_7C[]	PROGMEM	=	"33G]ZIJY RZIWJQJ RXKUKQJ RZIYLYR RXKXNYR RQRJR RPSMSJR RQRQY RPSPVQY";
prog_char	gAstrology_7D[]	PROGMEM	=	"33F^HOJKOU RJMOWRPWPZO[M[KZIXHWHUITKTMUPVRWUWXUZ RWHVIUKUMWQXTXWWYUZ";
prog_char	gAstrology_7E[]	PROGMEM	=	"36F^IOLLPN RKMOORLUN RQMTOWLYN RVMXO[L RIULRPT RKSOURRUT RQSTUWRYT RVSXU[R";
prog_char	gAstrology_7F[]	PROGMEM	=	"24F^IUISJPLONOPPTSVTXTZS[Q RISJQLPNPPQTTVUXUZT[Q[O";



PGM_P gHershyAstrologyFontTable[]	PROGMEM =	   // change "string_table" name to suit
{

	gAstrology_00,
	gAstrology_20,
	gAstrology_21,
	gAstrology_22,
	gAstrology_23,
	gAstrology_24,
	gAstrology_25,
	gAstrology_26,
	gAstrology_27,
	gAstrology_28,
	gAstrology_29,
	gAstrology_2A,
	gAstrology_2B,
	gAstrology_2C,
	gAstrology_2D,
	gAstrology_2E,
	gAstrology_2F,

	gAstrology_30,
	gAstrology_31,
	gAstrology_32,
	gAstrology_33,
	gAstrology_34,
	gAstrology_35,
	gAstrology_36,
	gAstrology_37,
	gAstrology_38,
	gAstrology_39,
	gAstrology_3A,
	gAstrology_3B,
	gAstrology_3C,
	gAstrology_3D,
	gAstrology_3E,
	gAstrology_3F,

	gAstrology_40,
	gAstrology_41,
	gAstrology_42,
	gAstrology_43,
	gAstrology_44,
	gAstrology_45,
	gAstrology_46,
	gAstrology_47,
	gAstrology_48,
	gAstrology_49,
	gAstrology_4A,
	gAstrology_4B,
	gAstrology_4C,
	gAstrology_4D,
	gAstrology_4E,
	gAstrology_4F,

	gAstrology_50,
	gAstrology_51,
	gAstrology_52,
	gAstrology_53,
	gAstrology_54,
	gAstrology_55,
	gAstrology_56,
	gAstrology_57,
	gAstrology_58,
	gAstrology_59,
	gAstrology_5A,
	gAstrology_5B,
	gAstrology_5C,
	gAstrology_5D,
	gAstrology_5E,
	gAstrology_5F,

	gAstrology_60,
	gAstrology_61,
	gAstrology_62,
	gAstrology_63,
	gAstrology_64,
	gAstrology_65,
	gAstrology_66,
	gAstrology_67,
	gAstrology_68,
	gAstrology_69,
	gAstrology_6A,
	gAstrology_6B,
	gAstrology_6C,
	gAstrology_6D,
	gAstrology_6E,
	gAstrology_6F,

	gAstrology_70,
	gAstrology_71,
	gAstrology_72,
	gAstrology_73,
	gAstrology_74,
	gAstrology_75,
	gAstrology_76,
	gAstrology_77,
	gAstrology_78,
	gAstrology_79,
	gAstrology_7A,
	gAstrology_7B,
	gAstrology_7C,
	gAstrology_7D,
	gAstrology_7E,
	gAstrology_7F

};
