# H2Opus tests and examples

This directory contains a set of sample codes that serve as tests of the H2Opus library and examples for the usage of some of its key functionality. Each sample can be compiled independently and invoked with various command line options documented in the source. The samples include:

1. hgemv: generate a covariance matrix in hierarchical form and perform matrix-vector and/or matrix-multiple-vector multiplications.
2. horthog: generate orthogonal bases for a matrix, and project matrix data on these bases, with verification and performance reporting.
3. hcompress: generate a new set of compressed bases that allow matrix data to be approximated to a desired tolerance with smaller ranks.
4. hlru_global: add a globally low rank matrix XX<sup>T</sup> and compresses the resulting sum.
5. hlru_local: add the set of off-diagonal blocks X<sup>l</sup><sub>i</sub>  Y<sup>l</sup><sub>i</sub><sup>T</sup> at a level l of a weak admissibility hierarchical matrix to the blocks of a general admissibility hierarchical matrix as set of local low rank updates.
6. hara: generate a hierarchical matrix from ``samples'' obtained by applying a linear operator. The sampler can be any black-box routine, including ones that perform a hierarchical matrix-vector multiplication.
7. fractional_diffusion: a complete application that generates a discretization of a fractional diffusion operator in 1D or 2D, computes an approximate inverse using a high-order Newton-Shultz iteration, and uses it as a preconditioner in a Krylov solver.