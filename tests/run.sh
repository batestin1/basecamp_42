# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macypria <macypria@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 17:44:25 by macypria          #+#    #+#              #
#    Updated: 2022/02/17 21:14:57 by macypria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

echo "BEM VINDO AO COPILADOR"
# este comando -choose armazena o apelido do usuario na variavel de nome choose
echo -p -number """QUAL A LISTA QUE VOCÊ VAI ANALISAR
[1] - SHELL00
[2] - SHELL01
[3] - C00
[4] - C01
[5] - C02
[6] - C03
[7] - C04
[8] - C05
[9] - C06 """
read number


if [ $number -eq 1 ]
then
	 cd shell00
	 bash *.sh
	 echo "EXECUTANDO O PROCESSO SHELL00"
	 sleep 1
elif [ $number -eq 2 ]
then
	 cd shell01
	 bash *.sh
	 echo "EXECUTANDO O PROCESSO SHELL01"
	 sleep 1
elif [ $number -eq 3 ]
then
	 cd c00
	 bash *.sh
	 echo "EXECUTANDO O PROCESSO C00"
	 sleep 1
elif [ $number -eq 4 ]
then
	 cd c01
	 bash *.sh
	 echo "EXECUTANDO O PROCESSO C01"
	 sleep 1
elif [ $number -eq 5 ]
then
	 cd c02
	 bash *.sh
	 echo "EXECUTANDO O PROCESSO C02"
	 sleep 1
elif [ $number -eq 6 ]
then
	 cd c03
	 bash *.sh
	 echo "EXECUTANDO O PROCESSO C03"
	 sleep 1
elif [ $number -eq 7 ]
then
	 cd c04
	 bash *.sh
	 echo "EXECUTANDO O PROCESSO C04"
	 sleep 1
elif [ $number -eq 8 ]
then
	 cd c05
	 bash *.sh
	 echo "EXECUTANDO O PROCESSO C05"
	 sleep 1
elif [ $number -eq 9 ]
then
	 cd c06
	 bash *.sh
	 echo "EXECUTANDO O PROCESSO C06"
	 sleep 1
else
     echo "ENTRE COM UMA RESPOSTA VÁLIDA!"
fi