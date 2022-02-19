# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    copilador.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 17:44:25 by macypria          #+#    #+#              #
#    Updated: 2022/02/16 00:28:00 by macypria         ###   ########.fr        #
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

echo "REALIZANDO OS TESTES"
if [ $exerc -eq 0 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex00/
	 echo "EXERCICIO 00"
	 cat -e *
	 sleep 1
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 1 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex00/
	 echo "EXERCICIO 00"
	 cat -e *
	 sleep 1
	 cd ../ex01
	 echo "EXERCICIO 01"
	 tar -xf *.tar
	 rm *.tar
	 ls -l
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 2 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex00/
	 echo "EXERCICIO 00"
	 cat -e *
	 sleep 1
	 cd ../ex01
	 echo "EXERCICIO 01"
	 tar -xf *.tar
	 rm *.tar
	 ls -l
	 sleep 1
	 cd ../ex02
	 echo "EXERCICIO 02"
	 tar -xf exo2.tar
	 rm exo2.tar
	 ls -l
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 3 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex00/
	 echo "EXERCICIO 00"
	 cat -e *
	 sleep 1
	 cd ../ex01
	 echo "EXERCICIO 01"
	 tar -xf *.tar
	 rm *.tar
	 ls -l
	 sleep 1
	 cd ../ex02
	 echo "EXERCICIO 02"
	 tar -xf *.tar
	 rm *.tar
	 ls -l
	 sleep 1
	 cd ../ex03
	 echo "EXERCICIO 03"
	 cat -e *
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 4 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex00/
	 echo "EXERCICIO 00"
	 cat -e *
	 sleep 1
	 cd ../ex01
	 echo "EXERCICIO 01"
	 tar -xf *.tar
	 rm *.tar
	 ls -l
	 sleep 1
	 cd ../ex02
	 echo "EXERCICIO 02"
	 tar -xf *.tar
	 rm *.tar
	 ls -l
	 sleep 1
	 cd ../ex03
	 echo "EXERCICIO 03"
	 cat -e *
	 sleep 1
	 cd ../ex04
	 echo "EXERCICIO 04"
	 bash *
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 5 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex00/
	 echo "EXERCICIO 00"
	 cat -e *
	 sleep 1
	 cd ../ex01
	 echo "EXERCICIO 01"
	 tar -xf *.tar
	 rm *.tar
	 ls -l
	 sleep 1
	 cd ../ex02
	 echo "EXERCICIO 02"
	 tar -xf *.tar
	 rm *.tar
	 ls -l
	 sleep 1
	 cd ../ex03
	 echo "EXERCICIO 03"
	 cat -e *
	 sleep 1
	 cd ../ex04
	 echo "EXERCICIO 04"
	 bash *
	 sleep 1
	 cd ../ex05
	 echo "EXERCICIO 05"
	 sleep 1
	 echo "CRIANDO ARQUIVOS PARA SEREM IGNORADOS"
	 sleep 1
	 echo "*.txt" > .gitignore
	 touch hello.txt
	 touch world.txt
	 bash *.sh
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 6 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex00/
	 echo "EXERCICIO 00"
	 cat -e *
	 sleep 1
	 cd ../ex01
	 echo "EXERCICIO 01"
	 tar -xf *.tar
	 rm *.tar
	 ls -l
	 sleep 1
	 cd ../ex02
	 echo "EXERCICIO 02"
	 tar -xf *.tar
	 rm *.tar
	 ls -l
	 sleep 1
	 cd ../ex03
	 echo "EXERCICIO 03"
	 cat -e *
	 sleep 1
	 cd ../ex04
	 echo "EXERCICIO 04"
	 bash *
	 sleep 1
	 cd ../ex05
	 echo "EXERCICIO 05"
	 sleep 1
	 echo "CRIANDO ARQUIVOS PARA SEREM IGNORADOS"
	 sleep 1
	 echo "*.txt" > .gitignore
	 touch hello.txt
	 touch world.txt
	 bash *.sh
	 cd ../ex06
	 echo "EXERCICIO 06"
	 cat *
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 7 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex00/
	 echo "EXERCICIO 00"
	 cat -e *
	 sleep 1
	 cd ../ex01
	 echo "EXERCICIO 01"
	 tar -xf *.tar
	 rm *.tar
	 ls -l
	 sleep 1
	 cd ../ex02
	 echo "EXERCICIO 02"
	 tar -xf *.tar
	 rm *.tar
	 ls -l
	 sleep 1
	 cd ../ex03
	 echo "EXERCICIO 03"
	 cat -e *
	 sleep 1
	 cd ../ex04
	 echo "EXERCICIO 04"
	 bash *
	 sleep 1
	 cd ../ex05
	 echo "EXERCICIO 05"
	 sleep 1
	 echo "CRIANDO ARQUIVOS PARA SEREM IGNORADOS"
	 sleep 1
	 echo "*.txt" > .gitignore
	 touch hello.txt
	 touch world.txt
	 bash *.sh
	 cd ../ex06
	 echo "EXERCICIO 06"
	 cat *
	 cd ../ex07
	 echo "EXERCICIO 07"
	 cat *
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 8 ]
then
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex00/
	 cat -e *
	 sleep 1
	 cd ../ex01
	 sleep 1
	 echo "EXERCICIO 01"
	 tar -xf *.tar
	 rm *.tar
	 ls -l
	 sleep 1
	 cd ../ex02
	 sleep 1
	 echo "EXERCICIO 02"
	 tar -xf *.tar
	 rm *.tar
	 ls -l
	 sleep 1
	 cd ../ex03
	 echo "EXERCICIO 03"
	 cat -e *
	 sleep 1
	 cd ../ex04
	 sleep 1
	 echo "EXERCICIO 04"
	 bash *
	 sleep 1
	 cd ../ex05
	 echo "EXERCICIO 05"
	 sleep 1
	 echo "CRIANDO ARQUIVOS PARA SEREM IGNORADOS"
	 sleep 1
	 echo "*.txt" > .gitignore
	 touch hello.txt
	 touch world.txt
	 bash *.sh
	 cd ../ex06
	 sleep 1
	 echo "EXERCICIO 06"
	 cat *
	 sleep 1
	 cd ../ex07
	 echo "EXERCICIO 07"
	 cat *
	 sleep 1
	 cd ../ex08
	 echo "EXERCICIO 08"
	 sleep 1
	 echo '0000000000000000000000000000000000000000042' > teste
	 file -m ft_magic teste
	 echo "TESTE REALIZADO COM SUCESSO!"
else
     echo "ENTRE COM UMA RESPOSTA VÁLIDA!"
fi