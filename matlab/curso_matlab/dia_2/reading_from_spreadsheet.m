%xlswrite e xlsread

%% ESCREVENDO ARQUIVO
values = {1, 2, 3; 4, 5, 'x'; 7, 8, 9};
headers = {'AAA','BBB','CCC'};
% xlswrite('Exemplo.xlsx', [headers; values]);

writetable(table(values),'Exemplo.xlsx');

%% LENDO ARQUIVO

[num,txt,raw] = xlsread('Exemplo1.xlsx','123', 'A2:B5');

num

%% CRIANDO CSV

f1 = fopen('Teste1.csv','w');
c = clock;
local = 'Unioeste';
fprintf(f1,'*** RELATÓRIO *** \n');
fprintf(f1,'Localização: %s \n', local);
fprintf(f1,'Relatório Gerado às: %dh%dm de %d/%d/%d \n', c(4), c(5), c(3), c(2), c(1));
fclose all

%% MODIFICANDO ARQUIVO

f2 = fopen('Teste1.csv');
% f3 = fopen('Teste1.csv','w');

while(~feof(f2))
    x = fgets(f2);
    x = strrep(x, 'Unioeste', 'CECE');
    fprintf(f2, '%s', x);
end


fclose all