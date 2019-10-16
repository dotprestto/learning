clear all
close all
clc

f1 = @(x) x.^2 + 2;
R1 = f1(2);

a = 0;
f2 = @(x) x.^2 + a;
R2 = f2(2);

f4 = @(x,y,z) 2*x + 3*y + 4*z;
f5 = @(x) 2*x(1) + 3*x(2) + 4*x(3); % mais otimizado

R4 = f4(1,2,3)
R5 = f5([1 2 3])

f6 = @(x) x.^2 + 10*x + 3;
x = -10:2:10;

% figure();
% plot(x,f6(x));


f7 = @(x) [x(1); x(1)+x(2); x(1) + x(2) + x(3)];
x = [1 2 3];

f7(x)
