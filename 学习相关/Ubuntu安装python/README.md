# ubuntu安装python

## 更新软件包列表

```linux
sudo apt update
```

## 安装python

```linux
sudo apt install python3
```

## 安装python-pip

```linux
sudo apt install python3-pip
```

## 设置python命令（可选）

```linux
sudo apt install python-is-python3
```

## 检查安装情况

- 未设置python命令

```linux
python3 --version
pip3 --version
```

- 已设置python命令（可选）

```linux
python --version
pip --version
```

## 创建虚拟环境

### 安装venv

```linux
sudo apt install python3.14-venv // 参考自己的python版本号
```

### 进入工程文件夹

```linux
cd ~/game_ai // 进入你的项目文件夹（假设叫 game_ai）
```

## 创建环境

```linux
python3 -m venv venv
```

### 激活环境

```linux
source venv/bin/activate
```
