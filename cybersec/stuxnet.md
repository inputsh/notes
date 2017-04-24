# Stuxnet

* First (known) software used for military reasons.
* Goal: Delaying Iran's nuclear arsenal.
* Target: Natanz nuclear facility in central Iran.
* Windows virus that was supposed to end up on the maintainer's Windows laptop.
* They discovered that the target was in Iran because the malware initially spread to five companies that commute to the nuclear power plant.
* Damages the nuclear centrifuge, delaying the nuclear arsenal.

> Even under normal conditions, Iran has to replace up to 10 percent of the centrifuges each year due to material defects, maintenance issues, and worker accidents.

* IAEA: The International Atomic Energy Agency

> Unfortunately, Iran wasn't required to tell inspectors why they had replaced them, and, officially, the IAEA inspectors had no right to ask. The agency's mandate was to monitor what happened to uranium at the enrichment plant, not keep track of failed equipment.

> One of the most sophisticated viruses ever discovered — a piece of software so unique it would make history as the world's first digital weapon and the first shot across the bow announcing the age of digital warfare.

* First spotted by [VirusBlokAda](http://www.anti-virus.by/en/index.shtml), a small independent antivirus manufacturer from Belarus.

> Although more than 12 million viruses and other malicious files are captured each year, only about a dozen or so zero-days are found among them.

* [The Man Who Found Stuxnet – Sergey Ulasen in the Spotlight](https://eugene.kaspersky.com/2011/11/02/the-man-who-found-stuxnet-sergey-ulasen-in-the-spotlight/)

* Two modules, four `*.lnk` files. Rootkit used to hide the `.lnk` files from the thumb drives. `.lnk` files are (were?) automatically scanned by File Manager on Windows to display the program icons. Specially crafted `.lnk` files triggered the exploits. Four `.lnk` files targeted different versions of Microsoft Windows operating systems, going back to Windows 2000. The modules were signed with a legitimate digital certificate company called RealTek Semiconductors, causing Windows not to display an "unsigned driver" pop-up.
* Sergey Ulasen tried contacting both RealTek and Microsoft. After receiving no response, he [went public](https://www.wilderssecurity.com/threads/rootkit-tmphider.276994/) and disclosed that there indeed is malware that uses stolen digital certificates. Brian Krebs [picked up the announcement about the vulnerability three days later](http://www.krebsonsecurity.com/2010/07/experts-warn-of-new-windows-shortcut-flaw/).
* Almost immediately, ESET spotted another malicious driver signed with a digital certificate of JMicron Technology, a maker of circuits, also from Taiwan. Driver's fingerprint indicated that the driver was compiled on July 14th, two days after VirusBlokAda had gone public with the disclosure. Considering that the RealTek certificate was revoked once Stuxnet was exposed, this seemed like a smart thing to do, and a proper thing to do right away.

> RealTek and JMicron were both headquartered just two blocks away from each other in the Hsinchu Science and Industrial Park in Hsinchu City, Taiwan.

* Frank Boldewin, a German researcher, [found](https://www.wilderssecurity.com/threads/rootkit-tmphider.276994/#post-1712134) that Stuxnet was searching for specific kind of software, made by Siemens: [SIMATIC Step 7](http://w3.siemens.com/mcms/simatic-controller-software/en/step7/pages/default.aspx) and [SIMATIC WinCC SCADA system](http://w3.siemens.com/mcms/human-machine-interface/en/visualization-software/scada/pages/default.aspx), both designed to work with Siemens PLCs (programmable logic controllers).

> Packers are digital tools that compress and mangle code to make it slightly harder for antivirus engines to spot the signatures inside and for forensic examiners to quickly determine what a code is doing.

* The attacker (U.S. and Israeli armies probably) knew everything about the system they were trying to attack when they were in the process of writing the software.
* Two digital bombs: (smaller) one for the rotor and the (bigger) one for the centrifuges.
* The virus did not attack any other targets because of the specific way that the nuclear power plant was structured.
* Stuxnet can be modified so it can attack other SCADA and PLC systems (most of them being in Europe, U.S. and Japan).
