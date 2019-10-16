clearvars
close all
clc

%% Hélice Circular

t = 0:0.1:6*pi;

% eixos x,y,z
plot3(sin(t), cos(t),t)
title('Hélice Circular');
grid
xlabel('x');
ylabel('y');
zlabel('z');