% clear all -> limpa cache, usar clearvars ou clear variables
% clearvars -global ou clear global

%% plot
clearvars
close all
clc

x = 0:0.1:5;
y = x.^2 - 2.*x + 5;

% x limitado de 0 a 5
% plot(x,y)

%% para limitar manualmente

x = -5:0.1:5;
y = x.^2 - 2.*x - 5;

% plot(x,y)
xlim([-10 10]); % limita eixo-x
ylim([-10 10]); % limita eixo-y
grid

%% especificadores de linha

x = -5:1:5;
y= x.^2 - 2.*x - 5;

% plot(x,y, '-.m', 'LineWidth', 3)

xlim([-10 10]); % limita eixo-x
ylim([-10 10]); % limita eixo-y
grid

%% funções no mesmo graf (com trigonométricas)

% Em graus
t = 0:0.1:6*pi;

% Em rad
x = 0:0.1:20;

y = sin(x);
z = cos(x);

% plot(x, y, 'r', x, z, 'g');
grid

%% Retas horizontais e verticais

% Horizontal
xlim([-10 10]);
% plot([xlim], [2,2], 'g', 'LineWidth', 2);
grid

% hold on pra segurar os gráficos
hold on
% Vertical
ylim([-10 10]);
% plot([2,2], [ylim], 'c', 'LineWidth', 2)
% grid % desliga de deixar (toggle)

% para de segurar os grafs para não acumular outros
hold off

%% colocando varios grafs

x = -10:0.1:10;

y = x.^2 + 2.*x - 5;
z = 2.*x + 4;
xlim([-10 10]);
ylim([-20 60]);

hold on
plot(x,y,'LineWidth', 1) % 
plot(x,z,'LineWidth', 1) % reta
plot([2,2], [ylim], 'c', 'LineWidth', 2) % linha vertical
plot([xlim], [20,20], 'g', 'LineWidth', 2); % linha horizontal
grid on
hold off

