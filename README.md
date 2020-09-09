# H2Opus: a performance-oriented library for hierarchical matrices

<!-- <p align=center> -->
![h2opus logo](doc/logo.png "H2Opus")
<!-- </p> -->

H2Opus is a modern high-performance library for linear algebra operations with hierarchical matrices. It supports the H<sup>2</sup> format which provides asymptotically optimal storage complexity, particularly useful in modern computing environments that are provisioned with high processing power relative to memory capacity. The library is accelerated on machines with GPUs. Both single and double precision formats are supported. It can also run on CPU-only machines. The library supports weak admissiblity hierarchical matix partitioning as well as general partitioning resulting from strong admissiblity conditions. 

Every block A<sub>ij</sub> in an H<sup>2</sup> hierarchical matrix is stored in the form U<sub>i</sub> S<sub>ij</sub> V<sub>j</sub><sup>T</sup>, where nested column/row bases U and V, and coupling blocks S are stored in multi-level hierarchical tree data structures, suitably flattened for efficient GPU execution. H<sup>2</sup> matrices are therefore natural generalizations of globally low rank matrix approximations which are frequently represented in their factorized rank-k form: B<sub>Nxk</sub> S<sub>kxk</sub> C<sub>Nxk</sub></sub><sup>T</sup>.  

The H2Opus library currently includes support for the following operations:

* Generation of matrix structure from a point set and admissibility condition.
* Construction of a hierarchical matrix given a kernel function.
* Matrix-vector and matrix-multiple-vector multiplication (Hgemv). 
* Basis orthogonalization (Horthog), which generates orthogonal bases U and V from non-orthogonal ones and projects the matrix data on them.
* Algebraic compression (Hcompress). Given a desired approximation, generates smaller-rank bases U and V and projects the matrix data on them.
* Low rank update (HLRU), which adds a low rank matrix XX<sup>T</sup> and compresses the resulting sum.
* Local low rank update, which adds a low rank submatrix to a hierarchical matrix and compresses the result.
* Construction from mat-vec sampling (HARA). Constructs an H<sup>2</sup> matrix representation of a linear operator accessible only through matrix-vector products, using multi-level adaptive randomized approximations. The HARA operation allows matrix-matrix multiplication to be performed and general algebraic matrix expressions to be evaluated.

The current release is limited to symmetric matrices and single GPUs. Support for unsymmetric matrices and multi-GPUs will be included in an upcoming release. Please use the issue tracker to request new features.

## Installation

The INSTALL file in the top level directory has installation instructions. For NVIDIA GPU execution, the library has MAGMA as an external dependency. Lower level batched linear algebra routines of H2Opus are packaged seperately in the KBLAS library, which should also be installed. For CPU-only execution, the Thrust library should be installed. The library can use MKL if it is available.

## Documentation

This release is accompanied by a set of commented examples that serve the purpose of documenting the usage of its various capabilities. In addition, there is a somewhat larger example application that illustrates the discretization of a space-fractional diffusion operator and the construction of an approximate inverse as a preconditioner for a CG solver.

Each example is in its own directory in `examples/`. The examples can be built independently and each also has a short description in a README file.

## Related Publications

1. Wajih Boukaram, Marco Lucchesi, George Turkiyyah, Olivier Le Maître, Omar Knio, David Keyes,  Hierarchical matrix approximations for space-fractional diffusion equations. *Comput Methods Appl Mech Eng*, 369:113191 (2020)

2. David Keyes, Hatem Ltaief, George Turkiyyah, Hierarchical Algorithms on Hierarchical Architectures, *Phil. Trans. R. Soc. A.*, 378:20190055 (2020)

3. Wajih Boukaram, George Turkiyyah, David Keyes, Randomized GPU Algorithms for the Construction of Hierarchical Matrices from Matrix-Vector Operations. *SIAM J. Sci. Comput.* 41(4): C339-C366 (2019)

4. Wajih Halim Boukaram, George Turkiyyah, David Keyes, Hierarchical Matrix Operations on GPUs: Matrix-Vector Multiplication and Compression. *ACM Trans. Math. Softw.* 45(1): 3:1-3:28 (2019)

5. Wajih Halim Boukaram, George Turkiyyah, Hatem Ltaief, David Keyes, Batched QR and SVD algorithms on GPUs with applications in hierarchical matrix compression, *Parallel Computing*, 74:19-33 (2018)