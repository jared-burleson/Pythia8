# Pythia8

This is for the installation and testing of Pythia8 for HEP Simulations.

The most current version of Pythia8 is 8.244. 

The best raw resources for setting up Pythia8 follow from the official site.  
The main page for Pythia is http://home.thep.lu.se/~torbjorn/Pythia.html.  
A documentation pdf can be viewed at http://home.thep.lu.se/~torbjorn/pdfdoc/worksheet8200.pdf.  
Dr. Sekula's guide (good but is more direct) https://github.com/stephensekula/delphes_EIC/tree/analysis/charm-study.

Also there will be many bash commands referenced below, so if a refresher is needed, see http://mally.stanford.edu/~sr/computing/basic-unix.html

I will now provide a summary and useful tips for installing and running Pythia8.

### Installation

Pythia8 is contained in a downloadable .tgz file; however, if you are using a remote directory (such as SMU's ManeFrame) then you will need to use a different method than simply downloading the file.

The way to do this is to use the ```wget``` command. For example:

 ```wget http://home.thep.lu.se/Pythia```

You will then need to unpack the Pythia8 using the ```tar``` command:

```tar xvfz pythia8244.tgz```

This will unpack the Pythia8 file and create a directly of the current Pythia version. To make sure this worked correctly, list the objects inside the directory you gave the above command to with ```ls```. You should see ```pythia8244.tgz``` inside this directory. 

Next create your own directory that will contain the Pythia8 files using ```mkdir *directory_name*```. Move inside this directory by using the ```cd``` command.

The next step is to setup the configuration. Before you setup the configuration you should create your own directory path of where your workspace. Once you have that path created, for example ```/users/jdburleson/scratch/JetStudy/``` then setup configuation in this way:

```./configure --prefix=/users/jdburleson/scratch/JetStudy/```

The last thing to do is the build the directory using the ```make``` command. Execute both of these calls.

```make -j```  
```make install```   

This should take a couple of minutes and there should be no errors. If there are errors, then something was set up incorrectly.

This concludes the basic installation of Pythia8.

### First Simulation using Pythia8

*Adding stuff soon*
