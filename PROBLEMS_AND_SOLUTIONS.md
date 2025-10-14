# 项目开发问题记录

## Git 版本控制相关问题

### 问题1：连接GitHub时出现 "Connection was reset"
**问题描述**：

使用Git Bash进行推送至远程仓库操作时出现错误。

```bash
fatal: unable to access 'https://github.com/...': Recv failure: Connection was reset
```

**解决方案**：

1. 配置SSH密钥替代HTTPS连接

2. 修改SSH配置使用443端口

3. 在~/.ssh/config文件中添加：

   ```bash
   Host github.com
       Hostname ssh.github.com
       Port 443
       User git
       PreferredAuthentications publickey
       IdentityFile ~/.ssh/id_rsa