#### LINGUAGEM DE PROGRAMAÇÃO ( C ) 
Professor: Ciscato

Este projeto consiste em desenvolver um programa chamado **FORMARQ**, cujo objetivo é converter tipos de arquivo, isto é, um arquivo é lido, e é gerado um segundo arquivo, cujo conteúdo é função do conteúdo do primeiro, mas em outro formato. O **FORMARQ** deverá dar suporte a 3 tipos de conversão:

| Tipo        | Nome           | Descrição  |
| ------------- |:-------------:| -----|
| 1 |Invert |**CN** = ~CV (Caracter novo é o **complemento de um** do caracter velho)|
| 2 | Cript       |   O usuário fornece uma palavra para funcionar como chave, isto é, o código ASCII de cada caracter da chave é máscara para uma operação XOR (ou exclusivo) com o byte lido do arquivo lido. Por exemplo:<br/>                       <br/>Conteúdo do arquivo de entrada: **BOM DIA, PESSOAL.**<br/>Chave: **GAVETA.**<br/>Arquivo de saída:Arquivo de saída:́<br/>´B´ ^ ´G´,<br/>´O´ ^ ´A´,<br/>´M´ ^ ´V´,<br/>´  ´ ^ ´E´,<br/>´D´ ^ ´T´,<br/>´I´ ^ ´A´,<br/>´A´ ^ ´G´, (volta ao 1º caracter da chave)<br/>´, ´ ^ ´A´,<br/>´  ´ ^ ´V´,<br/>´P´ ^ ´E´,<br/>´E´ ^ ´T´,<br/>´S´ ^ ´A´,<br/>´S´ ^ ´G´,<br/>´O´ ^ ´A´,<br/>´A´ ^ ´V´,<br/>´L´ ^ ´E´<br/>´. ´ ^ ´T´.<br/><br/>O caminho de volta é simples: o usuário fornece a chave e as mesmas operações serão feitas, fazendo com que o arquivo original seja recuperado. |
| 3 | Unix To DOS     | Arquivos texto no DOS, o ‘\n’ é representado pelo par de caracteres CR/LF,isto é, 0x0D seguido por 0x0A, enquanto que no UNIX, basta o caracter LF, isto é, 0x0A. Neste modo, os arquivos texto para UNIX deverão ser convertidos para o padrão DOS, ou seja, sempre que for lido um 0x0A, inserir antes um 0x0D. Pode-se desejar também a conversão oposta, isto é, de DOS para UNIX. | 

O **FORMARQ** deve ser chamado pela linha de comando pela seguinte sintaxe:

FORMARQ <nome_do_arquivo> [I][C][D][U] [*chave*]
		I:	O tipo de conversão deve ser o Invert.
		C:	O tipo de conversão deve ser o Cript.
		D:	Arquivo texto UNIX, gerar arquivo texto DOS.
		U:	Arquivo texto DOS, gerar arquivo texto UNIX.

**Conversão Invert:**

É um tipo de conversão que se for feita duas vezes, o arquivo volta à forma original. Assim, adotaremos o seguinte critério: o arquivo resultante da 1a conversão deverá ter como extensão “.INV”. Se for invertido o arquivo “dados.dat”, deverá ser gerado o arquivo “dados.inv”. Se for invertido o arquivo “dados.inv”, será gerado o arquivo “dados.dnv”, igual ao original (“.DNV” é a extensão do arquivo “desinvertido”).

**Conversão Cript:**

 Deve gerar um arquivo com extensão “.CRP”. O caminho inverso pode ser feito: criptografar o criptografado com a mesma chave. 
 
 Ex.: foi criptografado o arquivo “dados.dat”, gerando assim o arquivo “dados.crp”. Para descriptografar, vamos criptografar novamente”dados.crp” com a mesma chave, gerando assim o arquivo “dados.drp”. (“.DRP” é a extensão do arquivo “descriptografado”). 

 Obs.: a chave é como uma senha para o usuário.

**Unix To Dos:**

Seja qual for a extensão do arquivo texto para UNIX,, o arquivo para DOS deverá ter como extensão “.DOS”. Ao se fazer o processo inverso, o arquivo para UNIX deverá ter a extensão “.UNX”. 

Todas essas características devem ser checadas antes de proceder qualquer conversão, e sempre que for constatada qualquer anormalidade, o programa FORMARQ deve ser cancelado, notificando o usuário com mensagens. Ex.: o arquivo de entrada não existe.

 O usuário deve escolher um único tipo de conversão, caso contrário, cancelar o programa, notificando o usuário com mensagens. Além disso, o tipo de conversão escolhido deve estar entre os citados. Ex.: 

 **FORMARQ** dados.dat **G**

 O tipo de conversão G não existe, portanto, o programa deve ser cancelado.
