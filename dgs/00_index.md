# Digital Systems (DGS)

* Today's most complex digital systems are computers. (highly doubt that the most complex digital system is a regular computer, but hey, it's what it says in the materials)

* **Positional numbering systems** -> the value depends on the position inside of a number (examples: binary, decimal, hexadecimal...)
* **Unpositional numbering systems** -> the value of a number does not depend on the position inside of a full number (example: roman numbering system)

* Decimal numbering system originated from India in 5th century BC. Brought to Europe around the year 1000 by Arabs (who also added the number zero).

* To convert decimal number with the value between zero and one, I need to sum up the results from the formula 1/2/2/2...

The computer consists of:
* **CPU** - the "brain" of the computer (yeah, right).
* **Memory** - a place where data is stored in a binary shape.
* **I/O units** - parts of the computer that provides the user with the user experience.
* **Bus** - the "roads" inside of a computer.

![image](https://raw.githubusercontent.com/aleksandar-todorovic/notes/master/images/basic-digital-operations.png)

* **Kombinacijski logički sklopovi** - sklopovi kod kojih stanje izlaza zavisi od trenutnog stanja na ulazu.
* **Sekvencijalni logički sklopovi** - sklopovi kod kojih stanje izlaza zavisi od trenutnog stanja na ulazu i o prethodnom stanju na izlazu.

* **Sinhroni sklopovi (sistemi)** - sve promjene se događaju istovremeno u trenutku određenom nekim upravljačkim signalom zajedničkim za sve ulazne signale.
* **Asinhroni sklopovi (sistemi)** - nemaju upravljačkog signala, promjene u jednom dijelu sklopa izazivaju promjene u drugom dijelu, promjena se širi brzinom koju određuje rad pojedinog sklopa sistema.

* Instruction Set Architecture (ISA):
  * instruction set
  * instruction formats
  * the ways of representing data (number of bits)
  * addressing techniques

![image](http://www.ecampus.ba/objekti/62/DGS_p11_Arhitektura%20mikroprocesora/i2312201221234061637203000001.png)

* **Central Processing Unit (CPU)** -> the "brain" of computers. He works with the programs in the main memory unit. He uses their instructions, questions them and executes them one after another.
* **Memory** -> A place where data is stored (in the binary). It's also the place where programs are stored.
* **Input/Outpot devices (I/O)** -> Parts of the computer that provides the users with the user experience.
* **Bus components** -> What ties the rest of the computer parts together. They can be internal (connecting CPU with the memory) or external (connecting I/O devices with the memory and the CPU).

![CPU components](http://www.ecampus.ba/objekti/62/DGS_p11_Arhitektura%20mikroprocesora/i23122012212340755375303000002.png)

* **Upravljačka jedinica** -> odgovorna za preuzimanje instrukcija iz glavne memorije i utvrđivanje njihovog tipa.
* **Aritmetičko-logička jedinica** -> obavlja operacije kao što su sabiranje, logička I funkcija i druge koje su neophodne za izvršavanje instrukcija.
* **Mala memorija velike brzine** -> koristi se za pohranjivanje privremenih rezultata i upravljačkih podataka. Sastoji se od niza registara (svaki sa određenom veličinom i ulogom). Svaki registar može da čuva vrijednost čija je maksimalna veličina jednaka veličini registra.

* **Programsko brojilo** (eng. _Program Counter_) -> Najvažniji registar. Pokazuje na adresu instrukcije koju upravo treba preuzeti za izvršavanje.
* **Instrukcijski registar** (eng. _Instruction Register_) -> Mjesto gdje se sprema instrukcija koja se trenutno izvršava.

![image](http://www.ecampus.ba/objekti/62/DGS_p11_Arhitektura%20mikroprocesora/i23122012212340805821303000003.png)

![data path](http://www.ecampus.ba/objekti/62/Slika/izv_24122012124351598245602000001.jpg)

> **Microprocessor** -> Incorporates the functions of a computer's central processing unit (CPU) on a single integrated circuit (IC), or at most a few integrated circuits. It is a multipurpose, programmable device that accepts digital data as input, processes it according to instructions stored in its memory, and provides results as output. It is an example of sequential digital logic, as it has internal memory. Microprocessors operate on numbers and symbols represented in the binary numeral system.

* **Vanjska sabirnica** -> sastoji se od upravljačke (CONTROL BUS) i adresne (ADRESS BUS) sabirnice i sabirnice podataka (DATA BUS).

![image](http://www.ecampus.ba/objekti/62/DGS_p11_Arhitektura%20mikroprocesora/i23122012212341830245603000009.png)
