# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    copilador.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 17:44:25 by macypria          #+#    #+#              #
#    Updated: 2022/02/16 00:59:08 by macypria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

echo "BEM VINDO AO COPILADOR"
echo -p -link "COLE ABAIXO O LINK DO REPOSITORIO A SER AVALIADO: "
read link
echo -p -choose """ENTRE COM O NICKNAME DO CAMPER A SER AVALIADO: """
read choose
git clone $link ../../avaliados/$choose
# este comando -choose armazena o apelido do usuario na variavel de nome choose
echo -p -exerc """ATÉ QUAL EXERCICIO $choose REALIZOU:
(INSIRA A RESPOSTA EM VALOR NUMERICO) """
read exerc

if [ $exerc -eq 1 ]
then
	 cd /home/coder/avaliados/$choose/ex01/
	 echo "EXERCICIO 01"
	 sleep 1
	 echo "VISUALIZANDO ARQUIVO"
	 cat -e *
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 2 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex01/
	 echo "EXERCICIO 01"
	 sleep 1
	 echo "VISUALIZANDO ARQUIVO"
	 sleep 1
	 cat -e *
	 echo "EXECUTANDO O SCRIPT"
	 sleep 1
	 bash *.sh
	 sleep 1
	 cd ../ex02
	 sleep 1
	 echo "CRIANDO ARQUIVO DE TESTES"
	 touch arquivo1.sh arquivo2.sh arquivo3.sh .arquivo4.sh
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 sleep 1
	 bash *.sh	 
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 3 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex01/
	 echo "EXERCICIO 01"
	 sleep 1
	 echo "VISUALIZANDO ARQUIVO"
	 sleep 1
	 cat -e *
	 echo "EXECUTANDO O SCRIPT"
	 sleep 1
	 bash *.sh
	 sleep 1
	 cd ../ex02
	 sleep 1
	 echo "CRIANDO ARQUIVO DE TESTES"
	 touch arquivo1.sh arquivo2.sh arquivo3.sh .arquivo4.sh
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 sleep 1
	 bash *.sh
	 cd ../ex03
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 4 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex01/
	 echo "EXERCICIO 01"
	 sleep 1
	 echo "VISUALIZANDO ARQUIVO"
	 sleep 1
	 cat -e *
	 echo "EXECUTANDO O SCRIPT"
	 sleep 1
	 bash *.sh
	 sleep 1
	 cd ../ex02
	 sleep 1
	 echo "CRIANDO ARQUIVO DE TESTES"
	 touch arquivo1.sh arquivo2.sh arquivo3.sh .arquivo4.sh
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 sleep 1
	 bash *.sh
	 cd ../ex03
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 cd ../ex04
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 5 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex01/
	 echo "EXERCICIO 01"
	 sleep 1
	 echo "VISUALIZANDO ARQUIVO"
	 sleep 1
	 cat -e *
	 echo "EXECUTANDO O SCRIPT"
	 sleep 1
	 bash *.sh
	 sleep 1
	 cd ../ex02
	 sleep 1
	 echo "CRIANDO ARQUIVO DE TESTES"
	 touch arquivo1.sh arquivo2.sh arquivo3.sh .arquivo4.sh
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 sleep 1
	 bash *.sh
	 cd ../ex03
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 cd ../ex04
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 cd ../ex05
	 sleep 1
	 echo "MOSTRANDO O ARQUIVO"
	 ls -l
	 sleep 1
	 echo "MOSTRANDO O CONTEÚDO"
	 cat -e *
	 sleep 1
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 6 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex01/
	 echo "EXERCICIO 01"
	 sleep 1
	 echo "VISUALIZANDO ARQUIVO"
	 sleep 1
	 cat -e *
	 echo "EXECUTANDO O SCRIPT"
	 sleep 1
	 bash *.sh
	 sleep 1
	 cd ../ex02
	 sleep 1
	 echo "CRIANDO ARQUIVO DE TESTES"
	 touch arquivo1.sh arquivo2.sh arquivo3.sh .arquivo4.sh
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 sleep 1
	 bash *.sh
	 cd ../ex03
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 cd ../ex04
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 cd ../ex05
	 sleep 1
	 echo "MOSTRANDO O ARQUIVO"
	 ls -l
	 sleep 1
	 echo "MOSTRANDO O CONTEÚDO"
	 cat -e *
	 sleep 1
	 cd ../ex06
	 sleep 1
	 echo "CRIANDO ARQUIVO DE TESTE"
	 touch arquivo1 arquivo2 arquivo3 arquivo4 arquivo5 arquivo6 arquivo7 arquivo8 arquivo9
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 7 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex01/
	 echo "EXERCICIO 01"
	 sleep 1
	 echo "VISUALIZANDO ARQUIVO"
	 sleep 1
	 cat -e *
	 echo "EXECUTANDO O SCRIPT"
	 sleep 1
	 bash *.sh
	 sleep 1
	 cd ../ex02
	 sleep 1
	 echo "CRIANDO ARQUIVO DE TESTES"
	 touch arquivo1.sh arquivo2.sh arquivo3.sh .arquivo4.sh
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 sleep 1
	 bash *.sh
	 cd ../ex03
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 cd ../ex04
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 cd ../ex05
	 sleep 1
	 echo "MOSTRANDO O ARQUIVO"
	 ls -l
	 sleep 1
	 echo "MOSTRANDO O CONTEÚDO"
	 cat -e *
	 sleep 1
	 cd ../ex06
	 sleep 1
	 echo "CRIANDO ARQUIVO DE TESTE"
	 touch arquivo1 arquivo2 arquivo3 arquivo4 arquivo5 arquivo6 arquivo7 arquivo8 arquivo9
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 cd ../ex07
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 8 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex01/
	 echo "EXERCICIO 01"
	 sleep 1
	 echo "VISUALIZANDO ARQUIVO"
	 sleep 1
	 cat -e *
	 echo "EXECUTANDO O SCRIPT"
	 sleep 1
	 bash *.sh
	 sleep 1
	 cd ../ex02
	 sleep 1
	 echo "CRIANDO ARQUIVO DE TESTES"
	 touch arquivo1.sh arquivo2.sh arquivo3.sh .arquivo4.sh
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 sleep 1
	 bash *.sh
	 cd ../ex03
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 cd ../ex04
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 cd ../ex05
	 sleep 1
	 echo "MOSTRANDO O ARQUIVO"
	 ls -l
	 sleep 1
	 echo "MOSTRANDO O CONTEÚDO"
	 cat -e *
	 sleep 1
	 cd ../ex06
	 sleep 1
	 echo "CRIANDO ARQUIVO DE TESTE"
	 touch arquivo1 arquivo2 arquivo3 arquivo4 arquivo5 arquivo6 arquivo7 arquivo8 arquivo9
	 sleep 1
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 cd ../ex07
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 cd ../ex08
	 echo "EXECUTANDO O SCRIPT"
	 bash *.sh
	 sleep 1
	 echo "TESTE REALIZADO COM SUCESSO!"
else
     echo "ENTRE COM UMA RESPOSTA VÁLIDA!"
fi