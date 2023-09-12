FROM ubuntu:20.04

RUN apt-get update && \
    apt-get install --no-install-recommends -y sudo && \
    useradd -ms /bin/bash experiment && \
    echo 'experiment ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers && \
    adduser experiment sudo && \
    apt-get clean && \
    mkdir -p /home/experiment && \
    sudo chown -R experiment /home/experiment && \
    rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# Install dependencies
RUN apt update; sudo apt-get install -y opam python3 python3-pip libgmp-dev libopenblas-dev gfortran
RUN pip3 install --upgrade pip
RUN pip3 install numpy==1.23.0 sympy z3-solver

USER experiment

RUN sudo chown -R experiment /usr/local/bin

RUN sudo mkdir -p /experiment && sudo chown -R experiment /experiment
WORKDIR /experiment

# Install Duet
RUN git clone https://github.com/astean1001/duet.git
RUN ["/bin/bash", "-c", "cd duet; ./build; eval `opam config env`; make"]

# Install SimbaS
RUN git clone https://github.com/astean1001/simba_synth.git
RUN ["/bin/bash", "-c", "cd simba_synth; ./first_build.sh"]

# Install EUSolver
RUN git clone https://bitbucket.org/abhishekudupa/eusolver.git
RUN ["/bin/bash", "-c", "cd eusolver; ./scripts/build.sh"]

RUN mkdir -p /experiment/ProMBA
COPY . /experiment/ProMBA/
RUN cd /experiment/ProMBA; sudo chmod 777 *; ./build.sh
RUN export LD_LIBRARY_PATH=/home/experiment/.opam/simba/lib/z3:~/.opam/4.08.0/lib/z3:$LD_LIBRARY_PATH 

WORKDIR /experiment/ProMBA