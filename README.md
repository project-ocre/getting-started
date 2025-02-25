Getting Started Building Ocre Containers
========================================

This repository contains materials and sample code for building Ocre containers, including the Ocre toolchain for C/C++ via a **dev container**.

[Dev containers](https://code.visualstudio.com/docs/remote/containers-tutorial) are essentially a Docker container image that is specifically configured to provide a complete development environment. When working with this dev container, it will run locally on your development machine (via VS Code) and the Ocre toolchain runs within that container. 

**Note:** The included dev container can also be run interactively, without the need for VSCode.

## Prerequisites

Please install all of the following prerequisites if you intend to use the dev contianer within VS Code. Alternatively, if you're only planning on running the dev container locally you only need to install **Docker Desktop**.

* [Docker Desktop](https://www.docker.com/products/docker-desktop/)
* [Visual Studio Code](https://code.visualstudio.com/)
* [Dev Containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers) Extension in VSCode

---

### Development with Visual Studio Code

To develop with the Ocre dev container using VS Code follow these steps:

1. Install all of the mentioned pre-requisites
2. Clone the [`project-ocre/getting-started`](https://github.com/project-ocre/project-ocre.github.io) repository locally
3. Start VS Code
4. Run the `Dev Containers: Open Folder in Container...` from the Command Palette (`Cmd + Shift + P` for Mac, or `Ctrl + Shift + P` for Windows).
5. Select the folder containing the cloned repository.

The VS Code window will then reload, but since the container does not exist yet, VS Code will create one and clone the sample repository into an isolated container volume. This will take some time and progress will be displayed in the lower right corner of the VS Code window. This step only needs to be done once.

Opening a terminal will give you console access to the container environment. From there, the samples can be built. 

---

### Interactive Development
The toolchain container can also be launched and used *interactively* as follows, without the need for VS Code:
```
cd samples
docker run --rm -it -v $(pwd):/home/ocre ghcr.io/atym-io/atym-c-toolchain:latest
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