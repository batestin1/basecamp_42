# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    copilador.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 17:44:25 by macypria          #+#    #+#              #
#    Updated: 2022/02/17 20:40:44 by macypria         ###   ########.fr        #
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

if [ $exerc -eq 0 ]
then
	 sleep 1
	 echo "REALIZANDO O TESTE DA NORMINETTE"
	 sleep 1
	 norminette -R CheckForbiddenSourceHeader /home/coder/avaliados/$choose/*
	 sleep 1
	 cd /home/coder/avaliados/$choose/ex00/
	 echo "REALIZANDO O TESTE DE GCC"
	 sleep 1
	 echo "EXERCICIO 00"
	 gcc *.c -Wall -Werror -Wextra
	 ./a.out
	 echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 1 ]
then
	sleep 1
	  echo "REALIZANDO O TESTE DA NORMINETTE"
	  sleep 1
	  norminette -R CheckForbiddenSourceHeader /home/coder/avaliados/$choose/*
	  sleep 1
	  echo "REALIZANDO COPIA DOS MAINS"
	  cd /home/coder/avaliados/$choose/ex00/
	  echo "REALIZANDO O TESTE DE GCC"
	  sleep 1
	  echo "EXERCICIO 00"
	  gcc *.c -Wall -Werror -Wextra
	  ./a.out 
	  sleep 1
	  echo "EXERCICIO 01"
	  cd ../ex01
	  sleep 1
	  gcc *.c -Wall -Werror -Wextra
	  ./a.out Hello World
	  echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 2 ]
then
	sleep 1
	  echo "REALIZANDO O TESTE DA NORMINETTE"
	  sleep 1
	  norminette -R CheckForbiddenSourceHeader /home/coder/avaliados/$choose/*
	  sleep 1
	  echo "REALIZANDO COPIA DOS MAINS"
	  cd /home/coder/avaliados/$choose/ex00/
	  echo "REALIZANDO O TESTE DE GCC"
	  sleep 1
	  echo "EXERCICIO 00"
	  gcc *.c -Wall -Werror -Wextra
	  ./a.out
	  sleep 1
	  echo "EXERCICIO 01"
	  cd ../ex01
	  sleep 1
	  gcc *.c -Wall -Werror -Wextra
	  ./a.out HELLO WORLD
	  echo "EXERCICIO 02"
	  cd ../ex02
	  sleep 1
	  gcc *.c -Wall -Werror -Wextra
	  ./a.out 1 2 3 4 5 6 7
	  echo "TESTE REALIZADO COM SUCESSO!"
elif [ $exerc -eq 3 ]
then
	sleep 1
	  echo "REALIZANDO O TESTE DA NORMINETTE"
	  sleep 1
	  norminette -R CheckForbiddenSourceHeader /home/coder/avaliados/$choose/*
	  sleep 1
	  #realizando os testes
	  cd /home/coder/avaliados/$choose/ex00/
	  echo "REALIZANDO O TESTE DE GCC"
	  sleep 1
	  echo "EXERCICIO 00"
	  gcc *.c -Wall -Werror -Wextra
	  ./a.out
	  sleep 1
	  echo "EXERCICIO 01"
	  cd ../ex01
	  sleep 1
	  gcc *.c -Wall -Werror -Wextra
	  ./a.out HELLO WORLD
	  echo "EXERCICIO 02"
	  cd ../ex02
	  sleep 1
	  gcc *.c -Wall -Werror -Wextra
	  ./a.out 1 2 3 4 5 6 7
	  echo "EXERCICIO 03"
	  cd ../ex03
	  sleep 1
	  gcc *.c -Wall -Werror -Wextra
	  ./a.out 1 3 6 8 2 3 7
	  echo "TESTE REALIZADO COM SUCESSO!"
else
     echo "ENTRE COM UMA RESPOSTA VÁLIDA!"
fi
