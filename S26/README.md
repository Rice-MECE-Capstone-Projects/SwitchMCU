Official folder for SPRING26 capstone project.

ABSTRACT
Modern AI inference systems are increasingly bottlenecked by irregular memory access patterns in operations 
like embedding lookup, sparse attention, and tensor layout conversion. 
Traditional DMA engines improve bandwidth but lack semantic awareness, while full accelerators are costly and inflexible. 
We propose the Intelligent Data Mover (IDM), an AMBA-connected programmable DMA engine with an AI-aware datapath that performs in-flight transformations. 
The IDM implements three hardware-accelerated modes: scatter-gather for irregular access prefetch, corner-turning for zero-overhead matrix transpose, 
and real-time quantization to reduce memory traffic. Implemented as a 130nm ASIC with dual-bank SRAM and descriptor-based programming, the IDM enables 
CPU orchestration while offloading memory-intensive operations to dedicated hardware. We expect to achieve 5-10× reduction in execution cycles and DRAM 
traffic compared to CPU-only solutions, demonstrating that datapath-centric design can address AI inference bottlenecks more efficiently than 
compute-heavy accelerators.
