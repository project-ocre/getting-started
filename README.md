Getting Started Building Ocre Containers
========================================
This repository contains materials and sample code for building Ocre containers.


## Prerequisites 
The Ocre toolchain for C/C++ is provided as a Docker container image. It requires Docker Desktop or something similar to be installed on your development machine. The image can be run interactively or as a Dev Container, which can be used with Visual Studio Code. The Dev Containers extension is required for use with Visual Studio Code.

1. [Docker Desktop](https://www.docker.com/products/docker-desktop/)
2. [VS Code](https://code.visualstudio.com/)
3. [Dev Containers extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers) for VSCode.

**Note:** The dev container can also be run directly in GitHub via [CodeSpaces](https://docs.github.com/en/codespaces).

### Development with Visual Studio Code
A Development container, or dev container, is a Docker container specifically configured to provide a complete development environment. When working with a dev container, the VS Code editor runs locally on your development machine and the Ocre toolchain runs within the container. 

To develop with a dev container follow these steps:
1. Install all of the prerequisites as specified above
2. Clone the [`ocre/getting-started`](https://github.com/project-ocre/getting-started) repository locally
3. Start VS Code
4. Run the `Dev Containers: Open Folder in Container...` command and select the local folder.

The VS Code window will then reload, but since the container does not exist yet, VS Code will create one and clone the sample repository into an isolated container volume. This will take some time and progress will be displayed in the lower right corner of the VS Code window. This step only needs to be done once. Opening a terminal will give you console access to the container environment. From there, the samples can be built.

### Interactive Development
The toolchain container can also be launched and used interactively as follows:
```
cd samples
docker run --rm -it -v $(pwd):/home/ocre ocre/ocre-c-toolchain:latest
```

**Note:** Additional documentation and a step-by-step guide for working with dev containers can be found [here](https://code.visualstudio.com/docs/remote/containers-tutorial).

## Sample Applications

To get started building your first Ocre container using the provided samples, simply clone this repo and follow the steps below.

### Building
To build a sample, simply navigate to the desired sample and run the following


```sh
mkdir build && cd build
cmake -DWASI_SDK_DIR=/opt/wasi-sdk -DCMAKE_TOOLCHAIN_FILE=/opt/wamr-sdk/app-sdk/wamr_toolchain.cmake ..
make
```
**Note:** This will create a container image called `<sample_name>.nbx`

### Load the Container
Next, we'll then load the container we built previously on our Ocre-enabled board.

```sh
example
```
Congrats, you have now built and run your first Ocre container!

## Further Information

For more detailed information on Ocre containers, including:
- Detailed explanations of container components
- Instructions for building and running additional samples
- Advanced configuration options
- Best practices for Ocre container development

Please visit our comprehensive documentation at [https://docs.project-ocre.org/](https://docs.project-ocre.org/).
