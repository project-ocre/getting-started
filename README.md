Getting Started Building Ocre Containers
========================================

This repository contains materials and sample code for building Ocre containers, including the Ocre toolchain for C/C++ via a **dev container**, , which can also be run in VSCode or interactively.

## Getting Started

First, clone this repository with submodules:
```bash
git clone --recursive https://github.com/project-ocre/getting-started.git
```
Or if you already cloned without submodules:
```bash
git submodule update --init --recursive
```

**Why submodules?** This repository includes the [OCRE SDK](https://github.com/project-ocre/ocre-sdk) as a submodule, which provides the C API definitions (like GPIO, sensors, timers, and messaging) needed to build applications with Ocre. The `--recursive` flag ensures you get both this repository and the SDK headers.

---

### Development with Visual Studio Code
To develop with the Atym dev container using VS Code follow these steps:
1. Install [Docker Desktop](https://www.docker.com/products/docker-desktop/), [Visual Studio Code](https://code.visualstudio.com/), and the [Dev Containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers) Extension in VSCode.
2. Start VS Code
3. Run the `Dev Containers: Open Folder in Container...` from the Command Palette (`Cmd + Shift + P` for Mac, or `Ctrl + Shift + P` for Windows).
4. Select the folder containing the cloned repository.

The VS Code window will then reload, but since the container does not exist yet, VS Code will create one and clone the sample repository into an isolated container volume. This will take some time and progress will be displayed in the lower right corner of the VS Code window. This step only needs to be done once.

Opening a terminal will give you console access to the container environment. From there, the samples can be built. 

---

### Interactive Development
The toolchain container can also be launched and used *interactively* as follows, without the need for VS Code.
1. Install [Docker Desktop](https://www.docker.com/products/docker-desktop/)
2. Run the following commands from within the newly cloned `getting-started` repo.
```
cd samples
docker run --rm -it -v $(pwd):/home/atym ghcr.io/atym-io/atym-c-toolchain:latest
```

## Building the Samples

Each of the sample applications has a CMake file and can be built as follows:
```
cd samples/sample_name
mkdir build && cd build
cmake ..
make
```

**Note:** This step results in the creation of a file named `sample_name.wasm`, which will be used by the Ocre CLI to create an Ocre container in the next step.

## Further Information

For more detailed information on Ocre containers, including:
- Detailed explanations of container components
- Instructions for building and running additional samples
- Advanced configuration options
- Best practices for Ocre container development

Please visit our comprehensive documentation at [https://docs.project-ocre.org/](https://docs.project-ocre.org/).