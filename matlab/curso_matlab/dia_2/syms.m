clear all
close all
clc

syms x % cria simbolo
% x = -5:0.1:5;

f(x) = 5*x^3 - 3*x^2

f0 = f(0)
f1 = f(1)
f2 = f(-2)


derf(x) = diff(f(x));