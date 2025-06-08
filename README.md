# Super Trunfo - Jogo em C

Este projeto é um programa simples em C que permite criar e gerenciar cartas para o jogo Super Trunfo, praticando manipulação de variáveis, operadores e funções de entrada e saída.

---

## Requisitos

- Windows 10 ou superior
- Visual Studio Code (VS Code)
- Extensão C/C++ instalada no VS Code
- MinGW (compilador GCC) instalado e configurado no PATH do sistema

---

## Como instalar o MinGW

1. Baixe o instalador do MinGW em:  
   https://sourceforge.net/projects/mingw/
2. Instale os pacotes `mingw32-base` e `mingw32-gcc-g++`.
3. Clique em **Installation > Apply Changes** para instalar os pacotes.
4. Adicione `C:\MinGW\bin` ao PATH do Windows nas variáveis de ambiente.
5. Reinicie o VS Code.

---

## Como compilar e executar o jogo

1. Abra o VS Code e abra a pasta do projeto.
2. Abra o terminal integrado (`Ctrl + '`).
3. Compile o programa com o comando: gcc super_trunfo.c -o super_trunfo.exe
4. Execute o programa: ./super_trunfo.exe

---

## Como jogar

No menu que aparecerá no terminal, escolha as opções:

- **1**: Adicionar uma nova carta (nome e atributos).
- **2**: Listar todas as cartas cadastradas.
- **3**: Sair do jogo.

---

## Observações

- O programa aceita até 10 cartas.
- Os atributos (força, velocidade, inteligência) devem estar entre 0 e 100.
- Para nomes com espaços, digite normalmente e pressione Enter.

 
