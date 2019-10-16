clearvars
close all
clc

%% Grafico de pizza
SP = 4.3;
MG = 3.2;
RN = 2.24;
MS = 1;

A = [SP MG RN MS];

% pie(A, A == max(A));
legend('SP', 'MG', 'RN', 'MS');
title('Gráfico de Pizza');

% pie3(A);
legend('SP', 'MG', 'RN', 'MS');
title('Gráfico de Pizza 3D');

%% Gráfico de Barra

x = -2:0.2:2;
y = x.^2;
z = exp(-x.*x);

subplot(1,2,1);
% bar(x,y,'g');
% Em 3D
bar3(x,y,'g');
title('Gráfico de barra 1');
grid on

subplot(1,2,2);
% bar(x,z,'m');
% Em 3D
bar3(x,z,'m');
title('Gráfico de barra 2');
grid on
