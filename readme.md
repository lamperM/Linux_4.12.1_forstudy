## Date and files of commenting

```
Commenter     : Lu Wang
Location      : UESTC-SIAS
Date          : 2021/12/21 21:11
Reason        : The assignment of Graph Theory on Red and Black trees.
```

添加注释的文件：

| File name  | path           | bahavior                                          |
| ---------- | -------------- | ------------------------------------------------- |
| mm_types.h |                | 添加对 mm_strcut 和 vm_area_struct 结构的中文注释 |
| rbtree.h   | include/linux/ | 红黑树结点结构体定义                              |
| rbtree.c   | lib/           | 红黑树插入操作的实现 <br />红黑树删除操作的实现   |

<br>

## Linux 4.12.1 源码文件架构

| Directory/File name | Description                                   | isUploaded |
| ------------------- | --------------------------------------------- | ---------- |
| arch/               | Architecture -specific source                 | Y          |
| block/              | Block I/O layer                               |            |
| crypto/             | crypto API                                    | Y          |
| Documentation/      |                                               |            |
| drivers/            | Device druvers                                |            |
| firmware/           | Device firmware needed to use certain drivers |            |
| fs/                 | The VFS and the individual file systems       |            |
| include/            | Kernel headers                                | Y          |
| init/               | Kernel boot and initialization                | Y          |
| ipc/                | interprocess communication code               |            |
| kernel/             | Core subsystems, such as the scheduler        | Y          |
| lib/                | Helper routines                               | Y          |
| mm/                 | Memory management subsystem and the VM        | Y          |
| net/                | Networking subsystem                          |            |
| security/           | Linux Security Module                         |            |
| sound/              | Sound subsystem                               |            |
| usr/                |                                               |            |
| virt/               | Virtualization infrastructure                 | Y          |
| COPYING             | 内核许可证(GNU GPL v2)                        |            |
| CREDITS             | 开发者列表                                    |            |
| MATINTAINERS        | 维护者列表                                    |            |
| README              |                                               |            |
| readme.md           | 本人自行添加，标注学习行为                    | Y          |

