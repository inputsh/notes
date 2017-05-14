# Stuxnet

* First (known) software used for military reasons.
* Goal: Delaying Iran's nuclear arsenal.
* Target: Natanz nuclear facility in central Iran.
* Windows virus that was supposed to end up on the maintainer's Windows laptop.
* They discovered that the target was in Iran because the malware initially spread to five companies that commute to the nuclear power plant.
* Damages the nuclear centrifuge, delaying the nuclear arsenal.
* Even under normal conditions, Iran has to replace up to 10 percent of the centrifuges each year due to material defects, maintenance issues, and worker accidents.
* IAEA: The International Atomic Energy Agency

> One of the most sophisticated viruses ever discovered — a piece of software so unique it would make history as the world's first digital weapon and the first shot across the bow announcing the age of digital warfare.

* First spotted by [VirusBlokAda](http://www.anti-virus.by/en/index.shtml), a small independent antivirus manufacturer from Belarus.

> Although more than 12 million viruses and other malicious files are captured each year, only about a dozen or so zero-days are found among them.

* [The Man Who Found Stuxnet – Sergey Ulasen in the Spotlight](https://eugene.kaspersky.com/2011/11/02/the-man-who-found-stuxnet-sergey-ulasen-in-the-spotlight/)

* Two modules, four `*.lnk` files. Rootkit used to hide the `.lnk` files from the thumb drives. `.lnk` files are (were?) automatically scanned by File Manager on Windows to display the program icons. Specially crafted `.lnk` files triggered the exploits. Four `.lnk` files targeted different versions of Microsoft Windows operating systems, going back to Windows 2000. The modules were signed with a legitimate digital certificate company called RealTek Semiconductors, causing Windows not to display an "unsigned driver" pop-up.

> But this wasn't just any zero-day exploit; it was one that worked against every version of the Windows operating system released since Windows 2000: the attackers had bundled four versions of their exploit together—in four different `.lnk` files—to make sure their attack worked against every version of Windows it was likely to encounter.

* Sergey Ulasen tried contacting both RealTek and Microsoft. After receiving no response, he [went public](https://www.wilderssecurity.com/threads/rootkit-tmphider.276994/) and disclosed that there indeed is malware that uses stolen digital certificates. Brian Krebs [picked up the announcement about the vulnerability three days later](http://www.krebsonsecurity.com/2010/07/experts-warn-of-new-windows-shortcut-flaw/).
* Almost immediately, ESET [spotted](https://web.archive.org/web/20100722202914/blog.eset.com/2010/07/19/win32stuxnet-signed-binaries) another malicious driver signed with a digital certificate of JMicron Technology, a maker of circuits, also from Taiwan. Driver's fingerprint indicated that the driver was compiled on July 14th, two days after VirusBlokAda had gone public with the disclosure. Considering that the RealTek certificate was revoked once Stuxnet was exposed, this seemed like a smart thing to do, and a proper thing to do right away.

> RealTek and JMicron were both headquartered just two blocks away from each other in the Hsinchu Science and Industrial Park in Hsinchu City, Taiwan.

Microsoft's advisory: [Vulnerability in Windows Shell Could Allow Remote Code Execution (2286198)](https://technet.microsoft.com/library/security/ms10-046)

* Frank Boldewin, a German researcher, [found](https://www.wilderssecurity.com/threads/rootkit-tmphider.276994/#post-1712134) that Stuxnet was searching for specific kind of software, made by Siemens: [SIMATIC Step 7](http://w3.siemens.com/mcms/simatic-controller-software/en/step7/pages/default.aspx) and [SIMATIC WinCC SCADA system](http://w3.siemens.com/mcms/human-machine-interface/en/visualization-software/scada/pages/default.aspx), both designed to work with Siemens PLCs (programmable logic controllers).

> Packers are digital tools that compress and mangle code to make it slightly harder for antivirus engines to spot the signatures inside and for forensic examiners to quickly determine what a code is doing.

* The attacker knew everything about the system they were trying to attack when they were in the process of writing the software.

* Two command and control domains: `mypremierfutbol.com` and `todaysfutbol.com` (hosted on servers in Malaysia and Denmark, [according to Wired](https://www.wired.com/2011/07/how-digital-detectives-deciphered-stuxnet/)). #TODO: get historical DNS records.
* Symantec contacted DNS providers and hijacked the traffic.

> As O'Morchu and Chein mapped the geographical location of each infection, an unusal pattern began to emerge. Out of the initial 38,000 machines they tracked, more than 22,000 were based in Iran. [...] Only a small number of all of the infected machines had the Siemens software installed, and the majority of those were in Iran as well—217, as oposed to a mere 16 machines in the United States.

> The infection numbers were way out of sync with previous patterns of worldwide outbreaks, in which Iran never placed high, if at all, in the infection stats. Even in outbreaks that began in the Middle East or Central Asia, Iran never tracked high on the charts. It seemed clear that they were looking at a targeted attack focused on the Islamic Republic.

* At a US Senate hearing in November 2010, the number of unique infections in the US had by then reached 1,600. Out of those, 50 had Siemens WinCC installed.
* The second driver would infect any USB flash drives for only 21 days after Stuxnet infected the machine (in some versions, the time was raised to 90 days).

> Cryptographer Nate Lawson's comments dripped with disdain when he [wrote in a blog post](https://rdist.root.org/2011/01/17/stuxnet-is-embarrassing-not-amazing/) that Stuxnet's authors "should be embarassed at their amateur approach to hiding the payload" and their use of outmoded methods that criminal hackers had long since surpassed. "I really hope it wasn't written by the USA," he wrote, "because I'd like to think our elite cybearweapon developers at least know what Bulgarian teenagers did back in the early 90s."

...

> O'Murchu estimated it took at least three teams to code all of Stuxnet—an elite, highly skilled tiger team that worked on the payload that targeted the Siemens software and PLCs; a second-tier team responsible for the spreading and installation mechanism that also unlocked the payload; and a third team, the least skilled of the bunch, that set up the command-and-control servers and handled the encryption and protocol for Stuxnet's communication. It was possible the division of responsibilities was so well defined and the teams so compartmentalized that they never interacted.

* Seiemens hardcoded a username (`winccconnect`) and password (`2WSXcder`) into its Step 7 software.

> To spread an update, Stuxnet installed a file-sharing server and client on each infected machine, and machines that were on the same local network could then ocntact one another to compare notes about the version of Stuxnet they carried; if one machine had a newer version, it would update the others.

Turns out, there have been hints about the zero-days:

> Although VirusBlokAda believed the `.lnk` vulnerability had never been exploited before, Microsoft disocered that another attack had used an `.lnk` exploit in November 2008. It had been used by criminal hackers to install a variant of the [Zlob Trojan](https://en.wikipedia.org/wiki/Zlob_trojan) onto victim machines. Although various antivirus scanners had caught the Trojan at the time it was used, they had failed to spot the zero-day exploit that came with it, leaving the vulnerability open to attack by Stuxnet. The print-spooler exploit had also made a prior appearance—in a [Polish security magazine](http://blog.ismaelvalenzuela.com/wp-content/uploads/2009/11/my_erp_got_hacked_1.pdf) [page 24-31] in April 2009. The magazine had published an article about the hole, along with source code for an exploit to attack it. News of the vulnerability never reached Microsoft at the time, however, so that that vulnerability also remained unpached. The hardcoded Siemens passwords also had been exposed before, when someone published it online to a [Siemens user forum](https://support.industry.siemens.com/tf/ww/en/posts/wincc-database-problem/4261?page=0&pageSize=300) in April 2008.

* Log file containing data about every machine that it had infected. IP addresses, domain name, timestamp (based on machine's internal clock). About 100 bytes in size. Every copy of Stuxnet collected from infected machines contained a history of every computer it had infected up to that point.

> [...] based on the data in the log files, it appeared the attackers had launched their offensive against a cluster of five companies in Iran, likely chosen for their ability to provide a gateway for Stuxnet to reach its target. Eaach of the companies was hit by one or more versions of the malware launched in June 2009 and in March and April 2010. Symantec counted 12,000 infections at those five targets, and from these initial victims Stuxnet then spread to more than 100,000 machines in more than 100 countries.

> Symantec has never publicly identified companies [...]. But the names of  the victims are in the log files for others to see. They were Foolad Technique, Behpajooh, Kala, Neda Industrial Group, and a company only identified in the file as CGJ, believed to be Control Gostar Jahed. Kala was believed to refer to the same Kala Eletric, or Kalaye Eletric, that the Iraninan opposition group, NCRI, had mentioned in their 2002 press conference as a front company for Iran's uranium enrichment program.

...

> Only one of the companies, Behpajooh, was hit in all three attacks, suggesting it may have provided the best route to the targeted machines. This company was also, however, the victim that caused the most collateral damage. It was the only target hit in the March 2010 attack, which was the one that spread out of control. Of 12,000 infections that occured at these five companies, 69 percent of them could be traced to this single victim.

Relevation by Symantec that Stuxnet was attacking PLCs: https://www.symantec.com/connect/blogs/stuxnet-introduces-first-known-rootkit-industrial-control-systems

About the blog post:

> As soon as the post went public, they waited on edge for the community's response. But instead of the dramatic reaction they thought they would get, all they got in return was, in Chien's words, "silence like crickets."

> ...

> Five days after they published their announcement, the steady stream of traffic still coming into their sinkhole from Stuxnet-infected machines in Iran suddenly went dark. It seemed that someone in the Islamic Republic had taken note of their news. To prevent the attackers or anyone else from remotely accessing the infected machines and doing some damage, someone in Iran had finally got wise and given the order to sever all outbound connections from machines in that country to Stuxnet's two command-and-control domains.

About the Siemens response to Stuxnet (see [this](http://www.pcworld.com/article/201442/article.html)):

> In its initial announcement, Siemens said it had assembled a team of experts to evaluate Stuxnet and would begin alerting customers to their potential risk of infection from it. The company later said that less than two dozen of its customers were infected with Stuxnet. The company's second announcement had to do with the hard-coded database password in the Siemens software that Stuxnet used to spread. Siemens warned customers against changing the password at the risk of disrupting cirtical functions in their systems. "We will be publishing customer guidance shorty, but it won't include advice to change default settings as that could impact plant operations," a spokesman said a week after Stuxnet was exposed.

...

> It's not clear exactly when the first planning and development on Stuxnet began, but sometime in 2006, after Iran withdrew from its suspension agreement, US military and intelligence officials reportedly brought the proposal for the cyber operation later dubbed "Olympic Games," to the president.

...

* Turkish businessmen tried to sabotage Iran and Lybia in 2006 by selling them devices that exploded after ~10 days of use.
* Recorded the data for three weeks.
* Dropped the frequency down to 2 Hz for 50 min before restoring it to 1,064 Hz.
* 1,064 Hz is a very specific frequency used by IR-1 centrifuges.
* After another 26 days, the attack began again.
* Four days after Symantec report, Natanz centrifuges went to a complete halt for six days.
* Attacked 6 cascades with 164 centrifuges each (totaling to 984).

**TO READ:**

* Stuxnet analysis by Symantec: http://www.symantec.com/content/en/us/enterprise/media/security_response/whitepapers/w32_stuxnet_dossier.pdf
* Duqu analysis by <UNKNOWN>
* Flame analysis by Kaspersky
* Gauss analysis by Kaspersky
* Paper from Charlie Miller, admitting that he sold exploits to the government: http://www.econinfosec.org/archive/weis2007/papers/29.pdf
* [How Digital Detectives Deciphered Stuxnet, the Most Menacing Malware in History](https://www.wired.com/2011/07/how-digital-detectives-deciphered-stuxnet/)
* [After Worm, Siemens Says Don't Change Passwords](http://www.pcworld.com/article/201442/article.html)
* [MUST READ] [STUXNET LOGBOOK, SEP 16 2010, 1200 HOURS MESZ](https://www.langner.com/2010/09/stuxnet-logbook-sep-16-2010-1200-hours-mesz/)
* [Cyberwar is Coming!](file:///home/r3bl/Downloads/RAND_RP223.pdf)
