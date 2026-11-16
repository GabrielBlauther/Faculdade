# Exercícios e projetos da UCS

## Ambiente nos três computadores

Use GCC e GDB disponíveis no PATH de cada computador. A instalação pode ficar
em pastas diferentes: não coloque caminhos pessoais nas configurações do repositório.
No Windows, adicione a pasta `bin` da instalação GCC/GDB ao PATH do usuário
(por exemplo, `C:\msys64\ucrt64\bin`). No Linux, instale GCC e GDB pelo
gerenciador de pacotes da distribuição. Reinicie o VS Code após mudar o PATH.

Confira no terminal: `gcc --version` e `gdb --version`.
As configurações compartilhadas usam C11; versões diferentes do GCC ainda podem
produzir avisos diferentes. Prefira a mesma versão principal nas três máquinas.

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
