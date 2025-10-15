# 猜拳游戏 (Finger Guessing)

SynX工作室2025招新基础题Git实战：一个基于C语言开发的命令行猜拳游戏，支持多种游戏模式和功能。

![游戏截图](https://img.shields.io/badge/版本-1.0.0-brightgreen) ![语言](https://img.shields.io/badge/语言-C语言-blue) ![平台](https://img.shields.io/badge/平台-跨平台-lightgrey)

## 🎮 功能特性

- ✊✌️✋ 经典猜拳游戏（石头、剪刀、布）
- 🤖 与电脑对战
- 🎯 三局两胜制
- 📊 游戏统计和胜负记录
- 🕵️ 作弊模式

## 🚀 快速开始

### 环境要求
- GCC 编译器
- 支持C99标准的C语言环境
- Linux/macOS/Windows 系统

### 安装步骤

1. **克隆仓库**
   
   ```bash
   git clone https://github.com/DTLW-a11y/2025-SynX-GitExercise-1.git
   cd 2025-SynX-GitExercise-1
   
2. 编译项目

   ```bash
   gcc -o finger-guessing finger-guessing.c

3. 运行游戏

   ```bash
   ./finger-guessing
   ```

## 🎯 游戏玩法

### 基本规则

- ✊ 石头 击败 ✌️ 剪刀
- ✌️ 剪刀 击败 ✋ 布
- ✋ 布 击败 ✊ 石头

### 游戏模式

1. **多轮比赛** - 三局两胜制
3. **作弊模式** - 输入`zzz`激活

### 操作指南

```text
输入数字以表示出拳：
1 - 剪刀 ✌️  
2 - 石头 ✊
3 - 布 ✋

特殊：
zzz - 开启作弊模式 🕵️
```

## 📁 项目结构

```text
2025-SynX-GitExercise-1/
├── finger-guessing.c    # 主程序源代码
├── README.md           # 项目说明文档
└── PROBLEMS_AND_SOLUTIONS.md  # 问题记录文档
```

## 👥 作者

**林子为**

- GitHub: [@DTLW-a11y](https://github.com/DTLW-a11y)
- 邮箱: 3216341428@qq.com
