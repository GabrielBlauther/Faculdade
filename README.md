# Exercícios e projetos da UCS

## Ambiente nos três computadores

O VS Code usa GCC para compilar em C11 e GDB para depurar, buscando os dois no
`PATH` do ambiente em que o projeto está aberto.

- **Windows nativo** — use GCC e GDB do mesmo ambiente do MSYS2. Neste
  computador, ambos já estão em `C:\msys64\ucrt64\bin`. Se houver mais de
  uma instalação, confira a ordem com `where.exe gcc` e `where.exe gdb`.
- **Linux nativo** — instale GCC e GDB pelo gerenciador de pacotes da distribuição.
- **GitHub Codespaces** — o repositório define um Dev Container com Ubuntu
  24.04, GCC e GDB. Em um Codespace já criado, execute
  **Codespaces: Rebuild Container** depois de receber essa configuração.

Para usar o mesmo ambiente Linux do Codespaces nos dois PCs, abra o projeto
com **Dev Containers: Reopen in Container** no VS Code, com Docker e a extensão
Dev Containers instalados. Em modo nativo, as versões de GCC podem variar.

Confira as versões com `gcc --version` e `gdb --version`. Reinicie o VS Code
após mudar o `PATH`. Se o IntelliSense escolher outro compilador, configure
`C_Cpp.default.compilerPath` nas configurações de usuário do VS Code com o
caminho do GCC da máquina.

## Compilar e depurar

Com a extensão Microsoft C/C++ instalada, abra o arquivo `.c` e use
Ctrl+Shift+B para compilar ou F5 para compilar e depurar.
O executável fica ao lado do fonte: com `.exe` no Windows e sem extensão no Linux.
Esta tarefa compila somente o arquivo aberto; projetos com vários fontes, como
o jogo da velha, precisam de uma tarefa que inclua os respectivos arquivos `.c`.

As pastas `build` e `output` e as extensões de compilação estão no `.gitignore`.
Executáveis sem extensão gerados no Linux devem ser removidos após o uso ou
ignorados individualmente; não ignore todos os arquivos sem extensão.
Os binários antigos já versionados continuam no histórico e não são portáveis:
recompile os fontes na máquina em uso.
