# CeriumUI

CeriumUI is a versatile, declarative UI framework designed for industrial applications. It supports both XML-based and code-driven UI development, providing flexibility to adapt to various hardware capabilities, including systems with limited or no GPU support.

## Features

- **Declarative and Programmatic Interfaces**: Build UIs using XML or pure C++ code.
- **Flexible Rendering**: Abstract rendering layer allows for optimal performance across a wide range of devices, from high-end GPUs to CPU-only systems.
- **Dynamic Renderer Selection**: Automatically selects the best rendering backend based on the detected hardware capabilities.
- **Extensible**: Easily extendable with custom widgets and styles.
- **Cross-Platform**: Designed to support multiple platforms with minimal configuration.

## System Requirements

CeriumUI is designed for devices that offer a moderate to high level of computational power. It is not suitable for low-end microcontrollers such as the STM32F1 series, as these devices do not have the necessary resources to handle the framework's computational and memory demands. 

## License

Distributed under the MIT License. See `LICENSE` for more information.