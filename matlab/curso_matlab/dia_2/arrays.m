clear all

%% CELL ARRAY
A = 10;
B = [10 20 30]
C = 'Abcd';

D = {A B C}

D{1}
D{2}(2)
D{3}

clear all

%% STRUCTURE ARRAY
Dados1(1).Nome = 'Aaa';
Dados1(1).Idade = 20;
Dados1(1).Telefone = '1111-2222';
Dados1(2).Nome = 'Bbb';
Dados1(2).Idade = 21;
Dados1(2).Telefone = '3333-4444';

Dados1
Dados1(1)
Dados1(1).Nome


%% STRUCTURED COM CELL ARRAY
Dados2.Nome{1} = 'Aaa';
Dados2.Idade(1) = 20;
Dados2.Telefone{1} = '1111-2222';
Dados2.Nome{2} = 'Bbb';
Dados2.Idade(2) = 21;
Dados2.Telefone{2} = '3333-4444';

Dados2
Dados2.Nome
Dados2.Nome{1}
Dados2.Idade(1)