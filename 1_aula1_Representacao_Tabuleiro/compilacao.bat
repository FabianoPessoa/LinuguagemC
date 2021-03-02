REM Programa em lotes .bat que executa a compilação dos scripts em C
cls
gcc main.c funcao.c proto.h -o programa.exe
start programa.exe
exit