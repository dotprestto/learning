clearvars
close all
clc

%% PLOT SUPERFICIES
x = -1:0.1:3;
y = 1:0.1:4;
[X,Y] = meshgrid(x,y); % cria um grid

Z = (X.*Y.^2)./(X.^2 + Y.^2);
% figure(1);
% mesh(X,Y,Z);
xlabel('x'); ylabel('y'); zlabel('z');


% figure(2);
% surf(X,Y,Z);
xlabel('x'); ylabel('y'); zlabel('z');

% figure(3);
% contour(X,Y,Z);
xlabel('x'); ylabel('y'); zlabel('z');

%% ESCOLHENDO ESPAÇOS CORRETOS
clearvars
close all
clc

%% PLOT SUPERFICIES
x1 = -8:0.5:8;
x2= -8:0.5:8;
[X1,X2] = meshgrid(x1,x2); % cria um grid

Z = (sin(sqrt(X1.^2 +X1.^2)))./(sqrt(X1.^2 + X2.^2));
figure(1);
mesh(X1,X2,Z);
xlabel('x'); ylabel('y'); zlabel('z');

figure(2);
surf(X1,X2,Z);
xlabel('x'); ylabel('y'); zlabel('z');

figure(3);
contour(X1,X2,Z);
xlabel('x'); ylabel('y'); zlabel('z');

saveas(2, 'figura1', 'svg');


