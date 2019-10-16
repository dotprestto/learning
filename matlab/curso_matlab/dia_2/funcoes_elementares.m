clearvars
close all
clc

x = 0:0.1:5*pi;
y = x.*sin(x);
z = 3*x.*cos(x);

% plot(x,y,'-s',x,z,'--p')
grid
xlabel('Eixo x');
ylabel('Eixo y');

title('Gráficos');

legend('x*sin(x)', '3x*cos(x)');

%% dois gráficos na mesma janela
x = 0:0.1:20;

w = log(x);
k = exp(x);
c = cos(x);
s = sin(x);

% subplot(qtdLinhas, qtdColunas, posicao)
subplot(2,2,1);
plot(x,w, '-r', 'LineWidth',1);
grid
title('Logaritmo');

subplot(2,2,2);
plot(x,k,'-b', 'LineWidth',1);
grid on
title('Exponencial');

subplot(2,2,3);
plot(x,s,'-c', 'LineWidth',1);
grid on
title('Seno');

subplot(2,2,4);
plot(x,c,'-g', 'LineWidth',1);
grid on
title('Cosseno');