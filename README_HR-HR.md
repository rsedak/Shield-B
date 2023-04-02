[Engleska verzija](README.md). 

Uvod
============
![Shield application](images/shield-b.png)
Shield-B v1.2 je učilo za programiranje mikropravljača Arduino Uno kompatibilno s BASCOM-AVR(C) i Arduino IDE.
Tijekom programiranja pridržavajte se sljedećih pravila:
- D2, D4, D7, D8 — kontrolira koračni motor
- D5 — controlira DC motor (M1)
- D5 — controlira DC motor (M2)
- D9 — controlira servo motor (J5)
- D9 — controlira servo motor (J8)
- D13 — je rezerviran za pasivnu piezo zujalicu
- A0 — je rezerviran za potenciometar RV1
- A1 — je rezerviran za potenciometar RV2
- A2 — je rezerviran za tipkalo SW2 u načinu rada INPUT_PULLUP
- A3 — je rezerviran za tipkalo SW3 u načinu rada INPUT_PULLUP
- A4,A5 — su rezervirani za komunikaciju preko I2C protokola, pull-up otpornici su na pločici


Autori
------------
- Robert Sedak — svojstva, prilagodba za Arduino, dizajn el. scheme, CAD dizajn.
- Vladimir Mitrović — svojstva, prilagodba za BASCOM-AVR


Application
-----------
Robert Sedak je snimio video s nekoliko primjera programiranim u Arduino IDE:

[![Shield application](images/default.png)](https://youtu.be/HcjEryUcfLM "Shield-B examples")





Primjere za Arduino IDE možete preuzati [ovdje](examples/).


Popis komponenti
-----------------
- 1 ea., PCB
- 1 ea., 680 ohm 1/4W 1% otpornik (R1)
- 8 ea., 1K ohm 1/4W 1% otpornik R2-R8, R14)
- 2 ea., 10K ohm 1/4W 1% otpornik (R9, R10)
- 2 ea., 100 ohm 1/4W 1% otpornik (R11, R12)
- 1 ea., 1.5K ohm 1/4W 1% otpornik (R13)
- 1 ea., LED 5mm DUAL AKA (D1)
- 8 ea., LED 3mm (D2-D8, D10)
- 1 ea., 1N5817 (D9)
- 1 ea., 100nF (C1-C3)
- 1 ea., 14x7.5mm pasivna elektronička piezoe zujalica (BZ1)
- 1 ea., utičnica 3,5/1,4mm za PCB (J1)
- 3 ea., stezaljka za pločicu 2-polna (J2-J4)
- 2 ea., 1x6 pin 2.54mm Pin Header  (J5, J8)
- 1 ea., konektor JST_XH_B5B-XH-A (J6)
- 1 ea., 1x4 pin 2.54mm utičnica - vodoravna (J7)
- 2 ea., RV09 10K potenciometer - dugačka osovina (RV1, RV2)
- 1 ea., 6x3x4.3mm SPST tipkalo (SW1)
- 2 ea., 6x6x10mm SPST tipkalo (SW2, SW3)
- 1 ea., 1x10 pin 2.54mm Pin Header
- 2 ea., 1x8 pin 2.54mm Pin Header
- 1 ea., 1x6 pin 2.54mm Pin Header
- 1 ea., 8 pin DIP podnožje
- 1 ea., L272M
- 1 ea., 16 pin DIP podnožje
- 1 ea., ULN2003


Datoteke s dizajnom
------------
Ovo učilo je dizajnirano pomoću programa [KiCad](http://kicad.org/). Datoteke se nalaze u mapi [design_files](design_files/). Elekroničku schemu možete pogledati [ovdje](images/shield-b_schematic.png).


Gerber datoteke
------------
Gerber datoteke možete preuzeti [ovdje](gerber/shield_b_v1.2.zip).


Firmware
--------
Ovo učilo može biti progrmairano pomoću [Arduino IDE](https://www.arduino.cc/) i [BASCOM-AVR(C)](https://www.mcselec.com/index.php?option=com_content&task=view&id=14&Itemid=103).
Primjeri za Arduino IDS se nalaze u mapi [examples](examples/).


Licenca
-------
[Imenovanje-Dijeli pod istim uvjetima 4.0 međunarodna (CC BY-SA 4.0)](https://creativecommons.org/licenses/by-sa/4.0/deed.hr)

Slobodno možete:
- Dijelite dalje — možete umnažati i redistribuirati materijal u bilo kojem mediju ili formatu
-  Stvarajte prerade — možete remiksirati, mijenjati i prerađivati djelo u bilo koju svrhu, pa i komercijalnu

Davatelj licence ne može opozvati slobode korištenja koje Vam je ponudio dokle god se pridržavate uvjeta licence.

Pod sljedećim uvjetima:
- Imenovanje — Morate adekvatno navesti autora, uvrstiti link na licencu i naznačiti eventualne izmjene. Možete to učiniti na bilo koji razuman način, ali ne smijete sugerirati da davatelj licence izravno podupire Vas ili Vaše korištenje djela. 
- Dijeli pod istim uvjetima — Ako remiksirate, mijenjate ili prerađujete materijal, Vaše prerade morate distribuirati pod istom licencom pod kojom je bio izvornik. 

Bez daljnjih ograničenja — Ne smijete dodavati pravne uvjete ili tehnološke mjere zaštite koji će druge pravno ograničiti da čine ono što im licenca dopušta. 

Odricanje od odgovornosti
-------------------------
NAPOMENA - Dizajn je objavljen u dobroj namjeri i "takav kakav je" ("AS IS"), te sa mogućim greškama. Autori su kreirali učilo, slike, video i programski kod. Nama je radilo i uspjelo raditi na način kako je opisano, što ne znaći da će raditi i Vama. Ne odgovaramo ni za kakve posljedice koje mogu nastati prilikom korištenja učila, uputa ili programskog koda. Odričemo sve odgovorosti i jamstva- sami ste odgovorni za ono što radite i sami ste odgovorni što ste pristali pratiti i koristiti naše upute i informacije. 

Autori mogu mijenjati specifikacije i opise proizvoda u bilo kojem trenutku, bez prethodne obavijesti. Korisnik se ne smije osloniti na odsutnost ili karakteristike bilo kojih značajki ili uputa označenih kao "rezervirano" ili "nedefinirano".
Autori zadržavaju pravo budućih izmjena definicija i neće snositi nikakvu odgovornost za sukobe ili nekompatibilnosti koje proizlaze iz budućih promjena. Podaci o proizvodu na web stranici ili materijalima podložni su promjenama bez prethodne obavijesti. Nemojte finalizirati dizajn s ovim podacima. 

Reference Designs ARE PROVIDED "AS IS" AND "WITH ALL FAULTS". Authors DISCLAIMS ALL OTHER WARRANTIES, EXPRESS OR IMPLIED, REGARDING PRODUCTS, INCLUDING BUT NOT LIMITED TO, ANY IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.
Authors may make changes to specifications and product descriptions at any time, without notice. The Customer must notrely on the absence or characteristics of any features or instructions marked "reserved" or "undefined." 
Authors reservesthese for future definition and shall have no responsibility whatsoever for conflicts or incompatibilities arising from future changes to them. The product information on the Web Site or Materials is subject to change without notice. Do not finalize a design with this info.



