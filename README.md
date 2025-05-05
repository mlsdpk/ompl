The Open Motion Planning Library (OMPL)
=======================================

This forked branch includes an implementation of [Greedy RRT* (G-RRT*)](https://arxiv.org/abs/2405.03411v2), a greedy version of the anytime Rapidly-exploring Random Trees (RRT*) algorithm. Other benchmarked planners used in the paper can also be found in the [`benchmarking`](https://github.com/mlsdpk/ompl/tree/benchmarking) branch.

If you use any of this code in your research work, please consider citing:
```bibtex
@article{kyaw2024greedy,
  title={Greedy heuristics for sampling-based motion planning in high-dimensional state spaces},
  author={Kyaw, Phone Thiha and Le, Anh Vu and Yi, Lim and Veerajagadheswar, Prabakaran and Vu, Minh Bui and Elara, Mohan Rajesh},
  journal={arXiv preprint arXiv:2405.03411},
  year={2024}
}
```

Continuous Integration Status
-----------------------------

[![Build](https://github.com/ompl/ompl/actions/workflows/build.yml/badge.svg?branch=pr-github-actions)](https://github.com/ompl/ompl/actions/workflows/build.yml)
[![Format](https://github.com/ompl/ompl/actions/workflows/format.yml/badge.svg?branch=pr-github-actions)](https://github.com/ompl/ompl/actions/workflows/format.yml?branch=pr-github-actions)

Installation
------------

Visit the [OMPL installation page](https://ompl.kavrakilab.org/core/installation.html) for
detailed installation instructions.

OMPL has the following required dependencies:

* [Boost](https://www.boost.org) (version 1.68 or higher)
* [CMake](https://www.cmake.org) (version 3.12 or higher)
* [Eigen](http://eigen.tuxfamily.org) (version 3.3 or higher)

The following dependencies are optional:

* [Py++](https://github.com/ompl/ompl/blob/main/doc/markdown/installPyPlusPlus.md) (needed to generate Python bindings)
* [Doxygen](http://www.doxygen.org) (needed to create a local copy of the documentation at
  https://ompl.kavrakilab.org/core)
* [Flann](https://github.com/flann-lib/flann/tree/1.9.2) (FLANN can be used for nearest neighbor queries by OMPL)
* [Spot](http://spot.lrde.epita.fr) (Used for constructing finite automata from LTL formulae.)

Once dependencies are installed, you can build OMPL on Linux, macOS,
and MS Windows. Go to the top-level directory of OMPL and type the
following commands:

    mkdir -p build/Release
    cd build/Release
    cmake ../..
    # next step is optional
    make -j 4 update_bindings # if you want Python bindings
    make -j 4 # replace "4" with the number of cores on your machine
