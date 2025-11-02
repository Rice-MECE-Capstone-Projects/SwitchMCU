\# Tool Installation (As 2/11/2025):



\## Step 1: Install pre-built RISC-V GCC Toolchains for Linux

\##### 1.1 Copy file from server to local:

```sh

sudo wget https://github.com/stnolting/riscv-gcc-prebuilt/releases/download/rv32i-4.0.0/riscv32-unknown-elf.gcc-12.1.0.tar.gz

```

\##### 1.2 Make Directory:

```sh

sudo mkdir /opt/riscv 

```

\##### 1.3 Unzip the downloaded folder:

```sh

sudo tar -xzf riscv32-unknown-elf.gcc-12.1.0.tar.gz -C /opt/riscv/

```

\##### 1.4.1 Setup Link:

```sh

export PATH=$PATH:/opt/riscv/bin

```

\##### 1.4.2 Store the link to configure file:

```sh

sudo vim ~/.profile

```

```sh

Add "export PATH=$PATH:/opt/riscv/bin" to the end of file, and store

```

\##### 1.5 Verify Installation:

```sh

riscv32-unknown-elf-gcc -v

```

> Resources: https://github.com/stnolting/riscv-gcc-prebuilt



\## Step 2: Install all Necessary Tool

```sh

sudo apt update



sudo apt install -y autoconf automake autotools-dev curl libmpc-dev libmpfr-dev libgmp-dev gawk build-essential bison flex texinfo gperf libtool patchutils bc zlib1g-dev libexpat-dev python3

```



\## Step 3: Install iVerilog

\##### 3.1 Install:

```sh

sudo apt install iverilog

```

\##### 3.2 Verify Installation:

```sh

iverilog -v

```



\## License

Apache License

Version 2.0, January 2004

