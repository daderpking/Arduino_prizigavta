### Arduino_prizigavta


#NAVODILA NALOGE
#b) Zaščitno vžiganje avtom. motorja: Ko obrnemo ključ v desno (simuliramo s tipko), se sklene kontakt A, ki aktivira zaganjalnik (motor). Pogoj za to pa je, da je vklopljeno skrivno stikalo B. Zaganjalnika tudi ni mogoče pognati, če motor že teče, kar zazna senzor M (uporabite še eno stikalo).

#NAVODILA ZA UPORABO
Arduino priklopimo na računalnik, za prižig avta pritisnemo tipko. V kolikor se program ne zažene, prestavite stikalo. Z držanjem tipke simuliramo zastajanje vžiga motorja, ter neuspel vžig. Motor ugasnemo z prestavo ročice na stikalu.

#KAJ SVA UPORABILA
-1x Stikalo
-1x Tipka
-1x Rele
-1x DC motor(Ventilator CPE)
-1x dioda
-1x 1k Upor
-15x vezica(lahko majn)
-1x Arduino Uno
-1x Adapter lightning/USB

#IZBOLJŠAVE
-majn vezic
-bolj optimizirana koda
-bolj realističen vžig
-možnost start/stop funkcije

#VHODI IN IZHODI

|    VHOD      |  IZHOD  |
|--------------|---------|
|    TIPKA     |  RELE   |
| STIKALO+RELE |   NIČ   |
|  STIKALO ON  | BLOKADA |

#SLIKE

![SHEMA](/Screenshot%202022-05-11%20at%2011.02.17.png)
![BREADBOARD](/Screenshot%202022-05-11%20at%2011.17.51.png)
![SESTAVA Z ARDUINO](/IMG_20220425_121155.jpg)
