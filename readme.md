## 仓库介绍

本仓库是个人学习使用, 并不包含对Linux源码的任何改动.

## Linux 4.12.1 源码文件架构

| Directory/File name | Description                                   | isUploaded                 |
| ------------------- | --------------------------------------------- | -------------------------- |
| arch/               | Architecture -specific source                 | Y                          |
| block/              | Block I/O layer                               |                            |
| crypto/             | crypto API                                    | Y                          |
| Documentation/      |                                               |                            |
| drivers/            | Device drivers                                | 部分(tty/serial, irq_chip) |
| firmware/           | Device firmware needed to use certain drivers |                            |
| fs/                 | The VFS and the individual file systems       |                            |
| include/            | Kernel headers                                | Y                          |
| init/               | Kernel boot and initialization                | Y                          |
| ipc/                | interprocess communication code               |                            |
| kernel/             | Core subsystems, such as the scheduler        | Y                          |
| lib/                | Helper routines                               | Y                          |
| mm/                 | Memory management subsystem and the VM        | Y                          |
| net/                | Networking subsystem                          |                            |
| security/           | Linux Security Module                         |                            |
| sound/              | Sound subsystem                               |                            |
| usr/                |                                               |                            |
| virt/               | Virtualization infrastructure                 | Y                          |
| COPYING             | 内核许可证(GNU GPL v2)                        |                            |
| CREDITS             | 开发者列表                                    |                            |
| MATINTAINERS        | 维护者列表                                    |                            |
| README              |                                               |                            |
| readme.md           | 本人自行添加，标注学习行为                    | Y                          |

